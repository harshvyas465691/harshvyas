class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,int>mpp;// store element from 0 to max of nums[i]<val,cnt>
   for(int i =0;i<nums.size();i++){
  if(nums[i]>0)mpp[nums[i]]++;
}int value = -1;
for(int i =1;i<INT_MAX;i++){
    if(mpp[i]==0){value=i;break;}

}
if(value==-1)return 0;
else{ return value;}
    }
};