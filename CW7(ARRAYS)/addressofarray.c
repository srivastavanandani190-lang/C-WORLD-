#include <stdio.h>
int main()
{

        int arr[7] = {25, 35, 62, 14, 16, 12, 45};
        for (int i = 0; i < 7; i++)
        {
                printf("%p\n", &arr[i]); // address of array.
                // In hexadecimal format address is displayed.
        }
        return 0;
}