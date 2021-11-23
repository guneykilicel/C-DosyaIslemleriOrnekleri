#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *fptr=fopen("codeforwin4.txt","r");
	FILE *fptr1=fopen("codeforwin6.txt","r");
	FILE *fptr_m=fopen("codeforwin7.txt","w");
	
	
	char ch;
	
	while((ch=getc(fptr))!=EOF){
		
		putc(ch,fptr_m);
	}
	
	fprintf(fptr_m,"\n********2. dosya geldi*********\n ");
	
	
	while((ch=getc(fptr1))!=EOF){
		putc(ch,fptr_m);
		
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
