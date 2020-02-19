/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STACK_SIZE 100
// 메인함수
/*int main(void) 
{
    int i, sale[4] = { 321,123,654,867 };

    for (i = 0; i < 4; i++) {

        printf("\n address :%u sale [%d]=%d", &sale[i], i, sale[i]);
    }
	system("pause");
	return EXIT_SUCCESS;
}

void main()
{
    int i, n = 0, * ptr;
    int sale[2][4] = { {63,84,140,130},{123,423,234,346} };

    ptr= &sale[0][0];
    for (i = 0; i < 8; i++) {
        printf("\n address :%u sale %d =%d", ptr, i, *ptr);
        ptr++;
    }
    getchar();

}

typedef int element;

element stack[STACK_SIZE];
int top = -1;

int isEmpty() {
    if (top = -1) return 1;
    else return 0;
}

int isFull() {
    if (top == STACK_SIZE - 1) return 1;
    else return 0;
}

void push(element item) {
    if (isFull()) {
        printf("\n\n Stack is FULL!\n");
        return;
    }
    else stack[++top] = item;
}

element pop() {
    if (isEmpty()) {
        printf("\n\n Stack is Empty!!\n");
        return 0;
    }
    else return stack[top - 1];
}

element peek() {
    if (isEmpty()) {
        printf("\n\n Stack is Empty !\n");
        exit(1);
    }
    else return stack[top];
}

void printStack() {
    int i;
    printf("\n STACK [");
    for (i = 0; i <= top; i++)
        printf("%d", stack[i]);
    printf("]");
}

void main(void) {


    element item;
    printf("\n**순차 스택 연산**\n ");
    printStack();
    push(1);  printStack();
    push(2);  printStack();
    push(3);  printStack();


    item = peek(); printStack();
    printf("peek => %d", item);

    item = pop(); printStack();
    printf("\t pop => %d", item);

    item = pop(); printStack();
    printf("\t pop => %d", item);

    item = pop(); printStack();
    printf("\t pop => %d", item);

    getchar();
}*/

typedef int element;

typedef struct stackNode {
    element data;
    struct stackNode* link;
}stackNode;

stackNode* top;

int isEmpty() {
    if (top = NULL) return 1;
    else return 0;
}

void push(element item) {
    stackNode* temp = (stackNode*)malloc(sizeof(stackNode));
    temp ->data = item;
    temp->link = top;
    top = temp;
}

element pop() {
    element item;
    stackNode* temp = top;

    if (top = NULL) {
        printf("\n\n Stack is empty !\n");
        return 0;
    }
    else {
        item = temp->data;
        top = temp->link;
        free(temp);
        return item;
    }
}
element peek() {
    if (top == NULL) {
        printf("\n\n Stack is empty !\n");
        return 0;
    }
    else {
        return (top->data);
    }
}

void printStack() {
    stackNode* p = top;
    printf("\n STACK [");
    while (p) {
        printf("%d", p->data);
        p = p -> link;
    }
    printf("]\t");
}

void main(void) {
    element item;
    top = NULL;
    printf("\n 연결 스택 연산 \n");
    printStack();
    push(1); printStack();
    push(2); printStack();
    push(3); printStack();

    item = peek(); printStack();
    printf("peek=>%d", item);

    item = pop(); printStack();
    printf("pop=>%d", item);

    item = pop(); printStack();
    printf("pop=>%d", item);

    item = pop(); printStack();
    printf("pop=>%d", item);

    getchar();
}

