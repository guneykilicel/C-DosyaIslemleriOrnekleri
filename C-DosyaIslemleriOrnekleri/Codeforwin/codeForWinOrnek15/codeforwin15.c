#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {






FILE *fptr=fopen("codeforwin12.txt","r");
FILE *fptr1=fopen("codeforwin15.txt","w");
	
	char dizi[1000];
	char search[8],degis[8];
	printf("degistirilecek kelimeyi giriniz: ");
	scanf("%s",search);
	
	printf("%s kelimesinin yerine gelecek kelimeyi giriniz: ",search);
	scanf("%s",degis); 
	int degisLen=strlen(degis);
	
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
				for(j=i; j <= diziLen - degisLen; j++)
            {
                dizi[j] = degis[j];
            }

            diziLen = diziLen - degisLen;
            
            i--;
			}
		
			
		}
		fputs(dizi, fptr1);
		
	}
	
	
	
	
	
	
	return 0;
}
