#include <bits/stdc++.h>
using namespace std;

int f1() {
    int n;
    cin >> n;

    vector<int> v;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for (int i=0;i < n;i++) {
        cout << v[i] << endl;
    }

    return 0;
}

int f2() {
    vector<int> v = {10, 20, 30, 40, 50};
    int n = v.size();

    for(int i = 0; i < n / 2; i++) {
        int temp = v[i];
        v[i] = v[n - 1 - i];
        v[n - 1 - i] = temp;
    }

    for (int i=0;i < n;i++) {
        cout << v[i] << endl;
    }

    return 0;
}


int f3() {
    vector<int> v = {1, 2, 3, 4, 5};

    for(int x : v) {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}

void advanced_vec() {
    vector<int> v1(5, 10); 

    vector<int> v2 = {5, 9, 15, 22};
    cout << v2.front() << "\n";
    cout << v2.back() << "\n";

    v2.pop_back();

    v1 = v2;

    vector<pair<int, int>> points;
    points.push_back({1, 5});
    points.push_back({3, 7});

    for(auto p : points) {
        cout << "X: " << p.first << ", Y: " << p.second << "\n";
    }
}

int main() {
    f1();
    f2();
    f3();
    advanced_vec();
}
