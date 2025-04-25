class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> um;
        for (char c : s) {
            um[c]++;
        }

        vector<int> freq;
        for (auto& pair : um) {
            freq.push_back(pair.second);
        }

        int count = 0;
        for (int i = 0; i < freq.size(); i++) {
            if (freq[i] % 2 == 0) {
                count += freq[i];
                freq[i] = 0;
            } else {
                count += freq[i] - 1;
                freq[i] = 1;
            }
        }

        bool hasOdd = false;
        for (int i = 0; i < freq.size(); i++) {
            if (freq[i] == 1) {
                hasOdd = true;
                break;
            }
        }

        if (hasOdd) count += 1;

        return count;
    }
};
