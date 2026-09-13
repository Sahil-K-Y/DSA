class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;

        vector<bool> isPrime(n, true);
        // Pehle se count: 2 ko include karke baaki sirf odd numbers ka count
        int count = n / 2;

        for (long long i = 3; i * i < n; i += 2) {
            if (isPrime[i]) {
                // i odd hai, isliye i*i + odd step (2*i) se hamesha odd multiples hi milenge
                for (long long j = i * i; j < n; j += 2 * i) {
                    if (isPrime[j]) {
                        isPrime[j] = false;
                        count--;
                    }
                }
            }
        }

        return count;
    }
};