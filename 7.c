//7. Write a program to find second largest in an array.Take array values from the user.


#include<stdio.h>
int main()
{
    int size;
    printf("Enter a choice number: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter %d number: \n",size);
    for(int i=0; i<size; i++)
    {
        printf("Enter %d number: ",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp  = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nSecond largest element is: %d",arr[size-2]);


    return 0;
}
