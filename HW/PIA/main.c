#include <stdio.h>
#include "header.h"



void writeToFile(User u, int df, int scndn) //Prints all the info received in registerUser(): to the file.
{

    //df represents the day of the week. This comes from registration.c and tell us where to print the information. 

    if (1==df) 
    {
        FILE *fipo = fopen("monday.txt","a"); 

        fprintf(fipo,"%s", u.name); //Prints the name
        if (1==scndn)
        {
         fprintf(fipo," %s", u.name2); //Prints the second name (if it exist)
        }
        fprintf(fipo," %s", u.ln); //Prints the lastname
        fprintf(fipo," %s", u.ln2); //Prints the 2nd lastname
        fprintf(fipo,"\t\t%ls p.m.", u.hrs); //prints the time
        fprintf(fipo,"\t\t$%ls", u.price); //prints the price
        fprintf(fipo,"\t\t%s\n", u.topic); //prints the topic/subject
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


int menu()      //this is the menu that reads the action the user wants to do.
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


int main() //The main just reads the choice and redirects the user to a function depending on the answer.
{

    int choice = menu();
    if(1 == choice)
    {
        registerUser(); //If the user selected "Register a student" this call the function.
    }
    else if (2 == choice)
    {
        printlist(); //If the user selected "List according to the day" this call the function.
    }
    else
    {
        return 0; //If it is not a 1 or 2 it means the user wants to "Exit".
    }

}
