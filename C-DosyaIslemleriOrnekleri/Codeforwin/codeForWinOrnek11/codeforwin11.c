#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *fptr=fopen("codeforwin11.txt","r");
	FILE *fptr1=fopen("codeforwin11_temiz.txt","w");
	
	char dizi[1000];
	
	while((fgets(dizi,1000,fptr))!='\0'){
		
		if(dizi[0]!='\n'){
			fprintf(fptr1,"%s",dizi); 
		}
		
		
	}
	
	fclose(fptr);
    fclose(fptr1);

	//Bunlarý yazarak yapabilirsin ama ben sonradan görmek için yazmýyorum
	/*
    remove("codeforwin101.txt");

    rename("gecici.txt", "codeforwin11.txt");
	*/
	
	
	
	
	
	return 0;
}
