class Solution {
public:
    string frequencySort(string s) {
    unordered_map<char,int>freq;
    string ans;
    for(char c:s){
        freq[c]++;
    }
    priority_queue<pair<int,char>>pq;
    for(auto&pair:freq){
        pq.push({pair.second,pair.first});
    }
        while (!pq.empty()) {
            char x = pq.top().second;
            int count = pq.top().first;
            pq.pop();

            while (count--) {
                ans.push_back(x);
            }
        }
    return ans;
    }
};