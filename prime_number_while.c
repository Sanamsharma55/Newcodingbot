#include<stdio.h>
int main()
{
    int num,isprime=1;
    printf("enter the number");
    scanf("%d",&num);
    if(num<=1)
    {
        printf("it is not a prime.");
    }else{
        int i=2;
        while(i<num){
            if(num% i==0){
                isprime=0;
                break;
            }
            i++;
        }
        if(isprime){
            printf("its prime");
        }else{
            printf("its not prime");
        }
    }
    return 0;
}
    
