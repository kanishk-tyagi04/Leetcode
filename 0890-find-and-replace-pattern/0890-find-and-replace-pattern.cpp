class Solution {
public:
        bool isIsomorphic(string s, string t) {
        vector<int>arrS(256,0);
        vector<int>arrT(256,0);
        for(int i=0;i<s.size();i++){
            if (arrS[s[i]] != arrT[t[i]]) 
                return false;
            arrS[s[i]] = i+1;
            arrT[t[i]] = i+1;
        }
        return true;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>result;
        for(int i=0;i<words.size();i++){
            if(isIsomorphic(words[i],pattern)){
                result.push_back(words[i]);
            }
        }
        return result;
    }
};