#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
main(){
	float cal[7];
	printf("Enter number a: ");
	scanf("%f",&cal[0]);
	printf("enter number b: ");
	scanf("%f", &cal[1]);
	cal[2]=cal[0]+cal[1];
	cal[3]=cal[0]-cal[1];
	cal[4]=cal[0]*cal[1];
	cal[5]=cal[0]/cal[1];
	printf("Addition of %0.f and %0.f = %0.f\n",cal[0],cal[1],cal[2]);
	printf("subtraction of %0.f and %0.f = %0.f\n",cal[0],cal[1],cal[3]);
	printf("Multiplication of %0.f and %0.f = %0.f\n",cal[0],cal[1],cal[4]);
	printf("Division of %0.f and %0.f = %0.2f \n",cal[0],cal[1],cal[5]);
	

}
