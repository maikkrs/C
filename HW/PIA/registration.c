#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void registerUser()
{

    User user;
    char day[MaxLen];
    int secn, dayn;


    printf("1 - Monday\n");
    printf("2 - Tuesday\n");
    printf("3 - Wednesday\n");
    printf("4 - Thursday\n");
    printf("5 - Friday\n");
    printf("6 - Saturday\n");
    printf("7 - Sunday\n");
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
    	return;
    }

    printf("Ingresa el primer nombre: ");
    scanf("%s",user.name);

    printf("Tiene segundo nombre?\n 1 - yes \n 2 - no \n");
    scanf("%d",&secn);
    if (1== secn)
    {
    	printf("Ingresa el segundo nombre: ");
    	scanf("%s",user.name2);
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

    printf("Ingresa el primer apellido (Usa guion bajo para espacios): ");
    scanf("%s",user.ln);

    printf("Ingresa el segundo apellido (Usa guion bajo para espacios): ");
    scanf("%s",user.ln2);

    printf("Ingresa la materia(Usa guion bajo para espacios): ");
    scanf("%s",user.topic);

    printf("Ingresa el precio por la clase: ");
    scanf("%ls",user.price);


    printf("12 hrs \n 1 pm \n 2 pm \n 3 pm \n 4 pm \n 5 pm \n 6 pm \n 7 pm \n");
    printf("Selecciona la hora a la que inicia (solo el numero):");
    scanf("%ls",user.hrs);


    writeToFile(user, dayn);
      printf("Registrado con éxito\n");
}
