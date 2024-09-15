#include <stdio.h>
#include <unistd.h>

int main(){
	// ls
	char fname[] = "fork1.c";
	execl("/bin/gcc", "gcc", "-o", "test", fname,  NULL);
	
	return 0;
}
