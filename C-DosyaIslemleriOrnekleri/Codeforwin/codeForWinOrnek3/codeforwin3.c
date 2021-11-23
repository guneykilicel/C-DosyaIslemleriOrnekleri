#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *fptr=fopen("codeforwin3.txt","r");
	FILE *fptr1=fopen("codeforwin3_cift.txt","w");
	FILE *fptr2=fopen("codeforwin3_tek.txt","w");
	FILE *fptr3=fopen("codeforwin3_asal.txt","w");
	int s,i;
	
	while(fscanf(fptr,"%d",&s)!=EOF ){
		if(s==2){
				fprintf(fptr3,"%d\n",s); 
		}
		if(s%2==0){
			fprintf(fptr1,"%d\n",s); 
		}
		else{
			fprintf(fptr2,"%d\n",s); 
			int ctrl=0;
			for(i=2;i<s;i++){
				if(s%i==0){
					ctrl=1;
					break;
				}	
			}
			if(ctrl==0 && s!=1){
				fprintf(fptr3,"%d\n",s); 
			}
		}
}

	return 0;
}
