#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char name[50];

	printf("Enter the name: ");
	scanf("%s", &name);

	printf("Welcome, %s", name);
	return 0;
}
