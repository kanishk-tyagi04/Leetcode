class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>um;
        for(string str : strs){
            string sorted_str=str;
            sort(sorted_str.begin(),sorted_str.end());
            um[sorted_str].push_back(str);
        }
        vector<vector<string>>result;
        for(auto &pair : um){
            result.push_back(pair.second);
        }
        return result;
    }
};