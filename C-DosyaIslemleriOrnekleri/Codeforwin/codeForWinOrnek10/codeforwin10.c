#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *fptr=fopen("codeforwin10.txt","r");
	FILE *fptr1=fopen("gecici.txt","w");
	
	int satir;
	printf("Silinecek satir: ");
	scanf("%d",&satir);
	satir=satir-1;
	char dizi[1000];
	int i=0;
	while((fgets(dizi,1000,fptr))!='\0'){
		
		if(satir!=i){
			fprintf(fptr1,"%s",dizi); 
		}
		i++;
	}  
	
	fclose(fptr);
    fclose(fptr1);

    remove("codeforwin10.txt");

    rename("gecici.txt", "codeforwin10.txt");
	
	
	
	
	
	return 0;
}
