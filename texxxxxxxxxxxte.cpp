#include<stdio.h>
#include<math.h>

main(){
	float quad, num, x;
	
	printf("apresente o x: ");
	scanf("%f", &x);
	
	printf("apresente um numeor: ");
	scanf("%f", &num);
	
	quad=pow(x,num);
	printf("qual a raix quadrada de %f e %f é igual a= %f", x,num,quad);
	 
}

