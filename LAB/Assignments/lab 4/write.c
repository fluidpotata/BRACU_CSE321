#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main(){
	int fileDescriptor;
	char fname[] = "example.txt";
	char data[] = "Hello World\nHello from AAlif";
	
	fileDescriptor = open(fname, O_WRONLY | O_CREAT, 0644);
	printf("Opened successfully");
	
	write(fileDescriptor, data, strlen(data));
	printf("Writing DOne");
	
	close(fileDescriptor);
	
	return 0;
}
