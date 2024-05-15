class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>ANS={{},{}};
        set<int> S1(nums1.begin(),nums1.end());
        set<int> S2(nums2.begin(),nums2.end());
        for(auto x:S1){
            if(S2.count(x)==0)
            ANS[0].push_back(x);
        }
        for(auto x:S2){
            if(S1.count(x)==0)
            ANS[1].push_back(x);
        }
        return ANS;
    }
};