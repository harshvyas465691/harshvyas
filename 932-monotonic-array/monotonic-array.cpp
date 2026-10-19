class Solution {
public:
bool incr(vector<int> arr){
    for(int i  =1;i<arr.size();i++){
        if(arr[i]>=arr[i-1]&& arr[1]>=arr[0]){

        }
        else return false;
    }
    return true;
}
bool decr(vector<int> arr){
    for(int i  =1;i<arr.size();i++){
        if(arr[i]<=arr[i-1]&& arr[1]<=arr[0]){

        }
        else return false;
    }
    return true;
}
    bool isMonotonic(vector<int>& nums) {
        if(incr(nums) || decr(nums))return true;
        return false;

    }
};