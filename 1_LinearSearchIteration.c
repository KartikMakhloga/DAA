#include <stdio.h>

int find_key(int arr[],int size,int key) {
    int i;
    for (i=0;i<size;i++) {
        if(arr[i]==key) {
            printf("Total no of comparisons::%d \n",i+1);
            return 0;
        }
    }
    printf("Total no of comparisons::%d \n",i);
    return -1;
}

int main() {
    int n,i,key;
    printf("Enter no of elements::");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements::",n);
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter key::");
    scanf("%d",&key);
    int flag=find_key(arr,n,key);
    if (flag==0) printf("Key found");
    else printf("Key not found");
}