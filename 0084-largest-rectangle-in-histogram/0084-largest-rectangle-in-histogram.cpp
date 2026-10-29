class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>left(n,0);
        vector<int>right(n,0);
        stack<int>s;
        //left
        for(int i=0;i<n;i++){
            while(s.size()>0 && heights[s.top()]>=heights[i])s.pop();
            left[i]=(s.size()>0)?s.top():-1;
            s.push(i);
        }
        while(!s.empty())s.pop();
        for(int i=n-1;i>=0;i--){
            while(s.size()>0 && heights[s.top()]>=heights[i])s.pop();
            right[i]=(s.size()>0)?s.top():n;
            s.push(i);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int wt=right[i]-left[i]-1;
            ans=max(ans,wt*heights[i]);
        }
        return ans;
    }
};