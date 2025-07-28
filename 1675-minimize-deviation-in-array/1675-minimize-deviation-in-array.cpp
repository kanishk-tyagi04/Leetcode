class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        priority_queue<int>maxHeap;
        int minVal=INT_MAX;
        for(int num:nums){
            if(num%2==0){
                maxHeap.push(num);
                minVal = min(minVal, num);
            }
            else{
                maxHeap.push(num*2);
                minVal=min(minVal, num*2);
            }
        }
         int minDeviation=INT_MAX;   
         while(!maxHeap.empty()){
            int num=maxHeap.top();
            maxHeap.pop();
            minDeviation = min(minDeviation, num-minVal);
            if (num % 2 ==0) {
                num /= 2;
                maxHeap.push(num);
                minVal = min(minVal, num);
            }else{
                break;
            }
         }    
        return minDeviation;
        
    }
};