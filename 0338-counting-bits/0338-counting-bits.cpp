class Solution {
public:
    int numberOfOnes(int i){
       string s = bitset<32>(i).to_string();
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                ans++;
            }
        }
        return ans;
    }
    vector<int> countBits(int n) {
        vector<int>result(n+1);
        for(int i=0;i<=n;i++){
            int temp = numberOfOnes(i);
            result[i]=temp;
        }
        return result;
    }
};