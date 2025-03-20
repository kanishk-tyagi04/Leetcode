class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int temp= nums[i];
            if((to_string(temp).size())%2==0){
                count++;
            }
        }
        return count;
    }
};