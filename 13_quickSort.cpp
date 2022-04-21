#include <bits/stdc++.h>
using namespace std;

int count_swap=0;
int count_comp=0;

// void swap(int *a,int *b) {
//     int temp=*a;
//     *a=*b;
//     *b=*a;
// }

int partition (int *arr,int s,int e) {
   int pivot = arr[s];
    int i = s - 1, j = e + 1;
 
    while (1) {
        do {
            i++;
            count_comp++;
        } while (arr[i] < pivot);
        do {
            j--;
            count_comp++;
        } while (arr[j] > pivot);
        if (i >= j)
            return j;
        swap(arr[i], arr[j]);
        count_swap++;
    }
}

int partition_r(int arr[], int low, int high) {
    srand(time(NULL));
    int random = low + rand() % (high - low);
    swap(arr[random], arr[low]);
    count_swap++;
    return partition(arr, low, high);
}

void quick_sort(int *arr,int s,int e) {
    if(e>s) {
        int pi=partition_r(arr,s,e);
        quick_sort(arr,s,pi);
        quick_sort(arr,pi+1,e);
    }
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
    cout<<"Enter elements::";
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<"\nBefore Sorting:: ";
    PrintArray(arr,n);
    quick_sort(arr,0,n-1);
    cout<<"\nNumber of Comparisions::"<<count_comp;
    cout<<"\nNumber of Swap::"<<count_swap<<"\n";
    cout<<"\nAfter Sorting:: ";
    PrintArray(arr,n);
}