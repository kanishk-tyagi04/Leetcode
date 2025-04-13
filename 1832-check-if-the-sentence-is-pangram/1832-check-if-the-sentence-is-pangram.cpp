class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char>us;
        for(char c : sentence){
            if(c>= 'a' && c<='z'){
                us.insert(c);
            }
        }
        return us.size()==26;
    }
};