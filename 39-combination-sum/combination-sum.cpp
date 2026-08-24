class Solution {
public:
void f(int ind,int target, vector<vector<int>>&ds, vector<int>& arr,vector<int>list){
    if(ind==arr.size()){
        if(target==0){
            ds.push_back(list);
            return;
        }
        else return;
    }
    if(arr[ind]<=target){
        list.push_back(arr[ind]);
    f(ind,target-arr[ind],ds,arr,list);
    list.pop_back();}
    f(ind+1,target,ds,arr,list);
    

}
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>>ds;vector<int>list;
        int n = arr.size();
       f(0,target,ds,arr,list);
       return ds;
    }
};