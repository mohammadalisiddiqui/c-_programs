#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
main(){
	int x[3][3];
	int a;
	int b,c,d;// b is use in for loop
	for(a=0;a<=2;a++){
		for(b=0;b<=2;b++){
			printf("Enter the Value of Array [%d],[%d]=",a,b);
			scanf("%d",&x[a][b]);
		}
	}
	for(c=0;c<=2;c++){
		for(d=0;d<=2;d++){
			printf("The value of Array of index [%d] [%d] is = %d \n",c,d,x[c][d]);
		}
	}
}
