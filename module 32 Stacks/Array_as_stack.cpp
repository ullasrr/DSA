#include<iostream>
using namespace std;

class Stack{
public:
int arr[5];
int idx=-1;

void push(int val){
    idx++;
    arr[idx]=val;
}

void pop(){
    idx--;
}

int top(){
    return arr[idx];
}
int size(){
    return idx+1;
}

};

int main(){

Stack st;
st.push(10);
st.push(20);
st.push(30);

cout<<st.size()<<endl;
st.pop();
cout<<st.top()<<endl;
cout<<st.size();

return 0;
}