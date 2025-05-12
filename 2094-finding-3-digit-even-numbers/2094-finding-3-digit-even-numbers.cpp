class Solution {
public:
    void backtrack(vector<int>& digits, vector<int>& temp, vector<bool>& used, set<int>& result) {
        if (temp.size() == 3) {
            int num = temp[0] * 100 + temp[1] * 10 + temp[2];
            if (temp[0] != 0 && num % 2 == 0) {
                result.insert(num);
            }
            return;
        }

        for (int i = 0; i < digits.size(); i++) {
            if (used[i]) continue;
            used[i] = true;
            temp.push_back(digits[i]);
            backtrack(digits, temp, used, result);
            temp.pop_back();
            used[i] = false;
        }
    }

    vector<int> findEvenNumbers(vector<int>& digits) {
        set<int> result;
        vector<int> temp;
        vector<bool> used(digits.size(), false);
        backtrack(digits, temp, used, result);
        return vector<int>(result.begin(), result.end());
    }
};
