#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
int main(void)
{
	int_stack stack = create_stack(16);

	for (int i = 0; i < 10; i++)
	{
		push(&stack, i);
	}

	for (int i = 0; i < 10; i++)
	{
		printf(" %d\n", pop(&stack));
	}

	free(stack.start_address);
	return 0;
}
