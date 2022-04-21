#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int n) {
    int i,j,key,count_1=0,count_2=0;
    for(i=1;i<n;i++) {
        key=arr[i];
        j=i-1;

        count_1++;

        while(j>=0 && arr[j]>key) {
            count_2++;
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    cout<<"\nTotal number of comparission::"<<count_1;
    cout<<"\nTotal no of shifts::"<<count_2<<endl;
}

void PrintArray(int arr[],int size){
    for(int i=0;i<=size-1;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int n;
    cout<<"Enter the no of elements::";
    cin>>n;
    int arr[n];
    cout<<"Enter the element::";
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<"Before Sorting:: ";
    PrintArray(arr,n);
    insertion_sort(arr,n);
    cout<<"After Sorting:: ";
    PrintArray(arr,n);
}