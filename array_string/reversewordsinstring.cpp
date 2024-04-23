class Solution {
public:
    string reverseWords(string s) {
         stringstream st(s);
        string word;
        string ans = "";
        while(st>>word)
        {
            if(ans == "") ans = word + ans;
            else
            ans = word +" "+ ans;
        }
        return ans;
    }
};