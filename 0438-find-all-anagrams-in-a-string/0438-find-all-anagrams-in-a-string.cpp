class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>res;
        vector<int>s_hash(26,0),p_hash(26,0);
        if(p.size()>s.size()) return res;
        for(char c:p)p_hash[c-'a']++;
        
        int window=p.size();

        for(int i=0;i<s.size();i++){
            s_hash[s[i]-'a']++;
            if(i>=window){
                s_hash[s[i-window]-'a']--;
            }
            if(s_hash==p_hash) res.push_back(i-window+1);
        }
        return res;
    }
};