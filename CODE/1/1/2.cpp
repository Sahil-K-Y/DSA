#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "Original vector: ";
    for (int x : v) {
        cout << x << " ";
    }

    sort(v.begin(), v.end());

    cout << "\nSorted vector: ";
    for (int x : v) {
        cout << x << " ";
    }

    cout << "\nMinimum: " << *min_element(v.begin(), v.end());
    cout << "\nMaximum: " << *max_element(v.begin(), v.end());

    long long sum = accumulate(v.begin(), v.end(), 0LL);
    cout << "\nSum: " << sum;

    reverse(v.begin(), v.end());

    cout << "\nReversed vector: ";
    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}