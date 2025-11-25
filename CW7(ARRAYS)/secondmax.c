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
    }
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] != max && smax < arr[i])
        {
            smax = arr[i];
        }
    }
    printf("\n THE second maximum elements in a given array  = %d", smax);

    return 0;
}