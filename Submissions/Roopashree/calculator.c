#include <stdio.h>
int main() {
    float a, b;
    char op;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    if(op == '+') printf("Result: %.2f\n", a + b);
    else if(op == '-') printf("Result: %.2f\n", a - b);
    else if(op == '*') printf("Result: %.2f\n", a * b);
    else if(op == '/') {
        if(b == 0) printf("Cannot divide by zero\n");
        else printf("Result: %.2f\n", a / b);
    }
    else printf("Invalid operator\n");
    return 0;
}
