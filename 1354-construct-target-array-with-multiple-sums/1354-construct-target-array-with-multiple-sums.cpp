class Solution {
public:
    bool isPossible(vector<int>& target) {
        long long sum = 0;
        priority_queue<int> maxHeap;

        for (int num : target) {
            sum += num;
            maxHeap.push(num);
        }

        while (maxHeap.top() != 1) {
            int curr = maxHeap.top();
            maxHeap.pop();
            sum -= curr;

            if (sum == 1) {
                return true;
            }
            else if (sum == 0 || sum >= curr || curr % sum == 0) {
                return false;
            }

            curr %= sum;
            sum += curr;
            maxHeap.push(curr);
        }

        return true;
    }
};
