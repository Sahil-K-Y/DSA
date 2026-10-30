class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/"){
                int num=stoi(tokens[i]);
                s.push(num);
            }
            else if(tokens[i]=="+"){
                int first=s.top();
                s.pop();
                int second=s.top();
                s.pop();
                int value=first+second;
                s.push(value);
            }else if(tokens[i]=="-"){
                int first=s.top();
                s.pop();
                int second=s.top();
                s.pop();
                int value=second-first;
                s.push(value);
            }else if(tokens[i]=="*"){
                int first=s.top();
                s.pop();
                int second=s.top();
                s.pop();
                s.push(first*second);
            }else if(tokens[i]=="/"){
                int first=s.top();
                s.pop();
                int second=s.top();
                s.pop();
                s.push(second/first);
            }
        }
        return s.top();
    }
};