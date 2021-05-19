#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int printlist()
{
	char dayl[MaxLen], c;
	int list;
	FILE *lst;

	printf("1 - Monday\n");
    printf("2 - Tuesday\n");
    printf("3 - Wednesday\n");
    printf("4 - Thursday\n");
    printf("5 - Friday\n");
    printf("6 - Saturday\n");
    printf("7 - Sunday\n");
    printf("Select the day: ");
    scanf("%d", &list);

    if (1==list)
    {
    	memcpy (dayl, "monday.txt", sizeof "Monday.txt");

    }
    else if (2==list)
    {
    	memcpy (dayl, "tuesday.txt", sizeof "Tuesday.txt");

    }
    else if (3==list)
    {
    	memcpy (dayl, "wednesday.txt", sizeof "Wednesday.txt");

    }
    else if (4==list)
    {
    	memcpy (dayl, "thursday.txt", sizeof "Thursday.txt");
    }
    else if (5==list)
    {
    	memcpy (dayl, "friday.txt", sizeof "Friday.txt");

    }
    else if (6==list)
    {
    	memcpy (dayl, "saturday.txt", sizeof "Saturday.txt");
    }
    else if (7==list)
    {
    	memcpy (dayl, "sunday.txt", sizeof "Sunday.txt");
    }
    else
    {
    	printf("Not a valid answer\n");
    	return 0;
    }
    printf("%s\n", dayl);
	lst = fopen(dayl, "r");
        if (lst == NULL)
        {
            printf("Cannot open file \n");
            exit(0);
        }
	c = fgetc(lst);
	while (c != EOF)
	{
	    printf ("%c", c);
	    c = fgetc(lst);
	}
	
	fclose(lst);
	return 0;
}