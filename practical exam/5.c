#include<stdio.h>
int main(){

int r,n,f,num=0;

printf("Enter no :");
scanf("%d" ,&n);
f=n;
while(n>0)
{
    r=n%10;
    num=(num*10)+r;
    n=n/10;
} 
printf("Number is %d",num);

if (f==num)
{
    printf("\n This number is Palimdrom ");
}
else{
    printf("\n This number is Not Palimdrom ");
}



return 0;
}