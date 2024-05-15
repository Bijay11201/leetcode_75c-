class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        stack <int> s;
        int n= nums.size();
        vector<int> ans;
        for(int i=n-1;i>=0;i--){
            while(!s.empty()&& nums[i]>=nums[s.top()]) s.pop();
            if(s.empty()) ans.push_back(0);
            else{
                ans.push_back(s.top()-i);
            }
            s.push(i);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};