#include<iostream>
using namespace std;
void explainStack(){
    stack<int> st;
    st.push(2); //adds to the front
    st.emplace(3); //{3,2}
    st.top(); // gives the topmost element i.e. 3
    st.pop(); //removes the topmost element
    cout<<st.size(); //gives the size of the stack
    cout<<st.empty(); //gives 1 if stack is empty else 0
}

void queueExplain(){
    queue<int> q;
    q.push(1); //adds to the back
    q.emplace(2); //{1,2}
    q.back()+=5; //{1,7}
    cout<<q.back(); //gives the last element i.e. 7
    cout<<q.front(); //gives the first element i.e. 1
    q.pop(); //removes the first element
    cout<<q.size(); //gives the size of the queue
    cout<<q.empty(); //gives 1 if queue is empty else 0
}