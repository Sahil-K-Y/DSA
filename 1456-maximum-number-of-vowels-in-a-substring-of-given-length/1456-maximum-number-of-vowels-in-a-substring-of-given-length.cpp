class Solution {
public:
    bool isvowel(char ch){
        if(ch=='a' || ch=='e'|| ch=='i'||ch=='o'||ch=='u'){
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int count=0;

        int n=s.size();
        for(int i=0;i<k;i++){
            if(isvowel(s[i])){
                count++;
            }
        }
        int ans=count;
        for(int i=k;i<n;i++){
            if(isvowel(s[i-k])){
                count--;
            }
            if(isvowel(s[i]))count++;
            ans=max(ans,count);
        }
        return ans;
    }
};