#include<stdio.h>
int  main(){
  intn,num,max;
printf("enter the number of value:");
scanf("%d",&num);
if(n<=0){
printf("invalid input.please enter a positive number of values.\n");
return1;
}
printf("enter %dnumbers:\n",n);
scanf("%d",&max);
for(int i=1;i<n;i++){
scanf("%d",&num);
if(num>max){
max=num;
}
}
printf("the maximum number is:%d\n",max);
return 0;
}
