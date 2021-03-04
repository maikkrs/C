#include <stdio.h>

int main(){

int  p, a, b, c, count, k = 50;
int bin[20] = {0};

for (int j = 2; j < k; ++j){

    a = 0;
    count = 0;  
    for (int i = 2; i < j; ++i){
        if ((j%i) == 0){
            count++;
        }
    }
    if (count < 1){
        printf("%d \t---> \t", j);
        c = j;
        while (c > 0){
            bin[a] = c % 2;
            c /= 2;
            ++a;
        }
      
        for (a=7; a >= 0; --a){
            printf("%d", bin[a]);
        }
        printf("\n");       
     } 
}
printf("\n");
return 0;
}