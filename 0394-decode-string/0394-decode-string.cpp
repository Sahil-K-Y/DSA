class Solution {
public:
    string decodeString(string s) {
        stack<pair<string,int>>st;
        int num=0;
        string currstr="";
        for(char c:s){
            if(isdigit(c)){
                num=num*10+(c-'0');
            }
            else if(c=='['){
                st.push({currstr,num});
                num=0;
                currstr="";
            }else if(c==']'){
                auto top=st.top();
                st.pop();
                string original=top.first;
                int tempnum=top.second;
                string temp="";
                for(int i=0;i<tempnum;i++){
                    temp+=currstr;
                }
                currstr=original+temp;

            }else{
                currstr+=c;
            }

        }
        return currstr;
    }
};