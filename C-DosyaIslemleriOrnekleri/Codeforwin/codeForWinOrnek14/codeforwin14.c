#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *fptr=fopen("codeforwin12.txt","r");
	
    int i, index, isUnique;
	char words[1000][50];
    char word[50];
	
	//farklý kelimelerin sayisi
	int  count[1000];
	
	index = 0;
	
	while (fscanf(fptr, "%s", word) != EOF)
    {
    
        
        isUnique = 1;
        for (i=0; i<index && isUnique; i++)
        {
            if (strcmp(words[i], word) == 0)
                isUnique = 0;
        }

        
        if (isUnique) 
        {
            strcpy(words[index], word);
            count[index]++;

            index++;
        }
        else
        {
            count[i - 1]++;
        }
    }

    fclose(fptr);

    for (i=0; i<index; i++)
    {
        printf("%s => %d\n", words[i], count[i]);
    }    
    
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
