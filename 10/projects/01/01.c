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
	int ch;
	int opening_ch;
	bool nested_properly = true;

	printf("Enter parentheses and/or braces: ");
	while ((ch = getchar()) != '\n') {
		switch (ch) {
			case '(':
			case '{':
				push(ch);
				break;
			case ')':
				opening_ch = pop();
				if (opening_ch != '(')
					nested_properly = false;
				break;
			case '}':
				opening_ch = pop();
				if (opening_ch != '{')
					nested_properly = false;
				break;
		}
	}

	if (!is_empty())
		nested_properly = false;

	printf("Parentheses/braces are ");
	if (!nested_properly) {
		printf("NOT nested properly\n");
		return 1;
	} else {
		printf("nested properly\n");
		return 0;
	}
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
	} else {
		contents[top++] = i;
	}
}

int pop(void)
{
	if (is_empty()) {
		stack_underflow();
		exit(EXIT_FAILURE);
	} else {
		return contents[--top];
	}
}

void stack_overflow(void)
{
	printf("Stack overflow\n");
}

void stack_underflow(void)
{
	printf("Stack underflow\n");
}
