class Solution {
public:
    bool isVowel(char c){
        if(c== 'a'||c=='e'||c=='i'||c=='o'||c=='u'){
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int start=0,end=0;
        int vow_count=0;
        int max_vow_count=vow_count;

        while(end<s.size()){
            if(isVowel(s[end])){
                vow_count+=1;
            }
            if((end-start+1)>k){
                if(isVowel(s[start])){
                    vow_count--;
                }
                start++;
            }
            max_vow_count=max(max_vow_count,vow_count);
            end++;
        }  
        return max_vow_count;  
    }
};