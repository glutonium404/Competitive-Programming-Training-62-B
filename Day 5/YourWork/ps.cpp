#include <bits/stdc++.h>
using namespace std;

void one_d_prefix_sum() {
    int n;

    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<long long> pref(n);
    pref[0] = a[0];
    for(int i = 1; i < n; i++) {
        pref[i] = pref[i - 1] + a[i];
    }

    cout << "Prefix Sum Array: " << endl;
    for(int i = 0; i < n; i++) {
        cout << pref[i] << " ";
    }
    cout << endl;
}


void one_based_static_range_sum_queries() {
    int n, q;
    cin >> n >> q;

    vector<long long> a(n + 1, 0);
    vector<long long> pref(n + 1, 0);

    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        pref[i] = pref[i - 1] + a[i];
    }

    while(q--) {
        int l, r;
        cin >> l >> r;
        long long range_sum = pref[r] - pref[l - 1];
        cout << "Sum from " << l << " to " << r << " = " << range_sum << endl;
    }
}

void substring_char_frequency_queries() {
    string s;
    cin >> s;
    int n = s.size();

    vector<vector<int> > pref(n + 1, vector<int>(26, 0));

    for(int i = 1; i <= n; i++) {
        for(int c = 0; c < 26; c++) {
            pref[i][c] = pref[i - 1][c];
        }
        pref[i][s[i - 1] - 'a']++;
    }

    int q;
    cin >> q;
    while(q--) {
        int l, r;
        char target;
        cin >> l >> r >> target;

        int char_idx = target - 'a';
        int count_in_range = pref[r][char_idx] - pref[l - 1][char_idx];

        cout << "Count of '" << target << "' in range [" << l << ", " << r << "] = " << count_in_range << endl;
    }
}

void two_d_prefix_sum() {
    int n, m;
    cin >> n >> m;

    vector<vector<long long> > a(n + 1, vector<long long>(m + 1, 0));
    vector<vector<long long> > pref(n + 1, vector<long long>(m + 1, 0));

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> a[i][j];
            pref[i][j] = a[i][j] 
                + pref[i - 1][j] 
                + pref[i][j - 1] 
                - pref[i - 1][j - 1];
        }
    }

    int q;
    cin >> q;
    while(q--) {
        int r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;

        long long subgrid_sum = pref[r2][c2] 
            - pref[r1 - 1][c2] 
            - pref[r2][c1 - 1] 
            + pref[r1 - 1][c1 - 1];

        cout << "Subgrid sum = " << subgrid_sum << endl;
    }
}

int main() {
    one_d_prefix_sum();
    one_based_static_range_sum_queries();
    substring_char_frequency_queries();
    two_d_prefix_sum();
}
