class Solution {
public:
    void merge(vector<int>&nums,int left ,int right,int mid){
        vector<int>temp;
        int i=left;
        int j=mid+1;
        while(i<=mid && j<=right){
            if(nums[i]<=nums[j]){
                temp.push_back(nums[i++]);
            }else{
                temp.push_back(nums[j++]);
            }
        }
        while(i<=mid)temp.push_back(nums[i++]);

        while(j<=right)temp.push_back(nums[j++]);
        for(int k=0;k<temp.size();k++){
            nums[left+k]=temp[k];
        }
    }
    void sorting(vector<int>&nums,int low,int high){
        if(low>=high)return;
        int mid=low+(high-low)/2;
        sorting(nums,low,mid);
        sorting(nums,mid+1,high);
        merge(nums,low,high,mid);
    }
    vector<int> sortArray(vector<int>& nums) {
        sorting(nums,0,nums.size()-1);
        return nums;
    }
};