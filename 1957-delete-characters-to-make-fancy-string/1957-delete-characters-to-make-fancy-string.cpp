class Solution {
public:
    string makeFancyString(string s) {
        string res = "";
        res += s[0];
        int c = 1;

        for(int i =1; i<s.size(); i++){
            if(s[i] == s[i-1]){
                c++;
                if(c<3){
                    res += s[i];
                }
            }else{
                c = 1;
                res += s[i];
            }
        }
        return res;
    }
};