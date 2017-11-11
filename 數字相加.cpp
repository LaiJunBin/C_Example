#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
 int main() {
	FILE *fPtr;
	char data[100];
	fPtr=fopen("in1.txt","r");
	long long int num=0;
	for(int a=0;a<100;a++)
	    fscanf(fPtr , "%c" , &data[a]);
	char * d = strtok(data," ");
	while (d !=NULL){
		num+=atoi(d);
		d = strtok(NULL," ");
	}
	printf("%lld",num);
	fclose(fPtr);
}
