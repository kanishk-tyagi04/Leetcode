class Solution {
public:
    string reverseOnlyLetters(string s) {
        vector<int> positions;
        vector<char> letters;

        
        for (int i = 0; i < s.size(); i++) {
            if (isalpha(s[i])) {
                positions.push_back(i);
                letters.push_back(s[i]);
            }
        }

    
        reverse(letters.begin(), letters.end());


        for (int i = 0; i < positions.size(); i++) {
            s[positions[i]] = letters[i];
        }

        return s;
    }
};
