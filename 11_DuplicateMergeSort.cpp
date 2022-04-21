#include <bits/stdc++.h>
using namespace std;

void merge(int *arr,int s,int e) {
    int i=s,mid=s+(e-s)/2,j=mid+1,k=s,temp[e+1];
    while(i<=mid && j<=e) {
        if(arr[i]<arr[j]) temp[k++]=arr[i++];
        else temp[k++]=arr[j++];
    }
    while(i<=mid) temp[k++]=arr[i++];
    while(j<=e) temp[k++]=arr[j++];
    for(i=s;i<=e;i++) arr[i]=temp[i];

}

void merge_sort(int *arr,int s,int e) {
    if (s>=e)return;
    int mid= s+(e-s)/2;
    merge_sort(arr,s,mid);
    merge_sort(arr,mid+1,e);
    merge(arr,s,e);
}

void find_dub(int *arr,int s,int e){
    int i=s;
    while(i<e)  { 
        if(arr[i]==arr[i+1]) { cout<<"\nDublicates found"; return; }
        i++; 
    }
    cout<<"\nDublicates not found";
}
void PrintArray(int arr[],int size){
    for(int i=0;i<=size-1;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int n;
    cout<<"Enter the number of elements::";
    cin>>n;
    int arr[n];
    cout<<"Enter elements::";
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<"\nBefore Sorting:: ";
    PrintArray(arr,n);
    merge_sort(arr,0,n-1);
    cout<<"\nAfter Sorting:: ";
    PrintArray(arr,n);
    find_dub(arr,0,n-1);
}