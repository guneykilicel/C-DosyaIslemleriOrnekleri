#include <stdio.h>
#include <stdlib.h>


int main() {
	
	FILE *fptr=fopen("codeforwin7.txt","r");
	FILE *fptr1=fopen("codeforwin14_harf.txt","w");
	
	char degis;
	char yerine;
	
	printf("degismesi istenen karakter: ");
	scanf("%c",&degis);
	
	fflush(stdin);
	
	printf("yerine gelecek karakteri gir: ");
	scanf("%c",&yerine);     
	
	
	char ch=fgetc(fptr);
	
	while(ch != EOF){
		
		if(ch==degis){
			ch=yerine;
		}
		
		fprintf(fptr1,"%c",ch);
		ch=fgetc(fptr); 
	}
	
	return 0;
}
