#include <stdio.h>
#include <string.h>

int main(void){

int  p, a, b, c, count, bin[80], k = 50;
float n;

for (int j = 2; j < k; ++j){
    a = 0;
    count = 0;  
    for (int i = 2; i < j; ++i){
        if ((j%i) == 0){
            count++;
        }
    }
    if (count < 1){
        c = j;
        while (c > 0){
            bin[a] = c % 2;
            c /= 2;
            ++a;
        }
        printf(" ");    
        for (; a >= 0; --a){
            printf("%d", bin[a]);
        }
        printf("\n");       
     } 
}
printf("\n");

return 0;
}