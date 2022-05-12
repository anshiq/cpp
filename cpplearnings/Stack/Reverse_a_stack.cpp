#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int> &st,int element){
    if(st.empty()){
        st.push(element);
        return;
    }
    int topElement = st.top();
    st.pop();
    insertAtBottom(st,element);
    st.push(topElement);
}
void reverseStack(stack<int> &st){
    if(st.empty()){
        return;
    }
    int element = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st,element);
}
int main(){
   stack<int> st;
   st.push(1);
   st.push(7);
   st.push(12);
   st.push(15);
   st.push(6);
   reverseStack(st);
   while(!st.empty()){
       cout<<st.top()<<endl;
       st.pop();
   }cout<<endl;
}