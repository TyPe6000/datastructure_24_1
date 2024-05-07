#include <stdio.h>
#include "stackS.h"

int top = -1;

//������ ���� �������� Ȯ���ϴ� ����
int isStackEmpty() {
	if (top == NULL) return 1;
	else return 0;
}

// ������ ��ȭ �������� Ȯ���ϴ� ����
int isStackFull() {
	if (top == STACK_SIZE - 1) return 1;
	else return 0;
}

//������ top�� ���Ҹ� �����ϴ� ����
void push(element item) {
	if (isStackFull()) {
		printf("\n\n Stack is FULL! \n");
		return;
	}
	else stack[++top] = item;
}

//������ top����  ��Ҹ� �����ϴ� ����
element pop() {
	if (isStackEmpty()) {
		printf("\n\n Stack is Empty!!\n");
		return 0;
	}
	else return stack[top--];
}

// ������ top ���Ҹ� �˻��ϴ� ����
element peek() {
	if (isStackEmpty()) {
		printf("\n\n Stack is empty !\n");
		exit(1);
	}
	else {
		return stack[top];
	}
}


void printStack() {
	int i;
	printf("\n STACK [ ");
	for (i = 0; i <= top; i++)
		printf("%d ", stack[i]);
	printf("] ");
}
	