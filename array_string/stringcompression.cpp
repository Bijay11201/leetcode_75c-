class Solution {
public:
    int compress(vector<char>& chars) {
        if(chars.empty())
        return 0;
        if(chars.size()==1)
        return 1;
        char last_char=chars[0];
        int lcc=1;
        string result;
        for(int i=1,size=chars.size();i<size;++i){
            if(chars[i]==last_char){
                ++lcc;
            }
            else{
                result+=last_char;
                result+=lcc>1? to_string(lcc):"";
                last_char=chars[i];
                lcc=1;
            }
            if(i==size-1){
                result+=last_char;
                result+=lcc>1? to_string(lcc):"";
            }
        }
        chars.assign(result.begin(),result.end());
        return result.size();
    }
};