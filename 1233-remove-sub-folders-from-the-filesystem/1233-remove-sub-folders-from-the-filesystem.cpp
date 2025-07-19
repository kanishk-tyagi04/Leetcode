class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        std::sort(folder.begin(), folder.end());
        vector<string> res;
        for (auto it = folder.begin(); it != folder.end(); ++it)
        {
            if(res.empty())
            {
                res.push_back((*it));
            }
            else
            {
                if(!((*it).starts_with(res.back()) && (*it)[(res.back()).length()] =='/'))
                {
                    res.push_back((*it));
                }
            }
           
        }
        return res;
    }
};