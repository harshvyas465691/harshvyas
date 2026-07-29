class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 1,n= nums.size();
        int flag = nums[0];
        for (int i = 0; i < n; i++) {
            if (nums[i] == flag)
                cnt++;
            else if(nums[i]!=flag)
                cnt--;
            if (cnt == 0) {
                flag = nums[i];
                cnt=1;
            }}
            return flag;
        }
    };