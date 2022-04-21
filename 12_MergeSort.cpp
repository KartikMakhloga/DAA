
#include <bits/stdc++.h>
using namespace std;

int count_comp=0;

int merge(int *arr,int s,int e) {
    int i=s,mid=s+(e-s)/2,k=s,j=mid+1,temp[e+1];
    int inv_count=0;
    while(i<=mid && j<=e) {
        if(arr[i]<arr[j]) temp[k++]=arr[i++];
        else  {
            temp[k++]=arr[j++];
            inv_count+=(mid-i+1);
        }
        count_comp++;
    }
    while(i<=mid) temp[k++]=arr[i++];
    while(j<=e) temp[k++]=arr[j++];
    for(i=s;i<=e;i++) arr[i]=temp[i];
    return inv_count;
}

int merge_sort(int *arr,int s,int e) {
    int inv_count=0;
    if(e>s) {
        int mid=s+(e-s)/2;
        inv_count+=merge_sort(arr,s,mid);
        inv_count+=merge_sort(arr,mid+1,e);
        inv_count+=merge(arr,s,e);
    }
    return inv_count;
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
    cout<<"\nEnter elements::";
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<"\nBefore Sorting:: ";
    PrintArray(arr,n);
    int inv_count=merge_sort(arr,0,n-1);
    cout<<"\nNumber of inversions::"<<inv_count<<endl;
    cout<<"\nNumber of comparisions::"<<count_comp<<endl;
    cout<<"\nAfter Sorting:: ";
    PrintArray(arr,n);
}