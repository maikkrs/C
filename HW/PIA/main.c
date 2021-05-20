#include <stdio.h>
#include "header.h"



void writeToFile(User u, int df, int scndn)
{


    printf("%d\n", scndn);

    if (1==df)
    {
        FILE *fipo = fopen("monday.txt","a");

        fprintf(fipo,"%s", u.name);
        if (1==scndn)
        {
         fprintf(fipo," %s", u.name2);
        }
        fprintf(fipo," %s", u.ln);
        fprintf(fipo," %s", u.ln2);
        fprintf(fipo,"\t\t%ls p.m.", u.hrs);
        fprintf(fipo,"\t\t$%ls", u.price);
        fprintf(fipo,"\t\t%s\n", u.topic);
        fclose(fipo);
        
    }
    else if (2==df)
    {
        FILE *fipo = fopen("tuesday.txt","a");

       fprintf(fipo,"%s", u.name);
        if (1==scndn)
        {
         fprintf(fipo," %s", u.name2);
        }
        fprintf(fipo," %s", u.ln);
        fprintf(fipo," %s", u.ln2);
        fprintf(fipo,"\t\t%ls p.m.", u.hrs);
        fprintf(fipo,"\t\t$%ls", u.price);
        fprintf(fipo,"\t\t%s\n", u.topic);
        fclose(fipo);
        
    }
    else if (3==df)
    {
        FILE *fipo = fopen("wednesday.txt","a");

       fprintf(fipo,"%s", u.name);
        if (1==scndn)
        {
         fprintf(fipo," %s", u.name2);
        }
        fprintf(fipo," %s", u.ln);
        fprintf(fipo," %s", u.ln2);
        fprintf(fipo,"\t\t%ls p.m.", u.hrs);
        fprintf(fipo,"\t\t$%ls", u.price);
        fprintf(fipo,"\t\t%s\n", u.topic);
        fclose(fipo);
        
    }
    else if (4==df)
    {
        FILE *fipo = fopen("thursday.txt","a");

        fprintf(fipo,"%s", u.name);
        if (1==scndn)
        {
         fprintf(fipo," %s", u.name2);
        }
        fprintf(fipo," %s", u.ln);
        fprintf(fipo," %s", u.ln2);
        fprintf(fipo,"\t\t%ls p.m.", u.hrs);
        fprintf(fipo,"\t\t$%ls", u.price);
        fprintf(fipo,"\t\t%s\n", u.topic);
        fclose(fipo);
        
    }
    else if (5==df)
    {
        FILE *fipo = fopen("friday.txt","a");

        fprintf(fipo,"%s", u.name);
        if (1==scndn)
        {
         fprintf(fipo," %s", u.name2);
        }
        fprintf(fipo," %s", u.ln);
        fprintf(fipo," %s", u.ln2);
        fprintf(fipo,"\t\t%ls p.m.", u.hrs);
        fprintf(fipo,"\t\t$%ls", u.price);
        fprintf(fipo,"\t\t%s\n", u.topic);
        fclose(fipo);
        
    }
    else if (6==df)
    {
        FILE *fipo = fopen("saturday.txt","a");

        fprintf(fipo,"\t%s", u.name);
        if (1==scndn)
        {
         fprintf(fipo," %s", u.name2);
        }
        fprintf(fipo," %s", u.ln);
        fprintf(fipo," %s", u.ln2);
        fprintf(fipo,"\t\t%ls p.m.", u.hrs);
        fprintf(fipo,"\t\t$%ls", u.price);
        fprintf(fipo,"\t\t%s\n", u.topic);
        fclose(fipo);
        

    }
    else if (7==df)
    {
        FILE *fipo = fopen("sunday.txt","a");

        fprintf(fipo,"\t%s", u.name);
        if (1==scndn)
        {
         fprintf(fipo," %s", u.name2);
        }
        fprintf(fipo," %s", u.ln);
        fprintf(fipo," %s", u.ln2);
        fprintf(fipo,"\t\t%ls p.m.", u.hrs);
        fprintf(fipo,"\t\t$%ls", u.price);
        fprintf(fipo,"\t\t%s\n", u.topic);
        fclose(fipo);
        
    }
}


int menu()
{
    int choice;
    printf("\n MENU \n");
    printf("1 - Register a student\n");
    printf("2 - List according to the day\n");
    printf("# - Exit\n");
    printf("Choose an option: ");
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