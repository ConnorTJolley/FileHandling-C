

//Working with files need to declare pointer of type file
//needed for communication with the file and the program

#include <string.h>
#include <stdio.h>


int main()
{
    int ID = 1;
    char F_Name[20];
    char L_Name[20];
    int Age;
    //char Email[50];

    int num;
    FILE *fptr;
    fptr = fopen("C:\\Users\\Connor\\Desktop\\C_Programming\\Test.txt","w");

    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }

    while(ID < 4)
    {
        printf("Automatic ID Generated: %d", ID);
        printf(" \n");
        printf("Enter Your First Name: ");
        scanf("%s",&F_Name);
        printf("Enter Your Last Name: ");
        scanf(" %s",&L_Name);
        printf("Enter Your Age: ");
        scanf(" %d",&Age);

        fprintf(fptr, "Entry ID: %d", ID);
        fprintf(fptr," \n");
        fprintf(fptr,"First Name: %s",F_Name);
        fprintf(fptr," \n");
        fprintf(fptr,"Last Name: %s",L_Name);
        fprintf(fptr," \n");
        fprintf(fptr,"Age: %d",Age);
        fprintf(fptr," \n");
        fprintf(fptr," \n");

        ID ++;
    }
    fclose(fptr);
    return 0;

}

