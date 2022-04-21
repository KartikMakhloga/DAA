#include<bits/stdc++.h>
using namespace std;

void find_sequence(int arr[],int n) {
    int i=0,j=0,k=0,sum=0;
    for(i=0;i<n;i++) {
        for(j=i;j<n-1;j++) {
            sum=arr[i]+arr[j];
            for(k=j+1;k<n;k++) {
                if(sum==arr[k]) {
                    cout<<i<<","<<j<<","<<k<<endl; break;
                }
            }
        }
    }
}

int main() {
    int n,i,key;
    cout<<"Enter no of elements::";
    cin>>n;
    int arr[n];
    cout<<"Enter elements::";
    for(i=0;i<n;i++) cin>>arr[i];
    find_sequence(arr,n);
}