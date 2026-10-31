class Solution {
public:
    string removeKdigits(string num, int k) {
        string s;
        int n=num.size();
        for(char c:num){
            while(s.size()>0 && k>0 && s.back()>c){
                s.pop_back();
                k--;
            }
            s.push_back(c);
        }
        while(k>0){
            s.pop_back();
            k--;
        }
        int i=0;
        while(s.size()>0 && s[i]=='0')i++;
        s=s.substr(i);
        return s.empty()?"0":s;
    }
};