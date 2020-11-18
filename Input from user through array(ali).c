main(){
	int per[10];
	int x,y;
	
	for(x=0;x<10;x++){
		printf("Enter the value of index %d=",x);
		scanf("%d",&per[x]);
	}
	for(y=0;y<10;y++){
		printf("the value of index %d = %d  \n",y,per[y]);
	}
}
