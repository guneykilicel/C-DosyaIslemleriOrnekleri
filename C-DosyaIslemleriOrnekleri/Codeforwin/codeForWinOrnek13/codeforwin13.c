#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *fptr=fopen("codeforwin12.txt","r");
	
	char dizi[1000];
	char search[8];
	printf("Aranacak kelimeyi giriniz: ");
	scanf("%s",search);
	
	int i,j,searchLen,diziLen,found,a=0;
	searchLen=strlen(search);

	while((fgets(dizi,1000,fptr))!='\0'){
		diziLen=strlen(dizi);
		for(i=0;i<diziLen-searchLen;i++){
			found = 1;
			
			for(j=0;j<searchLen;j++){
				
				if(dizi[i + j] != search[j])
            	{	
            	
            	found = 0;
                break;
            	}
            
			}
			
			if(found==1){
				a++;
			}
		
			
		}
		
		
	}
	
	printf("Aranan kelime adet sayisi: %d",a);
		
		
	
	
	
	
	
	
	

	
	
	
	return 0;
}
