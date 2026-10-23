class Solution {
public:
    
    vector<string>value={
        {""},{""},{"abc"},{"def"},{"ghi"},{"jkl"},{"mno"},{"pqrs"},{"tuv"},{"wxyz"}
    };
    void check(string s,int ind,string curr,vector<string>&ans){
        if(curr.size()==s.size()){
            ans.push_back(curr);
            return ;
        }
        int dig=s[ind]-'0';
        int len=value[dig].size();
        for(int i=0;i<len;i++){
            string original=curr;
            curr+=value[dig][i];
            check(s,ind+1,curr,ans);
            curr=original;
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        check(digits,0,"",ans);
        return ans;
    }
};