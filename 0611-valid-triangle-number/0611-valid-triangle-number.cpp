class Solution {
public:
    bool isPossible(int a, int b, int c){
        if(a+b>c && b+c>a && a+c>b){
            return true;
        }
        return false;
    }
    int triangleNumber(vector<int>& nums) {
        int count=0, n=nums.size();
      sort(nums.begin(),nums.end());
        for (int i = 0; i <n - 2;i++) {
            for (int j = i + 1;j < n - 1;j++) {
                for (int k = j + 1;k < n;k++) {
                    if (isPossible(nums[i], nums[j], nums[k])) {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};