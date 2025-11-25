#include<stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0){//just for odd(i%2!=0)
        printf("%d ",i);
        }
    }
    return 0;
}
//infinite loop

/*
1).while(a<b){ //ASCII VALUE IS EVALUATED 97<98 THIS IS TRUE 
HENCE LOOP WILL GO ON RUNNING
printf("malayalam is pallidrome");
}
2).int i=10;
while(i=20){
printf("\nhello honey");
}
*/