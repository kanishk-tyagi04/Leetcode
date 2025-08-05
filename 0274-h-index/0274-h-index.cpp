class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        reverse(citations.begin(),citations.end());
        int count=0;
        int minValue=INT_MAX;
        int h_index=0;
        for(int i=0;i<citations.size();i++){
            count++;
            minValue=min(minValue,citations[i]);
            if(minValue>=count){
                h_index=count;
            }
        }
        return h_index;
    }
};