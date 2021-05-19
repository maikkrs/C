#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void registerUser()
{
    char name[MaxLen];
    char name2[MaxLen];
    char ln[MaxLen];
    char ln2[MaxLen];
    char topic[MaxLen];
    char day[MaxLen];
    char scan[MaxLen];

    User user;
    int i, secn, dayn;
    FILE* mn = fopen("monday.txt", "w");
    FILE* tu = fopen("tuesday.txt", "w");
    FILE* wd = fopen("wednesday.txt", "w");
    FILE* th = fopen("thursday.txt", "w");
    FILE* fr = fopen("friday.txt", "w");
    FILE* st = fopen("saturday.txt", "w");
    FILE* sn = fopen("sunday.txt", "w");

    printf("Select the day\n");
    printf("1 - Monday\n");
    printf("2 - Tuesday\n");
    printf("3 - Wednesday\n");
    printf("4 - Thursday\n");
    printf("5 - Friday\n");
    printf("6 - Saturday\n");
    printf("7 - Sunday\n");
    scanf("%d", &dayn);
    printf("%ls", &dayn);
    if (1==dayn)
    {
    	memcpy (day, "Monday", sizeof "Monday");
    	printf("%s\n", day);
    	strcpy(user.day, day);
    }
    else if (2==dayn)
    {
    	memcpy (day, "Tuesday", sizeof "Tuesday");
    	printf("%s\n", day);
    	strcpy(user.day, day);
    }
    else if (3==dayn)
    {
    	printf("%ls", &dayn);
    	memcpy (day, "Wednesday", sizeof "Wednesday");
    	printf("%s\n", day);
    	strcpy(user.day, day);
    }
    else if (4==dayn)
    {
    	printf("%ls", &dayn);
    	memcpy (day, "Thursday", sizeof "Thursday");
    	printf("%s\n", day);
    	strcpy(user.day, day);
    }
    else if (5==dayn)
    {
    	printf("%ls", &dayn);
    	memcpy (day, "Friday", sizeof "Friday");
    	printf("%s\n", day);
    	strcpy(user.day, day);
    }
    else if (6==dayn)
    {
    	printf("%ls", &dayn);
    	memcpy (day, "Saturday", sizeof "Saturday");
    	printf("%s\n", day);
    	strcpy(user.day, day);
    }
    else if (7==dayn)
    {
    	memcpy (day, "Sunday", sizeof "Sunday");
    	printf("%s\n", day);
    	strcpy(user.day, day);
    }
    else
    {
    	printf("Not a valid answer\n");
    	return;
    }

    printf("Ingresa el primer nombre:");
    scanf("%s",name);
    strcpy(user.name , name);

    printf("Tiene segundo nombre?\n 1 - yes \n 2 - no \n");
    scanf("%d",&secn);
    if (1== secn)
    {
    	printf("Ingresa el segundo nombre:");
    	scanf("%s",name2);
    	strcpy(user.name2, name2);
    }
    else if (2 == secn)
    {
    	;
    }
    else
    {
    	printf("Not a valid answer\n");
    	return;
    }

    printf("Ingresa el primer apellido (Usa guion bajo para espacios):");
    scanf("%s",ln);
    strcpy(user.ln , ln);

    printf("Ingresa la materia(Usa guion bajo para espacios):");
    scanf("%s",topic);
    strcpy(user.topic , topic);

    printf("Ingresa el precio por la clase:");
    scanf("%ls", user.price);

    writeToFile(user, dayn);
      printf("Registrado con éxito\n");
}
