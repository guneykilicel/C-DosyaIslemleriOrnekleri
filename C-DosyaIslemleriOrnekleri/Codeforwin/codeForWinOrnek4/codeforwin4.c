#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *fptr=fopen("codeforwin4.txt","a");
	
	fputs("fputs ile dosya içine düz yazý yazýyorum",fptr);
	fprintf(fptr,"\nsimdide fprintf ile yazý yazýyorum");
	 
	
	
	
	
	
	
	
	
	
	return 0;
}
