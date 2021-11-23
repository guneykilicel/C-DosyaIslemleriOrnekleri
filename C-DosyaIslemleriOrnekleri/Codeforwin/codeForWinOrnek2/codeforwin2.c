#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *fptr=fopen("codeforwin1.txt","r");

    char str[100],ch;
	/* burasý sýnýrlý yazdýrma
	fgets(str,100,fptr);
	
	puts(str);
	*/
	
	ch=fgetc(fptr);
	
	while(ch!=EOF){
		printf("%c",ch);
		ch=fgetc(fptr);
		
	}
	
	
	
	
	return 0;
}
