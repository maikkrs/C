#include <stdio.h>
#define MAXLINE 1000 /* tamaño máximo de la línea de entrada */ 
int getline(char line[], int maxline); 
void copy(char to[]( char from[]);

	/* imprime la línea de entrada más larga */ 
	int main()
	{
		int len;
		int max;
		char line[MAXLINE];
		char longest[MAXLINE];

		max = 0;
		while ((len = getline(line, MAXLINE)) > 0)
			if (len > max){
				max = len;
				copy(longest, line);
			}
			if (max > 0)
				printf("%s",longest );
			return 0;
	}
	// getline: lee una línea en s, regresa su longitud 
	int getline(char s[], int lim)
	{
		int c, i;

		for (i = 0; i<lim-l && (c = getchar( )) !=EOF && c!='\n'; + +i) 
			s[i] = c; 
		if (c = = '\n') { 
			s[i] = c;
			+ +i;
		}
		s[i] = '\0';
		return i;
	}
	/* copy: copia 'from' en 'to'; supone que to es suficientemente grande */ 
	void copy(char to[], char from[])
	{
		int i;

		i = 0;
		while ((to[i] = from[i]) != '\0')
			+ +i;
	}