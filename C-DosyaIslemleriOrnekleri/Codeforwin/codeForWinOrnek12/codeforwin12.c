#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *fptr=fopen("codeforwin12.txt","r");
	
	char dizi[1000];
	int line=1 ,column=1;
	char search[8];
	printf("Aranacak kelimeyi giriniz: ");
	scanf("%s",search);
	
	int i,j,searchLen,diziLen,found,found1;
	searchLen=strlen(search);

	while((fgets(dizi,1000,fptr))!='\0'){
		diziLen=strlen(dizi);
		line++;
		for(i=0;i<diziLen-searchLen;i++){
			found = 1;
			
			for(j=0;j<searchLen;j++){
				
				if(dizi[i + j] != search[j])
            {	
            	if(dizi[i+j]==' ' || dizi[i+j]=='\n'){
					column++;
					
					}
            	found = 0;
                break;
            }
            
			}
			/*if(dizi[i + j] != ' ' && dizi[i + j] != '\t' && dizi[i + j] != '\n' && dizi[i + j] != '\0') 
        {
            found = 0;
        }
        */
		if(found==1){
				printf("%d. satirda var.\n",line-1); 
				printf("%d. kelime\n",column+line-1);
			}
		
			
		}
		
		
	}
	
	
		
		
	
	
	
	
	
	
	

	
	
	
	return 0;
}
