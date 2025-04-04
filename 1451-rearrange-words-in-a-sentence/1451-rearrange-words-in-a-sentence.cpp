class Solution {
public:
    string arrangeWords(string text) 
    {
        map<int,vector<string>>m;
        string t = "";
        string ans = "";
        for(int i = 0; i<text.size(); i++)
        {
            if(i<text.size() and text[i] != ' ')
            {
                t += tolower(text[i]);
            }
            else
            {
                m[t.size()].push_back(t);
                t = "";
            }
        }
        m[t.size()].push_back(t);

        for(auto x : m)
        {
            for(auto y : x.second)
            {
                ans += y;
                ans += " ";
            }
        }

        ans[0] = toupper(ans[0]);
        ans.pop_back();
        return ans;
  
    }
};