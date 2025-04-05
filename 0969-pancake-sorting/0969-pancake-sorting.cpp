class Solution {
public:

    void flip(vector<int>& arr, int k) {
        reverse(arr.begin(), arr.begin() + k);
    }

    vector<int> pancakeSort(vector<int>& arr) {
        vector<int> result;
        int n = arr.size();

        for (int size=n;size>1;--size) {
            
            int max_index = max_element(arr.begin(),arr.begin()+size) - arr.begin();

            if (max_index == size - 1) {

                continue;
            }
            if (max_index != 0) {
                flip(arr, max_index + 1);
                result.push_back(max_index + 1);
            }
            flip(arr, size);
            result.push_back(size);
        }

        return result;
    }
};
