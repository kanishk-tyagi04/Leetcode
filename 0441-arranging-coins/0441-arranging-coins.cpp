class Solution {
public:
    int arrangeCoins(int n) {

   long long sum=0;
   int i=1;
   while(sum+i<=n){
    sum+=i;
    i++;
   }

   return --i;
    }
};

