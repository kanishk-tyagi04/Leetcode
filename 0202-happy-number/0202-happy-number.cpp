class Solution {
public:
    bool isHappy(int n) {
        if(n==1)return true;
        else if(n<=6) return false;
        int square=0;
        while(n!=0){
            int rem = n%10;
            square += rem*rem;
            n=n/10;
        }
        return isHappy(square);
    }
};