#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
#include <utility>

using namespace std;

void print_int_vec(vector<int>& int_vec) {
    for(int i = 0; i < int_vec.size(); i++) {
        cout << int_vec[i] << " ";
    }
    cout << endl;
}

void vec_int_sort() {
    vector<int> v = { 50, 20, 40, 10, 30 };

    cout << "Before sorting: ";
    print_int_vec(v);

    // basic ascending sort (smallest to largest)
    vector<int> v1 = v;
    sort(v1.begin(), v1.end());
    cout << "After basic sort: ";
    print_int_vec(v1);

    // descending sort (largest to smallest)
    // method 1 : using reverse iterators
    auto v21 = v;
    sort(v21.rbegin(), v21.rend());
    // method 2 : using greater comparator
    auto v22 = v;
    sort(v22.begin(), v22.end(), greater<int>());

    cout << "Descending order:" << endl;
    cout << "method 1: ";
    print_int_vec(v21);
    cout << "method 2: ";
    print_int_vec(v22);
}

void string_sort() {
    // sorting a string (alphabetical order)
    string s = "programming";

    cout << "Original string: " << s << endl;

    // sorts characters based on their ascii values
    sort(s.begin(), s.end());

    cout << "Sorted string: " << s << endl;
}

void print_pair_vec(vector<pair<int, int>>& pv) {
    for(int i = 0; i < pv.size(); i++) {
        cout << "{" << pv[i].first << ", " << pv[i].second << "}" << endl;
    }
}

void vec_pair_sort() {
    vector<pair<int, int>> v = {
        {2, 50},
        {1, 90},
        {2, 30},
        {1, 40}
    };

    cout << "unsoted pairs: " << endl;
    print_pair_vec(v);

    // automatically sorts by first value
    sort(v.begin(), v.end());

    cout << "soted pairs: " << endl;
    print_pair_vec(v);
}

int main() {
    vec_int_sort();
    string_sort();
    vec_pair_sort();
}
