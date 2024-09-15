#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main(){
	int fileDescriptor;
	int BUFFER_SIZE = 2048;
	char fname[] = "example.txt";
	char data[BUFFER_SIZE];
	
	fileDescriptor = open(fname, O_RDONLY | O_CREAT, 0644);
	printf("OPened file: %d\n", fileDescriptor);
	
	read(fileDescriptor, data, BUFFER_SIZE);
	
	printf("Data Read from file: %s\n", data);
	
	close(fileDescriptor);
	return 0;
	
}
	
