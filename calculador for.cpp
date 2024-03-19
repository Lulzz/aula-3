#include<stdio.h>
main()
{
	int n;
	int t;
	int i;
	
	printf("digite um numero: ");
	scanf("%d", &n);
	
	for (i=1; i<=10;i++){
		t=n*i;
		printf("%d x %d = %d\n",n,i,t);
	}
	
}
