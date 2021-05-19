#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"



void writeToFile(User u, int df)
{
    if (1==df)
    {
        FILE *fipo = fopen("monday.txt","a");

        fprintf(fipo,"%ls p.m.", u.hrs);
        fprintf(fipo,"\t\t$%ls", u.price);
        fprintf(fipo,"\t\t%s", u.topic);
        fprintf(fipo,"\t\t%s", u.name);
        fprintf(fipo," %s", u.name2);
        fprintf(fipo," %s", u.ln);
        fprintf(fipo," %s\n", u.ln2);
        fclose(fipo);
    }
    else if (2==df)
    {
        FILE *fipo = fopen("tuesday.txt","a");

        fprintf(fipo,"%ls hrs", u.hrs);
        fprintf(fipo,"\t\t$%ls", u.price);
        fprintf(fipo,"\t\t%s", u.topic);
        fprintf(fipo,"\t\t%s", u.name);
        fprintf(fipo," %s", u.name2);
        fprintf(fipo," %s", u.ln);
        fprintf(fipo," %s\n", u.ln2);
        fclose(fipo);
    }
    else if (3==df)
    {
        FILE *fipo = fopen("wednesday.txt","a");

        fprintf(fipo,"%ls hrs", u.hrs);
        fprintf(fipo,"\t\t$%ls", u.price);
        fprintf(fipo,"\t\t%s", u.topic);
        fprintf(fipo,"\t\t%s", u.name);
        fprintf(fipo," %s", u.name2);
        fprintf(fipo," %s", u.ln);
        fprintf(fipo," %s\n", u.ln2);
        fclose(fipo);
    }
    else if (4==df)
    {
        FILE *fipo = fopen("thursday.txt","a");

        fprintf(fipo,"%ls hrs", u.hrs);
        fprintf(fipo,"\t\t$%ls", u.price);
        fprintf(fipo,"\t\t%s", u.topic);
        fprintf(fipo,"\t\t%s", u.name);
        fprintf(fipo," %s", u.name2);
        fprintf(fipo," %s", u.ln);
        fprintf(fipo," %s\n", u.ln2);
        fclose(fipo);
    }
    else if (5==df)
    {
        FILE *fipo = fopen("friday.txt","a");

        fprintf(fipo,"%ls hrs", u.hrs);
        fprintf(fipo,"\t\t$%ls", u.price);
        fprintf(fipo,"\t\t%s", u.topic);
        fprintf(fipo,"\t\t%s", u.name);
        fprintf(fipo," %s", u.name2);
        fprintf(fipo," %s", u.ln);
        fprintf(fipo," %s\n", u.ln2);
        fclose(fipo);
    }
    else if (6==df)
    {
        FILE *fipo = fopen("saturday.txt","a");

        fprintf(fipo,"%ls hrs", u.hrs);
        fprintf(fipo,"\t\t$%ls", u.price);
        fprintf(fipo,"\t\t%s", u.topic);
        fprintf(fipo,"\t\t%s", u.name);
        fprintf(fipo," %s", u.name2);
        fprintf(fipo," %s", u.ln);
        fprintf(fipo," %s\n", u.ln2);
        fclose(fipo);

    }
    else if (7==df)
    {
        FILE *fipo = fopen("sunday.txt","a");

        fprintf(fipo,"%ls hrs", u.hrs);
        fprintf(fipo,"\t\t$%ls", u.price);
        fprintf(fipo,"\t\t%s", u.topic);
        fprintf(fipo,"\t\t%s", u.name);
        fprintf(fipo," %s", u.name2);
        fprintf(fipo," %s", u.ln);
        fprintf(fipo," %s\n", u.ln2);
        fclose(fipo);
    }
}


int menu()
{
    int choice;
    printf("\n MENU \n");
    printf("1 - registrar\n");
    printf("2 - ver lista por dia\n");
    printf("# - salir\n");
    printf("Ingresa una opción:");
    scanf("%d",&choice);
    return choice;
}


int main()
{

    int choice = menu();
    if(1 == choice)
    {
        registerUser();
    }
    else if (2 == choice)
    {
        printlist();
    }
    else
    {
        return 0;
    }

}