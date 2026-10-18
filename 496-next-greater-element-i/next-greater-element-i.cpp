class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       unordered_map<int, int> mpp; // value,nge
        int n = nums1.size();
        int m = nums2.size();
        stack<int> st;
        for (int i = m - 1; i >= 0; i--) {
            while (!st.empty() && nums2[i] >= st.top()) {
                st.pop();
            }
            if (st.empty())
                mpp[nums2[i]] = -1;
            else
                mpp[nums2[i]] = st.top();
            st.push(nums2[i]);
        }
        vector<int> ans(n, 0);
        for (int i = 0; i < n; i++) {
            ans[i] = mpp[nums1[i]];
        }
        return ans;
    }
};