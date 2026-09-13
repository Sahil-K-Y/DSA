class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.0;
        long long temp=n;
        if(temp<0){
            temp=-temp;
        }
        while(temp>0){
            if(temp%2==1){
                ans=ans*x;
            }
            x=x*x;
            temp/=2;
        }
        return n>0?ans:(1.0/ans);
    }
};