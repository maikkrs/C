#include <stdio.h>
#include <string.h> //strstr - busca dentro de string memset
#include <ctype.h> //

#define tope 200

char input[tope], fill[tope];
int c, i= 0;

int main(void){
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
			for (i = 0;strstr (fill, "</h1>") == NULL; ++i){
				c = getchar();
				if (isspace(c)){
				c = '_';
				}	
				fill[i] = c;			
			}
			printf("%s\n", fill);
			fill[0] = '\0';
		}
		if (strstr (input, "<strong>") != NULL){
			for (i = 0;strstr (fill, "</strong>") == NULL; ++i){
				c = getchar();
				if (isspace(c)){
				c = '_';
				}	
				fill[i] = c;
			}
			printf("%s\n", fill);
			fill[0] = '\0';
		}
		if (strstr (input, "<script") != NULL){
			for (i = 0;strstr (fill, "</script>") == NULL; ++i){
				c = getchar();
				fill[i] = c;
			}
			fill[0] = '\0';
		}
		memset(input,' ', sizeof(input));

	}
	return 0;
}
