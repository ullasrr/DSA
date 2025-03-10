#include<iostream>
#include<queue>
using namespace std;


int main(){
    int arr[]={10,20,-4,5,18,24,1,-7,56};
    int k=1;  //Kth element
    priority_queue<int> pq;

    int n=sizeof(arr)/sizeof(arr[0]); //size

    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k){
            pq.pop();
        }
    }

    cout<<pq.top();

return 0;
}