#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) { 
          int k=0;
          long long left=1, right= *max_element(piles.begin(),piles.end());          
		    while(left<=right){
               k = left + (right - left) / 2;
                int count=0;
             for(int i=0;i<piles.size();i++){
                count+= (piles[i]+k-1)/k;
                 
             }
             if(count>h){ 
                
                left=k+1;
            }
            
            else{
                right=k-1;
            }
        }
        
        return left;
    }
};