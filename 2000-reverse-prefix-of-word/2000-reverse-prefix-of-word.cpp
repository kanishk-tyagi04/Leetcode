class Solution {
public:
    string reversePrefix(string word, char ch) {
        int start=0;
        int end=-1;
        for(int i=0;i<word.size();i++){
            if(word[i]==ch){
                 end =i;
                break;
            }
        }

        while(start<end && end!=-1){
            swap(word[start],word[end]);
            start++;
            end--;
        }
        return word;
    }
};