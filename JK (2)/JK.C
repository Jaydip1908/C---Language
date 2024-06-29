//arithmatic operator such as =,-,*,/,%
#include<stdio.h>


int main(){
	int a,b,c;

	printf("ENTER a&b&c:");
	scanf("%d %d %d", &a, &b, &c);

	printf("\n addition is %d", a+b+c);
	printf("\n mainus  is %d", a-b-c);
	printf("\n devision is %.2f",(float) a/b/c);
	printf("\n multyply is %d", a*b*c);
	printf("\n modulus is %d", a%b%c);
}