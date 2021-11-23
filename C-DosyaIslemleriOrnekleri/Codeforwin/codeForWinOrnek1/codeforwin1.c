#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	FILE *fptr=fopen("codeforwin1.txt","w");
	
	char str[200];
	
	printf("input the content: ");
	gets(str);
	
	fputs(str,fptr);   
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
