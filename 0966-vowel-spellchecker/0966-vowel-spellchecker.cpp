#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        unordered_set<string> exact(wordlist.begin(), wordlist.end());
        unordered_map<string, string> capital;
        unordered_map<string, string> vowel_error;
        string vowels = "aeiou";

        for (const string& word : wordlist) {
            string lower = toLower(word);
            if (capital.find(lower) == capital.end()) {
                capital[lower] = word;
            }
            
            string masked = maskVowels(lower);
            if (vowel_error.find(masked) == vowel_error.end()) {
                vowel_error[masked] = word;
            }
        }
        
        vector<string>ans;
        for (const string& query : queries) {
            if (exact.count(query)) {
                ans.push_back(query);
            } else {
                string lower = toLower(query);
                if (capital.count(lower)) {
                    ans.push_back(capital[lower]);
                } else {
                    string masked = maskVowels(lower);
                    if (vowel_error.count(masked)) {
                        ans.push_back(vowel_error[masked]);
                    } else {
                        ans.push_back("");
                    }
                }
            }
        }
        return ans;
    }

private:
    string toLower(const string& s) {
        string result = s;
        for (char& c : result) {
            c = tolower(c);
        }
        return result;
    }

    string maskVowels(const string& s) {
        string result = s;
        for (char& c : result) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                c = '#';
            }
        }
        return result;
    }
};
