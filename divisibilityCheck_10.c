#include <stdio.h>
#include <math.h>
int main(){
	int size , num = 0;
	scanf("%d", &size) ;

	int a[size] ;
	
	int power = size-1;
	for(int i = 0 ; i < size ; i++){
		scanf("%d", &a[i]) ;
		int last = a[i] % 10 ;
		num += last*((int)pow(10,power));
		--power ;
		
    }
	if(num % 10 == 0)
		printf("Yes") ;
	else
		printf("No") ;

}
