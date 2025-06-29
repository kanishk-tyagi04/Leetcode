class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int open=0,close=0;
        std::string temp="";
        for(char c:s){
            if(c=='('){
                open++;
                temp+=c;
            }
            else if(c==')'){
                if(open>0){
                open--;
                temp +=c;
                }
            }
            else{
                temp+=c;
            }
        }
          std::string result;
      for(int i=(int)temp.size()-1;i>=0;i--)
{
            char c=temp[i];
            if(c==')'){
                close++;
                result += c;
            }
           else if(c=='('){
                if(close>0){
                close--;
                result +=c;
            }
            }
            else{
                result +=c;
            }
        }
        reverse(result.begin(), result.end());
        return result;
    }
};