#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Bir Metin Dosyas�ndaki Sat�r Say�s�n� Bulmak i�in C dilinde bir program yaz�n
	
	char fname[20];
    FILE *fptr = NULL; 
    printf(" Input the filename to be opened : ");
	scanf("%s",fname);	
	fptr = fopen(fname, "r");
	char control;
	int a;
	while(!feof(fptr)){
		control=fgetc(fptr);
		if(control=='\n') a++;
	}
	
	printf("The lines in the file belge.txt are (belge.txt dosyas�ndaki sat�rlar): %d",a+1); 
	
	
	
	
	return 0;
}
