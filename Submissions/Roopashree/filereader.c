#include <stdio.h>
int main() {
    char filename[50];
    char ch;
    FILE *f;
    printf("Enter filename: ");
    scanf("%s", filename);
    f = fopen(filename, "r");
    if(f == NULL) {
        printf("File not found\n");
        return 0;
    }
    while((ch = fgetc(f)) != EOF) {
        printf("%c", ch);
    }
    fclose(f);
    return 0;
}
