#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a,b;
	char op;

	printf("Enter the 2 numbers: ");
	scanf("%d %d", &a, &b);

	printf("\nEnter the operator (+,-,*,/,%)");
	scanf(" %c", &op);

	switch(op) {
	case '+': printf("%d", a + b);
	break;

	case '-': printf("%d", a - b);
	break;

	case '*': printf("%d", a * b);
	break;

	case '/': printf("%d", a / b);
	break;

	case '%': printf("%d", a % b);
	break;

	default: printf("Enter a valid operator");
	}
return 0;
}
