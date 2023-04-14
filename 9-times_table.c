#include "main.h"
#include <stdio.h>
void times_table(void){
    int a,b;
    for(b = 0; b <= 9; b++){
        for(a = 0; a <= 9; a++){
            printf("%d",a * b);
            if (a != 9){
                printf(","); 
            }
            printf("\t");
        }
        printf("\n");
    }
}