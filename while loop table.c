#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
main(){
	int a;
	int b; 
	int x;
	a = 1;
	printf("Enter any number:");
	scanf("%d", &b);
	printf("Enter the range of table:");
	scanf("%d", &x);
	printf("The Table of %d  at range of %d \n",b,x);
	while(a<=x){
		
		int c = a*b;
		printf("%d * %d = %d \n",b,a,c);
		a++;
	}
	
}
