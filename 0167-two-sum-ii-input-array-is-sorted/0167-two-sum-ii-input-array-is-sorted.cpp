class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int j=numbers.size()-1;
        while(i<j){
            int sum=numbers[i]+numbers[j];
            if(target<sum){
                j--;
            }else if(target>sum){
                i++;
            }else{
                return {i+1,j+1};
            }
        }
        return {};
    }
};