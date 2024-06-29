#include<stdio.h>
int main(){
    char ch;
    printf("Enter  Day :");
    scanf("%c",&ch);
    
    switch (ch){
    case 's':
             printf("Sunday");
            break;
    case 'm':
    case 'M':
            printf("Monday");
            break;
    case 't':
            printf("Tuesday");
            break;
    case 'w':
    case 'W':
            printf("Wednesday");
            break;
    case 'T':
            printf("Thursday");
            break;
    case 'f':
    case 'F':
            printf("Friday");
            break;
    case 'S':
            printf("Saturday");
            break;
    default:
            printf("not valid day...");
        break;
    }

    return 0;
}