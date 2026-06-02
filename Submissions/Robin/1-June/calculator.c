// 4. Simple Calculator Program
// Write a program that takes two numbers and an operator (+, -, *, /) and shows the result.

#include<stdio.h>

int main(){
    int a,b,c;
    char o;
    printf("Enter val a: ");
    scanf("%d",&a);
    printf("Enter val b: ");
    scanf("%d",&b);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c",&o);

    switch(o){
        case '+':
            c=a+b;
            printf("Sum = %d",c);
            if(c<a || c<b){
                exit(1);        // How can you protect you code from integer overflow, or how can you ic it?
            }
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