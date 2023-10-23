#include <stdio.h>
int main() {
	char line[1000];
	printf("Enter line\n");
	scanf("%[^\n]1000s",line); /* [^\n] : match any character that's not a new line : scan up to the end of the line or until you get to 1000 character */
	printf("Line: %s\n",line);
}
