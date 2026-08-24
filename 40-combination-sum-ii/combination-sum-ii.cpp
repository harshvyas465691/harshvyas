class Solution {
public:
void f(int ind,int target,vector<int>& ds,vector<int>arr,vector<vector<int>>&ans){
    if(target==0){ans.push_back(ds);return;}
    for(int i = ind;i<arr.size();i++){
        if(i>ind && arr[i-1]==arr[i])continue;
        if(arr[i]>target)break;
        ds.push_back(arr[i]);
        f(i+1,target-arr[i],ds,arr,ans);
        ds.pop_back();
    }
    return;
}
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        int n = arr.size();vector<vector<int>>ans;vector<int>ds;
        sort(arr.begin(),arr.end());
        f(0,target,ds,arr,ans);
        return ans;
    }
};