class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_candis = * max_element(candies.begin(),candies.end());
        vector<bool> result;
        for(int candy:candies){
            result.push_back(candy+extraCandies >= max_candis);
        } 
        return result;
    }
};