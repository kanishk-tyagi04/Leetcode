class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int>um;
        for(char c:s){
            um[c]++;
        }
        vector<int>temp;
        for(auto&pair:um){
            temp.push_back(pair.second);
        }
        int o_f=INT_MIN,e_f=INT_MAX;
        for(int num:temp){
           if(num%2==0){
               e_f=min(e_f,num);
           }
        }
         for(int num:temp){
           if(num%2!=0){
               o_f=max(o_f,num);
           }
        }
        return o_f-e_f;
    }
};