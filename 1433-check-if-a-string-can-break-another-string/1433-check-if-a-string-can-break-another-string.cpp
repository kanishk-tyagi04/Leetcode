class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        bool a1 =true,a2=true;
        for(int i=0;i<s1.size();i++){
          if(s1[i]>s2[i]) {
            a1=false;
            break;
          }
        }
        for(int i=0;i<s1.size();i++){
          if(s1[i]<s2[i]) {
            a2=false;
            break;
          }
        }
        if(a1==false && a2==false) return false;
        else return true;
    }
};