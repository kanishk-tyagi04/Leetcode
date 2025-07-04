#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    char findTheDifference(string s, string t) {
     unordered_map<char,int>um;
     for(char c : s){
        um[c]++;
     }
     for(int i=0;i<t.size();i++){
        char p=t[i];
        if(um[p]>0){
            um[p]--;
        }
        else{
            return p;
            break;
        }
     }
     return 'a';
    }
};