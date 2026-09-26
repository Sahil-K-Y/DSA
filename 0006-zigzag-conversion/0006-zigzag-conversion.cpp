class Solution {
public:
    string convert(string s, int numRows) {
        vector<string>ans(numRows);
        if(numRows==1)return s;
        bool goingdown=false;

        int curr=0;
        for(char c:s){
            ans[curr]+=c;
            if(curr==0||curr==numRows-1){
                goingdown=!goingdown;
            }
            curr+=goingdown?1:-1;
        }
        string t="";
        for(const string&x:ans){
            t+=x;
        }
        return t;
    }
};