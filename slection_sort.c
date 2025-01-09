// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    //printf("Try programiz.pro");
    int arr[]={13,9,24,23,1006,52};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<=n-2;i++){
        int min=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[min]){
                min=j;
        }
        int temp = arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
    }
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
