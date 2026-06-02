// 2. Message Display Program
// Write a program that asks the user to enter their name and then prints "Welcome, [name]!".

#include<stdio.h>

int main(){
    char buffer[10]; //How can i declare the buffer size without knowing length of the input name
    printf("Enter your Name: ");

    //scanf("%s",buffer);
    fgets(buffer, sizeof(buffer), stdin);

    // for(int i=0; i<10; i++){
    //     printf(".%c.|",buffer[i]);
    // }

    printf("Welcome, %s",buffer);

    return 0;
}