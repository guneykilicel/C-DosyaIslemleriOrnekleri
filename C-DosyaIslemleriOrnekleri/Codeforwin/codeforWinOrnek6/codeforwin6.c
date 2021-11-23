#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *fptr=fopen("codeforwin4.txt","r");
	FILE *fptr1=fopen("codeforwin6.txt","w");
	char ch=fgetc(fptr) ;
	
	while(ch!=EOF){
		//fprintf(fptr1,"%c",ch); 
		putc(ch,fptr1);
		ch=fgetc(fptr);
	}
	
	fclose(fptr);
	fclose(fptr1); 
	
	
	
	
	
	
	
	return 0;
}
