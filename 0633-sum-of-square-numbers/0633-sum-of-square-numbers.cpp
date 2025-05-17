class Solution {
public:
    bool judgeSquareSum(int c) {
        int right=sqrt(c);
        int left=0;
        while(left<=right){
            long long sum = (long long)left*left + (long long)right*right;
            if(sum==c){
                return true;
            }
            else if(sum<c){
                left++;
            }
            else{
                right--;
            }
        }
        return false;
    }
};