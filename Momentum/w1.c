#include<stdio.h>
int main(){
char ch;
printf("enter character :");
scanf("%c",&ch);

  if ((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
       printf("It Is alphabet");
    } else if(ch>='0' && ch<='9'){
       printf("It Is digit");
    } else{
       printf("It Is Special Character");
    }
return 0;
}

