class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> freq(26, INT_MAX); // base freq for all characters

        for (string& word : words) {
            vector<int> temp(26, 0);
            for (char c : word) temp[c - 'a']++;
            for (int i = 0; i < 26; i++)
                freq[i] = min(freq[i], temp[i]);
        }

        vector<string> res;
        for (int i = 0; i < 26; i++) {
            while (freq[i]-- > 0)
                res.push_back(string(1, i + 'a'));
        }

        return res;
    }
};
