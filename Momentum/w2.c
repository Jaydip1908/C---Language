#include <stdio.h>
int main() {
    int num;
    printf("Enter  Number : ");
    scanf("%d", &num);

    (num%2==0)?printf("Num is even :"): printf("Num is odd :");
    
 
    return 0;
}