class Solution {
public:
    int getnum(int n) {
        int sum = 0;
        while (n > 0) {
            int dig = n % 10;
            sum += dig * dig;
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        int slow = n;
        int fast = getnum(n);

        while (fast != 1 && slow != fast) {
            slow = getnum(slow);               // 1 step
            fast = getnum(getnum(fast));       // 2 steps
        }

        return fast == 1;
    }
};