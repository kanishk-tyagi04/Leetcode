class Solution {
public:
    int strStr(string haystack, string needle) {
        string str;
        int pos=-1;
        for(int i=0;i<haystack.size();i++){
          str.push_back(haystack[i]);
          pos=i;

          if(str.size()==needle.size() && str!=needle){
            str="";
            pos=-1;
          }
          else if(str.size()==needle.size() && str==needle){
            return pos-needle.size()+1;
          }
        }
        return -1;
    }
};