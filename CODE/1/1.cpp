#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Elements: ";

    for (int x : v) {
        cout << x << " ";
    }

    cout << "\nSize: " << v.size();
    cout << "\nFirst: " << v.front();
    cout << "\nLast: " << v.back();

    v.pop_back();

    cout << "\nAfter pop_back: ";

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}