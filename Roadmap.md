# 🏆 COMPLETE DSA MASTER ROADMAP — 160-DAY CURRICULUM

## ZERO → ADVANCED → INTERVIEW READY (C++17)

> **Author:** Sahil Kumar (Sky)  
> **Duration:** 160 Days (Strictly paced, zero fluff, zero burnout)  
> **Daily Commitment:** ~1.5–2 hours (30–45m Theory + 60–90m Practice + 20m Mistake Log)  
> **Target Output:** 3 Curated LeetCode Problems daily (462 Core Problems total)  
> **Language:** Modern C++17 (STL + Scratch Implementations + Standard Idioms)

---

## 🔁 6-STEP DAILY EXECUTION GATE


```text
1. THEORY & MEMORY INTUITION   (Mental model, memory layout, Stack vs Heap)
        ↓
2. BRUTE FORCE FIRST           (Find obvious O(N^2) or O(2^N) baseline)
        ↓
3. PATTERN & OPTIMIZED CODE    (Two pointers, sliding window, BS, DSU, DP)
        ↓
4. DRY RUN ON PAPER            (Test edge cases before running)
        ↓
5. TIME & SPACE COMPLEXITY     (State Big-O formally with proof)
        ↓
6. MISTAKE LOG ENTRY           (Document failed idea & invariant)
```

---

## 🗺️ 17-PHASE MASTER CURRICULUM INDEX

