class Solution {
public:
    string reverseVowels(string s) {
        vector<int>temp;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || 
                   s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                temp.push_back(s[i]);
                s[i]='*';
            }
        }
        reverse(temp.begin(),temp.end());
        int j=0;
         for(int i=0;i<s.size();i++){
            if(s[i]=='*'){
                s[i]=temp[j];
                j++;
            }
        }
        return s;
    }
};