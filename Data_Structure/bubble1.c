#include<stdio.h>
int main()
{
    int arr[]={ 2, 55, 65, 458, 4};
    int i,j,size=5,temp;


    for(i=0;i<size-1-i;i++){
        for(j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("after sorting:\n");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
