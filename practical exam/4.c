#include<stdio.h>
#include<string.h>
int main(){
     char str[20],str2[20];
     printf("enetr name:");
     gets(str);
     printf("name is:");
     puts(str);
    
     printf("\n upper of string is %s",strupr(str));
     printf("\n length of string is %d",strlen(str));
     printf("\n lower of string is %s",strlwr(str));
     printf("\n reverse of string is %s",strrev(str));
return 0;
}