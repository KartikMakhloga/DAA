#include <stdio.h>

int find_key(int arr[],int n,int key) {
    static int i;
    if(i<=n-1) {
        if(arr[i++]==key) {
            printf("Total no of comparisons:: %d \n",i);
            return 0;
        }
    }
    else {
        printf("Total no of comparisons:: %d \n",i);
        return -1;
    }
    find_key(arr,n,key);
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
    int flag=find_key(arr,n,key);
    if(flag==-1) printf("Key not found");
    else printf("Key found");
}