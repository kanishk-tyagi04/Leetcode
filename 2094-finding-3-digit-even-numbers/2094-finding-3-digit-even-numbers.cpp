class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        set<int>result;
        int n=digits.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
             for(int k=0;k<n;k++){
                if(i==j || j==k || k==i) continue;
            int num = digits[i]*100+digits[j]*10+digits[k]*1;
            if(digits[i]==0) continue;
            if(num%2!=0) continue;
            result.insert(num);
        }
        }
        }
        return vector<int>(result.begin(), result.end());
    }
};