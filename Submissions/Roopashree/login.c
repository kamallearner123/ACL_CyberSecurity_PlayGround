#include <stdio.h>
#include <string.h>
int main() {
    char pass[20];
    int i;
    for(i = 0; i < 3; i++) {
        printf("Enter password: ");
        scanf("%s", pass);

        if(strcmp(pass, "admin123") == 0) {
            printf("Access Granted\n");
            return 0;
        }
        printf("Wrong password\n");
    }
    printf("Too many attempts\n");
    return 0;
}
