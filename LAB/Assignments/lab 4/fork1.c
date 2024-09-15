#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>


int main(){
	pid_t a; // a = 0
	a = fork();
	
	if (a<0){
		printf("Error");
	} else if (a>0){
		// parent
		printf("This is parent\n");
		for (int i=0; i<5; i++){
			printf("Running in parent: %d\n", i);
			sleep(1);
		}
		wait(NULL);
		
	} else if (a==0){
		// child
		printf("This is Child\n");
		for (int i=0; i<10; i++){
			printf("Running in chlid: %d\n", i);
			sleep(1);
		}
		// exit(0);
	}
	return 0;
	
}
