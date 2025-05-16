class Solution {
public:
    int BinarySearch(vector<vector<int>>& arr, int searchElement) {
        int start = 0;
        int end = arr.size() - 1;
        while (start <= end) { 
            int mid = (start + end) / 2;
            if (arr[mid][0] <= searchElement) { 
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return end; 
    }

    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<vector<int>> arr(difficulty.size(), vector<int>(2));

        
        for (int i = 0; i < difficulty.size(); i++) {
            arr[i][0] = difficulty[i];
            arr[i][1] = profit[i];
        }

        
        sort(arr.begin(), arr.end(), [](auto& a, auto& b) { return a[0] < b[0]; });


        
        for (int i = 1; i < difficulty.size(); i++) {
            arr[i][1] = max(arr[i - 1][1], arr[i][1]);
        }

        int maxP = 0;
        
       
        for (int i = 0; i < worker.size(); i++) {
            int index = BinarySearch(arr, worker[i]);
            maxP += (index == -1 ? 0 : arr[index][1]); 
        }

        return maxP;
    }
};
