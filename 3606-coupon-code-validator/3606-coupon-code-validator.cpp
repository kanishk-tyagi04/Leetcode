class Solution {
public:
    bool isValid(string Code, string BusinessLine, bool IsActive){
        if(IsActive==false) return false;

        if(BusinessLine !="electronics" && BusinessLine != "grocery" && BusinessLine !="pharmacy" && BusinessLine != "restaurant"){
            return false;
        }
        bool flag=false;

        for(char c: Code){
            if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c=='_' || (c>='0' && c<='9')){
               flag=true;
            }
            else{
                return false;

            }
        }
        return flag;
    }
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
      vector<pair<string, string>> valid;

        for(int i=0; i<code.size(); ++i)
            if(isValid(code[i], businessLine[i], isActive[i]))
                valid.push_back({businessLine[i], code[i]});

        auto priority = [](const string& bl){
            if(bl=="electronics") return 0;
            if(bl=="grocery")     return 1;
            if(bl=="pharmacy")    return 2;
            return 3;
        };

        sort(valid.begin(), valid.end(), [&](auto& a, auto& b){
            return priority(a.first) != priority(b.first) ? priority(a.first) < priority(b.first) : a.second < b.second;
        });

        vector<string> result;
        for(auto& p : valid) result.push_back(p.second);
        return result;
    }
};