class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        stack<int>st;
        int n = arr.size();int max_area=0;
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>arr[i]){
                int ele =st.top();st.pop();
                int nse =i;int pse = st.empty()?-1:st.top();
                int area = arr[ele]*(nse-pse-1);
                max_area = max(area,max_area);
            }
            st.push(i);
        }
        while(!st.empty()){
            int ele =st.top();st.pop();
            int nse = n;int pse = st.empty()?-1:st.top();
            max_area = max(max_area, arr[ele]*(nse-pse-1));

        }
        return max_area;
    }
};