#include <stdio.h>

int main() {
    int t ;
    scanf("%d", &t);
    for(int i  = 0 ; i < t ; i++){
        float a , b , c ;
        scanf("%f %f %f" , &a , &b , &c );
        
        float avg = (a + b) / 2 ;
        if(avg > c)
            printf("yes\n");
        else
            printf("no\n");
    }
}

