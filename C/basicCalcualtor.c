#include <stdio.h>
#include <stdlib.h>

double num1;
double num2;
char op[0];
double result;
int main() {
	printf("enter a number\n");
	scanf("%lf" , &num1);
	printf("enter opertor\n");
	scanf("%c" , op);
	printf("enter a number\n");
	scanf("%lf" , &num2);

	if (op == '+')
	{
		result = ("&f" , num1 + num2);
	}
	else if (op == '-')
	{
		result = ("%f" , num2 - num1);
	}
	else if (op == '*')
	{
		result = ("%f" , num1 * num2);
	}
	else if (op == "/")
	{
		result = ("%f" , num1 / num2);
	}
	return result;
	

}
