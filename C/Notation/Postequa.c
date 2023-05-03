#include <stdio.h>
#include <conio.h>
int stack[10], top = -1;
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
	 char equation[10], *e = equation;
	 // pointer e takes the base address of equation[]
	 clrscr();
	 textcolor(GREEN);
	 cprintf("Postfix Notation Program (reverse Polish Notaion)");
	 printf("\n\n");
	 cprintf("An equation : ");
	 cscanf("%s", equation);
	 printf("\n");
	 for (; *e != '\0'; e++)
	 {
		  if (isdigit(*e))
		  {
				num = *e - 48;
				push(num);
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
	cprintf("Answer : %d\n", pop());
}