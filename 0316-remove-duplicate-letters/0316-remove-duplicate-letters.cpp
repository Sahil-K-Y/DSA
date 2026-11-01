class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n=s.size();

        vector<int>last(26,0);
        stack<char>st;
        vector<bool>seen(26,false);
        for(int i=0;i<n;i++){
            last[s[i]-'a']=i;
        }
        for(int i=0;i<n;i++){
            int curr=s[i]-'a';
            if(seen[curr])continue;
            while(st.size()>0 && st.top()>s[i] && last[st.top()-'a']>i){
                seen[st.top()-'a']=false;
                st.pop();
            }
            st.push(s[i]);
            seen[curr]=true;
        }
        string ans="";
        while(st.size()>0){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};