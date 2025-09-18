#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    void generateParenthesis(int openBracket, int closeBracket, int n, string s, vector<string>& answer) {
        if ((int)s.length() == 2*n) {
            answer.push_back(s);
            return;
        }

        if (openBracket<n) {
            generateParenthesis(openBracket+1,closeBracket,n,s+"(",answer);
        }

        if (closeBracket < openBracket) {
            generateParenthesis(openBracket,closeBracket+1,n,s +")",answer);
        }
    }

public:
    vector<string> generateParenthesis(int n) {
        vector<string> answer;
        generateParenthesis(0,0,n,"",answer);
        return answer;
    }
};