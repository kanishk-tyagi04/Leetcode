class Solution {
public:
    int hIndex(vector<int>& citations) {
        int l=0;
        int n =citations.size();
        int r=n-1;
        while(l<=r){
            int mid = l+ (r-l)/2;
            int paper_count=n-mid;
            if(paper_count== citations[mid]){
                return paper_count;
            }
            if(paper_count > citations[mid]){
                l=mid+1;
            }
            else{
                r=mid-1;

            }
        }
        return n-l;

    }
};