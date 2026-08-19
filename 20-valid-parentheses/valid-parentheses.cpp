#include<bits/stdc++.h>
class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        if(s.size()%2==1)return false;
        for(int i =0;i<s.size();i++){
            if(s[i]=='('|| s[i]=='{'|| s[i]=='[')st.push(s[i]);
            else if( i!=0 && !st.empty()){
             if(st.top()=='('&& s[i]==')' ) st.pop();
                        else if(st.top()=='{'&& s[i]=='}') st.pop();
            else if(st.top()=='['&& s[i]==']') st.pop();else return false;}
            else return false;

        }
        if(st.empty()==1)return true;
       return  false;
        
    }
};