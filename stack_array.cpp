#include<bits/stdc++.h>
using namespace std; 
class my_stack
{
    public:
    vector<int>v;
    void push(int val){
        v.push_back(val);
    }
    void pop(){
        v.pop_back();
    }
    int top(){
        return v.back();
    }
    int size(){
        return v.size();
    }
    bool empty(){
        return v.empty();
    }   
};

int main(){
    my_stack st;
    st.push(10);
    st.push(200);
    st.push(500);
    st.pop();
    cout << "Top element: " << st.top() << endl; 
    st.pop();
    cout << "Top element: " << st.top() << endl; 
    st.pop();
    cout << "Top element: " << st.top() << endl;
    st.pop();
    if(st.empty() == false){
        cout << "Top element: " << st.top() << endl;
    }
   
    return 0;
}