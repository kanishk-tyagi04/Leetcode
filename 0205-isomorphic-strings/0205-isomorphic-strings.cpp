class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<int,int>indxS;
        unordered_map<int,int>indxT;

        for(int i=0;i<s.size();i++){
            if(indxS.find(s[i])==indxS.end()){
                indxS[s[i]]=i;
            }
            if(indxT.find(t[i])==indxT.end()){
                indxT[t[i]]=i;
            }
            if(indxS[s[i]]!=indxT[t[i]]){
                return false;
            }
        }
        return true;

    }
};