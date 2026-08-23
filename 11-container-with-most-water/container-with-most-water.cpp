class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int vol = 0;
        int maxvol = 0;
        while (i <= j) {
            vol = min(height[i], height[j]) * (j - i);
            if (height[i] <= height[j])
                i++;
            else
                j--;
            maxvol = max(maxvol, vol);
        }return maxvol;
    }
};