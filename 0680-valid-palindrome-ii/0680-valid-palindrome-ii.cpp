class Solution {
public:
    bool isPalindrome(const string& s, int i, int j) {
    while (i < j) {
        if (s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}
    bool validPalindrome(string s) {
        int l=0;
        int r=s.size()-1;
        while(l<r){
            if(s[l]!=s[r]){
                return isPalindrome(s,l+1,r)||isPalindrome(s,l,r-1);
            }
            l++;
            r--;
        }
        return true;
    }
};