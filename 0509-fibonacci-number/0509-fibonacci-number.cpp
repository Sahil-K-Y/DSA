class Solution {
public:
    int helper(int n){
        if(n==1)return 1;

        if(n==0){
            return 0;
        }
        return helper(n-1)+helper(n-2);
    }
    int fib(int n) {
        return helper(n);
    }
};