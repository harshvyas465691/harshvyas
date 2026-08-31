#include<bits/stdc++.h>
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        map<int,int>mpp;// nums[i],i
        if(n<=1)return false;
        for(int i =0;i<n;i++){
           if(mpp.find(nums[i])!= mpp.end() && mpp[nums[i]]!=i && abs(mpp[nums[i]]-i)<=k )return true;
           mpp[nums[i]]=i;
           }

        return false;
    }
};