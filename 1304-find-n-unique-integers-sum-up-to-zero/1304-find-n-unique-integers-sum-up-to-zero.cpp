class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>result;
        int a=-1;
        int b=1;
        int c=0;
        if(n%2==0){
        while(result.size()<n/2){
            result.push_back(a);
            a--;
        }
         while(result.size()<n){
            result.push_back(b);
            b++;
        }
        }
        else{
            result.push_back(c);
             while(result.size()<(n/2+1)){
            result.push_back(a);
            a--;
        }
         while(result.size()<n){
            result.push_back(b);
            b++;
        }
        }
        return result;
    }
};