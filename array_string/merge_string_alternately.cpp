class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n= min(word1.length(),word2.length());
        string result;
        for(int i=0;i<n;i++)
        {
            result+=word1[i];
            result+=word2[i];
        }
        result+=word1.substr(n);
        result+=word2.substr(n);
        return result;

    }
};