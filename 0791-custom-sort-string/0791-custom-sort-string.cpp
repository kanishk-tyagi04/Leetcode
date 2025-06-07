class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> rank;
    
    
    for (int i = 0; i < order.size(); i++) 
        rank[order[i]] = i;
    
    
    sort(s.begin(), s.end(), [&](char a, char b) {
        return rank[a] < rank[b]; 
    });

    return s;
    }
};