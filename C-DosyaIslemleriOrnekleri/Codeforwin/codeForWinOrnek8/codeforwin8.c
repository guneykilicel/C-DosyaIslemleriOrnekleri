#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *fptr=fopen("codeforwin6.txt","r");
	char ch;
	int i=0, word=0, lin=0;
	while((ch=getc(fptr))!=EOF){
		i++;
		if(ch==' ' || ch=='\t' || ch=='\n' || ch=='\0'){
			word++;
		}
		if(ch=='\n' || ch=='\0'){
			lin++;
		}
		
	}
	
	if(i>0){
		word++;
		lin++;
	}
	
	
	printf("Karakter sayisi: %d\n",i);
	printf("Sozcuk sayisi: %d\n",word);
	printf("Satir sayisi: %d\n",lin);   
	
	
	
	
	
	
	
	return 0;
}
