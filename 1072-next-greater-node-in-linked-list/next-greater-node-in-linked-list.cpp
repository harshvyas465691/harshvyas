/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 #include<bits/stdc++.h>
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        stack<int>st;
        vector<int>v;
       
        ListNode* temp = head;
      
        while(temp!=NULL){
            v.push_back(temp->val);
            temp= temp->next;
        } vector<int>ans(v.size(), 0);
       for(int i = 0; i < v.size(); i++) {
            while(!st.empty() && v[i] > v[st.top()]) {
                ans[st.top()] = v[i];
                st.pop();
            }
            st.push(i);
        
            
        }
    
       return ans;
    }
};