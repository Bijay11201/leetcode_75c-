class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int> m;
        int res=0;
        for( int i=0;i<grid.size();i++){
            m[grid[i]]++;
        }
        for(int j=0;j<grid.size();j++){
            vector<int>temp;
            for(int i=0;i<grid.size();i++){
                temp.push_back(grid[i][j]);
            }
            res+=m[temp];
        }
        return res;
    }
};