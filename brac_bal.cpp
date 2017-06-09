#include <iostream>
using namespace std;

struct stack
{
	int top;
	int capacity;
	int *array
};

//typedef strcut stacks stack;

stack* createstk(int capacity)
{
	stack *s=(stack*)malloc(stack);
	
	s->top=0;
	s->capacity=capacity;
	s->array=malloc(s->capacity*size_of(int));
  return s;
}

int push(stack** s,int data)
{
      
}


