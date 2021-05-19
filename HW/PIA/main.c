#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"



void writeToFile(User u, int df)
{
    if (1==df)
    {
        FILE *fipo = fopen("monday.txt","w");

        fprintf(fipo,"\t$%ls", u.price);
        fprintf(fipo,"\t%s", u.topic);
        fprintf(fipo,"\t\t%s", u.name);
        fprintf(fipo," %s", u.ln);
        fclose(fipo);
    }
    else if (2==df)
    {
        FILE *fipo = fopen("tuesday.txt","w");

        fprintf(fipo,"\t$%ls", u.price);
        fprintf(fipo,"\t%s", u.topic);
        fprintf(fipo,"\t\t%s", u.name);
        fprintf(fipo," %s", u.ln);
        fclose(fipo);
    }
    else if (3==df)
    {
        FILE *fipo = fopen("wednesday.txt","w");

        fprintf(fipo,"\t$%ls", u.price);
        fprintf(fipo,"\t%s", u.topic);
        fprintf(fipo,"\t\t%s", u.name);
        fprintf(fipo," %s", u.ln);
        fclose(fipo);
    }
    else if (4==df)
    {
        FILE *fipo = fopen("thursday.txt","w");

        fprintf(fipo,"\t$%ls", u.price);
        fprintf(fipo,"\t%s", u.topic);
        fprintf(fipo,"\t\t%s", u.name);
        fprintf(fipo," %s", u.ln);
        fclose(fipo);
    }
    else if (5==df)
    {
        FILE *fipo = fopen("friday.txt","w");

        fprintf(fipo,"\t$%ls", u.price);
        fprintf(fipo,"\t%s", u.topic);
        fprintf(fipo,"\t\t%s", u.name);
        fprintf(fipo," %s", u.ln);
        fclose(fipo);
    }
    else if (6==df)
    {
        FILE *fipo = fopen("saturday.txt","w");

        fprintf(fipo,"\t$%ls", u.price);
        fprintf(fipo,"\t%s", u.topic);
        fprintf(fipo,"\t\t%s", u.name);
        fprintf(fipo," %s", u.ln);
        fclose(fipo);
    }
    else if (7==df)
    {
        FILE *fipo = fopen("sunday.txt","w");

        fprintf(fipo,"\t$%ls", u.price);
        fprintf(fipo,"\t%s", u.topic);
        fprintf(fipo,"\t\t%s", u.name);
        fprintf(fipo," %s", u.ln);
        fclose(fipo);
    }

    
    }

int exist(User u)
{
    int i;
    for(i=0; i<MaxUs; i++)
    {
        if(0==strcmp(list[i].name ,u.name) && 0==strcmp(list[i].ln ,u.ln))
        {
            return 1;
        }
    }
    return -1;
}

int menu()
{
    int choice;
    printf("\n MENU \n");
    printf("1 - registrar\n");
    printf("# - salir\n");
    printf("Ingresa una opción:");
    scanf("%d",&choice);
    return choice;
}

int linecounter()
{
    char c;
    int count = 1;
    FILE *fp = fopen("students.txt","r");

    for (c = getc(fp); c != EOF; c = getc(fp))
        if (c == '\n') // Increment count if this character is newline
            count = count + 1;
  
    fclose(fp);
  
    return count;
}

int main()
{
    User test[MaxUs];
    FILE *fp = fopen("students.txt","r");
    int i = 0, count = 1, c;
    User u;
    if(NULL == fp)
    {
        printf("No se encontro el archivo de texto\n");
        return -1;
    }

    for(i=0; i<MaxUs; i++)
    {
        char uname[MaxLen];
        char uln[MaxLen];
        fscanf(fp,"%s%s",uname,uln);

        strcpy(list[i].name , uname);
        strcpy(list[i].ln , uln);
    }

    int choice = menu();
    if(1 == choice)
    {
        registerUser();
    }
    else
    {
        return 0;
    }

}