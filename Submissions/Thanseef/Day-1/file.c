#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char filename[50];

	printf("Enter the file name: ");
	scanf("%s", &filename);

	FILE *f = fopen(filename, "r");
	if (f == NULL) {
		perror("Cannot open a file");
		return 0;
	}
	char ch;

	while ((ch = fgetc(f)) != EOF)
		putchar(ch);

	fclose(f);

	return 0;
}
