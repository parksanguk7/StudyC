/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>
// 메인함수
/*int main(void)

{
    int sum = 0;
    int i;
    

    for (i = 1; i < 300; i++)
    {
        if (i % 3 == 0) 
            sum =sum + i;
           
        
    } 
    printf("합=%d\n", sum);



	system("pause");
	return EXIT_SUCCESS;
}


 int main(void)
{
    int i;
    printf("점수 입력:");
    scanf("%d", &i);

    if (i >= 90) {
        printf("학점: A \n");
    }
    else if (i >= 70) {
        printf("학점: B \n");
    }
    else if (i >= 60) {
        printf("학점: C \n");
    }
    else if (i >= 50) {
        printf("학점: D \n");
    }
    else{
        printf("학점: F \n");
    }

system("pause");
return EXIT_SUCCESS;
}

struct student_t
{
    double kor, math, eng, total, avg;
  
};

int main(void)
{
    int a[3][5] = { 0 };
    int total = 0, avg = 0;
    
    for (int i = 0; i < 3; i++)    {
        printf("학생 %d :", i + 1);
        scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
    }


    printf("결과: \n");
    printf("kor\teng\tmath\ttotal\tavg\n");
    for (int i = 0; i < 3; i++) {
        a[i][3] = a[i][0] + a[i][1] + a[i][2];
        a[i][4] = a[함수i][3] / 3;
        printf("%d\t%d\t%d\t%d\t%d\n", a[i][0], a[i][1], a[i][2], a[i][3], a[i][4]);
    }
    printf("\n\n");
}*/


typedef struct Node {

    int data;
    struct Node* next;
} Node_s;

Node_s* head;

void InsertNode(int data, int index);
void PrintNode(void);
void DeleteNode(int data);

void InsertNode(int data, int index)
{
    int i;
    Node_s* new_node = (Node_s*)malloc(sizeof(Node_s));
    new_node->data = data;
    new_node->next = NULL;
    if (index == 1)
    {
        new_node->next = head;
        head = new_node;
        return;
    }

    Node_s* temp2 = head;
    for (i = 0; i < index - 2; i++)
    {
        temp2 = temp2->next;
    }
    new_node->next = temp2->next;
    temp2->next = new_node;
}



void DeleteNode(int index)
{
    int i;
    Node_s* temp1 = head;
    if (index == 1)
    {
        head = temp1->next;
        free(temp1);
        return;
    }

    for (i = 0; i < index - 2; i++)
        temp1 = temp1->next;

    Node_s* del_node = temp1->next;
    temp1->next = del_node->next;
    free(del_node);
 
}

void PrintNode(void)
{
    
    Node_s* temp = head;

    while (temp != NULL)
    {
        
        printf("%d, ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void main(void)
{
    head = NULL;

    InsertNode(6, 1);
    InsertNode(8, 2);
    InsertNode(2, 1);
    InsertNode(4, 2);
    InsertNode(1, 3);
    PrintNode();
    DeleteNode(3);// 세번째 노드 삭제
    PrintNode();
    
}




   
        