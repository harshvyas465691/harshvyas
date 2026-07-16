class Solution {
public:
bool isSorted(const vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) return false;
        }
        return true;
    }
   
    void rotateByOne(vector<int>& arr, int n) {
    if (n <= 1) return; // No rotation needed for size 0 or 1
    
    int last = arr[n - 1]; // Store last element
    
    // Shift elements to the right
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[0] = last; // Place last element at the front
}
    bool check(vector<int>& nums) {
        
        int n = nums.size();
        for (int i = 0; i <= n; i++) {
          
              
              bool res = isSorted(nums);
              rotateByOne(nums,n);
              if (res ==true){return true;}
            
            
        }
        return false;
    }
};