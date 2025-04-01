#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> s1, s2;
        string str1, str2;

        for(int i = 0; i < S.size(); i++) {
            if (S[i] == '#' && !s1.empty())
                s1.pop();
            else if (S[i] != '#')
                s1.push(S[i]);
        }

        for(int i = 0; i < T.size(); i++) {
            if (T[i] == '#' && !s2.empty())
                s2.pop();
            else if (T[i] != '#')
                s2.push(T[i]);
        }

        while (!s1.empty()) {
            str1.insert(0, 1, s1.top());  
            s1.pop();
        }

        while (!s2.empty()) {
            str2.insert(0, 1, s2.top()); 
            s2.pop();
        }

        return str1 == str2;
    }
};

