#include<bits/stdc++.h>
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
       int n = arr.size(); vector<int>ans(n,-1);stack<int>st;
     for(int i = 2*n-1;i>=0;i--){
        int ind=i%n;
        while(!st.empty()&& arr[ind]>=st.top()){st.pop();}
        if( i<n){
            ans[i] = st.empty()?-1:st.top();
        }
        st.push(arr[ind]);
     }return ans;
    }
};