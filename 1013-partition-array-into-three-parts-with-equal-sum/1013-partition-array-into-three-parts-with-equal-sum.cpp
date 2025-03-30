class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int n = arr.size();
        if (n < 3) return false;
        int totalSum = accumulate(arr.begin(), arr.end(), 0);
        if (totalSum % 3 != 0) return false;
        int partSum = totalSum / 3;
        int sum = 0;
        int first = -1, second = -1;
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
            if (sum == partSum && first == -1) first = i;
            if (sum == 2 * partSum && first != -1) {
                second = i;
                break;
            }
        }
        return second != -1 && second < n - 1;
    }
};
