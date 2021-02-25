#include <stdio.h>
#include <string.h> //strstr - busca dentro de string
#include <ctype.h> //

#define tope 50

char input[tope];
int c, i= 0;

int main(){
	while ((c = getchar()) != EOF){
		if (c == '<'){
			input[i] = c;
			while (c != '>'){
				input[i++] = c;
				c = getchar();
			
			}
			input[i++] = c;
		}
		else {
			printf("%c", c);
		}
		if (strstr (input, "<h1>") != NULL){
			for (i = 0, input[0]= ' ';strstr (input, "</h1>") == NULL; ++i){
				c = getchar();
				if (isspace(c)){
				c = '_';
				}	
				input[i] = c;
			}
			printf("%s\n", input);
			 memset(input,'\0', tope);
		}
		if (strstr (input, "<strong>") != NULL){
			for (i = 0, input[0]= ' ';strstr (input, "</strong>") == NULL; ++i){
				c = getchar();
				if (isspace(c)){
				c = '_';
				}	
				input[i] = c;
			}
			printf("%s\n", input);
			 memset(input,'\0', tope);
		}
		memset(input,' ', tope);
	}
	return 0;
}
