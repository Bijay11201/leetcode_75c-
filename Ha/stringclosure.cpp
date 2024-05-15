class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> t1(26);
        vector<int> t2(26);
        bool flag =true;
        for(auto a:word1){
            t1[a-'a']++;
        }
        for(auto a:word2){
            t2[a-'a']++;
        }
        for(int i=0;i<t1.size();i++){
            if((t1[i]>0 && t2[i]==0)||(t2[i]>0 && t1[i]==0)){
                return false;
            }
        }
        sort(t1.begin(),t1.end());
        sort(t2.begin(),t2.end());
        for(int i=0;i<26;i++){
            if(t1[i]!=t2[i]){
                flag=false;
                break;
            }
        }
        return flag;
    }
};