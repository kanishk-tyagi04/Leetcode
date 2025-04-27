#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleDigitSum(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    int countLargestGroup(int n) {
        if (n <= 9) return n;
        vector<int> v;
        for (int i = 1; i <= 9; i++) {
            v.push_back(i);
        }

        for (int i = 10; i <= n; i++) {
            int temp = singleDigitSum(i);
            v.push_back(temp);
        }

        map<int, int> freq;
        for (int i = 0; i < v.size(); i++) {
            freq[v[i]]++;
        }

        int maxFreq = 0;
        for (auto it : freq) {
            if (it.second > maxFreq) {
                maxFreq = it.second;
            }
        }
        int count = 0;
        for (auto it : freq) {
            if (it.second == maxFreq) {
                count++;
            }
        }

        return count;
    }
};
