class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {

        priority_queue<vector<int>, vector<vector<int>>, function<bool(vector<int>&, vector<int>&)>> total_Tasks(
            [](vector<int>& a, vector<int>& b) {
                if (a[1] == b[1]) return a[2] > b[2]; 
                return a[1] > b[1]; 
            }
        );

        for (int i = 0; i < tasks.size(); ++i) {
            total_Tasks.push({i, tasks[i][0],tasks[i][1]}); 
        }

        priority_queue<vector<int>, vector<vector<int>>, function<bool(vector<int>&, vector<int>&)>> available_Tasks(
            [](vector<int>& a,vector<int>& b) {
                if (a[2] == b[2]) return a[0] > b[0]; 
                return a[2] > b[2];
            }
        );

        vector<int> taskOrder;
        long long time = 0;

        while (!total_Tasks.empty() || !available_Tasks.empty()) {
            vector<int> task;

            if (!total_Tasks.empty()) {
                task = total_Tasks.top();
                total_Tasks.pop();
            }

            while (!available_Tasks.empty() && (task.empty() || task[1] > time)) {
                auto t = available_Tasks.top();
                available_Tasks.pop();
                time += t[2];
                taskOrder.push_back(t[0]);
            }

            if (available_Tasks.empty() && !task.empty() && task[1] > time) {
                time = task[1] + task[2];
                taskOrder.push_back(task[0]);
            }else if (!task.empty() && task[1] <= time) {
                available_Tasks.push(task);
            }
        }

        return taskOrder;
    }
};
