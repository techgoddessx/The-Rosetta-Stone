#include <stdio.h>
int main() {
	char name[100]; /* name is a character array with a 100 element */
	printf("Enter name\n");
	scanf("%100s",name);/* we didn't use & because name is an array. you're passing the address of the beginning of the array(that is in a sense a &) the location of th ebeginning of a 100 array */ 
	printf("Hello %s\n", name);
}
