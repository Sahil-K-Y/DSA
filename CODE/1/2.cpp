#include <bits/stdc++.h>
using namespace std;

// Pass by reference
void printVector(const vector<int>& v) {
    for (int x : v) {
        cout << x << " ";
    }
    cout << '\n';
}

int main() {
    // 1. Vector
    vector<int> v = {40, 10, 30, 20, 50};

    cout << "Original vector: ";
    printVector(v);

    // 2. Vector properties
    cout << "Size: " << v.size() << '\n';
    cout << "First element: " << v.front() << '\n';
    cout << "Last element: " << v.back() << '\n';
    cout << "Element at index 2: " << v[2] << '\n';

    // 3. Add and remove elements
    v.push_back(60);
    v.pop_back();

    // 4. Sort in ascending order
    sort(v.begin(), v.end());

    cout << "Sorted vector: ";
    printVector(v);

    // 5. Minimum and maximum
    cout << "Minimum: " << *min_element(v.begin(), v.end()) << '\n';
    cout << "Maximum: " << *max_element(v.begin(), v.end()) << '\n';

    // 6. Sum
    long long sum = accumulate(v.begin(), v.end(), 0LL);
    cout << "Sum: " << sum << '\n';

    // 7. Reverse
    reverse(v.begin(), v.end());

    cout << "Reversed vector: ";
    printVector(v);

    // 8. Array
    array<int, 5> arr = {5, 4, 3, 2, 1};

    cout << "Array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << '\n';

    // 9. Pair
    pair<int, string> p = {101, "Sahil"};

    cout << "Pair first: " << p.first << '\n';
    cout << "Pair second: " << p.second << '\n';

    // 10. Tuple
    tuple<int, string, double> t = {1, "DSA", 95.5};

    cout << "Tuple values: "
         << get<0>(t) << " "
         << get<1>(t) << " "
         << get<2>(t) << '\n';

    // 11. Custom comparator
    vector<pair<string, int>> students = {
        {"Aman", 80},
        {"Sahil", 95},
        {"Rahul", 85}
    };

    sort(students.begin(), students.end(),
         [](const pair<string, int>& a,
            const pair<string, int>& b) {
             return a.second > b.second;
         });

    cout << "Students sorted by marks: \n";

    for (const auto& student : students) {
        cout << student.first << " "
             << student.second << '\n';
    }

    return 0;
}