#include <stdbool.h> /* C99 only */
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void)
{
	char ch;
	int op1, op2;

	for (;;) {
		printf("Enter an RPN expression: ");

		for (;;) {
			scanf(" %c", &ch);

			if (ch >= '0' && ch <= '9')
				push(ch - '0');
			else if (ch == '+') { op2 = pop(); op1 = pop(); push(op1 + op2); }
			else if (ch == '-') { op2 = pop(); op1 = pop(); push(op1 - op2); }
			else if (ch == '*') { op2 = pop(); op1 = pop(); push(op1 * op2); }
			else if (ch == '/') { op2 = pop(); op1 = pop(); push(op1 / op2); }
			else if (ch == '=') {
				printf("Value of expression: %d\n", pop());
				make_empty();
				break;
			}
			else
				exit(EXIT_SUCCESS);
		}
	}

	return 0;
}

void make_empty(void)
{
	top = 0;
}

bool is_empty(void)
{
	return top == 0;
}

bool is_full(void)
{
	return top == STACK_SIZE;
}

void push(int i)
{
	if (is_full()) {
		stack_overflow();
		exit(EXIT_FAILURE);
	}
	contents[top++] = i;
}

int pop(void)
{
	if (is_empty()) {
		stack_underflow();
		exit(EXIT_FAILURE);
	}
	return contents[--top];
}

void stack_overflow(void)
{
	printf("Expression is too complex\n");
}

void stack_underflow(void)
{
	printf("Not enough operands in expression\n");
}
