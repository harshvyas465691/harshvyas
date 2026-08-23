class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        long long  vol = 0;
        long long maxvol = 0;
        while (i <= j) {
            vol = (long long ) min(height[i], height[j]) * (long long)(j - i);
            if (height[i] <= height[j])
                i++;
            else
                j--;
            maxvol = max(maxvol, vol);
        }return maxvol;
    }
};