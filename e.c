#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>


int main(){
	char *latte;
	
	latte = malloc(40*sizeof(char));
	strcpy(latte,"sei brutto"); //è un tuo parere......
	
	if(!fork()){
		execlp("echo", "echo", latte, NULL);
	}
	else{
		system("echo sei brutto");
	}
	system("echo e adesso??");
	
	return 0;
}
