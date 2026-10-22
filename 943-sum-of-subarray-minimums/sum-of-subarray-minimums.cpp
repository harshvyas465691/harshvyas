class Solution {
public:
    vector<int> nse(vector<int>& arr) {
        vector<int> ans(arr.size(), 0);
        stack<int> st;
        for (int i = arr.size() - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] >= arr[i])
                st.pop();
            ans[i] = st.empty() ? arr.size() : st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int> psee(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n, 0);
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] > arr[i])
                st.pop();
            ans[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return ans;
    }

    int sumSubarrayMins(vector<int>& arr) {
        vector<int>NSE =nse(arr);
        vector<int>PSEE= psee(arr);
        int total=0,mod =1000000000+7;
        for(int i =0;i<arr.size();i++){
            int left = i-PSEE[i];
            int right =NSE[i]-i;
            total= (total+ ((long long )right*left*arr[i])%mod)%mod;
        }
        return total;
    }
};