#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	printf("Total passed parameter: %d\n", argc);
	printf("%s\n",argv[0]);
	printf("%s\n",argv[1]);
	return 0;
}
