class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int total_satisfied=0;
        int extra_satisfied=0;
        for(int i=0;i<customers.size();i++){
            total_satisfied += (1-grumpy[i])*customers[i];
        }
        for(int i=0;i<minutes;i++){
            extra_satisfied += grumpy[i]*customers[i];
        }
        int max_extra_satisfied=extra_satisfied;
        for(int i=minutes;i<customers.size();i++){
            extra_satisfied +=grumpy[i]*customers[i];
            extra_satisfied -=grumpy[i-minutes]*customers[i-minutes];
            max_extra_satisfied = max(max_extra_satisfied, extra_satisfied);
        }
        return total_satisfied+max_extra_satisfied;
    }
};