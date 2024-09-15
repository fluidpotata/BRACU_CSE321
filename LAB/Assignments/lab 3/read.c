#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp;
	char data[100];
	
	fp = fopen("text.txt", "r");
	
	fscanf(fp, "%s", data);
	printf("1. Data read by fscanf : %s\n", data);
	fscanf(fp, "%s", data);
	printf("2. Data read by fscanf : %s\n", data);
	
	
	fgets(data, 100, fp);
	printf("1. Data read by fgets : %s\n", data);
	fgets(data, 100, fp);
	printf("2. Data read by fgets : %s\n", data);

	return 0;
}
