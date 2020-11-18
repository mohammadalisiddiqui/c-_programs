main(){
	int a;
	int b;
	int c; 
	printf("Enter any number:");
	scanf("%d \n", &b);
	for (a=1; a<=10;a++){
		int c = b*a;
		printf("%d * %d = %d \n",b,a,c);
	}
}
