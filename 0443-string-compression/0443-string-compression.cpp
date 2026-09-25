class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        if(n==1)return 1;
        int curr=0;

        for(int i=0;i<n;){
            int count=0;
            char temp=chars[i];
            while(i<n && temp==chars[i]){
                count++;

                i++;
            }
            chars[curr++]=temp;
            if(count>1){
                for(char c:to_string(count)){
                    chars[curr++]=c;
                }
            }
            
        }
        return curr;
    }
};