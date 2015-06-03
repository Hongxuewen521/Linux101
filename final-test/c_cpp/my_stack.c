/*
 * my_stack的实现文件
 * 如果采用C++的实现，那也可以把此文件名改为.cpp
 * 但是记住g++才是编译C++的编译器
 *
 */
#include <stdio.h>
#include <malloc.h>

#include "include/my_stack.h"

typedef struct stack
{
	int *base;
	int *top;
	int stackSize;
}SqStack;

SqStack *s;
	s=(Sqstack *)malloc(sizeof(SqStack));
	s->base=(int *)malloc(sizeof(int)*10);
	s->top=s->base;
	s->stackSize=10;

int stack_capacity()
{
	return s->stackSize;
}


int stack_size()
{
	return (s->top-s-base);
}

int stack_is_empty()
{
	if(s->top==s->base)
		return 1;
	else
		return 0;
}

int stack_is_full()
{
	if(s->top-s-base==s->stackSize)
		return 1;
	else
		return 0;
}


void stack_push(int x)
{
	*(s-top)=x;
	++(s->top);
	return;
}

int stack_pop()
{
	int e=*(s->top);
	--(s->top);
	return e;	
}

