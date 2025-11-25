#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        printf("ENTER THE %d ELEMENT ->", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("arr[%d]=%d ", i, arr[i]);
    }
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i < 4; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        else if(smax<arr[i] && max!=arr[i]){
            smax=arr[i];
        }
    }
    printf("THE SECOND MAXIMUM ELEMENT IN A GIVEN ARRAY -> %d",smax);
    return 0;
}