#include <stdio.h>


int call(int n){
	if(n==0) return 0;
	return n+call(n-1);

}


int main(){
   
	int i,j;

   
   	for(i=0;i<10;i++)
      	printf("*\n");



   	for(i=0;i<10;i++){
		for(j=0;j<10;j++)
			printf("*");
	   	printf("\n");
   	}



   	printf("hello world");


	printf("%d",call(5));



   	return 0;
}
