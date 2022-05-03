#include <iostream>
#include <stdio.h>

using namespace std;

#define STACK_SIZE 100

char stack[STACK_SIZE];
int top = -1;


void StackPush(char input)
{
	if (top >= (STACK_SIZE - 1))
		return;

	stack[++top] = input;
}

void StackPop()
{
	if (top = -1)
		return;

	return stack[top--];

}

void StackPrint()
{
	int i;

	for (i = 0; i <= top; i++)
		cout << i << " ";
}

bool StackisFull()
{
	if (top = -1)
		return true;
}


int main()
{

	return 0;
}
