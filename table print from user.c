main(){
	int a;
	int b; 
	printf("Enter any number:");
	scanf("%d \n", &b);
	for (a=1; a<=10;a++){
		int c = a*b;
		printf("%d * %d = %d \n",b,a,c);
	}
}
