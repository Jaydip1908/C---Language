//frist
#include<stdio.h>
#define pi 3.14

int main(){
	float x,y,z;
	printf("enter value a&b&c : ");
	scanf(" %f %f %f" ,&x ,&y ,&z);

	printf(" \narea of circle id %.3f", pi*x*x);
	printf(" \narea of square id %.3f", x*x);
	printf(" \narea of rectangle id %.3f", x*y);
	printf(" \narea of tringle id %.3f", x*y/0.5);
	printf(" \narea of perameter of circle id %.3f",2*pi*z);
	printf(" \narea of interst id %.3f", z*z);

  return 0;
 }
 