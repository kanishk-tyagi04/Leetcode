class Solution {
public:
    bool isValid(string& word, char a){
        for(char w:word){
            if(w==a){
                return true;
                break;
            }
        }
        return false;
    }
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>ans;
        for(int i=0;i<words.size();i++){
            if(isValid(words[i],x)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};