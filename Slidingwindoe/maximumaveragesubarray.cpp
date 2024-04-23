class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       double sum_subarray=accumulate(nums.begin(),nums.begin()+k,0);
       double max_current=sum_subarray/k;
       for(int i=1 ;i<nums.size()-k+1;i++){
        sum_subarray=sum_subarray-nums[i-1]+nums[i+k-1];
        max_current=max(max_current,sum_subarray/k);
       }
       return max_current;
    }
};