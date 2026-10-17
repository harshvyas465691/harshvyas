#include<bits/stdc++.h>
class MinStack {
public:
 stack<pair<int,int>>st;// val,min till now 
    MinStack() {
      
      
    }
    
    void push(int value) {
        if(st.empty())st.push({value,value});
      
    else {  pair<int,int>p= st.top();
       if(p.second<=value) st.push({value,p.second});
       else if(p.second>value)st.push({value,value});}
    }
    
    void pop() {
      st.pop();  
    }
    
    int top() {
       pair<int,int>p = st.top();
        return p.first;
    }
    
    int getMin() {
       pair<int,int>p= st.top();
       return p.second ;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */