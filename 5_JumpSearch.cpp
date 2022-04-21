#include <bits/stdc++.h>
using namespace std;

int find_key(int arr[],int n,int key) {
    int step=2;
    int prev=0;
    while(arr[min(step,n)-1]<key) {
        prev=step;
        step+=2;
        if(prev >=n) return -1;
    }
    while(arr[prev]<key) {
        prev++;
        if(prev==min(step,n)) return -1;
    }

    if(arr[prev]==key) return 0;

    return -1;
}

int main() {
    int n,i,key;
    cout<<"Enter no of elements::";
    cin>>n;
    cout<<"Enter elements::";
    int arr[n];
    for(i=0;i<n;i++) cin>>arr[i];
    cout<<"Enter key::";
    cin>>key;
    int flag=find_key(arr,n,key);
    if(flag==-1) cout<<"Key not found";
    else cout<<"Key found";
}