#include <bits/stdc++.h>
using namespace std;

int main() {

    // ========================================
    // 1. STRING BASICS
    // ========================================

    string s = "hello";

    cout << "Original string: " << s << endl;

    // Character access
    cout << "First character: " << s[0] << endl;

    // Character update
    s[0] = 'H';
    cout << "After update: " << s << endl;

    // Append character - amortized O(1)
    s += '!';
    cout << "After += : " << s << endl;

    // push_back
    s.push_back('?');
    cout << "After push_back: " << s << endl;

    // pop_back
    s.pop_back();
    cout << "After pop_back: " << s << endl;

    // Length
    cout << "Length: " << s.size() << endl;

    // Substring
    cout << "Substring: " << s.substr(0, 5) << endl;

    // Find
    cout << "Position of 'lo': " << s.find("lo") << endl;


    // ========================================
    // 2. STRINGSTREAM
    // ========================================

    string sentence = "I love learning DSA";

    stringstream ss(sentence);
    string word;

    cout << "\nWords using stringstream:" << endl;

    while (ss >> word) {
        cout << word << endl;
    }

    // String to integers
    string numbers = "10 20 30";

    stringstream numberStream(numbers);

    int a, b, c;
    numberStream >> a >> b >> c;

    cout << "\nSum: " << a + b + c << endl;


    // ========================================
    // 3. UNORDERED_MAP - FREQUENCY COUNTING
    // ========================================

    string text = "banana";

    unordered_map<char, int> freq;

    for (char ch : text) {
        freq[ch]++;
    }

    cout << "\nFrequency using unordered_map:" << endl;

    for (auto p : freq) {
        cout << p.first << " -> " << p.second << endl;
    }


    // ========================================
    // 4. MAP - SORTED KEY-VALUE PAIRS
    // ========================================

    map<char, int> sortedFreq;

    for (char ch : text) {
        sortedFreq[ch]++;
    }

    cout << "\nFrequency using map:" << endl;

    for (auto p : sortedFreq) {
        cout << p.first << " -> " << p.second << endl;
    }


    // ========================================
    // 5. SET - UNIQUE SORTED ELEMENTS
    // ========================================

    set<int> st;

    st.insert(5);
    st.insert(2);
    st.insert(5);
    st.insert(1);
    st.insert(3);

    cout << "\nElements in set:" << endl;

    for (int x : st) {
        cout << x << " ";
    }

    cout << endl;

    // Search in set
    if (st.find(3) != st.end()) {
        cout << "3 is present in set" << endl;
    }

    // Count
    cout << "Count of 5: " << st.count(5) << endl;


    // ========================================
    // 6. UNORDERED_SET - UNIQUE UNSORTED ELEMENTS
    // ========================================

    unordered_set<int> ust;

    ust.insert(10);
    ust.insert(20);
    ust.insert(10);
    ust.insert(30);

    cout << "\nElements in unordered_set:" << endl;

    for (int x : ust) {
        cout << x << " ";
    }

    cout << endl;

    if (ust.count(20)) {
        cout << "20 is present in unordered_set" << endl;
    }


    // ========================================
    // 7. FREQUENCY USING ARRAY
    // ========================================

    string lower = "aabbccc";

    int count[26] = {0};

    for (char ch : lower) {
        count[ch - 'a']++;
    }

    cout << "\nFrequency using array:" << endl;

    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            cout << char('a' + i)
                 << " -> "
                 << count[i]
                 << endl;
        }
    }


    return 0;
}