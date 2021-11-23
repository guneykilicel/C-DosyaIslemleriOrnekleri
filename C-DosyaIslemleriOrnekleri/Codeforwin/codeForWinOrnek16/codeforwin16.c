#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1000


int main()
{
    /* File pointer to hold reference of input file */
    FILE * fPtr=fopen("codeforwin7.txt","r");
    FILE * fTemp=fopen("codeforwin16.txt","w");
    char path[100];
    
    char buffer[1000];
    char newline[1000];
    int line, count;


    

    printf("Enter line number to replace: ");
    scanf("%d", &line);

    
    fflush(stdin);

    printf("Replace '%d' line with: ", line);
    fgets(newline, 1000, stdin);




    
    if (fPtr == NULL || fTemp == NULL)
    {
        
        printf("\nUnable to open file.\n");
        printf("Please check whether file exists and you have read/write privilege.\n");
        exit(EXIT_SUCCESS);
    }


   
    count = 0;
    while ((fgets(buffer, BUFFER_SIZE, fPtr)) != NULL)
    {
        count++;

        
        if (count == line)
            fputs(newline, fTemp);
        else
            fputs(buffer, fTemp);
    }


    
    fclose(fPtr);
    fclose(fTemp);


    

    return 0;
}
