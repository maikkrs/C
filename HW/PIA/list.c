#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int printlist()
{
	char dayl[MaxLen], c;
	int list, option;
	FILE *lst;

	printf("\n\n1 - Monday\n");
    printf("2 - Tuesday\n");
    printf("3 - Wednesday\n");
    printf("4 - Thursday\n");
    printf("5 - Friday\n");
    printf("6 - Saturday\n");
    printf("7 - Sunday\n\n");
    printf("Select the day: ");
    scanf("%d", &list);			//uses the same structure that registration to select the day.

    if (1==list)
    {
    	memcpy (dayl, "monday.txt", sizeof "Monday.txt"); // Instead of writing the day that is going to be printed in the file, writes the name of the file.

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

	lst = fopen(dayl, "r"); // Uses the name assigned to dayl as the name of the file to open it and read it.
        if (lst == NULL)
        {
            printf("Cannot open file \n"); // This was just in case something went wrong.
            exit(0);
        }

    c = fgetc(lst);
        while (c != EOF)		// Prints the information from the file into the console until it reads EOF.
        {
            printf ("%c", c);
            c = fgetc(lst);
        }

    printf ("\n");
    fclose(lst);
	
	return main(); 			// Return to the main (menu).
}

