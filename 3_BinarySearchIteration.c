#include <stdio.h>

int find_key(int arr[],int start,int end,int key) {
    int count=0;
    while(start<=end) {
        int mid=start+(end-start)/2;
        if(arr[mid]==key) { printf("Total no of comparisions::%d",++count); return 0;}
        if(arr[mid]<key) { ++count; start=mid+1; }
        if(arr[mid]>key) { ++count; end=mid-1; }
    }
    printf("Total no of comparisions::%d",count);
    return -1;
}

int main() {
    int n,i,key;
    printf("Enter no of elements::");
    scanf("%d",&n);
    printf("Enter elements::");
    int arr[n];
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter key::");
    scanf("%d",&key);
    int flag=find_key(arr,0,n-1,key);
    if(flag==-1) printf("Key not found");
    else printf("Key found");
}