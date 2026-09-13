class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(int i:stones){
            pq.push(i);
        }
        while(pq.size()>0){
            if(pq.size()==1){
                return pq.top();
            }
            int first=pq.top();
            pq.pop();
            int sec=pq.top();
            pq.pop();
            if(sec!=first){
                pq.push(first-sec);
            }
        }
        return pq.empty()?0:pq.top();
    }
};