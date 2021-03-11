#include <stdio.h>

#define TRUE 1          
#define FALSE 0         //Agradezco a Ruben por ayudarme con un problema que tenia en los numeros.
                        //Input de ejemplo: Texto de prueba 123 456.789 "123" '123' (123) [123] {123} <123> 123 HOLA

int main(){

    int c, q = 0, q2 = 0, digits = 0, par = 0; 

    while((c=getchar()) !=EOF) {
        switch (c){
            case '(': case '[': case '{': case '<':
            par = TRUE;
            putchar(c);
            break;
            case ')': case ']': case '}': case '>':
        par = FALSE;
        putchar(c);
        break;

        case '"':
        putchar(c);
        q++;
        break;

        case '\'':
        putchar(c);
        q2++;
        break;

        default:
            if(c!='.' && c!=',' && c!=':' && c!=';' && c!='?'&& c!='!'&& c!='-' && c!='_' && c!='`'){
                if (q==TRUE || q2==TRUE || par==TRUE){
                    putchar (c);
                }
                else{
                    if (q==2 || q2==2){
                        q=FALSE;
                        q2=FALSE;
                    }
                    if(c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='7'||c=='8'||c=='9'||c=='0'){
                        digits++;
                    }
                    else{
                    digits = FALSE;
                    }
                    if (digits==TRUE){
                        putchar ('x');
                    }
                    if (digits==FALSE){
                        putchar (c);
                    }
                }
            }
        }
    }
return 0;
}
