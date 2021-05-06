#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MaxUs 20
//Lo unico que hace es registrar usuarios y su password en un txt. No cumple otra funcion.
// Crear un archivo de texto llamado usuarios.txt si es que se quiere registrar desde cero. 
// El archivo dentro de la carpeta ya tiene algunos usuarios registrados como ejemplo.

typedef struct
{
    char name[10];
    char password[10];
} User;

User list[MaxUs];

char* filename = "usuarios.txt";


void writeToFile(User u)
{
    FILE *fw = fopen(filename,"a+");
    fprintf(fw,"%s", u.name);
    fprintf(fw,"\t");
    fprintf(fw,"%s", u.password);
    fprintf(fw,"\n");
}

int exist(User u)
{
    int i;
    for(i=0; i<MaxUs; i++)
    {
        if(0==strcmp(list[i].name ,u.name) && 0==strcmp(list[i].password ,u.password))
        {
            return 1;
        }
    }
    return -1;
}

void registerUser()
{
    char name[10];
    char password[10];
    User user;
    int i;

    printf("Ingresa el usuario:");
    scanf("%s",name);
    strcpy(user.name , name);

    for(i=0; i<MaxUs; i++)
    {
        if(0==strcmp(list[i].name ,name))
        {
            printf("Ya existe el usuario \n");
            return;
        }
    }

    printf("Ingresa una contraseña:");
    scanf("%s",password);
    strcpy(user.password , password);
    writeToFile(user);
      printf("Registrado con éxito\n");
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


int main()
{
    User test[MaxUs];
    FILE *fp = fopen(filename,"r");
    int i=0;
    User u;
    if(NULL == fp)
    {
        printf("No se encontro el archivo (leer instrucciones al inicio) \n");
        return -1;
    }
    for(i=0; i<MaxUs; i++)
    {
        char uname[10];
        char upassword[10];
        fscanf(fp,"%s%s",uname,upassword);

        strcpy(list[i].name , uname);
        strcpy(list[i].password , upassword);
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
