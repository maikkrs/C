#include <stdio.h>

int main() {

	char txt;
	int count;

	;
	count = 0;
	while ((txt = getchar()) != EOF){
		if(txt == '<' || txt == '{'){
			while(txt != '>' && txt != '}'){
			(txt = getchar());
			}	
		}
		else {
			printf("%c", txt);
		}
	}
	return 0;
}