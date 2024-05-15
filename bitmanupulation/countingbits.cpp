class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);
        for(int i=0;i<=n;i++){
            int cnt=0;
            int num=i;
            while(num){
                if(num%2!=0) cnt++;
                num/=2;
            }
            ans[i]=cnt;
        }
        return ans;
    }
};