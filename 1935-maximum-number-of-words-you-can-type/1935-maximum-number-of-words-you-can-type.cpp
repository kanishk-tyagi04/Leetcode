class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char> us(brokenLetters.begin(), brokenLetters.end());
        int res=0, invalid=0;
        for(char c:text){
            if(c==' '){
                if(!invalid) res++;
                invalid=0;
            } else if(us.count(c)) invalid=1;
        }
        if(!invalid) res++;
        return res;
    }
};
