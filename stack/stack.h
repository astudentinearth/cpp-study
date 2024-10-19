#ifndef STACK_H
#define STACK_H

typedef struct
{
	int size;
	int *start_address;
	int *ptr;
} int_stack;

// int pop(int** stack_ptr, int* initial_address);
// void push(int** stack_ptr, int value, int* initial_address);

void push(int_stack *stack, int value);
int pop(int_stack *stack);
int_stack create_stack(int size);

#endif
