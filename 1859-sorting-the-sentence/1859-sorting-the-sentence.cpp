class Solution {
public:
    string sortSentence(string s) {
        string ans;
        string temp;
        vector<string>word(10);
        for(int i=0;i<s.size();i++){
            temp += s[i];
            if(s[i]>= '1' && s[i]<='9'){
                temp.pop_back();
                word[s[i]-'0']=temp;
                temp="";
                i++;
            }
        }
        for(int i=0;i<10;i++){
            if(word[i]!=""){
                ans+=word[i]+ ' ';
            }
        }
        ans.pop_back();
        return ans;
    }
};