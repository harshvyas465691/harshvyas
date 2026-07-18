#include <bits/stdc++.h>
class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        int n = arr.size();
        int i = 0;
        int j = k;
        vector<int> temp; // int temp[n-k];
        if (k > n)
            k = k % n;
        for (int i = 0; i < n - k; i++) {
            temp.push_back(arr[i]); // temp[i]=arr[i];
        }
        int count = 0;
        for (int i = n - k; i < n; i++) {
            arr[i - (n - k)] = arr[i];
        }
        for (int i = k; i < n; i++) {
            arr[i] = temp[i - k];
        }
    }
};