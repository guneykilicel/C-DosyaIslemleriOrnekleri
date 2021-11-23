#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define BUFFER_SIZE 1000
int main(int argc, char *argv[]) {
	
	FILE * fPtr;
    FILE * fTemp;
    char path[100];
    
    char toRemove[100];
    char buffer[1000];


    printf("Enter path of source file: ");
    scanf("%s", path);

    printf("Enter word to remove: ");
    scanf("%s", toRemove);


    
    fPtr  = fopen(path, "r");
    fTemp = fopen("delete.tmp", "w"); 

    
    if (fPtr == NULL || fTemp == NULL)
    {
        printf("\nUnable to open file.\n");
        printf("Please check whether file exists and you have read/write privilege.\n");
        exit(EXIT_SUCCESS);
    }


    int i, j, stringLen, toRemoveLen;
    int found;
    
    while ((fgets(buffer, BUFFER_SIZE, fPtr)) != NULL)
    {
        stringLen   = strlen(buffer);
    	toRemoveLen = strlen(toRemove);
    	
    	for(i=0; i <= stringLen - toRemoveLen; i++)
    {
        
        found = 1;
        for(j=0; j < toRemoveLen; j++)
        {
            if(buffer[i + j] != toRemove[j])
            {
                found = 0;
                break;
            }
        }

        
        if(buffer[i + j] != ' ' && buffer[i + j] != '\t' && buffer[i + j] != '\n' && buffer[i + j] != '\0') 
        {
            found = 0;
        }

        if(found == 1)
        {
            for(j=i; j <= stringLen - toRemoveLen; j++)
            {
                buffer[j] = buffer[j + toRemoveLen];
            }

            stringLen = stringLen - toRemoveLen;
            
            i--;
        }
    }
    	
        
        fputs(buffer, fTemp);
    }


    fclose(fPtr);
    fclose(fTemp);

    remove(path);

    rename("delete.tmp", path);


    printf("\nAll occurrence of '%s' removed successfully.", toRemove);
	
	
	
	return 0;
}
