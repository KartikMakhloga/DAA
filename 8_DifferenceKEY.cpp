#include <bits/stdc++.h>
using namespace std;

void find_sequence(int arr[],int n,int key) {
    sort(arr,arr+n);
    int i,j,k,difference=0;
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            difference=arr[j]-arr[i];
            if(difference==key) cout<<i<<","<<j<<endl;
        }
    }
}

int main() {
    int n,i,key;
    cout<<"Enter the number of elements::";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements::";
    for(i=0;i<n;i++) cin>>arr[i];
    cout<<"Enter key::";
    cin>>key;
    find_sequence(arr,n,key);
}