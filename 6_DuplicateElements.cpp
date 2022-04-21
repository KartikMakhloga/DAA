#include <iostream>
using namespace std;

void find_key(int arr[],int n,int key) {
    int i,count=0;
    for(i=0;i<n;i++) if(arr[i]==key) break;
    int j=i;
    while(arr[j]==key && j<n) { count++; j++; }
    if(count!=0) {
        cout<<"Element found\n";
        cout<<"number of copies::"<<count;
    }
    else cout<<"Element not found";
}

int main() {
    int n,i,key;
    cout<<"Enter no of elements::";
    cin>>n;
    int arr[n];
    cout<<"Enter elements::";
    for(i=0;i<n;i++) cin>>arr[i];
    cout<<"Enter the key::";
    cin>>key;
    find_key(arr,n,key);
}