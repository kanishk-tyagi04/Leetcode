class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        for(int asteriod : asteroids){
            if(asteriod>0){
                st.push(asteriod);
                continue;
            }
            while(!st.empty() && st.top()>0 && st.top() < abs(asteriod)){
                st.pop();
            }
            if(st.empty() || st.top()<0){
                st.push(asteriod);
            }
            else if(st.top()==abs(asteriod)){
                st.pop();
            }
            
        }
        vector<int>ans(st.size());
            for(int i=ans.size()-1;i>=0;i--){
                ans[i]=st.top();
                st.pop();
            }
        return ans;
    }
};