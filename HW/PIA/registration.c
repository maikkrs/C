#include <stdio.h>
#include <string.h>
#include "header.h"

int registerUser()
{

    User user;
    char day[MaxLen];
    int secn, dayn;


    printf("\n\n1 - Monday\n");
    printf("2 - Tuesday\n");
    printf("3 - Wednesday\n");
    printf("4 - Thursday\n");
    printf("5 - Friday\n");
    printf("6 - Saturday\n");
    printf("7 - Sunday\n\n");
    printf("Select the day: ");
    scanf("%d", &dayn);

    if (1==dayn)
    {
    	memcpy (day, "Monday", sizeof "Monday");

    }
    else if (2==dayn)
    {
    	memcpy (day, "Tuesday", sizeof "Tuesday");

    }
    else if (3==dayn)
    {
    	memcpy (day, "Wednesday", sizeof "Wednesday");

    }
    else if (4==dayn)
    {
    	memcpy (day, "Thursday", sizeof "Thursday");
    }
    else if (5==dayn)
    {
    	memcpy (day, "Friday", sizeof "Friday");

    }
    else if (6==dayn)
    {
    	memcpy (day, "Saturday", sizeof "Saturday");

    }
    else if (7==dayn)
    {
    	memcpy (day, "Sunday", sizeof "Sunday");
    }
    else
    {
    	printf("Not a valid answer\n");
    	return 0;
    }

    printf("Enter name(Use underscore for spaces): ");
    scanf("%s",user.name);

    printf("Does the student have a middle name?\n 1 - yes \n 2 - no \n");
    scanf("%d",&secn);
    if (1== secn)
    {
    	printf("Enter middle name (Use underscore for spaces): ");
    	scanf("%s",user.name2);
    }
    else if (2 == secn)
    {
    	;
    }
    else
    {
    	printf("Not a valid answer\n");
    	return 0;
    }

    printf("Enter the first last name (Use underscore for spaces): ");
    scanf("%s",user.ln);

    printf("Enter the second last name (Use underscore for spaces): ");
    scanf("%s",user.ln2);

    printf("Enter the subject (Use underscore for spaces): ");
    scanf("%s",user.topic);

    printf("Enter the price for the class: ");
    scanf("%ls",user.price);


    printf("12 hrs \n 1 pm \n 2 pm \n 3 pm \n 4 pm \n 5 pm \n 6 pm \n 7 pm \n");
    printf("Select the time the class starts (only the number): ");
    scanf("%ls",user.hrs);

    writeToFile(user, dayn, secn);
      printf("Successfully registered\n\n");

      return main();
}
