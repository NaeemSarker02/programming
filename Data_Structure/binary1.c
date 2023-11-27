#include<stdio.h>

int binarySearch(int arr[], int size, int target)
{
    int low = 0, high = size - 1;

    while(low<=high)
    {
        int mid = (low+high)/2;

        if(arr[mid] == target )
        {
            return mid;
        }

        if(arr[mid]<target)
        {
            low = mid+1;
        }
        else
        {
            high = mid -1;
        }
    }

    return -1;
}


int main()
{

    int arr[]= {8,4,5,7,6,1,12};
    int cum_sum[] = {8,12,17,24,30,31,43};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n",size);
    int target;
    scanf("%d",&target);


    ///returns the index of the target value

    int index = binarySearch(cum_sum, size, target);

    if(index==-1)
    {
        printf("Not Found\n");
    }
    else
    {
        printf("Found at index %d\n",index);
    }

}
