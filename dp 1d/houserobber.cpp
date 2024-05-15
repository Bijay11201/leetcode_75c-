class Solution {
public:
    int rob(vector<int>& nums) {
        int s=nums.size();
        if(s<3){
            return *max_element(nums.begin(),nums.end());
        }
        else{
            vector <int> money(s,0);
            money[0]=nums[0];
            money[1]=nums[1];
            money[2]=nums[2]+nums[0];
            for(int i=3;i<s;i++){
                money[i]=max(nums[i]+money[i-2],nums[i]+money[i-3]);
            }
            return *max_element(money.begin(),money.end());
        }
    }
};