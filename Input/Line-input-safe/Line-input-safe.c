#include <stdio.h>
int main() {
	char line[1000];
	printf("Enter line\n");
	fgets(line, 1000, stdin); /* stdin : standard input : usually read through up to EOF, and there is standard output which is where printf is going and there's a thing called standard error which you send error messagmes */ 
	printf("Line: %s",line);
}
