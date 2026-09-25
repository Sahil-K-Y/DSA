class Solution {
public:
    string countAndSay(int n) {
        if(n==1)return "1";
        string ans="1"; 
        for(int step=2;step<=n;step++){
            string temp="";
            int len =ans.size();
            for(int i=0;i<ans.size(); ){
                int count=0;
                char ch=ans[i];
                while(i<len && ch==ans[i]){
                    count++;
                    i++;
                }
                temp+=to_string(count);

                temp+=ch;
            }
            ans=temp;
        }
        return ans;
    }
};