| Phase | Duration | Core Focus Area |
| :--- | :--- | :--- |
| **Phase 0** | Days 001–009 | **C++ STL, Complexity & Mathematical Foundations** |
| **Phase 1** | Days 010–019 | **Arrays, Prefix/Suffix, Kadane & Intervals** |
| **Phase 2** | Days 020–024 | **Strings & Hashing Techniques** |
| **Phase 3** | Days 025–030 | **Two Pointers & Sliding Window Patterns** |
| **Phase 4** | Days 031–036 | **Binary Search & Search on Answer** |
| **Phase 5** | Days 037–044 | **Recursion, Backtracking & Bitmask Search** |
| **Phase 6** | Days 045–051 | **Linked Lists (Pointers, Reversal, Floyd's, LRU)** |
| **Phase 7** | Days 052–058 | **Stack, Queue, Monotonic Stack & Deque** |
| **Phase 8** | Days 059–067 | **Binary Trees (DFS/BFS, LCA, Views, Diameter)** |
| **Phase 9** | Days 068–076 | **BST, Heap, Hashing & O(1) Data Structure Design** |
| **Phase 10** | Days 077–084 | **Graphs Core (Representations, BFS, DFS, Components, Topo Sort)** |
| **Phase 11** | Days 085–094 | **Shortest Paths (Dijkstra, Bellman, Floyd), MST (Kruskal/Prim), DSU & SCC** |
| **Phase 12** | Days 095–100 | **Greedy Algorithms & Proofs** |
| **Phase 13** | Days 101–116 | **Dynamic Programming (1D, 2D, Knapsack, LCS, LIS, Interval, Trees)** |
| **Phase 14** | Days 117–126 | **Trie, Segment Tree, Fenwick Tree & Advanced Strings** |
| **Phase 15** | Days 127–136 | **Advanced Problem-Solving Patterns (Meet-in-the-Middle, Sqrt, Sweep)** |
| **Phase 16** | Days 137–160 | **Topic Revision, Timed Mocks & Interview Readiness (24 Days)** |

---


---

# Phase 0 — C++ STL, Complexity & Foundations


### 📆 Day 001 — DSA Orientation + Complexity

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model** | Default C++ I/O is synchronized with C stdio. Calling `cin.tie(NULL)` unties streams and boosts input speeds by 5x-10x. |
| 🧠 **Complexity & Limits** | In C++, ~10^8 operations take ~1 second. If $N = 10^5$, an $O(N^2)$ algorithm ($10^{10}$ ops) gives TLE. You must use $O(N)$ or $O(N \log N)$. |
| 🧠 **Brute Force vs Optimized** | Always start by identifying the brute force baseline, then identify bottleneck operations (repeated searching, redundant recomputations) to optimize. |

```cpp
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

// O(N) Two Sum using Hash Map vs O(N^2) Brute Force
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 1 – Two Sum | ☐ |
| 2 | LC 1929 – Concatenation of Array | ☐ |
| 3 | LC 1480 – Running Sum of 1d Array | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 002 — C++ STL I: vector, array, pair, tuple

| Section | Details |
|:--------|:--------|
| 🧠 **vector** | Contiguous dynamic array allocated on heap. Fast $O(1)$ random access by index. Amortized $O(1)$ `push_back()`. |
| 🧠 **Pass by Reference** | Always pass `const vector<int>&` to functions to avoid expensive $O(N)$ deep copies. |
| 🧠 **pair & tuple** | Store heterogeneous elements. Custom comparator `sort(v.begin(), v.end(), [](auto& a, auto& b){ return a.second < b.second; })`. |

```cpp
// (practice day — no new template)
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 1920 – Build Array from Permutation | ☐ |
| 2 | LC 1470 – Shuffle the Array | ☐ |
| 3 | LC 1431 – Kids With the Greatest Number of Candies | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 003 — C++ STL II: string, stringstream, map, set

| Section | Details |
|:--------|:--------|
| 🧠 **string** | Mutable contiguous char sequence. Use `s += c` (amortized $O(1)$), never `s = s + c` ($O(N^2)$ copying overhead). |
| 🧠 **unordered_map vs map** | `unordered_map` is hash table ($O(1)$ avg). `map` is self-balancing BST ($O(\log N)$, ordered keys). |
| 🧠 **Frequency Counting** | `unordered_map<char, int> freq; for (char c : s) freq[c]++;`. |

```cpp
int firstUniqChar(const string& s) {
    int freq[26] = {0};
    for (char c : s) freq[c - 'a']++;
    for (int i = 0; i < s.length(); i++) {
        if (freq[s[i] - 'a'] == 1) return i;
    }
    return -1;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 387 – First Unique Character in a String | ☐ |
| 2 | LC 242 – Valid Anagram | ☐ |
| 3 | LC 349 – Intersection of Two Arrays | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 004 — C++ STL III: stack, queue, deque, priority_queue

| Section | Details |
|:--------|:--------|
| 🧠 **stack & queue** | LIFO and FIFO container adapters. All insertions and removals run in $O(1)$. |
| 🧠 **priority_queue** | Max-heap by default. For Min-heap: `priority_queue<int, vector<int>, greater<int>>`. |
| 🧠 **deque** | Double-ended queue with $O(1)$ front and back operations. |

```cpp
// (practice day — no new template)
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 225 – Implement Stack using Queues | ☐ |
| 2 | LC 232 – Implement Queue using Stacks | ☐ |
| 3 | LC 1046 – Last Stone Weight | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 005 — Math for DSA

| Section | Details |
|:--------|:--------|
| 🧠 **Euclidean GCD** | `gcd(a, b) = gcd(b, a % b)` computes greatest common divisor in $O(\log(\min(a, b)))$. |
| 🧠 **Sieve of Eratosthenes** | Finds all primes $\le N$ in $O(N \log \log N)$ time. |
| 🧠 **Fast Power** | Computes $x^N$ in $O(\log N)$ using binary exponentiation. |

```cpp
// Sieve of Eratosthenes: O(N log log N)
vector<int> sieve(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int p = 2; p * p <= n; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i <= n; i += p) isPrime[i] = false;
        }
    }
    vector<int> primes;
    for (int i = 2; i <= n; i++) if (isPrime[i]) primes.push_back(i);
    return primes;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 50 – Pow(x,n) | ☐ |
| 2 | LC 204 – Count Primes | ☐ |
| 3 | LC 172 – Factorial Trailing Zeroes | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 006 — Bit Manipulation

| Section | Details |
|:--------|:--------|
| 🧠 **Bitwise Operators** | `&` (AND), `\|` (OR), `^` (XOR), `~` (NOT), `<<` (Left shift), `>>` (Right shift). |
| 🧠 **XOR Properties** | $a \oplus a = 0$ and $a \oplus 0 = a$. Cancels all paired numbers, isolating the unique element in $O(N)$ time and $O(1)$ space. |
| 🧠 **Brian Kernighan** | `n & (n - 1)` clears lowest set bit. Power of 2: `(n > 0) && ((n & (n - 1)) == 0)`. |

```cpp
int singleNumber(const vector<int>& nums) {
    int xorSum = 0;
    for (int num : nums) xorSum ^= num;
    return xorSum; // Unique element remains
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 136 – Single Number | ☐ |
| 2 | LC 191 – Number of 1 Bits | ☐ |
| 3 | LC 338 – Counting Bits | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 007 — Arrays Basics + Invariants

| Section | Details |
|:--------|:--------|
| 🧠 **Two-Pointer Overwrite** | Use `write` and `read` pointers to modify arrays in-place in $O(N)$ time and $O(1)$ space. |
| 🧠 **Rotate Array In-Place** | Reverse entire array, reverse first $k$ elements, then reverse remaining $N-k$ elements. |
| 🧠 **Cache Locality** | Flat arrays have contiguous memory layout; faster than linked structures. |

```cpp
void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k %= n;
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 26 – Remove Duplicates from Sorted Array | ☐ |
| 2 | LC 27 – Remove Element | ☐ |
| 3 | LC 189 – Rotate Array | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 008 — Sorting Patterns

| Section | Details |
|:--------|:--------|
| 🧠 **Sorting Primitives** | Merge Sort ($O(N \log N)$ stable), Quick Sort ($O(N \log N)$ avg in-place), Dutch National Flag ($O(N)$ 3-way partition). |
| 🧠 **Stability** | Stable sorts maintain the relative order of records with equal keys. |
| 🧠 **Comparator Design** | Strict weak ordering: return `true` if $a$ strictly precedes $b$, return `false` if equal. |

```cpp
void sortColors(vector<int>& nums) {
    int low = 0, mid = 0, high = (int)nums.size() - 1;
    while (mid <= high) {
        if (nums[mid] == 0) swap(nums[low++], nums[mid++]);
        else if (nums[mid] == 1) mid++;
        else swap(nums[mid], nums[high--]);
    }
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 912 – Sort an Array | ☐ |
| 2 | LC 56 – Merge Intervals | ☐ |
| 3 | LC 75 – Sort Colors | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 009 — Foundations Revision

| Section | Details |
|:--------|:--------|
| 🧠 **Phase 0 Review** | Consolidate vectors, strings, maps, sets, priority queues, math, bit manipulation, and sorting. |
| 🧠 **O(1) Design (RandomizedSet)** | Combine `vector` for $O(1)$ random indexing with `unordered_map` for $O(1)$ value-to-index lookup. |
| 🧠 **Swap-and-Pop Deletion** | Swap target element with last element in vector, update map, and `pop_back()` in $O(1)$. |

```cpp
class RandomizedSet {
    vector<int> nums;
    unordered_map<int, int> pos;
public:
    bool insert(int val) {
        if (pos.count(val)) return false;
        pos[val] = nums.size();
        nums.push_back(val);
        return true;
    }
    bool remove(int val) {
        if (!pos.count(val)) return false;
        int idx = pos[val];
        int lastVal = nums.back();
        nums[idx] = lastVal;
        pos[lastVal] = idx;
        nums.pop_back();
        pos.erase(val);
        return true;
    }
    int getRandom() { return nums[rand() % nums.size()]; }
};
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 268 – Missing Number | ☐ |
| 2 | LC 448 – Find All Numbers Disappeared in an Array | ☐ |
| 3 | LC 380 – Insert Delete GetRandom O(1) | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---


---

# Phase 1 — Arrays, Prefix/Suffix, Kadane & Intervals


### 📆 Day 010 — Prefix Sum

| Section | Details |
|:--------|:--------|
| 🧠 **Prefix Sum** | `pref[i] = pref[i-1] + nums[i]`. Range sum $[L, R] = pref[R] - pref[L-1]$ in $O(1)$. |
| 🧠 **Subarray Sum Equals K** | Store prefix sum frequencies in hash map. If `map.count(currSum - k)`, add frequency! |
| 🧠 **Difference Array** | Range update $[L, R, +V]$ in $O(1)$ via `diff[L] += V; diff[R+1] -= V;`. |

```cpp
int subarraySum(const vector<int>& nums, int k) {
    unordered_map<int, int> mp;
    mp[0] = 1;
    int curr = 0, count = 0;
    for (int x : nums) {
        curr += x;
        if (mp.count(curr - k)) count += mp[curr - k];
        mp[curr]++;
    }
    return count;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 303 – Range Sum Query | ☐ |
| 2 | LC 560 – Subarray Sum Equals K | ☐ |
| 3 | LC 974 – Subarray Sums Divisible by K | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 011 — Prefix/Suffix Products

| Section | Details |
|:--------|:--------|
| 🧠 **Prefix/Suffix Products** | Compute product of all elements except $i$ without division. |
| 🧠 **Two-Pass Invariant** | Left pass computes prefix products, right pass multiplies suffix products on the fly in $O(1)$ auxiliary space. |

```cpp
vector<int> productExceptSelf(const vector<int>& nums) {
    int n = nums.size();
    vector<int> res(n, 1);
    int pref = 1;
    for (int i = 0; i < n; i++) {
        res[i] = pref;
        pref *= nums[i];
    }
    int suff = 1;
    for (int i = n - 1; i >= 0; i--) {
        res[i] *= suff;
        suff *= nums[i];
    }
    return res;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 238 – Product of Array Except Self | ☐ |
| 2 | LC 724 – Find Pivot Index | ☐ |
| 3 | LC 2483 – Minimum Penalty for a Shop | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 012 — Kadane and Subarray Optimization

| Section | Details |
|:--------|:--------|
| 🧠 **Kadane's Algorithm** | `currMax = max(nums[i], currMax + nums[i])`. Space optimized to $O(1)$. |
| 🧠 **Circular Subarray** | Max circular sum = `max(normalMax, totalSum - normalMin)` (handle all-negative edge case). |
| 🧠 **Max Product Subarray** | Track both `currMax` and `currMin` since negative $\times$ negative flips to positive. |

```cpp
int maxSubArray(const vector<int>& nums) {
    int maxSoFar = nums[0], curr = nums[0];
    for (size_t i = 1; i < nums.size(); i++) {
        curr = max(nums[i], curr + nums[i]);
        maxSoFar = max(maxSoFar, curr);
    }
    return maxSoFar;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 53 – Maximum Subarray | ☐ |
| 2 | LC 918 – Maximum Sum Circular Subarray | ☐ |
| 3 | LC 152 – Maximum Product Subarray | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 013 — Two-Pass and In-place Marking

| Section | Details |
|:--------|:--------|
| 🧠 **Two-Pass Traversal** | Traverse forward then backward to satisfy bidirectional constraints (e.g., Candy problem). |
| 🧠 **In-Place Sign Marking** | For numbers in range $[1, N]$, negate `nums[abs(nums[i]) - 1]` to mark presence in $O(1)$ extra space. |

```cpp
// Find all duplicates in array in O(N) time and O(1) space
vector<int> findDuplicates(vector<int>& nums) {
    vector<int> res;
    for (int i = 0; i < nums.size(); i++) {
        int idx = abs(nums[i]) - 1;
        if (nums[idx] < 0) res.push_back(idx + 1);
        else nums[idx] = -nums[idx]; // Mark visited
    }
    return res;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 41 – First Missing Positive | ☐ |
| 2 | LC 287 – Find the Duplicate Number | ☐ |
| 3 | LC 442 – Find All Duplicates in an Array | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 014 — Matrix Basics

| Section | Details |
|:--------|:--------|
| 🧠 **2D Matrix Memory** | Row-major storage `matrix[r][c]`. Traversal takes $O(R \times C)$ time. |
| 🧠 **Set Matrix Zeroes** | Use first row and first column as in-place markers to achieve $O(1)$ space. |
| 🧠 **Spiral Order** | Maintain `top`, `bottom`, `left`, `right` boundaries and shrink inwards. |

```cpp
vector<int> spiralOrder(const vector<vector<int>>& matrix) {
    if (matrix.empty()) return {};
    vector<int> res;
    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;

    while (top <= bottom && left <= right) {
        for (int c = left; c <= right; c++) res.push_back(matrix[top][c]);
        top++;
        for (int r = top; r <= bottom; r++) res.push_back(matrix[r][right]);
        right--;
        if (top <= bottom) {
            for (int c = right; c >= left; c--) res.push_back(matrix[bottom][c]);
            bottom--;
        }
        if (left <= right) {
            for (int r = bottom; r >= top; r--) res.push_back(matrix[r][left]);
            left++;
        }
    }
    return res;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 54 – Spiral Matrix | ☐ |
| 2 | LC 48 – Rotate Image | ☐ |
| 3 | LC 73 – Set Matrix Zeroes | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 015 — Matrix Prefix and Search

| Section | Details |
|:--------|:--------|
| 🧠 **2D Prefix Sum** | $pref[r][c] = mat[r][c] + pref[r-1][c] + pref[r][c-1] - pref[r-1][c-1]$. |
| 🧠 **Staircase Search** | In row/col sorted matrix, start at top-right corner. Move left if current > target, move down if current < target ($O(R + C)$). |

```cpp
bool searchMatrix(const vector<vector<int>>& matrix, int target) {
    if (matrix.empty() || matrix[0].empty()) return false;
    int r = 0, c = (int)matrix[0].size() - 1;
    while (r < matrix.size() && c >= 0) {
        if (matrix[r][c] == target) return true;
        else if (matrix[r][c] > target) c--;
        else r++;
    }
    return false;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 304 – Range Sum Query 2D | ☐ |
| 2 | LC 74 – Search a 2D Matrix | ☐ |
| 3 | LC 240 – Search a 2D Matrix II | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 016 — Intervals I

| Section | Details |
|:--------|:--------|
| 🧠 **Merge Intervals** | Sort by start time. If `curr.start <= prev.end`, merge by `prev.end = max(prev.end, curr.end)`. |
| 🧠 **Insert Interval** | Add intervals before, merge overlapping, append remainder in $O(N)$. |

```cpp
vector<vector<int>> merge(vector<vector<int>>& intervals) {
    if (intervals.empty()) return {};
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> res = {intervals[0]};

    for (size_t i = 1; i < intervals.size(); i++) {
        if (intervals[i][0] <= res.back()[1]) {
            res.back()[1] = max(res.back()[1], intervals[i][1]);
        } else {
            res.push_back(intervals[i]);
        }
    }
    return res;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 56 – Merge Intervals | ☐ |
| 2 | LC 57 – Insert Interval | ☐ |
| 3 | LC 252 – Meeting Rooms | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 017 — Intervals II

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Interval merging: sort by start time, merge when current.start <= prev.end. Interval scheduling (min rooms/platforms) needs two sorted arrays of starts and ends scanned with two pointers, or a min-heap of end times. |
| 🧠 **What to Implement** | Solve Merge Intervals, Insert Interval, and Meeting Rooms II using both the two-pointer-on-sorted-arrays approach and the heap approach — compare which is cleaner. |
| 🧠 **C++ Implementation Nuance** | Sorting a vector<pair<int,int>> sorts by .first then .second by default — make sure that's actually what you want before writing a custom comparator. |

```cpp
// Meeting Rooms II — min platforms needed
int minMeetingRooms(vector<vector<int>>& iv) {
    vector<int> starts, ends;
    for (auto& x : iv) { starts.push_back(x[0]); ends.push_back(x[1]); }
    sort(starts.begin(), starts.end()); sort(ends.begin(), ends.end());
    int rooms = 0, maxRooms = 0, s = 0, e = 0;
    while (s < starts.size()) {
        if (starts[s] < ends[e]) { rooms++; s++; }
        else { rooms--; e++; }
        maxRooms = max(maxRooms, rooms);
    }
    return maxRooms;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 253 – Meeting Rooms II | ☐ |
| 2 | LC 435 – Non-overlapping Intervals | ☐ |
| 3 | LC 452 – Minimum Number of Arrows to Burst Balloons | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 018 — Arrays Mixed Practice

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | No new pattern today — this is deliberate mixed practice. Before coding each problem, first name which pattern from Days 10-17 it is (prefix sum / Kadane / sorting+scan / interval) before writing code. |
| 🧠 **What to Implement** | Time-box each problem to 20 minutes. If you can't identify the pattern in 5 minutes, that's the real signal for your mistake log — write down what clue you missed. |
| 🧠 **C++ Implementation Nuance** | Re-check your prefix-sum and interval-merge code from earlier days against these problems instead of rewriting from scratch — reuse builds muscle memory. |

```cpp
// No new template — apply prefix sum / Kadane / interval merge from Days 10-17
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 128 – Longest Consecutive Sequence | ☐ |
| 2 | LC 229 – Majority Element II | ☐ |
| 3 | LC 169 – Majority Element | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 019 — Arrays Revision + Timed Set

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Revision day: re-derive (don't re-read) the recurrence for Kadane's algorithm and the prefix-sum range-query formula from memory before starting problems. |
| 🧠 **What to Implement** | Attempt all 3 problems under a 45-minute combined timer to simulate contest/interview pressure, then review mistakes after, not during. |
| 🧠 **C++ Implementation Nuance** | Check every solution compiles with -Wall -Wextra with zero warnings — this catches uninitialized variables and sign-compare bugs early. |

```cpp
// Timed revision — no new template, apply Days 10-18 patterns under time pressure
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 11 – Container With Most Water | ☐ |
| 2 | LC 42 – Trapping Rain Water | ☐ |
| 3 | LC 135 – Candy | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---


---

# Phase 2 — Strings & Hashing


### 📆 Day 020 — String Fundamentals

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | String basics: strings are mutable char arrays in C++ (unlike Java/Python). substr(), find(), and comparison are O(N) — know the cost of every call you chain. |
| 🧠 **What to Implement** | Implement your own strStr() (substring search) with brute force O(NM) first, then note why it's slow before Day 124 (KMP) fixes it. |
| 🧠 **C++ Implementation Nuance** | Building strings char-by-char with += is amortized O(1) (like vector push_back); s = s + c in a loop is O(N^2) — never do the latter. |

```cpp
// Reverse words in a string — split, reverse order, rejoin
string reverseWords(string s) {
    stringstream ss(s); string word, res;
    vector<string> words;
    while (ss >> word) words.push_back(word);
    reverse(words.begin(), words.end());
    for (int i = 0; i < words.size(); i++) res += words[i] + (i+1<words.size() ? " " : "");
    return res;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 125 – Valid Palindrome | ☐ |
| 2 | LC 344 – Reverse String | ☐ |
| 3 | LC 151 – Reverse Words in a String | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 021 — String Hashing Patterns

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | String hashing: convert a string to a number via polynomial rolling hash H = s[0]*p^(n-1) + s[1]*p^(n-2) + ... + s[n-1], mod a large prime, so two strings can be compared in O(1) after O(N) preprocessing. |
| 🧠 **What to Implement** | Implement group-anagrams using a sorted-string key first, then re-implement using a 26-length frequency-count key (faster, avoids sort) and compare runtime. |
| 🧠 **C++ Implementation Nuance** | Always use two different (mod, base) pairs for hashing if collision-safety matters — a single hash can collide on adversarial input. |

```cpp
// Group Anagrams via frequency-count key (faster than sorting each string)
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> mp;
    for (auto& s : strs) {
        int cnt[26] = {0};
        for (char c : s) cnt[c-'a']++;
        string key(cnt, cnt+26); // not valid C++ directly — build key from counts
        mp[key].push_back(s);
    }
    vector<vector<string>> res;
    for (auto& [k, v] : mp) res.push_back(v);
    return res;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 49 – Group Anagrams | ☐ |
| 2 | LC 438 – Find All Anagrams in a String | ☐ |
| 3 | LC 567 – Permutation in String | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 022 — String Construction

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | String construction problems build a result incrementally under constraints (e.g., no repeated chars, lexicographically smallest). The key skill is a greedy or stack-based decision at each character. |
| 🧠 **What to Implement** | Implement Remove Duplicate Letters using a monotonic stack: pop stack top if it's larger than current char AND it reappears later AND isn't already used. |
| 🧠 **C++ Implementation Nuance** | unordered_set<char> for 'used' tracking is O(1); don't scan the whole result string to check membership on every character. |

```cpp
// Remove Duplicate Letters — monotonic stack + last-occurrence map
string removeDuplicateLetters(string s) {
    vector<int> last(26, 0);
    for (int i = 0; i < s.size(); i++) last[s[i]-'a'] = i;
    vector<bool> inStack(26, false);
    string stack;
    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        if (inStack[c-'a']) continue;
        while (!stack.empty() && stack.back() > c && last[stack.back()-'a'] > i) {
            inStack[stack.back()-'a'] = false; stack.pop_back();
        }
        stack += c; inStack[c-'a'] = true;
    }
    return stack;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 443 – String Compression | ☐ |
| 2 | LC 38 – Count and Say | ☐ |
| 3 | LC 6 – Zigzag Conversion | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 023 — Palindrome Patterns

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Palindrome check techniques: two-pointer from both ends (O(N)); expand-around-center for longest palindromic substring (O(N^2) but O(1) space, handles odd/even length separately); DP table dp[i][j] = is s[i..j] a palindrome (O(N^2) time and space). |
| 🧠 **What to Implement** | Implement Longest Palindromic Substring with expand-around-center first (interview-friendly), then note how Manacher's (Day 126) makes it O(N). |
| 🧠 **C++ Implementation Nuance** | For expand-around-center, always call the helper twice per index — once for odd-length center (i,i), once for even-length center (i,i+1). |

```cpp
// Longest Palindromic Substring — expand around center
string longestPalindrome(string s) {
    int start = 0, maxLen = 0;
    auto expand = [&](int l, int r) {
        while (l >= 0 && r < s.size() && s[l] == s[r]) { l--; r++; }
        if (r - l - 1 > maxLen) { maxLen = r - l - 1; start = l + 1; }
    };
    for (int i = 0; i < s.size(); i++) { expand(i, i); expand(i, i+1); }
    return s.substr(start, maxLen);
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 5 – Longest Palindromic Substring | ☐ |
| 2 | LC 647 – Palindromic Substrings | ☐ |
| 3 | LC 680 – Valid Palindrome II | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 024 — String Revision

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Revision: re-derive the expand-around-center and monotonic-stack logic from Days 20-23 without looking at your old code — write the invariant for each in one sentence first. |
| 🧠 **What to Implement** | Attempt all 3 problems under a combined 45-minute timer; if a technique doesn't come back to you within 2 minutes, mark it explicitly in the mistake log as 'not yet internalized', not just 'solved'. |
| 🧠 **C++ Implementation Nuance** | Double-check off-by-one errors in substring index math (l, r, and length) — the single most common bug across all string problems. |

```cpp
// Timed revision — no new template, apply Days 20-23 patterns under time pressure
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 3 – Longest Substring Without Repeating Characters | ☐ |
| 2 | LC 424 – Longest Repeating Character Replacement | ☐ |
| 3 | LC 205 – Isomorphic Strings | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---


---

# Phase 3 — Two Pointers & Sliding Window


### 📆 Day 025 — Two Pointers Basics

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | opposite-direction pointers; sorted pair sum; shrinking search space. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// Two Pointers Opposite Direction Template
int maxArea(const vector<int>& height) {
    int left = 0, right = (int)height.size() - 1, maxWater = 0;
    while (left < right) {
        int h = min(height[left], height[right]);
        maxWater = max(maxWater, (right - left) * h);
        if (height[left] < height[right]) left++;
        else right--;
    }
    return maxWater;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 167 – Two Sum II | ☐ |
| 2 | LC 15 – 3Sum | ☐ |
| 3 | LC 16 – 3Sum Closest | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 026 — Fast/Slow Pointers

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Fast/slow (Floyd's tortoise-hare) pointers: slow moves 1 step, fast moves 2 steps. If there's a cycle, they meet inside it. For 'find middle', slow ends at the middle when fast reaches the end. |
| 🧠 **What to Implement** | Implement cycle detection (Floyd's), then extend it to find the cycle's start node: after they meet, reset one pointer to head and move both 1 step at a time — they meet again exactly at the cycle start. |
| 🧠 **C++ Implementation Nuance** | Always null-check fast and fast->next in the while condition (`while (fast && fast->next)`) — checking only `fast` causes a null dereference. |

```cpp
// Floyd's cycle detection + finding cycle start
ListNode* detectCycle(ListNode* head) {
    ListNode *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next; fast = fast->next->next;
        if (slow == fast) {
            ListNode* ptr = head;
            while (ptr != slow) { ptr = ptr->next; slow = slow->next; }
            return ptr;
        }
    }
    return nullptr;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 141 – Linked List Cycle | ☐ |
| 2 | LC 142 – Linked List Cycle II | ☐ |
| 3 | LC 202 – Happy Number | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 027 — Fixed Window

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | window invariant; add right/remove left; max/min window aggregate. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// Sliding Window Variable Length Template
int lengthOfLongestSubstring(const string& s) {
    vector<int> lastIdx(128, -1);
    int maxLen = 0, left = 0;
    for (int right = 0; right < s.length(); right++) {
        if (lastIdx[s[right]] >= left) left = lastIdx[s[right]] + 1;
        lastIdx[s[right]] = right;
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 643 – Maximum Average Subarray I | ☐ |
| 2 | LC 1456 – Maximum Number of Vowels in a Substring | ☐ |
| 3 | LC 2461 – Maximum Sum of Distinct Subarrays With Length K | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 028 — Variable Window

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | at-most/at-least/exactly; frequency map; valid window. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// Sliding Window Variable Length Template
int lengthOfLongestSubstring(const string& s) {
    vector<int> lastIdx(128, -1);
    int maxLen = 0, left = 0;
    for (int right = 0; right < s.length(); right++) {
        if (lastIdx[s[right]] >= left) left = lastIdx[s[right]] + 1;
        lastIdx[s[right]] = right;
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 209 – Minimum Size Subarray Sum | ☐ |
| 2 | LC 76 – Minimum Window Substring | ☐ |
| 3 | LC 904 – Fruit Into Baskets | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 029 — Window with Counts

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | distinct counts; character frequency; replacement budget. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// Sliding Window Variable Length Template
int lengthOfLongestSubstring(const string& s) {
    vector<int> lastIdx(128, -1);
    int maxLen = 0, left = 0;
    for (int right = 0; right < s.length(); right++) {
        if (lastIdx[s[right]] >= left) left = lastIdx[s[right]] + 1;
        lastIdx[s[right]] = right;
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 3 – Longest Substring Without Repeating Characters | ☐ |
| 2 | LC 424 – Longest Repeating Character Replacement | ☐ |
| 3 | LC 1004 – Max Consecutive Ones III | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 030 — Advanced Window + Revision

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | monotonic deque preview; window maximum; mixed timed set. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// Sliding Window Variable Length Template
int lengthOfLongestSubstring(const string& s) {
    vector<int> lastIdx(128, -1);
    int maxLen = 0, left = 0;
    for (int right = 0; right < s.length(); right++) {
        if (lastIdx[s[right]] >= left) left = lastIdx[s[right]] + 1;
        lastIdx[s[right]] = right;
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 239 – Sliding Window Maximum | ☐ |
| 2 | LC 1438 – Longest Continuous Subarray With Absolute Diff <= Limit | ☐ |
| 3 | LC 992 – Subarrays with K Different Integers | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---


---

# Phase 4 — Binary Search & Search on Answer


### 📆 Day 031 — Binary Search Basics

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | closed/half-open intervals; lower_bound/upper_bound; duplicates. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// Binary Search on Answer Template
bool isValid(int mid) { return mid >= 10; /* feasibility check */ }

int binarySearchOnAnswer(int low, int high) {
    int ans = high;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (isValid(mid)) {
            ans = mid;
            high = mid - 1; // Try smaller valid
        } else {
            low = mid + 1;
        }
    }
    return ans;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 704 – Binary Search | ☐ |
| 2 | LC 34 – Find First and Last Position | ☐ |
| 3 | LC 35 – Search Insert Position | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 032 — Rotated Sorted Arrays

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Binary search on a rotated sorted array: at each mid, one half (left or right of mid) is always properly sorted. Check which half is sorted, then decide if target lies in that half's range — if yes, search there, else search the other half. |
| 🧠 **What to Implement** | Implement 'find pivot/minimum in rotated array' first (a simpler binary search), then build 'search in rotated array' on top of that same sorted-half logic. |
| 🧠 **C++ Implementation Nuance** | Careful with duplicates (LC 154 variant): if nums[l] == nums[mid] == nums[r], you can't tell which half is sorted — shrink both ends by 1 as a fallback. |

```cpp
// Search in Rotated Sorted Array
int search(vector<int>& nums, int target) {
    int l = 0, r = nums.size() - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (nums[mid] == target) return mid;
        if (nums[l] <= nums[mid]) { // left half sorted
            if (nums[l] <= target && target < nums[mid]) r = mid - 1;
            else l = mid + 1;
        } else { // right half sorted
            if (nums[mid] < target && target <= nums[r]) l = mid + 1;
            else r = mid - 1;
        }
    }
    return -1;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 33 – Search in Rotated Sorted Array | ☐ |
| 2 | LC 81 – Search in Rotated Sorted Array II | ☐ |
| 3 | LC 153 – Find Minimum in Rotated Sorted Array | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 033 — Binary Search on Answer I

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | monotonic predicate; minimum feasible answer; capacity/speed problems. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// Binary Search on Answer Template
bool isValid(int mid) { return mid >= 10; /* feasibility check */ }

int binarySearchOnAnswer(int low, int high) {
    int ans = high;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (isValid(mid)) {
            ans = mid;
            high = mid - 1; // Try smaller valid
        } else {
            low = mid + 1;
        }
    }
    return ans;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 875 – Koko Eating Bananas | ☐ |
| 2 | LC 1011 – Capacity To Ship Packages Within D Days | ☐ |
| 3 | LC 1482 – Minimum Number of Days to Make m Bouquets | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 034 — Binary Search on Answer II

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | allocation and partitioning; maximize minimum; minimize maximum. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// Binary Search on Answer Template
bool isValid(int mid) { return mid >= 10; /* feasibility check */ }

int binarySearchOnAnswer(int low, int high) {
    int ans = high;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (isValid(mid)) {
            ans = mid;
            high = mid - 1; // Try smaller valid
        } else {
            low = mid + 1;
        }
    }
    return ans;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 410 – Split Array Largest Sum | ☐ |
| 2 | LC 774 – Minimize Max Distance to Gas Station | ☐ |
| 3 | LC  aggressive cows (GFG) | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 035 — Binary Search in 2D / Peaks

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | peak condition; matrix search; binary search over rows/columns. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// Binary Search on Answer Template
bool isValid(int mid) { return mid >= 10; /* feasibility check */ }

int binarySearchOnAnswer(int low, int high) {
    int ans = high;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (isValid(mid)) {
            ans = mid;
            high = mid - 1; // Try smaller valid
        } else {
            low = mid + 1;
        }
    }
    return ans;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 162 – Find Peak Element | ☐ |
| 2 | LC 852 – Peak Index in a Mountain Array | ☐ |
| 3 | LC 378 – Kth Smallest Element in a Sorted Matrix | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 036 — Binary Search Revision

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | Implement lower_bound, upper_bound, answer search from scratch. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// Binary Search on Answer Template
bool isValid(int mid) { return mid >= 10; /* feasibility check */ }

int binarySearchOnAnswer(int low, int high) {
    int ans = high;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (isValid(mid)) {
            ans = mid;
            high = mid - 1; // Try smaller valid
        } else {
            low = mid + 1;
        }
    }
    return ans;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 4 – Median of Two Sorted Arrays | ☐ |
| 2 | LC 540 – Single Element in a Sorted Array | ☐ |
| 3 | LC 287 – Find the Duplicate Number | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---


---

# Phase 5 — Recursion, Backtracking & Bitmask Search


### 📆 Day 037 — Recursion Foundations

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Recursion foundations: every recursive function needs a base case (stops recursion) and a recurrence (reduces the problem toward the base case). Draw the recursion tree on paper for at least one problem today — see how call stack depth relates to input size. |
| 🧠 **What to Implement** | Implement factorial and Fibonacci both recursively and iteratively, then time the recursive Fibonacci for n=35 to feel exponential blowup firsthand — this motivates memoization later. |
| 🧠 **C++ Implementation Nuance** | Deep unguarded recursion (like naive Fibonacci) grows the call stack O(2^n) calls — watch for stack overflow on large inputs; always check if an iterative or memoized version is expected. |

```cpp
// Naive recursive Fibonacci — O(2^n), for demonstrating blowup
int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 509 – Fibonacci Number | ☐ |
| 2 | LC 70 – Climbing Stairs | ☐ |
| 3 | LC 206 – Reverse Linked List recursively | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 038 — Subsequences and Subsets

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | take/not-take; include/exclude; duplicate handling. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// 1D DP: House Robber / Maximum Subarray non-adjacent
int rob(const vector<int>& nums) {
    if (nums.empty()) return 0;
    int prev1 = 0, prev2 = 0;
    for (int x : nums) {
        int temp = max(prev1, prev2 + x);
        prev2 = prev1;
        prev1 = temp;
    }
    return prev1;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 78 – Subsets | ☐ |
| 2 | LC 90 – Subsets II | ☐ |
| 3 | LC 491 – Non-decreasing Subsequences | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 039 — Permutations and Combinations

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Backtracking template: choose an option -> explore (recurse) -> unchoose (undo, backtrack). For permutations, track a 'used' array; for combinations, pass a start index to avoid reusing earlier elements. |
| 🧠 **What to Implement** | Implement Permutations using the used-array approach, then Combinations/Subsets using the start-index approach — notice how the recursion tree shape differs (permutation tree is much wider). |
| 🧠 **C++ Implementation Nuance** | Push and pop from the same vector<int> path for the current candidate instead of building new vectors each call — much less copying overhead. |

```cpp
// Permutations — choose/explore/unchoose template
void backtrack(vector<int>& nums, vector<bool>& used, vector<int>& path, vector<vector<int>>& res) {
    if (path.size() == nums.size()) { res.push_back(path); return; }
    for (int i = 0; i < nums.size(); i++) {
        if (used[i]) continue;
        used[i] = true; path.push_back(nums[i]);
        backtrack(nums, used, path, res);
        path.pop_back(); used[i] = false;
    }
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 46 – Permutations | ☐ |
| 2 | LC 47 – Permutations II | ☐ |
| 3 | LC 39 – Combination Sum | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 040 — Backtracking Constraints

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Pruning: check constraints BEFORE recursing into an invalid branch, not after — this is what makes backtracking fast enough to pass. E.g. in Combination Sum, stop early once running sum exceeds target. |
| 🧠 **What to Implement** | Take yesterday's Subsets/Combinations code and add an early-exit pruning condition; measure (mentally or by counting calls) how many fewer recursive calls happen. |
| 🧠 **C++ Implementation Nuance** | Sort the input array first when pruning depends on order (e.g. skip duplicates, or break early once elements exceed remaining budget) — unsorted input makes pruning much harder. |

```cpp
// Combination Sum with pruning (sorted input, break early)
void backtrack(vector<int>& cand, int start, int target, vector<int>& path, vector<vector<int>>& res) {
    if (target == 0) { res.push_back(path); return; }
    for (int i = start; i < cand.size() && cand[i] <= target; i++) {
        path.push_back(cand[i]);
        backtrack(cand, i, target - cand[i], path, res); // i, not i+1: reuse allowed
        path.pop_back();
    }
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 40 – Combination Sum II | ☐ |
| 2 | LC 77 – Combinations | ☐ |
| 3 | LC 216 – Combination Sum III | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 041 — N-Queens and Board Search

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | N-Queens: place one queen per row, track occupied columns and both diagonals. A cell (r,c) lies on diagonal r-c (constant along '\') and anti-diagonal r+c (constant along '/') — use sets or bool arrays sized 2N-1 for O(1) conflict checks. |
| 🧠 **What to Implement** | Implement N-Queens with column/diagonal/anti-diagonal boolean arrays (not a full 2D board scan for conflicts) — this is the difference between O(N) and O(N^2) per placement check. |
| 🧠 **C++ Implementation Nuance** | Index the diagonal arrays carefully: r-c can be negative, so offset by N-1 (diag[r-c+N-1]) to keep array indices non-negative. |

```cpp
// N-Queens — O(1) conflict check via column/diagonal tracking
void solve(int row, int n, vector<bool>& cols, vector<bool>& diag1, vector<bool>& diag2, vector<int>& pos, int& count) {
    if (row == n) { count++; return; }
    for (int c = 0; c < n; c++) {
        int d1 = row - c + n - 1, d2 = row + c;
        if (cols[c] || diag1[d1] || diag2[d2]) continue;
        cols[c] = diag1[d1] = diag2[d2] = true;
        solve(row+1, n, cols, diag1, diag2, pos, count);
        cols[c] = diag1[d1] = diag2[d2] = false;
    }
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 51 – N-Queens | ☐ |
| 2 | LC 52 – N-Queens II | ☐ |
| 3 | LC 37 – Sudoku Solver | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 042 — Grid Backtracking

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Grid backtracking (Word Search style): DFS from each starting cell, mark visited in-place (e.g. temporarily overwrite the grid cell), explore 4 directions, then restore the cell on backtrack. |
| 🧠 **What to Implement** | Implement Word Search: DFS with in-place marking instead of a separate visited[][] array — saves memory and is the standard interview-expected trick. |
| 🧠 **C++ Implementation Nuance** | Restore the modified cell (`grid[r][c] = ch;`) immediately after the recursive call returns, before trying the next direction — forgetting this corrupts later searches. |

```cpp
// Word Search — DFS with in-place cell marking
bool dfs(vector<vector<char>>& g, string& word, int idx, int r, int c) {
    if (idx == word.size()) return true;
    if (r<0||c<0||r>=g.size()||c>=g[0].size()||g[r][c]!=word[idx]) return false;
    char tmp = g[r][c]; g[r][c] = '#';
    bool found = dfs(g,word,idx+1,r+1,c) || dfs(g,word,idx+1,r-1,c) ||
                 dfs(g,word,idx+1,r,c+1) || dfs(g,word,idx+1,r,c-1);
    g[r][c] = tmp;
    return found;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 79 – Word Search | ☐ |
| 2 | LC 980 – Unique Paths III | ☐ |
| 3 | LC 1219 – Path with Maximum Gold | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 043 — Partitioning Backtracking

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Partitioning backtracking: at each recursion step, try every valid 'cut' point (e.g. every prefix that's a palindrome, or every way to split remaining elements into a valid group) and recurse on the remainder. |
| 🧠 **What to Implement** | Implement Palindrome Partitioning: at each start index, try every end index, check if that substring is a palindrome, and if so recurse on the rest — precompute an is-palindrome DP table first to avoid recomputation. |
| 🧠 **C++ Implementation Nuance** | Precomputing the palindrome-check table in O(N^2) upfront turns an otherwise O(N) per-check cost into O(1), which matters a lot given how many substrings backtracking checks. |

```cpp
// Palindrome Partitioning — precomputed palindrome DP + backtracking
void backtrack(string& s, int start, vector<vector<bool>>& isPal, vector<string>& path, vector<vector<string>>& res) {
    if (start == s.size()) { res.push_back(path); return; }
    for (int end = start; end < s.size(); end++) {
        if (isPal[start][end]) {
            path.push_back(s.substr(start, end-start+1));
            backtrack(s, end+1, isPal, path, res);
            path.pop_back();
        }
    }
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 131 – Palindrome Partitioning | ☐ |
| 2 | LC 93 – Restore IP Addresses | ☐ |
| 3 | LC 282 – Expression Add Operators | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 044 — Recursion/Backtracking Revision

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Revision: for each of Combinations, Permutations, N-Queens, Word Search, and Palindrome Partitioning, write the recursion's state (what changes each call) and base case from memory — this is what separates memorized code from internalized pattern. |
| 🧠 **What to Implement** | Re-solve at least 2 of the above without looking at old code; time yourself on identifying the right pruning condition, not just writing syntax. |
| 🧠 **C++ Implementation Nuance** | Check every backtracking solution correctly undoes its state change (pop_back, un-mark visited) in every exit path, including early returns. |

```cpp
// Timed revision — no new template, apply Days 37-43 recursion/backtracking patterns
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 17 – Letter Combinations of a Phone Number | ☐ |
| 2 | LC 22 – Generate Parentheses | ☐ |
| 3 | LC 301 – Remove Invalid Parentheses | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---


---

# Phase 6 — Linked Lists


### 📆 Day 045 — Singly Linked List Basics

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | node structure; traversal; insert/delete; dummy node. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* curr = head;
    while (curr) {
        ListNode* nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    return prev;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 206 – Reverse Linked List | ☐ |
| 2 | LC 21 – Merge Two Sorted Lists | ☐ |
| 3 | LC 876 – Middle of the Linked List | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 046 — Reversal Patterns

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Linked list reversal: iterative uses 3 pointers (prev, curr, next) and rewires curr->next = prev each step. Reversal in groups of K needs you to reverse each K-sized chunk and reconnect chunk boundaries carefully. |
| 🧠 **What to Implement** | Implement Reverse Linked List iteratively AND recursively (recursive: reverse the rest first, then fix head->next->next = head, head->next = null) — compare stack usage mentally. |
| 🧠 **C++ Implementation Nuance** | For Reverse Nodes in K-Group: first check if K nodes exist ahead before reversing (partial groups at the end usually stay unreversed) — a very common off-by-one bug source. |

```cpp
// Reverse Linked List — iterative 3-pointer
ListNode* reverseList(ListNode* head) {
    ListNode *prev = nullptr, *curr = head;
    while (curr) {
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr; curr = next;
    }
    return prev;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 92 – Reverse Linked List II | ☐ |
| 2 | LC 25 – Reverse Nodes in k-Group | ☐ |
| 3 | LC 24 – Swap Nodes in Pairs | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 047 — Cycle and Intersection

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Cycle and intersection: use Floyd's fast/slow to detect a cycle (Day 26 recap). For 'intersection of two linked lists' (no cycle), walk both lists to their ends then swap heads — both pointers travel lenA+lenB total steps and meet exactly at the intersection. |
| 🧠 **What to Implement** | Implement Intersection of Two Linked Lists using the two-pointer swap-heads trick (O(1) space, no length calculation needed) instead of the naive O(N) hashset-of-visited-nodes approach. |
| 🧠 **C++ Implementation Nuance** | If the lists never intersect, both pointers become null at the same step (after traversing lenA+lenB) — your loop condition should naturally terminate there, not infinite-loop. |

```cpp
// Intersection of Two Linked Lists — swap-heads two pointer
ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
    ListNode *a = headA, *b = headB;
    while (a != b) {
        a = a ? a->next : headB;
        b = b ? b->next : headA;
    }
    return a;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 141 – Linked List Cycle | ☐ |
| 2 | LC 142 – Linked List Cycle II | ☐ |
| 3 | LC 160 – Intersection of Two Linked Lists | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 048 — Merge and Sort Lists

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | merge invariant; split by slow/fast; merge sort. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* curr = head;
    while (curr) {
        ListNode* nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    return prev;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 23 – Merge k Sorted Lists | ☐ |
| 2 | LC 148 – Sort List | ☐ |
| 3 | LC 2 – Add Two Numbers | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 049 — Remove/Modify Nodes

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Remove/modify node patterns: use a dummy head node before the real head to simplify edge cases (removing the first node becomes just another 'middle' removal). For 'remove Nth from end', use two pointers offset by N. |
| 🧠 **What to Implement** | Implement Remove Nth Node From End using the two-pointer offset trick (single pass, O(1) extra space) instead of first computing length in a separate pass. |
| 🧠 **C++ Implementation Nuance** | Always create `ListNode dummy(0); dummy.next = head;` and operate relative to `&dummy` — this avoids special-casing when the head itself needs to be removed. |

```cpp
// Remove Nth Node From End — dummy head + two pointers
ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode dummy(0); dummy.next = head;
    ListNode *fast = &dummy, *slow = &dummy;
    for (int i = 0; i < n; i++) fast = fast->next;
    while (fast->next) { fast = fast->next; slow = slow->next; }
    slow->next = slow->next->next;
    return dummy.next;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 19 – Remove Nth Node From End | ☐ |
| 2 | LC 82 – Remove Duplicates from Sorted List II | ☐ |
| 3 | LC 86 – Partition List | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 050 — Doubly/Circular Linked Lists

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | prev/next maintenance; LRU design; circular operations. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* curr = head;
    while (curr) {
        ListNode* nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    return prev;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 146 – LRU Cache | ☐ |
| 2 | LC 430 – Flatten a Multilevel Doubly Linked List | ☐ |
| 3 | LC 138 – Copy List with Random Pointer | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 051 — Linked List Revision

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | Reimplement all pointer templates from memory. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* curr = head;
    while (curr) {
        ListNode* nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    return prev;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 234 – Palindrome Linked List | ☐ |
| 2 | LC 143 – Reorder List | ☐ |
| 3 | LC 61 – Rotate List | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---


---

# Phase 7 — Stack, Queue, Monotonic Stack & Deque


### 📆 Day 052 — Stack and Queue Basics

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | implementations; applications; matching brackets; BFS queue. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// Monotonic Decreasing Stack for Next Greater Element
vector<int> nextGreater(const vector<int>& nums) {
    int n = nums.size();
    vector<int> res(n, -1);
    stack<int> st; // stores indices
    for (int i = 0; i < n; i++) {
        while (!st.empty() && nums[i] > nums[st.top()]) {
            res[st.top()] = nums[i];
            st.pop();
        }
        st.push(i);
    }
    return res;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 20 – Valid Parentheses | ☐ |
| 2 | LC 155 – Min Stack | ☐ |
| 3 | LC 225 – Implement Stack using Queues | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 053 — Monotonic Stack I

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | next greater/smaller; increasing/decreasing invariant. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// Monotonic Decreasing Stack for Next Greater Element
vector<int> nextGreater(const vector<int>& nums) {
    int n = nums.size();
    vector<int> res(n, -1);
    stack<int> st; // stores indices
    for (int i = 0; i < n; i++) {
        while (!st.empty() && nums[i] > nums[st.top()]) {
            res[st.top()] = nums[i];
            st.pop();
        }
        st.push(i);
    }
    return res;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 496 – Next Greater Element I | ☐ |
| 2 | LC 503 – Next Greater Element II | ☐ |
| 3 | LC 739 – Daily Temperatures | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 054 — Monotonic Stack II

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | previous smaller; contribution technique; circular arrays. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// Monotonic Decreasing Stack for Next Greater Element
vector<int> nextGreater(const vector<int>& nums) {
    int n = nums.size();
    vector<int> res(n, -1);
    stack<int> st; // stores indices
    for (int i = 0; i < n; i++) {
        while (!st.empty() && nums[i] > nums[st.top()]) {
            res[st.top()] = nums[i];
            st.pop();
        }
        st.push(i);
    }
    return res;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 901 – Online Stock Span | ☐ |
| 2 | LC 907 – Sum of Subarray Minimums | ☐ |
| 3 | LC 2104 – Sum of Subarray Ranges | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 055 — Histogram and Matrix

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Largest Rectangle in Histogram: maintain a monotonic increasing stack of indices. When a bar shorter than the stack top appears, pop and compute the area with the popped bar as the height (width = current index - new stack top - 1). Maximal Rectangle in a matrix reduces to this problem run once per row (treating each row as a histogram of consecutive 1s' heights). |
| 🧠 **What to Implement** | Implement Largest Rectangle in Histogram first, then Maximal Rectangle by building a per-row height array and calling your histogram function N times. |
| 🧠 **C++ Implementation Nuance** | Push a sentinel 0-height bar at the end of the histogram array before running the algorithm — this forces the stack to flush all remaining bars without special-casing the end of the loop. |

```cpp
// Largest Rectangle in Histogram — monotonic stack
int largestRectangleArea(vector<int>& h) {
    h.push_back(0); // sentinel
    stack<int> st; int maxArea = 0;
    for (int i = 0; i < h.size(); i++) {
        while (!st.empty() && h[st.top()] > h[i]) {
            int height = h[st.top()]; st.pop();
            int width = st.empty() ? i : i - st.top() - 1;
            maxArea = max(maxArea, height * width);
        }
        st.push(i);
    }
    return maxArea;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 84 – Largest Rectangle in Histogram | ☐ |
| 2 | LC 85 – Maximal Rectangle | ☐ |
| 3 | LC 1793 – Maximum Score of a Good Subarray | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 056 — Expression Evaluation

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Expression evaluation: use two stacks (one for numbers, one for operators) or convert infix to postfix first (Shunting Yard) then evaluate postfix with a single stack. Handle operator precedence explicitly — multiply/divide before add/subtract. |
| 🧠 **What to Implement** | Implement Basic Calculator II (handles +,-,*,/  without parentheses) using a single stack: push numbers, and when you see a lower/equal precedence operator, resolve the pending * or / immediately. |
| 🧠 **C++ Implementation Nuance** | Read the input character by character including multi-digit numbers (accumulate digits into a running number) and handle trailing operators/spaces carefully — string parsing edge cases are the main source of bugs here. |

```cpp
// Basic Calculator II — single stack, resolve * / immediately
int calculate(string s) {
    stack<int> st; long num = 0; char op = '+';
    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        if (isdigit(c)) num = num * 10 + (c - '0');
        if ((!isdigit(c) && c != ' ') || i == s.size()-1) {
            if (op == '+') st.push(num);
            else if (op == '-') st.push(-num);
            else if (op == '*') { int t = st.top(); st.pop(); st.push(t * num); }
            else if (op == '/') { int t = st.top(); st.pop(); st.push(t / num); }
            op = c; num = 0;
        }
    }
    int res = 0; while (!st.empty()) { res += st.top(); st.pop(); }
    return res;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 150 – Evaluate Reverse Polish Notation | ☐ |
| 2 | LC 224 – Basic Calculator | ☐ |
| 3 | LC 227 – Basic Calculator II | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 057 — Deque and Sliding Structures

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Sliding Window Maximum uses a monotonic decreasing deque of indices: push new indices from the back after popping smaller elements; pop from the front when the front index falls outside the window. The front of the deque is always the current window's max. |
| 🧠 **What to Implement** | Implement Sliding Window Maximum with a deque<int> storing indices (not values) — this lets you check if the front is still inside the window using index comparison. |
| 🧠 **C++ Implementation Nuance** | Pop from the back of the deque WHILE its value is <= the new element (strictly maintaining decreasing order) — using < instead of <= silently breaks the invariant with duplicate values. |

```cpp
// Sliding Window Maximum — monotonic deque of indices
vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    deque<int> dq; vector<int> res;
    for (int i = 0; i < nums.size(); i++) {
        while (!dq.empty() && nums[dq.back()] <= nums[i]) dq.pop_back();
        dq.push_back(i);
        if (dq.front() <= i - k) dq.pop_front();
        if (i >= k - 1) res.push_back(nums[dq.front()]);
    }
    return res;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 239 – Sliding Window Maximum | ☐ |
| 2 | LC 862 – Shortest Subarray with Sum at Least K | ☐ |
| 3 | LC 1438 – Longest Continuous Subarray With Absolute Diff <= Limit | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 058 — Stack/Queue Revision

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | Mixed timed set and template recall. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// Monotonic Decreasing Stack for Next Greater Element
vector<int> nextGreater(const vector<int>& nums) {
    int n = nums.size();
    vector<int> res(n, -1);
    stack<int> st; // stores indices
    for (int i = 0; i < n; i++) {
        while (!st.empty() && nums[i] > nums[st.top()]) {
            res[st.top()] = nums[i];
            st.pop();
        }
        st.push(i);
    }
    return res;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 394 – Decode String | ☐ |
| 2 | LC 402 – Remove K Digits | ☐ |
| 3 | LC 316 – Remove Duplicate Letters | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---


---

# Phase 8 — Binary Trees


### 📆 Day 059 — Tree Fundamentals

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | node; recursion; preorder/inorder/postorder; height; null base cases. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int maxDepth(TreeNode* root) {
    if (!root) return 0;
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 144 – Binary Tree Preorder Traversal | ☐ |
| 2 | LC 94 – Binary Tree Inorder Traversal | ☐ |
| 3 | LC 145 – Binary Tree Postorder Traversal | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 060 — Iterative Traversals

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Iterative tree traversals replace the implicit call-stack recursion with an explicit stack<TreeNode*>. Inorder: push left children until null, pop+visit, move to right. Postorder: trickiest — can be done with two stacks or one stack + a 'last visited' pointer. |
| 🧠 **What to Implement** | Implement iterative inorder traversal with an explicit stack first (most common in interviews), then attempt iterative postorder using the two-stack trick (push root to stack1, pop to stack2, push children to stack1 — stack2 ends up in postorder). |
| 🧠 **C++ Implementation Nuance** | In iterative inorder, don't forget to move `curr = curr->right` AFTER popping and visiting a node — a common bug is forgetting to descend right and looping on the same node. |

```cpp
// Iterative Inorder Traversal — explicit stack
vector<int> inorderTraversal(TreeNode* root) {
    vector<int> res; stack<TreeNode*> st; TreeNode* curr = root;
    while (curr || !st.empty()) {
        while (curr) { st.push(curr); curr = curr->left; }
        curr = st.top(); st.pop();
        res.push_back(curr->val);
        curr = curr->right;
    }
    return res;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 94 – Binary Tree Inorder Traversal | ☐ |
| 2 | LC 144 – Binary Tree Preorder Traversal | ☐ |
| 3 | LC 145 – Binary Tree Postorder Traversal | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 061 — Level Order BFS

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | queue levels; width; zigzag; right view. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// BFS on Graph using Adjacency List
void bfs(int src, const vector<vector<int>>& adj, int V) {
    vector<bool> vis(V, false);
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        cout << u << " ";
        for (int v : adj[u]) {
            if (!vis[v]) {
                vis[v] = true;
                q.push(v);
            }
        }
    }
    cout << endl;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 102 – Binary Tree Level Order Traversal | ☐ |
| 2 | LC 103 – Binary Tree Zigzag Level Order Traversal | ☐ |
| 3 | LC 199 – Binary Tree Right Side View | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 062 — Tree Properties

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | height-balanced; diameter; maximum depth; symmetry. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int maxDepth(TreeNode* root) {
    if (!root) return 0;
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 104 – Maximum Depth of Binary Tree | ☐ |
| 2 | LC 110 – Balanced Binary Tree | ☐ |
| 3 | LC 543 – Diameter of Binary Tree | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 063 — Paths and Ancestors

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Root-to-leaf paths and ancestor problems use DFS passing the current path down (or building it as you recurse), and popping the last element on backtrack. LCA (Lowest Common Ancestor) in a binary tree: recurse into both subtrees; if both return non-null, current node is the LCA. |
| 🧠 **What to Implement** | Implement Lowest Common Ancestor of a Binary Tree using the recursive 'search both subtrees' approach, then Binary Tree Paths (all root-to-leaf paths as strings) using backtracking with a path vector. |
| 🧠 **C++ Implementation Nuance** | For LCA, the recursive function should return the node itself the moment it matches either target — don't keep searching deeper once found, that wastes work and can give wrong results if targets are ancestors of each other. |

```cpp
// Lowest Common Ancestor — recursive both-subtree search
TreeNode* lca(TreeNode* root, TreeNode* p, TreeNode* q) {
    if (!root || root == p || root == q) return root;
    TreeNode* left = lca(root->left, p, q);
    TreeNode* right = lca(root->right, p, q);
    if (left && right) return root;
    return left ? left : right;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 112 – Path Sum | ☐ |
| 2 | LC 113 – Path Sum II | ☐ |
| 3 | LC 236 – Lowest Common Ancestor of a Binary Tree | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 064 — Tree Construction

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | build from traversals; serialize/deserialize; index maps. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int maxDepth(TreeNode* root) {
    if (!root) return 0;
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 105 – Construct Binary Tree from Preorder and Inorder | ☐ |
| 2 | LC 106 – Construct Binary Tree from Inorder and Postorder | ☐ |
| 3 | LC 297 – Serialize and Deserialize Binary Tree | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 065 — Tree Views and Vertical Order

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | column coordinates; BFS ordering; diagonal/boundary views. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int maxDepth(TreeNode* root) {
    if (!root) return 0;
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 987 – Vertical Order Traversal | ☐ |
| 2 | LC 662 – Maximum Width of Binary Tree | ☐ |
| 3 | LC 515 – Find Largest Value in Each Tree Row | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 066 — Advanced Tree Recursion

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | maximum path; subtree states; cameras; robbing tree. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int maxDepth(TreeNode* root) {
    if (!root) return 0;
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 124 – Binary Tree Maximum Path Sum | ☐ |
| 2 | LC 337 – House Robber III | ☐ |
| 3 | LC 968 – Binary Tree Cameras | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 067 — Morris and Tree Revision

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | O(1) extra-space traversal; threaded links; mixed revision. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int maxDepth(TreeNode* root) {
    if (!root) return 0;
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 114 – Flatten Binary Tree to Linked List | ☐ |
| 2 | LC 116 – Populating Next Right Pointers | ☐ |
| 3 | LC 173 – Binary Search Tree Iterator | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---


---

# Phase 9 — BST, Heap, Hashing & Design


### 📆 Day 068 — BST Basics

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | BST invariant; search/insert/delete; inorder sorted property. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int maxDepth(TreeNode* root) {
    if (!root) return 0;
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 700 – Search in a Binary Search Tree | ☐ |
| 2 | LC 701 – Insert into a Binary Search Tree | ☐ |
| 3 | LC 450 – Delete Node in a BST | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 069 — BST Order Statistics

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | kth smallest/largest; predecessor/successor; rank. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int maxDepth(TreeNode* root) {
    if (!root) return 0;
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 230 – Kth Smallest Element in a BST | ☐ |
| 2 | LC 285 – Inorder Successor in BST | ☐ |
| 3 | LC 98 – Validate Binary Search Tree | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 070 — BST Advanced

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | LCA in BST; recover swapped nodes; balanced construction. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int maxDepth(TreeNode* root) {
    if (!root) return 0;
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 235 – Lowest Common Ancestor of a BST | ☐ |
| 2 | LC 99 – Recover Binary Search Tree | ☐ |
| 3 | LC 108 – Convert Sorted Array to BST | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 071 — Heap Basics

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Heap basics: priority_queue<int> is a max-heap by default; priority_queue<int, vector<int>, greater<int>> is a min-heap. push/pop are O(log N), top is O(1). Heapify (building a heap from an array) is O(N), not O(N log N). |
| 🧠 **What to Implement** | Implement Kth Largest Element in an Array using a min-heap of size K (push each element, pop if size exceeds K — the heap top ends up being the Kth largest) instead of full sort. |
| 🧠 **C++ Implementation Nuance** | For a min-heap of size K pattern, always compare `if (pq.size() > k) pq.pop();` AFTER pushing, not before — pushing first keeps the logic simpler and avoids off-by-one. |

```cpp
// Kth Largest Element — min-heap of size K
int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int n : nums) {
        pq.push(n);
        if (pq.size() > k) pq.pop();
    }
    return pq.top();
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 215 – Kth Largest Element in an Array | ☐ |
| 2 | LC 703 – Kth Largest Element in a Stream | ☐ |
| 3 | LC 1046 – Last Stone Weight | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 072 — Heap on K Problems

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Heap-on-K problems generalize yesterday's pattern: Top K Frequent Elements needs a heap keyed by frequency (build a frequency map first, then heap on (freq, value) pairs, size-capped at K). |
| 🧠 **What to Implement** | Implement Top K Frequent Elements: build unordered_map<int,int> freq, then push (freq, val) pairs into a min-heap capped at size K. |
| 🧠 **C++ Implementation Nuance** | Use pair<int,int> in the heap (freq first) so default comparison works correctly — don't build a custom comparator unless you need a different tie-breaking rule. |

```cpp
// Top K Frequent Elements — freq map + min-heap of size K
vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int> freq;
    for (int n : nums) freq[n]++;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
    for (auto& [val, f] : freq) {
        pq.push({f, val});
        if (pq.size() > k) pq.pop();
    }
    vector<int> res;
    while (!pq.empty()) { res.push_back(pq.top().second); pq.pop(); }
    return res;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 347 – Top K Frequent Elements | ☐ |
| 2 | LC 378 – Kth Smallest Element in a Sorted Matrix | ☐ |
| 3 | LC 373 – Find K Pairs with Smallest Sums | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 073 — Two Heaps

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Two heaps (median finder): maintain a max-heap for the smaller half of numbers and a min-heap for the larger half, kept balanced in size (differ by at most 1). The median is either the top of the larger heap, or the average of both tops. |
| 🧠 **What to Implement** | Implement Find Median from Data Stream: on each insert, decide which heap to push to based on comparison with the max-heap's top, then rebalance sizes if they differ by more than 1. |
| 🧠 **C++ Implementation Nuance** | After every insertion, explicitly rebalance (`if (maxHeap.size() > minHeap.size()+1) move top from maxHeap to minHeap`, and vice versa) — skipping this breaks the median calculation silently. |

```cpp
// Median Finder — two balanced heaps
class MedianFinder {
    priority_queue<int> lo; // max-heap, smaller half
    priority_queue<int, vector<int>, greater<int>> hi; // min-heap, larger half
public:
    void addNum(int num) {
        lo.push(num);
        hi.push(lo.top()); lo.pop();
        if (hi.size() > lo.size()) { lo.push(hi.top()); hi.pop(); }
    }
    double findMedian() {
        return lo.size() > hi.size() ? lo.top() : (lo.top() + hi.top()) / 2.0;
    }
};
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 295 – Find Median from Data Stream | ☐ |
| 2 | LC 480 – Sliding Window Median | ☐ |
| 3 | LC 502 – IPO | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 074 — Scheduling with Heap

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Task scheduling with heaps: Task Scheduler counts task frequencies, then greedily picks the most frequent remaining task each cycle (a max-heap), enforcing a cooldown gap between repeats of the same task. |
| 🧠 **What to Implement** | Implement Task Scheduler using a max-heap of frequencies plus a cooldown queue that holds (task, next-available-time) pairs. |
| 🧠 **C++ Implementation Nuance** | The cooldown queue should re-insert a task back into the heap only once its cooldown period has fully elapsed relative to the current simulated time step, not immediately. |

```cpp
// Task Scheduler — max-heap + cooldown queue
int leastInterval(vector<char>& tasks, int n) {
    unordered_map<char,int> freq;
    for (char t : tasks) freq[t]++;
    priority_queue<int> pq;
    for (auto& [k, v] : freq) pq.push(v);
    int time = 0;
    queue<pair<int,int>> cooldown; // {count, availableTime}
    while (!pq.empty() || !cooldown.empty()) {
        time++;
        if (!pq.empty()) {
            int cnt = pq.top() - 1; pq.pop();
            if (cnt > 0) cooldown.push({cnt, time + n});
        }
        if (!cooldown.empty() && cooldown.front().second == time) {
            pq.push(cooldown.front().first); cooldown.pop();
        }
    }
    return time;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 253 – Meeting Rooms II | ☐ |
| 2 | LC 621 – Task Scheduler | ☐ |
| 3 | LC 1834 – Single-Threaded CPU | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 075 — Hashing Advanced

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Advanced hashing: hashing pairs/tuples (combine two ints into one long key: key = (long)a * 100000 + b, or use unordered_map<pair<int,int>, ...> with a custom hash struct). Also covers hashing for O(1) subarray-sum lookups and grouping by computed signatures. |
| 🧠 **What to Implement** | Implement Subarray Sum Equals K using a running-prefix-sum + hashmap-of-seen-prefix-sums pattern (count[prefixSum - k] gives valid subarrays ending here in O(1) per step). |
| 🧠 **C++ Implementation Nuance** | unordered_map does NOT have a default hash for pair<int,int> or vector<int> — you must supply a custom hash struct or combine keys into a single hashable type (like a long) yourself. |

```cpp
// Subarray Sum Equals K — prefix sum + hashmap
int subarraySum(vector<int>& nums, int k) {
    unordered_map<int,int> count{{0,1}};
    int sum = 0, res = 0;
    for (int n : nums) {
        sum += n;
        if (count.count(sum - k)) res += count[sum - k];
        count[sum]++;
    }
    return res;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 380 – Insert Delete GetRandom O(1) | ☐ |
| 2 | LC 381 – Insert Delete GetRandom O(1) — Duplicates allowed | ☐ |
| 3 | LC 149 – Max Points on a Line | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 076 — BST/Heap/Hash Revision

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | Mixed problems and data-structure design. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int maxDepth(TreeNode* root) {
    if (!root) return 0;
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 895 – Maximum Frequency Stack | ☐ |
| 2 | LC 460 – LFU Cache | ☐ |
| 3 | LC 355 – Design Twitter | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---


---

# Phase 10 — Graphs: Representation, BFS, DFS & Components


### 📆 Day 077 — Graph Representation

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | adjacency list/matrix; directed/undirected; weighted graphs; edge cases. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// BFS on Graph using Adjacency List
void bfs(int src, const vector<vector<int>>& adj, int V) {
    vector<bool> vis(V, false);
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        cout << u << " ";
        for (int v : adj[u]) {
            if (!vis[v]) {
                vis[v] = true;
                q.push(v);
            }
        }
    }
    cout << endl;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 1971 – Find if Path Exists in Graph | ☐ |
| 2 | LC 133 – Clone Graph | ☐ |
| 3 | LC 841 – Keys and Rooms | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 078 — BFS on Graphs

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | visited; level distance; multi-source BFS. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// BFS on Graph using Adjacency List
void bfs(int src, const vector<vector<int>>& adj, int V) {
    vector<bool> vis(V, false);
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        cout << u << " ";
        for (int v : adj[u]) {
            if (!vis[v]) {
                vis[v] = true;
                q.push(v);
            }
        }
    }
    cout << endl;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 752 – Open the Lock | ☐ |
| 2 | LC 127 – Word Ladder | ☐ |
| 3 | LC 994 – Rotting Oranges | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 079 — DFS and Components

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | recursive/iterative DFS; component counting; flood fill. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// BFS on Graph using Adjacency List
void bfs(int src, const vector<vector<int>>& adj, int V) {
    vector<bool> vis(V, false);
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        cout << u << " ";
        for (int v : adj[u]) {
            if (!vis[v]) {
                vis[v] = true;
                q.push(v);
            }
        }
    }
    cout << endl;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 200 – Number of Islands | ☐ |
| 2 | LC 695 – Max Area of Island | ☐ |
| 3 | LC 547 – Number of Provinces | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 080 — Grid Graphs

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | 4/8 directions; boundary; visited in-place; component shape. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// BFS on Graph using Adjacency List
void bfs(int src, const vector<vector<int>>& adj, int V) {
    vector<bool> vis(V, false);
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        cout << u << " ";
        for (int v : adj[u]) {
            if (!vis[v]) {
                vis[v] = true;
                q.push(v);
            }
        }
    }
    cout << endl;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 733 – Flood Fill | ☐ |
| 2 | LC 130 – Surrounded Regions | ☐ |
| 3 | LC 417 – Pacific Atlantic Water Flow | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 081 — Cycle Detection Undirected

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Cycle detection in an undirected graph: either DFS tracking parent (a back-edge to a non-parent visited node means a cycle), or Union-Find (if two nodes of an edge already share a root, adding that edge creates a cycle). |
| 🧠 **What to Implement** | Implement cycle detection with DSU (Union-Find with path compression + union by rank) — this same DSU code is reused heavily in MST (Day 90) and needs to be rock-solid. |
| 🧠 **C++ Implementation Nuance** | In DFS-based cycle detection, you must pass and check the parent node explicitly — visiting a node that's already visited is NOT a cycle if it's the immediate parent (that's just the edge you came from). |

```cpp
// Union-Find (DSU) with path compression + union by rank
struct DSU {
    vector<int> parent, rank_;
    DSU(int n) : parent(n), rank_(n, 0) { iota(parent.begin(), parent.end(), 0); }
    int find(int x) { return parent[x] == x ? x : parent[x] = find(parent[x]); }
    bool unite(int x, int y) {
        int rx = find(x), ry = find(y);
        if (rx == ry) return false; // cycle if edge (x,y) already connected
        if (rank_[rx] < rank_[ry]) swap(rx, ry);
        parent[ry] = rx;
        if (rank_[rx] == rank_[ry]) rank_[rx]++;
        return true;
    }
};
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 684 – Redundant Connection | ☐ |
| 2 | LC 261 – Graph Valid Tree | ☐ |
| 3 | LC 785 – Is Graph Bipartite? | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 082 — Cycle Detection Directed

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Cycle detection in a directed graph needs 3-color DFS: white (unvisited), gray (on current recursion stack), black (fully processed). A back-edge to a GRAY node means a cycle; an edge to a black node is fine (it's a cross/forward edge, not a cycle). |
| 🧠 **What to Implement** | Implement Course Schedule (detect cycle in prerequisite graph) using 3-color DFS — this is the same core logic Day 83's topological sort builds on. |
| 🧠 **C++ Implementation Nuance** | Using only a single visited[] boolean array (like undirected cycle detection) gives WRONG answers on directed graphs — you must distinguish 'currently in recursion stack' from 'fully done'. |

```cpp
// Directed graph cycle detection — 3-color DFS
bool hasCycle(int node, vector<vector<int>>& adj, vector<int>& color) {
    color[node] = 1; // gray
    for (int next : adj[node]) {
        if (color[next] == 1) return true; // back-edge to gray = cycle
        if (color[next] == 0 && hasCycle(next, adj, color)) return true;
    }
    color[node] = 2; // black
    return false;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 207 – Course Schedule | ☐ |
| 2 | LC 210 – Course Schedule II | ☐ |
| 3 | LC 802 – Find Eventual Safe States | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 083 — Topological Sort

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Topological sort orders nodes so every directed edge u->v has u before v. Kahn's algorithm (BFS): repeatedly remove nodes with in-degree 0, decrementing neighbors' in-degrees. DFS-based: do a postorder DFS, then reverse the finish order. |
| 🧠 **What to Implement** | Implement Course Schedule II (return the actual valid order, or empty if a cycle exists) using Kahn's BFS algorithm with an in-degree array and a queue. |
| 🧠 **C++ Implementation Nuance** | If Kahn's algorithm processes fewer nodes than the total node count, a cycle exists — that check IS your cycle detector, so you don't need a separate DFS-based check when using Kahn's. |

```cpp
// Topological Sort — Kahn's BFS algorithm
vector<int> topoSort(int n, vector<vector<int>>& adj) {
    vector<int> indeg(n, 0);
    for (int u = 0; u < n; u++) for (int v : adj[u]) indeg[v]++;
    queue<int> q;
    for (int i = 0; i < n; i++) if (indeg[i] == 0) q.push(i);
    vector<int> order;
    while (!q.empty()) {
        int u = q.front(); q.pop(); order.push_back(u);
        for (int v : adj[u]) if (--indeg[v] == 0) q.push(v);
    }
    return order.size() == n ? order : vector<int>{}; // empty = cycle exists
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 269 – Alien Dictionary | ☐ |
| 2 | LC 310 – Minimum Height Trees | ☐ |
| 3 | LC 1203 – Sort Items by Groups Respecting Dependencies | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 084 — Bipartite Graphs

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | 2-coloring; odd cycle; disconnected graph. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// BFS on Graph using Adjacency List
void bfs(int src, const vector<vector<int>>& adj, int V) {
    vector<bool> vis(V, false);
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        cout << u << " ";
        for (int v : adj[u]) {
            if (!vis[v]) {
                vis[v] = true;
                q.push(v);
            }
        }
    }
    cout << endl;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 785 – Is Graph Bipartite? | ☐ |
| 2 | LC 886 – Possible Bipartition | ☐ |
| 3 | LC 1042 – Flower Planting With No Adjacent | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---


---

# Phase 11 — Shortest Paths, MST, DSU & SCC


### 📆 Day 085 — Dijkstra

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | nonnegative weights; min heap; stale entries; shortest path tree. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// BFS on Graph using Adjacency List
void bfs(int src, const vector<vector<int>>& adj, int V) {
    vector<bool> vis(V, false);
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        cout << u << " ";
        for (int v : adj[u]) {
            if (!vis[v]) {
                vis[v] = true;
                q.push(v);
            }
        }
    }
    cout << endl;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 743 – Network Delay Time | ☐ |
| 2 | LC 1631 – Path With Minimum Effort | ☐ |
| 3 | LC 1514 – Path with Maximum Probability | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 086 — Dijkstra Variants

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | state-expanded graph; multi-source; weighted grid. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// BFS on Graph using Adjacency List
void bfs(int src, const vector<vector<int>>& adj, int V) {
    vector<bool> vis(V, false);
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        cout << u << " ";
        for (int v : adj[u]) {
            if (!vis[v]) {
                vis[v] = true;
                q.push(v);
            }
        }
    }
    cout << endl;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 787 – Cheapest Flights Within K Stops | ☐ |
| 2 | LC 1976 – Number of Ways to Arrive at Destination | ☐ |
| 3 | LC 2662 – Minimum Cost of a Path With Special Roads | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 087 — Bellman-Ford

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Bellman-Ford: relax every edge (u,v,w) up to V-1 times — after k iterations, shortest paths using at most k edges are correct. Unlike Dijkstra, it handles negative edge weights. A Vth relaxation that still improves a distance means a negative cycle exists. |
| 🧠 **What to Implement** | Implement Bellman-Ford on an edge list (not adjacency list), running the relax loop V-1 times, then one extra pass to detect a negative cycle. |
| 🧠 **C++ Implementation Nuance** | Initialize distances to a large sentinel (like INT_MAX/2, not INT_MAX) to avoid integer overflow when you add an edge weight to it during relaxation. |

```cpp
// Bellman-Ford with negative cycle detection
bool bellmanFord(int V, vector<array<int,3>>& edges, int src, vector<long>& dist) {
    dist.assign(V, LONG_MAX / 2);
    dist[src] = 0;
    for (int i = 0; i < V - 1; i++)
        for (auto& [u, v, w] : edges)
            if (dist[u] + w < dist[v]) dist[v] = dist[u] + w;
    for (auto& [u, v, w] : edges) // extra pass
        if (dist[u] + w < dist[v]) return false; // negative cycle
    return true;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 787 – Cheapest Flights Within K Stops | ☐ |
| 2 | GFG Bellman-Ford | ☐ |
| 3 | LC 1334 – Find the City With the Smallest Number of Neighbors at a Threshold Distance | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 088 — Floyd-Warshall

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Floyd-Warshall computes all-pairs shortest paths via DP: dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]) for every intermediate node k, tried in the OUTERMOST loop. O(V^3) time, works with negative edges (not negative cycles). |
| 🧠 **What to Implement** | Implement Floyd-Warshall on an adjacency matrix; verify why k must be the outer loop (not i or j) by reasoning about what dist[i][j] represents after each k-iteration completes. |
| 🧠 **C++ Implementation Nuance** | Initialize dist[i][i] = 0 and dist[i][j] = edge weight or INF for non-edges BEFORE running the triple loop — forgetting the diagonal gives wrong results for self-paths. |

```cpp
// Floyd-Warshall — all pairs shortest path, k must be outermost loop
void floydWarshall(vector<vector<long>>& dist, int V) {
    for (int k = 0; k < V; k++)
        for (int i = 0; i < V; i++)
            for (int j = 0; j < V; j++)
                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 1334 – Find the City With the Smallest Number of Neighbors at a Threshold Distance | ☐ |
| 2 | LC 1462 – Course Schedule IV | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 089 — DSU Basics

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | parent; rank/size; path compression; connectivity. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// BFS on Graph using Adjacency List
void bfs(int src, const vector<vector<int>>& adj, int V) {
    vector<bool> vis(V, false);
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        cout << u << " ";
        for (int v : adj[u]) {
            if (!vis[v]) {
                vis[v] = true;
                q.push(v);
            }
        }
    }
    cout << endl;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 547 – Number of Provinces | ☐ |
| 2 | LC 684 – Redundant Connection | ☐ |
| 3 | LC 1319 – Number of Operations to Make Network Connected | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 090 — Kruskal MST

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | edge sorting; DSU; cycle avoidance; minimum spanning forest. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// BFS on Graph using Adjacency List
void bfs(int src, const vector<vector<int>>& adj, int V) {
    vector<bool> vis(V, false);
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        cout << u << " ";
        for (int v : adj[u]) {
            if (!vis[v]) {
                vis[v] = true;
                q.push(v);
            }
        }
    }
    cout << endl;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 1584 – Min Cost to Connect All Points | ☐ |
| 2 | LC 1135 – Connecting Cities With Minimum Cost | ☐ |
| 3 | LC 1489 – Find Critical and Pseudo-Critical Edges | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 091 — Prim MST

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | cut property; visited vs heap; dense/sparse graphs. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// BFS on Graph using Adjacency List
void bfs(int src, const vector<vector<int>>& adj, int V) {
    vector<bool> vis(V, false);
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        cout << u << " ";
        for (int v : adj[u]) {
            if (!vis[v]) {
                vis[v] = true;
                q.push(v);
            }
        }
    }
    cout << endl;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 1584 – Min Cost to Connect All Points | ☐ |
| 2 | GFG Prim's Algorithm | ☐ |
| 3 | LC 1168 – Optimize Water Distribution in a Village | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 092 — Bridges and Articulation

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Bridges & articulation points (Tarjan's algorithm): during DFS, track disc[u] (discovery time) and low[u] (lowest discovery time reachable via back-edges). An edge (u,v) is a bridge if low[v] > disc[u]. Node u is an articulation point if low[v] >= disc[u] for some child v (with root-node special case: needs 2+ DFS children). |
| 🧠 **What to Implement** | Implement bridge-finding (Critical Connections in a Network) using the disc/low DFS — track a global timer and update low[u] = min(low[u], low[v]) after visiting each child, or low[u] = min(low[u], disc[v]) for back-edges. |
| 🧠 **C++ Implementation Nuance** | Always pass the parent node into the DFS and skip revisiting the direct parent edge (but DO allow revisiting other back-edges) — otherwise every edge looks like a back-edge to itself. |

```cpp
// Bridges — Tarjan's disc/low DFS
void dfs(int u, int parent, vector<vector<int>>& adj, vector<int>& disc, vector<int>& low, int& timer, vector<vector<int>>& bridges) {
    disc[u] = low[u] = timer++;
    for (int v : adj[u]) {
        if (v == parent) continue;
        if (disc[v] == -1) {
            dfs(v, u, adj, disc, low, timer, bridges);
            low[u] = min(low[u], low[v]);
            if (low[v] > disc[u]) bridges.push_back({u, v});
        } else low[u] = min(low[u], disc[v]);
    }
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 1192 – Critical Connections in a Network | ☐ |
| 2 | GFG Articulation Points | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 093 — SCC

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Strongly Connected Components (SCC): Kosaraju's algorithm — DFS the graph recording finish order, reverse all edges, DFS again in REVERSE finish order; each DFS tree in the second pass is one SCC. Tarjan's does it in a single DFS pass using disc/low, similar to bridge-finding. |
| 🧠 **What to Implement** | Implement Kosaraju's algorithm: first DFS pass fills a finish-order stack, then DFS the transposed (reversed) graph popping from that stack — count how many separate DFS trees the second pass produces. |
| 🧠 **C++ Implementation Nuance** | Building the transposed graph is just swapping every edge (u,v) to (v,u) — do this once upfront in O(V+E), don't recompute it inside the second DFS loop. |

```cpp
// Kosaraju's SCC — first pass fills finish-order stack
void dfs1(int u, vector<vector<int>>& adj, vector<bool>& vis, stack<int>& order) {
    vis[u] = true;
    for (int v : adj[u]) if (!vis[v]) dfs1(v, adj, vis, order);
    order.push(u); // push on finish, not on entry
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 1192 – Critical Connections in a Network | ☐ |
| 2 | LC 802 – Find Eventual Safe States | ☐ |
| 3 | GFG Strongly Connected Components | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 094 — Graph Revision

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | Choose BFS/DFS/DSU/Dijkstra/MST based on graph properties. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// BFS on Graph using Adjacency List
void bfs(int src, const vector<vector<int>>& adj, int V) {
    vector<bool> vis(V, false);
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        cout << u << " ";
        for (int v : adj[u]) {
            if (!vis[v]) {
                vis[v] = true;
                q.push(v);
            }
        }
    }
    cout << endl;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 847 – Shortest Path Visiting All Nodes | ☐ |
| 2 | LC 864 – Shortest Path to Get All Keys | ☐ |
| 3 | LC 1129 – Shortest Path with Alternating Colors | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---


---

# Phase 12 — Greedy Algorithms


### 📆 Day 095 — Greedy Fundamentals

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Greedy fundamentals: a greedy choice is 'safe' if it can be proven to be part of SOME optimal solution (the exchange argument: show any optimal solution can be transformed to include the greedy choice without getting worse). Always try to state this argument in one sentence before coding — if you can't, greedy might not work here. |
| 🧠 **What to Implement** | Implement Jump Game (can you reach the last index?) using the greedy 'track farthest reachable index' approach, and write the one-sentence exchange-argument justification in your notes. |
| 🧠 **C++ Implementation Nuance** | Greedy problems often LOOK like DP problems — the tell is usually 'yes/no reachability' or 'minimum/maximum count with no complex interdependency', versus DP's 'optimal value with overlapping subproblems'. |

```cpp
// Jump Game — greedy farthest-reachable tracking
bool canJump(vector<int>& nums) {
    int farthest = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (i > farthest) return false;
        farthest = max(farthest, i + nums[i]);
    }
    return true;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 455 – Assign Cookies | ☐ |
| 2 | LC 860 – Lemonade Change | ☐ |
| 3 | LC 1710 – Maximum Units on a Truck | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 096 — Interval Greedy

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Interval greedy (activity selection): sort intervals by END time (not start), then greedily pick every interval that starts after the last picked interval's end. This maximizes the count of non-overlapping intervals — sorting by end time is the crux of the proof. |
| 🧠 **What to Implement** | Implement Non-overlapping Intervals (minimum removals to make non-overlapping) by first solving 'max non-overlapping intervals you can keep' (sort by end, greedy select), then answer = total - kept. |
| 🧠 **C++ Implementation Nuance** | Sorting by START time instead of END time is the most common greedy-interval bug — it looks intuitive but doesn't actually maximize the count; always sort by end time for this pattern. |

```cpp
// Non-overlapping Intervals — sort by end time, greedy select
int eraseOverlapIntervals(vector<vector<int>>& iv) {
    sort(iv.begin(), iv.end(), [](auto& a, auto& b){ return a[1] < b[1]; });
    int count = 0, end = INT_MIN;
    for (auto& x : iv) {
        if (x[0] >= end) { count++; end = x[1]; } // keep
    }
    return iv.size() - count; // removed
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 435 – Non-overlapping Intervals | ☐ |
| 2 | LC 452 – Minimum Number of Arrows | ☐ |
| 3 | LC 646 – Maximum Length of Pair Chain | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 097 — Greedy with Heap

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Greedy with heap: when the greedy choice at each step is 'pick the current best option', a heap gives you that in O(log N) instead of O(N) rescanning. Huffman coding always merges the two smallest-frequency nodes — a direct min-heap application. |
| 🧠 **What to Implement** | Implement a simplified Huffman-coding-cost calculator: repeatedly pop the two smallest frequencies from a min-heap, push their sum back, and accumulate the sum as cost, until one node remains. |
| 🧠 **C++ Implementation Nuance** | The heap-based greedy pattern (repeatedly combine the two smallest) generalizes directly to Task Scheduler (Day 74) and Connect Ropes to Minimize Cost — recognize this as one reusable template. |

```cpp
// Minimum cost to connect ropes — greedy with min-heap
int connectRopes(vector<int>& ropes) {
    priority_queue<int, vector<int>, greater<int>> pq(ropes.begin(), ropes.end());
    int cost = 0;
    while (pq.size() > 1) {
        int a = pq.top(); pq.pop();
        int b = pq.top(); pq.pop();
        cost += a + b;
        pq.push(a + b);
    }
    return cost;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 630 – Course Schedule III | ☐ |
| 2 | LC 502 – IPO | ☐ |
| 3 | LC 1642 – Furthest Building You Can Reach | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 098 — Greedy and Sorting

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Greedy + sorting: many problems become greedy-solvable once sorted by the right key. Gas Station: if total gas >= total cost, an answer exists; the starting index is found in one greedy pass tracking running tank and resetting the candidate start whenever the tank goes negative. |
| 🧠 **What to Implement** | Implement Gas Station using the single-pass greedy (track running total and a separate overall total; reset start candidate + running total to 0 whenever running total dips negative). |
| 🧠 **C++ Implementation Nuance** | Prove to yourself why resetting to `i+1` works when running total goes negative: no station between the old start and i could have been a valid start either, so skipping all of them at once is safe (not just skipping one). |

```cpp
// Gas Station — single-pass greedy
int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int total = 0, tank = 0, start = 0;
    for (int i = 0; i < gas.size(); i++) {
        int diff = gas[i] - cost[i];
        total += diff; tank += diff;
        if (tank < 0) { start = i + 1; tank = 0; }
    }
    return total >= 0 ? start : -1;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 135 – Candy | ☐ |
| 2 | LC 406 – Queue Reconstruction by Height | ☐ |
| 3 | LC 881 – Boats to Save People | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 099 — Greedy + Prefix/Stack

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | jump reachability; gas station; monotonic decisions. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// Monotonic Decreasing Stack for Next Greater Element
vector<int> nextGreater(const vector<int>& nums) {
    int n = nums.size();
    vector<int> res(n, -1);
    stack<int> st; // stores indices
    for (int i = 0; i < n; i++) {
        while (!st.empty() && nums[i] > nums[st.top()]) {
            res[st.top()] = nums[i];
            st.pop();
        }
        st.push(i);
    }
    return res;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 55 – Jump Game | ☐ |
| 2 | LC 45 – Jump Game II | ☐ |
| 3 | LC 134 – Gas Station | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 100 — Greedy Revision

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Revision: for each greedy problem from Days 95-98, write the exchange-argument justification from memory (why the greedy choice is always safe) — if you can't reconstruct the argument, that's the real gap, not the code. |
| 🧠 **What to Implement** | Re-solve Jump Game II (minimum jumps, harder than Day 95's reachability version) and Gas Station without referencing old code. |
| 🧠 **C++ Implementation Nuance** | Cross-check: does every greedy solution you wrote actually have a correctness proof, or does it just happen to pass the given test cases? Flag any 'lucky greedy' in your mistake log for re-verification. |

```cpp
// Timed revision — no new template, apply Days 95-98 greedy patterns
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 763 – Partition Labels | ☐ |
| 2 | LC 122 – Best Time to Buy and Sell Stock II | ☐ |
| 3 | LC 316 – Remove Duplicate Letters | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---


---

# Phase 13 — Dynamic Programming Foundations & 1D/2D DP


### 📆 Day 101 — DP Mindset

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | state; transition; base case; order; memoization vs tabulation; space optimization. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// 1D DP: House Robber / Maximum Subarray non-adjacent
int rob(const vector<int>& nums) {
    if (nums.empty()) return 0;
    int prev1 = 0, prev2 = 0;
    for (int x : nums) {
        int temp = max(prev1, prev2 + x);
        prev2 = prev1;
        prev1 = temp;
    }
    return prev1;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 70 – Climbing Stairs | ☐ |
| 2 | LC 746 – Min Cost Climbing Stairs | ☐ |
| 3 | LC 509 – Fibonacci Number | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 102 — 1D DP

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | take/skip; house robber; rolling variables. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// 1D DP: House Robber / Maximum Subarray non-adjacent
int rob(const vector<int>& nums) {
    if (nums.empty()) return 0;
    int prev1 = 0, prev2 = 0;
    for (int x : nums) {
        int temp = max(prev1, prev2 + x);
        prev2 = prev1;
        prev1 = temp;
    }
    return prev1;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 198 – House Robber | ☐ |
| 2 | LC 213 – House Robber II | ☐ |
| 3 | LC 740 – Delete and Earn | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 103 — Grid DP

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | path counting; obstacles; min/max path; in-place optimization. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// 1D DP: House Robber / Maximum Subarray non-adjacent
int rob(const vector<int>& nums) {
    if (nums.empty()) return 0;
    int prev1 = 0, prev2 = 0;
    for (int x : nums) {
        int temp = max(prev1, prev2 + x);
        prev2 = prev1;
        prev1 = temp;
    }
    return prev1;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 62 – Unique Paths | ☐ |
| 2 | LC 63 – Unique Paths II | ☐ |
| 3 | LC 64 – Minimum Path Sum | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 104 — Grid DP Advanced

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | triangle; falling path; multi-state grid. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// 1D DP: House Robber / Maximum Subarray non-adjacent
int rob(const vector<int>& nums) {
    if (nums.empty()) return 0;
    int prev1 = 0, prev2 = 0;
    for (int x : nums) {
        int temp = max(prev1, prev2 + x);
        prev2 = prev1;
        prev1 = temp;
    }
    return prev1;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 120 – Triangle | ☐ |
| 2 | LC 931 – Minimum Falling Path Sum | ☐ |
| 3 | LC 221 – Maximal Square | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 105 — Subsequence DP I

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | LCS; matching; edit operations. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// 1D DP: House Robber / Maximum Subarray non-adjacent
int rob(const vector<int>& nums) {
    if (nums.empty()) return 0;
    int prev1 = 0, prev2 = 0;
    for (int x : nums) {
        int temp = max(prev1, prev2 + x);
        prev2 = prev1;
        prev1 = temp;
    }
    return prev1;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 1143 – Longest Common Subsequence | ☐ |
| 2 | LC 583 – Delete Operation for Two Strings | ☐ |
| 3 | LC 72 – Edit Distance | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 106 — Subsequence DP II

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | LIS; O(n²); patience sorting; reconstruction. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// 1D DP: House Robber / Maximum Subarray non-adjacent
int rob(const vector<int>& nums) {
    if (nums.empty()) return 0;
    int prev1 = 0, prev2 = 0;
    for (int x : nums) {
        int temp = max(prev1, prev2 + x);
        prev2 = prev1;
        prev1 = temp;
    }
    return prev1;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 300 – Longest Increasing Subsequence | ☐ |
| 2 | LC 673 – Number of Longest Increasing Subsequence | ☐ |
| 3 | LC 354 – Russian Doll Envelopes | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 107 — Knapsack 0/1

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | capacity state; reverse loop; subset sum; partition. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// 1D DP: House Robber / Maximum Subarray non-adjacent
int rob(const vector<int>& nums) {
    if (nums.empty()) return 0;
    int prev1 = 0, prev2 = 0;
    for (int x : nums) {
        int temp = max(prev1, prev2 + x);
        prev2 = prev1;
        prev1 = temp;
    }
    return prev1;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 416 – Partition Equal Subset Sum | ☐ |
| 2 | LC 494 – Target Sum | ☐ |
| 3 | LC 1049 – Last Stone Weight II | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 108 — Unbounded Knapsack

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | forward loop; coin change; complete knapsack. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// 1D DP: House Robber / Maximum Subarray non-adjacent
int rob(const vector<int>& nums) {
    if (nums.empty()) return 0;
    int prev1 = 0, prev2 = 0;
    for (int x : nums) {
        int temp = max(prev1, prev2 + x);
        prev2 = prev1;
        prev1 = temp;
    }
    return prev1;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 322 – Coin Change | ☐ |
| 2 | LC 518 – Coin Change II | ☐ |
| 3 | LC 279 – Perfect Squares | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 109 — String DP

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | word break; palindrome partition; decode ways. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// 1D DP: House Robber / Maximum Subarray non-adjacent
int rob(const vector<int>& nums) {
    if (nums.empty()) return 0;
    int prev1 = 0, prev2 = 0;
    for (int x : nums) {
        int temp = max(prev1, prev2 + x);
        prev2 = prev1;
        prev1 = temp;
    }
    return prev1;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 139 – Word Break | ☐ |
| 2 | LC 140 – Word Break II | ☐ |
| 3 | LC 91 – Decode Ways | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 110 — Stock DP

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | holding/not holding; cooldown; fees; transaction limit. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// 1D DP: House Robber / Maximum Subarray non-adjacent
int rob(const vector<int>& nums) {
    if (nums.empty()) return 0;
    int prev1 = 0, prev2 = 0;
    for (int x : nums) {
        int temp = max(prev1, prev2 + x);
        prev2 = prev1;
        prev1 = temp;
    }
    return prev1;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 121 – Best Time to Buy and Sell Stock | ☐ |
| 2 | LC 122 – Best Time to Buy and Sell Stock II | ☐ |
| 3 | LC 309 – Best Time to Buy and Sell Stock with Cooldown | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 111 — Interval DP

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | length loop; split point; burst balloons; matrix chain. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// 1D DP: House Robber / Maximum Subarray non-adjacent
int rob(const vector<int>& nums) {
    if (nums.empty()) return 0;
    int prev1 = 0, prev2 = 0;
    for (int x : nums) {
        int temp = max(prev1, prev2 + x);
        prev2 = prev1;
        prev1 = temp;
    }
    return prev1;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 312 – Burst Balloons | ☐ |
| 2 | LC 1039 – Minimum Score Triangulation of Polygon | ☐ |
| 3 | LC 132 – Palindrome Partitioning II | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 112 — Tree DP

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | subtree return tuple; include/exclude; rerooting concept. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int maxDepth(TreeNode* root) {
    if (!root) return 0;
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 337 – House Robber III | ☐ |
| 2 | LC 124 – Binary Tree Maximum Path Sum | ☐ |
| 3 | LC 968 – Binary Tree Cameras | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 113 — DAG DP

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | topological ordering + relaxation; longest path in DAG. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// 1D DP: House Robber / Maximum Subarray non-adjacent
int rob(const vector<int>& nums) {
    if (nums.empty()) return 0;
    int prev1 = 0, prev2 = 0;
    for (int x : nums) {
        int temp = max(prev1, prev2 + x);
        prev2 = prev1;
        prev1 = temp;
    }
    return prev1;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 329 – Longest Increasing Path in a Matrix | ☐ |
| 2 | LC 2050 – Parallel Courses III | ☐ |
| 3 | LC 787 – Cheapest Flights Within K Stops | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 114 — DP on DAG/Bitmask Intro

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | state graph; memoized DFS; bitmask state. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// 1D DP: House Robber / Maximum Subarray non-adjacent
int rob(const vector<int>& nums) {
    if (nums.empty()) return 0;
    int prev1 = 0, prev2 = 0;
    for (int x : nums) {
        int temp = max(prev1, prev2 + x);
        prev2 = prev1;
        prev1 = temp;
    }
    return prev1;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 847 – Shortest Path Visiting All Nodes | ☐ |
| 2 | LC 1494 – Parallel Courses II | ☐ |
| 3 | LC 1125 – Smallest Sufficient Team | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 115 — DP Revision I

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | 1D, grid, subsequence, knapsack mixed set. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// 1D DP: House Robber / Maximum Subarray non-adjacent
int rob(const vector<int>& nums) {
    if (nums.empty()) return 0;
    int prev1 = 0, prev2 = 0;
    for (int x : nums) {
        int temp = max(prev1, prev2 + x);
        prev2 = prev1;
        prev1 = temp;
    }
    return prev1;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 10 – Regular Expression Matching | ☐ |
| 2 | LC 44 – Wildcard Matching | ☐ |
| 3 | LC 115 – Distinct Subsequences | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 116 — DP Revision II

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | Hard mixed DP; optimize dimensions and transitions. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// 1D DP: House Robber / Maximum Subarray non-adjacent
int rob(const vector<int>& nums) {
    if (nums.empty()) return 0;
    int prev1 = 0, prev2 = 0;
    for (int x : nums) {
        int temp = max(prev1, prev2 + x);
        prev2 = prev1;
        prev1 = temp;
    }
    return prev1;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 123 – Best Time to Buy and Sell Stock III | ☐ |
| 2 | LC 188 – Best Time to Buy and Sell Stock IV | ☐ |
| 3 | LC 887 – Super Egg Drop | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---


---

# Phase 14 — Trie, Segment Tree, Fenwick & Advanced Strings


### 📆 Day 117 — Trie Basics

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Trie (prefix tree): each node holds an array/map of children (one per character) and an isEnd flag. Insert/search/startsWith are all O(L) where L is the string length, independent of how many words are stored. |
| 🧠 **What to Implement** | Implement a Trie from scratch with insert(word), search(word), and startsWith(prefix) using an array<TrieNode*, 26> for children — this exact structure is reused in Days 118-119. |
| 🧠 **C++ Implementation Nuance** | Use raw TrieNode* children arrays (not unordered_map<char,TrieNode*>) for the alphabet-only case — array indexing is faster and simpler than hashing a single character. |

```cpp
// Trie — insert/search/startsWith
struct TrieNode { TrieNode* child[26] = {}; bool isEnd = false; };
class Trie {
    TrieNode* root = new TrieNode();
public:
    void insert(string word) {
        TrieNode* node = root;
        for (char c : word) {
            if (!node->child[c-'a']) node->child[c-'a'] = new TrieNode();
            node = node->child[c-'a'];
        }
        node->isEnd = true;
    }
};
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 208 – Implement Trie | ☐ |
| 2 | LC 211 – Design Add and Search Words Data Structure | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 118 — Trie + Backtracking

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Trie + backtracking (Word Search II): build a trie of all target words first, then DFS the grid while simultaneously walking the trie — this prunes search paths that can't possibly match any word, far faster than searching each word independently. |
| 🧠 **What to Implement** | Implement Word Search II: build a trie from the word list, then DFS each grid cell, descending into the trie alongside the grid traversal, and mark isEnd words as found. |
| 🧠 **C++ Implementation Nuance** | Add the ORIGINAL WORD STRING (not just a bool) at the trie's terminal node — this avoids having to separately reconstruct the found word from the DFS path. |

```cpp
// Word Search II skeleton — trie + grid DFS
struct TrieNode { TrieNode* child[26] = {}; string word = ""; };
void dfs(vector<vector<char>>& board, int r, int c, TrieNode* node, vector<string>& res) {
    char ch = board[r][c];
    if (ch == '#' || !node->child[ch-'a']) return;
    node = node->child[ch-'a'];
    if (!node->word.empty()) { res.push_back(node->word); node->word = ""; }
    board[r][c] = '#';
    // recurse 4 directions with bounds check, then board[r][c] = ch; to restore
    board[r][c] = ch;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 212 – Word Search II | ☐ |
| 2 | LC 648 – Replace Words | ☐ |
| 3 | LC 472 – Concatenated Words | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 119 — Binary Trie

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Binary trie (bitwise trie): insert each number as a fixed-length (e.g. 32-bit) sequence of 0/1 bits into a trie with 2 children per node. Maximum XOR pair: for each number, greedily walk the trie choosing the OPPOSITE bit at each level when possible, to maximize the XOR result bit by bit. |
| 🧠 **What to Implement** | Implement Maximum XOR of Two Numbers in an Array using a binary trie built from the 32-bit representation of each number, then for each number query the trie greedily choosing opposite bits. |
| 🧠 **C++ Implementation Nuance** | Process bits from MOST significant to LEAST significant (bit 31 down to bit 0) — processing in the wrong order breaks the greedy 'maximize higher bits first' logic that makes this correct. |

```cpp
// Binary Trie — insert and greedy-XOR query (bit 31 down to 0)
struct BitNode { BitNode* child[2] = {}; };
void insert(BitNode* root, int num) {
    BitNode* node = root;
    for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;
        if (!node->child[bit]) node->child[bit] = new BitNode();
        node = node->child[bit];
    }
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 421 – Maximum XOR of Two Numbers in an Array | ☐ |
| 2 | LC 1707 – Maximum XOR With an Element From Array | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 120 — Segment Tree Basics

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | build/query/update; range sum/min/max; 4N representation. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int maxDepth(TreeNode* root) {
    if (!root) return 0;
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 307 – Range Sum Query — Mutable | ☐ |
| 2 | GFG Range Minimum Query | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 121 — Lazy Segment Tree

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | deferred range updates; propagation; invariants. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int maxDepth(TreeNode* root) {
    if (!root) return 0;
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | GFG Range Minimum Query with Lazy Propagation | ☐ |
| 2 | LC 315 – Count of Smaller Numbers After Self | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 122 — Fenwick Tree

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | lowbit; prefix sum; point update; coordinate compression. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int maxDepth(TreeNode* root) {
    if (!root) return 0;
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 307 – Range Sum Query — Mutable (BIT) | ☐ |
| 2 | LC 315 – Count of Smaller Numbers After Self | ☐ |
| 3 | LC 493 – Reverse Pairs | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 123 — Sparse Table + RMQ

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Sparse Table (for static Range Minimum Query): precompute sparse[k][i] = min of the 2^k-length range starting at i, built in O(N log N). Query any range [l,r] in O(1) by combining two overlapping precomputed ranges of size 2^k where 2^k <= (r-l+1) — this works for idempotent operations like min/max/gcd (overlap doesn't break correctness). |
| 🧠 **What to Implement** | Implement sparse table construction (bottom-up: sparse[k][i] = min(sparse[k-1][i], sparse[k-1][i + 2^(k-1)])) and O(1) range-min queries using precomputed log2 values. |
| 🧠 **C++ Implementation Nuance** | Precompute log2[1..N] in O(N) upfront (log2[i] = log2[i/2] + 1) instead of calling log2() per query — repeated floating-point log calls are slower and can have precision bugs at powers of 2. |

```cpp
// Sparse Table — O(N log N) build, O(1) range-min query
vector<vector<int>> buildSparse(vector<int>& arr) {
    int n = arr.size(), LOG = log2(n) + 1;
    vector<vector<int>> sp(LOG, vector<int>(n));
    sp[0] = arr;
    for (int k = 1; k < LOG; k++)
        for (int i = 0; i + (1<<k) <= n; i++)
            sp[k][i] = min(sp[k-1][i], sp[k-1][i + (1<<(k-1))]);
    return sp;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | GFG Range Minimum Query using Sparse Table | ☐ |
| 2 | LC 239 – Sliding Window Maximum (comparison of structures) | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 124 — KMP

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | KMP (Knuth-Morris-Pratt) pattern matching: precompute the LPS (Longest Proper Prefix which is also Suffix) array for the pattern in O(M). During matching, on a mismatch, use the LPS array to skip re-comparing characters you already know match — giving O(N+M) total instead of naive O(N*M). |
| 🧠 **What to Implement** | Implement the LPS array construction first (the hard part — it's itself a mini string-matching-against-itself problem), then the main matching loop that uses it. |
| 🧠 **C++ Implementation Nuance** | The LPS array construction and the main search loop share nearly identical logic (both use a 'fall back using LPS on mismatch' pattern) — write the LPS builder as a standalone reusable function. |

```cpp
// KMP — build LPS array (Longest Prefix-Suffix)
vector<int> buildLPS(string& pat) {
    int m = pat.size();
    vector<int> lps(m, 0);
    int len = 0, i = 1;
    while (i < m) {
        if (pat[i] == pat[len]) lps[i++] = ++len;
        else if (len) len = lps[len-1];
        else lps[i++] = 0;
    }
    return lps;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 28 – Find the Index of the First Occurrence in a String | ☐ |
| 2 | LC 214 – Shortest Palindrome | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 125 — Z Function + Rabin-Karp

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Z-function: Z[i] = length of the longest substring starting at i that matches a prefix of the string — computed in O(N) using a sliding [L,R] window of the rightmost known-matching prefix. Rabin-Karp uses polynomial rolling hash to compare pattern hash against every window hash in O(1) per shift (O(N+M) average, with occasional false-positive verification). |
| 🧠 **What to Implement** | Implement the Z-function array, then use it for pattern matching by forming s = pattern + '#' + text and looking for Z[i] == pattern.length(). |
| 🧠 **C++ Implementation Nuance** | Rabin-Karp needs modular arithmetic for the rolling hash update (removing the leaving character's contribution and adding the new one) — get the modular subtraction right, it can go negative in C++ and needs `+ mod) % mod`. |

```cpp
// Z-function — O(N) prefix-match-length array
vector<int> zFunction(string& s) {
    int n = s.size();
    vector<int> z(n, 0);
    int l = 0, r = 0;
    for (int i = 1; i < n; i++) {
        if (i < r) z[i] = min(r - i, z[i - l]);
        while (i + z[i] < n && s[z[i]] == s[i + z[i]]) z[i]++;
        if (i + z[i] > r) { l = i; r = i + z[i]; }
    }
    return z;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 686 – Repeated String Match | ☐ |
| 2 | GFG Z Algorithm | ☐ |
| 3 | GFG Rabin-Karp | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 126 — Manacher + String Hashing

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Manacher's algorithm finds the longest palindromic substring in O(N) by transforming the string with separators (e.g. '#a#b#a#') to handle even/odd length uniformly, then using a mirror trick similar to Z-function to avoid re-expanding already-known palindrome radii. |
| 🧠 **What to Implement** | Implement Manacher's algorithm and compare its O(N) runtime conceptually against Day 23's O(N^2) expand-around-center for the same Longest Palindromic Substring problem. |
| 🧠 **C++ Implementation Nuance** | Remember to map the result index/radius back from the transformed string (with '#' separators) to the original string's indices — this off-by-one/scaling mapping is the most common bug in Manacher's. |

```cpp
// Manacher's — O(N) longest palindromic substring (simplified)
string longestPalindrome(string s) {
    string t = "#";
    for (char c : s) { t += c; t += '#'; }
    int n = t.size();
    vector<int> p(n, 0);
    int center = 0, right = 0, maxLen = 0, centerIdx = 0;
    for (int i = 0; i < n; i++) {
        if (i < right) p[i] = min(right - i, p[2*center - i]);
        while (i-p[i]-1 >= 0 && i+p[i]+1 < n && t[i-p[i]-1] == t[i+p[i]+1]) p[i]++;
        if (i + p[i] > right) { center = i; right = i + p[i]; }
        if (p[i] > maxLen) { maxLen = p[i]; centerIdx = i; }
    }
    return s.substr((centerIdx - maxLen) / 2, maxLen);
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 5 – Longest Palindromic Substring | ☐ |
| 2 | LC 647 – Palindromic Substrings | ☐ |
| 3 | LC 1044 – Longest Duplicate Substring | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---


---

# Phase 15 — Advanced Problem-Solving Patterns


### 📆 Day 127 — Meet in the Middle

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Meet in the middle: split the input into two halves, brute-force/enumerate all subset results for each half separately (2^(N/2) each instead of 2^N total), then combine results across halves (often via sorting + two-pointer or binary search). Useful when N is too large for full subset enumeration (N up to ~40) but too small-structured for DP. |
| 🧠 **What to Implement** | Implement 'Closest Subset Sum' or 'Partition into two subsets with sums as close as possible' using meet-in-the-middle: enumerate all subset sums of each half, sort one half, then binary search the other half against a target. |
| 🧠 **C++ Implementation Nuance** | The complexity win comes specifically from 2*2^(N/2) being much smaller than 2^N for N around 30-40 — verify this is actually the right tool by checking N's range in the problem constraints before reaching for it. |

```cpp
// Meet in the middle — enumerate subset sums of a half
void enumerateSums(vector<int>& arr, int idx, int end, long sum, vector<long>& sums) {
    if (idx == end) { sums.push_back(sum); return; }
    enumerateSums(arr, idx+1, end, sum, sums); // exclude
    enumerateSums(arr, idx+1, end, sum + arr[idx], sums); // include
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 1755 – Closest Subsequence Sum | ☐ |
| 2 | LC 2035 – Partition Array Into Two Arrays to Minimize Sum Difference | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 128 — Bitmask DP

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | dp[mask]; submask iteration; assignment states. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// 1D DP: House Robber / Maximum Subarray non-adjacent
int rob(const vector<int>& nums) {
    if (nums.empty()) return 0;
    int prev1 = 0, prev2 = 0;
    for (int x : nums) {
        int temp = max(prev1, prev2 + x);
        prev2 = prev1;
        prev1 = temp;
    }
    return prev1;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 698 – Partition to K Equal Sum Subsets | ☐ |
| 2 | LC 847 – Shortest Path Visiting All Nodes | ☐ |
| 3 | LC 1125 – Smallest Sufficient Team | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 129 — Digit DP

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | position/tight/started/state; counting numbers. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// 1D DP: House Robber / Maximum Subarray non-adjacent
int rob(const vector<int>& nums) {
    if (nums.empty()) return 0;
    int prev1 = 0, prev2 = 0;
    for (int x : nums) {
        int temp = max(prev1, prev2 + x);
        prev2 = prev1;
        prev1 = temp;
    }
    return prev1;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 233 – Number of Digit One | ☐ |
| 2 | LC 600 – Non-negative Integers without Consecutive Ones | ☐ |
| 3 | LC 902 – Numbers At Most N Given Digit Set | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 130 — Rerooting / Tree Techniques

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | reroot DP; subtree sizes; distance sums. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int maxDepth(TreeNode* root) {
    if (!root) return 0;
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 834 – Sum of Distances in Tree | ☐ |
| 2 | LC 310 – Minimum Height Trees | ☐ |
| 3 | LC 1245 – Tree Diameter | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 131 — Sweep Line + Coordinate Compression

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Sweep line + coordinate compression: process events (like interval starts/ends, or point x-coordinates) in sorted order, maintaining running state (like active-interval count). Coordinate compression maps large/sparse coordinate values to small dense indices (0..K-1) so you can use arrays instead of maps for range operations. |
| 🧠 **What to Implement** | Implement 'The Skyline Problem' or a simpler 'count of overlapping intervals at each point' using sweep line: create +1 events at starts and -1 events at ends, sort all events by x-coordinate, and sweep left to right tracking a running sum. |
| 🧠 **C++ Implementation Nuance** | When a start-event and an end-event share the same x-coordinate, decide the correct tie-breaking order for the specific problem (e.g. does an interval ending at x still count as active at x?) — this is the most common sweep-line bug. |

```cpp
// Sweep line — count max overlapping intervals
int maxOverlap(vector<vector<int>>& iv) {
    vector<pair<int,int>> events; // {x, +1 or -1}
    for (auto& x : iv) { events.push_back({x[0], 1}); events.push_back({x[1], -1}); }
    sort(events.begin(), events.end());
    int curr = 0, maxC = 0;
    for (auto& [x, delta] : events) { curr += delta; maxC = max(maxC, curr); }
    return maxC;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 218 – The Skyline Problem | ☐ |
| 2 | LC 850 – Rectangle Area II | ☐ |
| 3 | LC 732 – My Calendar III | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 132 — Difference Arrays + Imos

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Difference arrays (Imos method): to apply +val to every index in range [l,r] in O(1), do diff[l] += val and diff[r+1] -= val; after all updates, take a prefix sum of diff[] to get the final array — turns O(N) per range-update into O(1) per update + O(N) final pass. |
| 🧠 **What to Implement** | Implement 'Range Addition' (apply K range-increment operations, then return the final array) using the difference-array technique instead of naively looping over each range. |
| 🧠 **C++ Implementation Nuance** | Always size the difference array as N+1 (not N) to safely handle diff[r+1] when r == N-1 without an out-of-bounds write. |

```cpp
// Difference Array — O(1) range update, O(N) final prefix sum
vector<int> getModifiedArray(int n, vector<vector<int>>& updates) {
    vector<int> diff(n + 1, 0);
    for (auto& u : updates) { diff[u[0]] += u[2]; diff[u[1]+1] -= u[2]; }
    vector<int> res(n);
    res[0] = diff[0];
    for (int i = 1; i < n; i++) res[i] = res[i-1] + diff[i];
    return res;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 1094 – Car Pooling | ☐ |
| 2 | LC 1109 – Corporate Flight Bookings | ☐ |
| 3 | LC 253 – Meeting Rooms II | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 133 — Randomization & Reservoir Sampling

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Randomized algorithms: Quickselect uses a random pivot to find the Kth smallest/largest in expected O(N) (partition like quicksort, but only recurse into the side containing the target index). Reservoir Sampling picks a uniformly random element from a stream of unknown length in O(1) space: keep element i with probability 1/i. |
| 🧠 **What to Implement** | Implement Quickselect for 'Kth Largest Element in an Array' (revisit Day 71's heap solution and compare average-case complexity), then implement Reservoir Sampling for 'Random Pick Index' from a stream. |
| 🧠 **C++ Implementation Nuance** | Quickselect's worst case is O(N^2) on adversarial input if the pivot is chosen poorly — always pick a RANDOM pivot index (not always first/last element) to make worst-case behavior statistically unlikely. |

```cpp
// Quickselect — expected O(N), random pivot
int quickSelect(vector<int>& nums, int l, int r, int k) {
    if (l == r) return nums[l];
    int pivotIdx = l + rand() % (r - l + 1);
    swap(nums[pivotIdx], nums[r]);
    int pivot = nums[r], i = l;
    for (int j = l; j < r; j++) if (nums[j] > pivot) swap(nums[i++], nums[j]);
    swap(nums[i], nums[r]);
    if (i == k) return nums[i];
    return i < k ? quickSelect(nums, i+1, r, k) : quickSelect(nums, l, i-1, k);
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 384 – Shuffle an Array | ☐ |
| 2 | LC 398 – Random Pick Index | ☐ |
| 3 | LC 528 – Random Pick with Weight | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 134 — Design Data Structures I

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Design Data Structures I: Time-Based Key-Value Store needs a map from key -> vector of (timestamp, value) pairs, with binary search on timestamps for get(key, timestamp) to find the latest value at or before that time. |
| 🧠 **What to Implement** | Implement TimeMap: set(key, value, timestamp) appends to a per-key sorted-by-timestamp vector; get(key, timestamp) binary searches (upper_bound) for the right entry. |
| 🧠 **C++ Implementation Nuance** | Timestamps are guaranteed strictly increasing per key in this problem, so you can just push_back without re-sorting — but the binary search for get() still needs to handle 'no entry at or before this timestamp' (return empty string). |

```cpp
// Time-Based Key-Value Store — map + per-key binary search
class TimeMap {
    unordered_map<string, vector<pair<int,string>>> store;
public:
    void set(string key, string value, int ts) { store[key].push_back({ts, value}); }
    string get(string key, int ts) {
        auto& v = store[key];
        int lo = 0, hi = v.size() - 1, res = -1;
        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            if (v[mid].first <= ts) { res = mid; lo = mid + 1; }
            else hi = mid - 1;
        }
        return res == -1 ? "" : v[res].second;
    }
};
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 146 – LRU Cache | ☐ |
| 2 | LC 460 – LFU Cache | ☐ |
| 3 | LC 432 – All O(1) Data Structure | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 135 — Design Data Structures II

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Design Data Structures II: Snapshot Array needs versioned storage — instead of copying the whole array on snap(), store per-index a list of (snap_id, value) pairs and binary search on get(index, snap_id). Median from a stream of numbers being inserted/deleted needs balancing structures (extends Day 73's two-heap idea). |
| 🧠 **What to Implement** | Implement Snapshot Array: snap() just increments a counter (O(1)), set(index, val) appends (snapId, val) to that index's history, get(index, snapId) binary searches that index's history. |
| 🧠 **C++ Implementation Nuance** | Don't actually copy the array on every snap() call (that's the naive O(N) per snap approach) — the whole point of this design problem is achieving O(1) snap() via lazy per-index versioning. |

```cpp
// Snapshot Array — lazy per-index versioning
class SnapshotArray {
    vector<vector<pair<int,int>>> history; // per index: {snapId, value}
    int snapId = 0;
public:
    SnapshotArray(int length) : history(length, {{0, 0}}) {}
    void set(int index, int val) { history[index].push_back({snapId, val}); }
    int snap() { return snapId++; }
    int get(int index, int snap_id) {
        auto& h = history[index];
        int lo = 0, hi = h.size() - 1, res = 0;
        while (lo <= hi) {
            int mid = (lo+hi)/2;
            if (h[mid].first <= snap_id) { res = mid; lo = mid+1; }
            else hi = mid-1;
        }
        return h[res].second;
    }
};
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 981 – Time Based Key-Value Store | ☐ |
| 2 | LC 895 – Maximum Frequency Stack | ☐ |
| 3 | LC 380 – Insert Delete GetRandom O(1) | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 136 — Advanced Mixed Patterns

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Advanced mixed patterns: today's problems deliberately combine 2+ techniques from Days 117-135 (e.g. trie + DP, sparse table + greedy) — the skill being tested is recognizing WHICH combination applies, not any single new algorithm. |
| 🧠 **What to Implement** | Before coding each problem, write one line naming which 2 patterns from this phase you think apply and why, THEN start coding — this metacognitive step is the actual point of a 'mixed' day. |
| 🧠 **C++ Implementation Nuance** | If a problem takes more than 15 minutes to even identify the right combination of patterns, that's valuable mistake-log material — advanced pattern-recognition gaps show up here first, not in easier problems. |

```cpp
// Mixed practice — identify and combine patterns from Days 117-135 before coding
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 149 – Max Points on a Line | ☐ |
| 2 | LC 10 – Regular Expression Matching | ☐ |
| 3 | LC 239 – Sliding Window Maximum | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---


---

# Phase 16 — Topic Revision, Interviews & Mocks


### 📆 Day 137 — Arrays/Hashing Revision

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Revision: re-derive from memory the core invariant of every pattern from Phase 1-2 (prefix sum, Kadane, string hashing, frequency counting) — write one sentence per pattern before opening any problem. |
| 🧠 **What to Implement** | Re-solve 3-4 representative problems from arrays/hashing (Days 10-24) cold, without referencing old solutions, under a combined time limit. |
| 🧠 **C++ Implementation Nuance** | Flag in your mistake log any pattern where you needed more than 60 seconds to recall the core idea — that's the one to re-study before moving to the next revision block. |

```cpp
// Timed revision block — Arrays/Hashing (Days 10-24)
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 1 – Two Sum | ☐ |
| 2 | LC 49 – Group Anagrams | ☐ |
| 3 | LC 128 – Longest Consecutive Sequence | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 138 — Two Pointers/Sliding Window Revision

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | Fixed/variable window; at-most/exactly; sorted pointers. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// Two Pointers Opposite Direction Template
int maxArea(const vector<int>& height) {
    int left = 0, right = (int)height.size() - 1, maxWater = 0;
    while (left < right) {
        int h = min(height[left], height[right]);
        maxWater = max(maxWater, (right - left) * h);
        if (height[left] < height[right]) left++;
        else right--;
    }
    return maxWater;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 15 – 3Sum | ☐ |
| 2 | LC 76 – Minimum Window Substring | ☐ |
| 3 | LC 239 – Sliding Window Maximum | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 139 — Binary Search/Sorting Revision

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | Boundary correctness; answer search; comparator and partition. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// Binary Search on Answer Template
bool isValid(int mid) { return mid >= 10; /* feasibility check */ }

int binarySearchOnAnswer(int low, int high) {
    int ans = high;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (isValid(mid)) {
            ans = mid;
            high = mid - 1; // Try smaller valid
        } else {
            low = mid + 1;
        }
    }
    return ans;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 33 – Search in Rotated Sorted Array | ☐ |
| 2 | LC 875 – Koko Eating Bananas | ☐ |
| 3 | LC 4 – Median of Two Sorted Arrays | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 140 — Recursion/Backtracking Revision

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Revision: re-derive the choose/explore/unchoose backtracking template and the pruning conditions for N-Queens, Word Search, and Palindrome Partitioning from memory. |
| 🧠 **What to Implement** | Re-solve Combination Sum II or Subsets II (with duplicates) cold — these test whether you actually internalized the 'skip duplicates at the same recursion level' trick, not just the base template. |
| 🧠 **C++ Implementation Nuance** | Note which backtracking problems you solve fastest vs slowest — slowest ones indicate the pruning condition, not the template, is the actual gap. |

```cpp
// Timed revision block — Recursion/Backtracking (Days 37-44)
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 39 – Combination Sum | ☐ |
| 2 | LC 51 – N-Queens | ☐ |
| 3 | LC 79 – Word Search | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 141 — Linked List/Stack Revision

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | Pointer invariants; monotonic stack; expression parsing. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* curr = head;
    while (curr) {
        ListNode* nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    return prev;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 25 – Reverse Nodes in k-Group | ☐ |
| 2 | LC 84 – Largest Rectangle in Histogram | ☐ |
| 3 | LC 146 – LRU Cache | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 142 — Trees/BST Revision

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | Traversal, path, construction, BST invariant. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int maxDepth(TreeNode* root) {
    if (!root) return 0;
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 124 – Binary Tree Maximum Path Sum | ☐ |
| 2 | LC 236 – Lowest Common Ancestor | ☐ |
| 3 | LC 230 – Kth Smallest Element in a BST | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 143 — Heap/Greedy Revision

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Revision: re-derive the heap-based greedy template (repeatedly combine/select smallest or largest) and the interval-greedy 'sort by end time' proof from memory. |
| 🧠 **What to Implement** | Re-solve Kth Largest Element and one interval-greedy problem (Non-overlapping Intervals or Gas Station) cold, then compare your approach against the Day 71-100 code. |
| 🧠 **C++ Implementation Nuance** | For every greedy solution, explicitly ask 'have I actually proven this is optimal, or does it just pass examples' — write the answer in your mistake log. |

```cpp
// Timed revision block — Heap/Greedy (Days 71-100)
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 295 – Find Median from Data Stream | ☐ |
| 2 | LC 630 – Course Schedule III | ☐ |
| 3 | LC 135 – Candy | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 144 — Graph BFS/DFS Revision

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | Representation, visited, components, topo. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// BFS on Graph using Adjacency List
void bfs(int src, const vector<vector<int>>& adj, int V) {
    vector<bool> vis(V, false);
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        cout << u << " ";
        for (int v : adj[u]) {
            if (!vis[v]) {
                vis[v] = true;
                q.push(v);
            }
        }
    }
    cout << endl;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 200 – Number of Islands | ☐ |
| 2 | LC 207 – Course Schedule | ☐ |
| 3 | LC 127 – Word Ladder | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 145 — Shortest Path/MST/DSU Revision

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | Choose Dijkstra/Bellman/Floyd/Prim/Kruskal/DSU. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// BFS on Graph using Adjacency List
void bfs(int src, const vector<vector<int>>& adj, int V) {
    vector<bool> vis(V, false);
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        cout << u << " ";
        for (int v : adj[u]) {
            if (!vis[v]) {
                vis[v] = true;
                q.push(v);
            }
        }
    }
    cout << endl;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 743 – Network Delay Time | ☐ |
| 2 | LC 1584 – Min Cost to Connect All Points | ☐ |
| 3 | LC 1192 – Critical Connections in a Network | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 146 — DP Revision I

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | 1D, grid, subsequence, knapsack. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// 1D DP: House Robber / Maximum Subarray non-adjacent
int rob(const vector<int>& nums) {
    if (nums.empty()) return 0;
    int prev1 = 0, prev2 = 0;
    for (int x : nums) {
        int temp = max(prev1, prev2 + x);
        prev2 = prev1;
        prev1 = temp;
    }
    return prev1;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 198 – House Robber | ☐ |
| 2 | LC 1143 – Longest Common Subsequence | ☐ |
| 3 | LC 322 – Coin Change | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 147 — DP Revision II

| Section | Details |
|:--------|:--------|
| 🧠 **Mental Model & Intuition** | Stocks, interval, tree, bitmask and hard DP. |
| 🧠 **Core Invariant & Complexity** | Verify time complexity against constraints. Aim for minimal auxiliary space. |
| 🧠 **C++ Implementation Nuance** | Avoid dangling pointers/references. Verify boundary and null conditions. |

```cpp
// 1D DP: House Robber / Maximum Subarray non-adjacent
int rob(const vector<int>& nums) {
    if (nums.empty()) return 0;
    int prev1 = 0, prev2 = 0;
    for (int x : nums) {
        int temp = max(prev1, prev2 + x);
        prev2 = prev1;
        prev1 = temp;
    }
    return prev1;
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 312 – Burst Balloons | ☐ |
| 2 | LC 123 – Best Time to Buy and Sell Stock III | ☐ |
| 3 | LC 887 – Super Egg Drop | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 148 — Trie/Advanced DS/String Revision

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Revision: re-derive Trie insert/search, KMP's LPS-array logic, and the sparse-table O(1) query trick from memory — these are the three hardest-to-retain patterns in Phase 14. |
| 🧠 **What to Implement** | Re-solve one Trie problem and re-derive the KMP LPS array construction cold (this is usually the single hardest thing to remember in the entire roadmap). |
| 🧠 **C++ Implementation Nuance** | If KMP's LPS logic doesn't come back within 5 minutes, that's expected — it's genuinely one of the harder algorithms here; re-watch a trusted explanation rather than forcing recall, then re-attempt. |

```cpp
// Timed revision block — Trie/Advanced DS/String Matching (Days 117-135)
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 212 – Word Search II | ☐ |
| 2 | LC 307 – Range Sum Query — Mutable | ☐ |
| 3 | LC 28 – Find the Index of the First Occurrence in a String | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 149 — Mock Interview I

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Mock Interview I: simulate a real 45-60 minute technical interview. Pick 1-2 medium problems you haven't seen from this roadmap (or from Top Interview 150), set a timer, and talk through your approach OUT LOUD as if to an interviewer before writing code. |
| 🧠 **What to Implement** | Follow the full interview flow: clarify constraints and edge cases first, state a brute force, explain the optimization, THEN code — don't skip straight to typing. |
| 🧠 **C++ Implementation Nuance** | Record (mentally or in writing) where you got stuck or rushed — the goal of a mock is surfacing communication and pacing gaps, not just correctness. |

```cpp
// Mock Interview I — 45-60 min timed, think-aloud protocol, 1-2 unseen medium problems
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 238 – Product of Array Except Self | ☐ |
| 2 | LC 102 – Binary Tree Level Order Traversal | ☐ |
| 3 | LC 743 – Network Delay Time | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 150 — Mock Interview II

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Mock Interview II: same format as Day 149 but push toward a hard problem or a design question (LRU/LFU-style) — these test whether you can structure an ambiguous problem, not just execute a known pattern. |
| 🧠 **What to Implement** | If given a design question, spend the first 10 minutes on API design and complexity requirements before writing any code — interviewers weight this heavily. |
| 🧠 **C++ Implementation Nuance** | Compare today's pacing against Day 149 — are you clarifying requirements faster? Getting to a working brute force faster? Track this trend across mocks. |

```cpp
// Mock Interview II — design-question or hard-problem focus, 45-60 min timed
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 56 – Merge Intervals | ☐ |
| 2 | LC 146 – LRU Cache | ☐ |
| 3 | LC 300 – Longest Increasing Subsequence | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 151 — Mock Interview III

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Mock Interview III: simulate a full 2-round day (2 back-to-back 45-minute sessions with a short break) to build stamina for real interview days, which are rarely just one round. |
| 🧠 **What to Implement** | Pick problems spanning two different phases (e.g. one graph problem, one DP problem) to test breadth, not just depth in one area. |
| 🧠 **C++ Implementation Nuance** | After both rounds, write a short retrospective: which phase's patterns felt weakest under live pressure — that becomes your focus for Day 152. |

```cpp
// Mock Interview III — two back-to-back 45-min rounds, mixed topics
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 33 – Search in Rotated Sorted Array | ☐ |
| 2 | LC 200 – Number of Islands | ☐ |
| 3 | LC 322 – Coin Change | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 152 — Weak Topic Cleanup

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Weak Topic Cleanup: this is not generic — pull your ACTUAL mistake log entries from Days 1-151 and specifically re-solve every problem that's marked 'not yet internalized' or that took multiple attempts. |
| 🧠 **What to Implement** | For each weak topic identified across the mocks (Days 149-151) and mistake log, re-read that topic's Day entry theory notes before re-attempting the problem — don't just retry blind. |
| 🧠 **C++ Implementation Nuance** | Prioritize by interview-frequency: LRU/LFU design, KMP/pattern matching, and DP state-definition are the most commonly weak areas for most learners — check these first if unsure where to start. |

```cpp
// Weak Topic Cleanup — pull from personal mistake log across Days 1-151, prioritize highest-frequency interview topics
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | Personal mistake-log problems | ☐ |
| 2 | one problem from each weak phase | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 153 — C++ STL Reimplementation

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | C++ STL Reimplementation: build simplified versions of vector (dynamic array with resize-on-full), a stack (array or linked-list backed), and a basic hash map (array of buckets + linked list for collision chaining) — this cements WHY the STL versions have the complexity guarantees they do. |
| 🧠 **What to Implement** | Implement a MinStack (O(1) push/pop/getMin) from scratch using a second stack tracking running minimums, then a basic dynamic array class with manual resize-and-copy on capacity overflow. |
| 🧠 **C++ Implementation Nuance** | For the dynamic array resize, double the capacity (not +1 each time) when full — this is what gives amortized O(1) push_back instead of O(N) per insert. |

```cpp
// MinStack — O(1) push/pop/getMin via auxiliary min-tracking stack
class MinStack {
    stack<int> st, minSt;
public:
    void push(int val) {
        st.push(val);
        minSt.push(minSt.empty() ? val : min(val, minSt.top()));
    }
    void pop() { st.pop(); minSt.pop(); }
    int top() { return st.top(); }
    int getMin() { return minSt.top(); }
};
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 155 – Min Stack | ☐ |
| 2 | LC 232 – Implement Queue using Stacks | ☐ |
| 3 | LC 703 – Kth Largest Element in a Stream | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 154 — Complexity and Proof Revision

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Complexity and Proof Revision: for each of today's 3 problems, before coding, write the Big-O of your intended solution AND a one-sentence correctness justification (why does this approach give the right answer, not just a plausible one). |
| 🧠 **What to Implement** | Re-attempt Trapping Rain Water using BOTH the two-pointer O(1)-space approach and the prefix-max/suffix-max O(N)-space approach — compare and understand the tradeoff, don't just memorize one. |
| 🧠 **C++ Implementation Nuance** | This is the day to catch 'I know the code but not why it works' gaps — if you can write the code but not the correctness argument, treat that as unfinished, not done. |

```cpp
// Revision — verify Big-O and correctness proof before coding each solution
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 42 – Trapping Rain Water | ☐ |
| 2 | LC 76 – Minimum Window Substring | ☐ |
| 3 | LC 124 – Binary Tree Maximum Path Sum | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 155 — Final Pattern Recognition Test

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Final Pattern Recognition Test: read each problem statement and, WITHOUT coding, first write down which pattern(s) apply and why — only start coding after you've committed to an approach on paper. |
| 🧠 **What to Implement** | Time yourself on the pattern-identification step alone (aim for under 3 minutes per problem) — this is the skill that most separates fast interview performers from slow ones. |
| 🧠 **C++ Implementation Nuance** | If your first guessed pattern is wrong, don't erase it — note in your mistake log what surface features misled you, so you catch that trap next time. |

```cpp
// Pattern Recognition Test — identify pattern on paper before coding, time the identification step
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 560 – Subarray Sum Equals K | ☐ |
| 2 | LC 875 – Koko Eating Bananas | ☐ |
| 3 | LC 207 – Course Schedule | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 156 — Final Full Mock

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Final Full Mock: a complete 2-hour simulation covering the full interview loop feel — clarify requirements, state complexity constraints, brute force, optimize, code, dry run, and state final complexity for each of 3 problems spanning different phases. |
| 🧠 **What to Implement** | Choose problems you have NOT explicitly seen in this roadmap if possible (use LeetCode's random/daily problem or Top Interview 150) to get a true read on generalization, not memorization. |
| 🧠 **C++ Implementation Nuance** | Treat this exactly like a real interview — no pausing to look things up mid-problem; if truly stuck, note it and move on, then debug afterward in review. |

```cpp
// Final Full Mock — 2 hours, 3 problems, full interview protocol, no mid-problem lookups
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 23 – Merge k Sorted Lists | ☐ |
| 2 | LC 239 – Sliding Window Maximum | ☐ |
| 3 | LC 847 – Shortest Path Visiting All Nodes | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 157 — DP Extra Practice I (Knapsack & LCS Family Deep Dive)

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Re-derive 0/1 Knapsack, Unbounded Knapsack, and LCS-family recurrences from scratch on paper. For each, write the state definition (what dp[i][j] means), the transition, and the base case before touching code. |
| 🧠 **What to Implement** | Code each pattern twice: once with a 2D table, once space-optimized to 1D. Compare where the 1D version breaks if iteration direction is wrong. |
| 🧠 **C++ Implementation Nuance** | Watch for off-by-one in dp array sizing (n+1 rows for "0 items" base case) and integer overflow in sum-based DP (use long long). |

```cpp
// 0/1 Knapsack — 2D then 1D space-optimized
int knapsack2D(vector<int>& wt, vector<int>& val, int W) {
    int n = wt.size();
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));
    for (int i = 1; i <= n; i++)
        for (int w = 0; w <= W; w++) {
            dp[i][w] = dp[i-1][w];
            if (wt[i-1] <= w) dp[i][w] = max(dp[i][w], dp[i-1][w-wt[i-1]] + val[i-1]);
        }
    return dp[n][W];
}
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 416 – Partition Equal Subset Sum | ☐ |
| 2 | LC 494 – Target Sum | ☐ |
| 3 | LC 1143 – Longest Common Subsequence | ☐ |
| 4 | LC 72 – Edit Distance | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 158 — DP Extra Practice II (Interval, Stock & Bitmask DP Revisited)

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Revisit interval DP (splitting a range at every possible point), stock-trading DP (state = day, holding/not-holding, transactions left), and bitmask DP (state = subset of items visited). Write out state transition diagrams for each. |
| 🧠 **What to Implement** | Re-solve without looking at old code first — only after attempting, compare with your mistake log to see if the same bug repeats. |
| 🧠 **C++ Implementation Nuance** | Bitmask DP: pre-size dp array as `(1 << n)` and initialize to -1/INF correctly; interval DP: iterate by increasing length, not by index, or you'll read uncomputed states. |

```cpp
// Interval DP skeleton — iterate by length, not index
for (int len = 2; len <= n; len++)
    for (int i = 0; i + len - 1 < n; i++) {
        int j = i + len - 1;
        // dp[i][j] = best split combining dp[i][k] and dp[k+1][j]
    }
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 312 – Burst Balloons | ☐ |
| 2 | LC 188 – Best Time to Buy and Sell Stock IV | ☐ |
| 3 | LC 698 – Partition to K Equal Sum Subsets | ☐ |
| 4 | LC 1994 – The Number of Good Subsets | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 159 — Design Problems Day (O(1) Data Structures, LRU/LFU Consolidated)

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Consolidate every "design a data structure" problem seen so far into one session: hash map + doubly linked list for LRU, frequency buckets for LFU, array+hashmap for O(1) insert/delete/getRandom, two stacks or a deque for min-stack style tracking. |
| 🧠 **What to Implement** | Build LRU Cache and LFU Cache fully from scratch with no STL shortcuts for the linked-list part — implement the doubly linked list nodes yourself to cement the pointer manipulation, since this is the #1 asked "design" question in interviews. |
| 🧠 **C++ Implementation Nuance** | Use a dummy head/tail sentinel node in your DLL to avoid null-pointer edge cases on removal. For LFU, maintain minFreq as O(1) tracked variable, not recomputed each call. |

```cpp
// LRU Cache — hashmap + DLL with sentinel nodes
struct Node { int key, val; Node *prev, *next; };
class LRUCache {
    unordered_map<int, Node*> mp;
    Node *head, *tail;
    int cap;
    // remove(node), insertFront(node), get(key), put(key,val)
};
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | LC 146 – LRU Cache | ☐ |
| 2 | LC 460 – LFU Cache | ☐ |
| 3 | LC 380 – Insert Delete GetRandom O(1) | ☐ |
| 4 | LC 155 – Min Stack | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---

### 📆 Day 160 — Final Synthesis

| Section | Details |
|:--------|:--------|
| 🧠 **Theory to Study** | Final Synthesis: for every major pattern across all 17 phases, write a one-page (physical or digital) template — the recognition trigger (what problem phrasing signals this pattern), the core code skeleton, and the complexity. |
| 🧠 **What to Implement** | Pick one representative problem per major pattern (roughly 15-20 problems total) and solve each in well under normal time, using ONLY your one-page templates as reference — this validates the templates are actually usable under pressure. |
| 🧠 **C++ Implementation Nuance** | This document (your pattern template sheet) is the actual deliverable of the 160 days — keep it updated going forward as your real interview-prep cheat sheet, not just a one-time exercise. |

```cpp
// Final Synthesis — build and validate a one-page-per-pattern template sheet across all 17 phases
```


| # | Problem | Done |
|:--|:--------|:----:|
| 1 | One representative problem from every major pattern | ☐ |


| 📖 Theory | 💡 Brute | ⚡ Optimized | 🔍 Dry run | ⏱️ Complexity | 📝 Mistakes |
|:--:|:--:|:--:|:--:|:--:|:--:|
| ☐ | ☐ | ☐ | ☐ | ☐ | ☐ |

---


---

## 🏁 FINAL DSA INTERVIEW CHECKLIST & SIGN-OFF

- [ ] Solved all 462 problems across all 17 phases
- [ ] Confident coding any data structure from scratch in standard C++17
- [ ] Mastered Binary Search, BFS/DFS, Topo Sort, Dijkstra, DSU, Monotonic Stack, and DP
- [ ] Maintained daily mistake log with invariants and edge cases

*Built with ❤️ by Sky — Master DSA from Scratch to FAANG Ready!*
