#include <bits/stdc++.h>
using namespace std;

int swap(int *i,int *j) {
    int temp=*i;
    *i=*j;
    *j=temp;
    return 1;
}

void selection_sort(int arr[],int n) {
    int i=0,j=0,key=0,count=0,count_1=0;
    while(i<=n-1) {
        for(j=i;j<n;j++) {
            count_1++;
            if(arr[i]>arr[j]) count+=swap(&arr[i],&arr[j]);
        }
        i++;
    }
    cout<<"\nNumber of swap::"<<count;
    cout<<"\nNumber of comparisons::"<<count_1;
    cout<<"\nFinial Array::";
    for(i=0;i<n;i++) cout<<arr[i]<<", ";
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
    cout<<"Before Sorting:: ";
    PrintArray(arr,n);
    selection_sort(arr,n);
    cout<<"After Sorting:: ";
    PrintArray(arr,n);

}