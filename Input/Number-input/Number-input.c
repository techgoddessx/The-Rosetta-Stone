#include <stdio.h>
int main() {
	int usf, euf;
	printf("Enter US Floor\n");
	scanf("%d", &usf); /* & means call by reference not by value */
	euf = usf - 1;
	printf("EU Floor %d\n",euf);
}
