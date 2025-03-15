#include <stdio.h>

int main(){
	int t , n , k;
	scanf("%d\n%d %d",&t , &n , &k ) ;
	int a[n] ;
	int b[n] ; 
	for(int i = 0 ; i < n ; i++){
		scanf("%d", &a[i]);
	}
	while(k > 0){
		for(int i = 0 ; i < n ; i++){
			if(i == n-1){
				b[0] = a[i] ;
			}
			else{
				b[i+1] = a[i] ;
			}
		}
		for(int i = 0 ; i < n ; i++){
			a[i] = b[i] ;
		}
		--k ; 
	}
	for(int i = 0 ; i < n ; i++){
		printf("%d ", b[i]);
	}
}
