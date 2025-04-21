class Solution {
public:
    string defangIPaddr(string s) {
        string result;
        for(int i=0;i<s.size();i++){
            if(s[i]=='.'){
                result.push_back('[');
                result.push_back('.');
                result.push_back(']');
            }
            else{
                result.push_back(s[i]);
            }
        }
        return result;
    }
};