class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string>ans;
        unordered_map<string,int>freq;
        for(string word:words){
            freq[word]++;
        }
        auto cmp =[](pair<int,string>&a, pair<int,string>&b){
            if(a.first==b.first){
                return a.second>b.second;
            }
            return a.first<b.first;
        };
        priority_queue<pair<int, string>, vector<pair<int, string>>, decltype(cmp)> pq(cmp);
        for(auto&pair:freq){
             pq.push({pair.second,pair.first});
        }
        while(k--){
            string w = pq.top().second;
            pq.pop();
            ans.push_back(w);
        }
        return ans;
    }
};