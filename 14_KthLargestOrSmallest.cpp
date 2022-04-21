#include<bits/stdc++.h>
using namespace std;

void merge(int *arr,int s,int e) {
    int i=s,k=s,mid=s+(e-s)/2,j=mid+1,temp[e+1];
    while(i<=mid && j<=e) {
        if(arr[i]<arr[j]) temp[k++]=arr[i++];
        else temp[k++]=arr[j++];
    }
    while(i<=mid) temp[k++]=arr[i++];
    while(j<=e) temp[k++]=arr[j++];
    for(i=s;i<=e;i++) arr[i]=temp[i];
}

void merge_sort(int *arr,int s,int e)
{
    if(s<e) {
        int mid=s+(e-s)/2;
        merge_sort(arr,s,mid);
        merge_sort(arr,mid+1,e);
        merge(arr,s,e);
    }
}

int find_min(int *arr,int n,int k) {
    int i,count=0,index=0;
    for(i=0;i<n-1;i++) {
        if(count==k-1) return index;
        if(arr[i]!=arr[i+1]) {count++; index++; }
        else index++;
    }
    return 0;
}

int find_max(int *arr,int n,int k) {
    int i,count=0,index=0;
    for(i=n-1;i>=1;i--) {
        if(count==k-1) return (n-index-1);
        if(arr[i]!=arr[i-1]) {count++; index++;}
        else index++;
    }
    return 0;
}

int main() {
    int n,k,flag_max=0,flag_min=0;
    cout<<"Enter no of elements::";
    cin>>n;
    int arr[n],ch;
    cout<<"Enter elements::";
    for(int i=0;i<n;i++) cin>>arr[i];
    merge_sort(arr,0,n-1);
    cout<<"\nMENU\n1.Find Smallest\n2.Find Largest\n";
    cout<<"Enter your choice::";
    cin>>ch;
    switch(ch) {
        case 1: 
            cout<<"Enter kth position::";
            cin>>k;
            cout<<"\n"<<k<<"'th smallest number is::"<<arr[find_min(arr,n,k)]<<"\n";
        break;
        case 2:
            cout<<"Enter kth position::";
            cin>>k;
            cout<<k<<"'th largest number is::"<<arr[find_max(arr,n,k)]<<endl;
        break;
        default : cout<<"\n----INVALID CHOICE-----\n";
    }
}