// 2. Message Display Program
// Write a program that asks the user to enter their name and then prints "Welcome, [name]!".

#include<stdio.h>

int main(){
    char buffer[10]; 
    // How can i declare the buffer size without knowing length of the input name
    // If i fix a lagrge buffer size, If use user enters small name buffer size is wasted. If i declare small buffer size and user enters long name then name if stripped out for the size of the buffer.
    
    // You cannot delccare the buffer size whithout fixing it initially,
    // What you can do is ask the use for the length of string he is about to enter initially, then declare buffer size for it and take the input. 
    
    printf("Enter your Name: ");

    //scanf("%s",buffer);
    fgets(buffer, sizeof(buffer), stdin);

    // for(int i=0; i<10; i++){
    //     printf(".%c.|",buffer[i]);
    // }

    printf("Welcome, %s",buffer);

    return 0;
}