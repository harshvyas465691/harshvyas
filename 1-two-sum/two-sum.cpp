#include <bits/stdc++.h>
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int k) {

        map<int, int> mpp;

        for (int i = 0; i < arr.size(); i++) {
            int rem = k - arr[i];
            if (mpp.find(rem) != mpp.end()) {
                return {mpp[rem], i};
            } else
                mpp[arr[i]] = i;
        }

        return {};
    }
};