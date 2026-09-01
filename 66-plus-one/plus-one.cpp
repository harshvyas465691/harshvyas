#include<bits/stdc++.h>
class Solution {

public:
    vector<int> plusOne(vector<int>& arr) {
       int n  = arr.size();
       // Start from the last digit
        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] < 9) {
                arr[i]++;   // No carry needed
                return arr;
            }
            arr[i] = 0;     // Carry over
        }
        
        // If all digits were 9, we need an extra digit
        arr.insert(arr.begin(), 1);
        return arr;
    }
};