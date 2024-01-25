#include <bits/stdc++.h>
using namespace std;

void insert(stack<int> &st, int num){
    if(st.size()==0 || st.top()<num){
        st.push(num);
        return;
    }
    int temp=st.top();
    st.pop();
    insert(st,num);
    st.push(temp);
}

void rec_sort(stack<int> &st){
    if(st.size()==1){
        return ;
    }

    int top=st.top();
    st.pop();
    rec_sort(st);
    insert(st,top);
}

int main(){
    stack<int> st;
    st.push(4);
    st.push(3);
    st.push(5);
    st.push(2);
    st.push(8);
    rec_sort(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}