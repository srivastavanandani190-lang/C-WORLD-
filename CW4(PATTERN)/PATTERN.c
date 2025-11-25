#include<stdio.h>
int main (){//rectangular pattern
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    for (int i=1;i<=n-2;i++){ /*nested loop(internal loop n-2 times
         chalna hai i.e signifies num of lines)*/
    
        for (int i=1;i<=n;i++){
        printf("*");//n number of star in a line(columns)
    }

    printf("\n");/*n number of star in n-2 rows
    (if not mention then prints n stars in same line n-2 times)*/
}
    return 0;
}