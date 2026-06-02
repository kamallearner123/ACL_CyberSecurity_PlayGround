// 4. Simple Calculator Program
// Write a program that takes two numbers and an operator (+, -, *, /) and shows the result.

#include<stdio.h>
#include<stdlib.h>

int main(){
    long long int a,b,c;
    char o;
    printf("Enter val a: ");
    scanf("%lld",&a);
    printf("Enter val b: ");
    scanf("%lld",&b);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c",&o);

    switch(o){
        case '+':
            c=a+b;
            if(c<a || c<b){
                exit(1);        // How can you protect you code from integer overflow, or how can you ic it?
                printf("Error in input");           // Use long int or long long int
            }                   
            printf("Sum = %d",c);
            break;

        case '-':
            c=a-b;
            printf("Difference = %d",c);
            break;

        case '*':
            c=a+b;
            printf("Product = %d",c);
            break;

        case '/':
            c=a/b;
            printf("Quotient = %d",c);
            break;

        default :
            fputs("Invalid input", stdout);
            // printf("Invalid input");  // Whats the difference in using fputs and printf when only printf a string.
    }
    
    return 0;
}