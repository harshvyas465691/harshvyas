class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();int j=-1;
        map<int,int>mpp;// nums[i],1
        int cnt=0;
        for(int i =0;i<n;i++){
if(nums[i]!=0)mpp[cnt++]=nums[i];

        }
        for(int i =0;i<n;i++){
          if(i<=cnt)  nums[i]=mpp[i];
          else nums[i]=0;
        }return;
    }
};