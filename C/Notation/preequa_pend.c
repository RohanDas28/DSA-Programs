#include <ctype.h>
char stack[10];
int top = -1;
void push(int x)
{
	stack[++top] = x;
}
int pop()
{
	return stack[top--];
}
void main() {
	 int num, n1, n2, n3;
	 char equation[10], *e = equation, alpha;
	 // pointer e takes the base address of equation[]
	 clrscr();
	 printf("Postfix Notation Program (reverse Polish Notaion)\n\n");
	 printf("An equation : ");
	 scanf("%s", equation);
	 for (; *e != '\0'; e++)
	 {
		  if (isalpha(*e))
		  {
				push(alpha);
		  }
		  else
		  {
				n1 = pop();
				n2 = pop();
				switch (*e)
				{
				case '+':
					 n3 = n1 + n2;
				break;
			case '-':
				n3 = n1 - n2;
				break;
			case '*':
				n3 = n1 * n2;
				break;
			case '/':
				n3 = n1 / n2;
				break;
			}
			push(n3);
		}
	}
	printf("Answer : %d\n", pop());
}