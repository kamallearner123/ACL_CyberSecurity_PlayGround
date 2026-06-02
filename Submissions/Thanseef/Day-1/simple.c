#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int count = 0;
	char pass[50];

	while (count < 3) {
		printf("\nEnter the password: ");
		scanf("%s", &pass);

		if (strcmp(pass, "admin123") == 0) {
			printf("\nAccess Granted");
			break;
		} else {
			count++;
		}
	}
	return 0;
}
