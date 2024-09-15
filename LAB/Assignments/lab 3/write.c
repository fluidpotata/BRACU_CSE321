#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp;
	fp = fopen("text.txt", "w");
	fprintf(fp, "This is fprintf test\n");
	fputs("This is fputs test\n", fp);
	
	fclose(fp);
	return 0;
}
