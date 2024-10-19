#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
// Create a stack for integers

// void push(int** stack_ptr, int value, int* initial_address);
// int pop(int** stack_ptr, int* initial_address);

/*void push(int** stack_ptr, int value, int* initial_address){
	**stack_ptr = value;
	(*stack_ptr)++;
}*/

/*int pop(int** stack_ptr, int* initial_address){
	if(*stack_ptr == initial_address) {
		printf("Tried to pop out of stack.\n");
		abort();
		return 1;
	};
	(*stack_ptr)--;
	return **stack_ptr;
}*/

void push(int_stack *stack, int value)
{
	int *end_addr = stack->start_address + stack->size;
	// printf("Pushing: %d; Start: %p; End: %p; Current: %p\n", value, stack->start_address, end_addr, stack->ptr);
	if (stack->ptr >= end_addr)
	{
		printf("Stack overflow.");
		abort();
		return 1;
	}
	*(stack->ptr) = value;
	(*stack->ptr++);
}

int pop(int_stack *stack)
{
	int *end_addr = stack->start_address + stack->size;
	// printf("Popping; Start: %p; End: %p; Current: %p\n", stack->start_address, end_addr, stack->ptr);
	if (stack->ptr == stack->start_address)
	{
		printf("Can't pop from empty stack.");
		abort();
		return 1;
	}
	(stack->ptr)--;
	return *(stack->ptr);
}

int_stack create_stack(int size)
{
	int *stack_ptr = malloc(size * sizeof(int));
	int_stack stack;
	stack.size = size;
	stack.start_address = stack_ptr;
	stack.ptr = stack_ptr;
	return stack;
}