/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, �������� �н�
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - Park sang uk.
*/

#include <stdio.h>
#include <stdlib.h>

/*void auto_func(void);
void static_func(void);

// �����Լ�
int main(void)
{

    int i;
    int sum = 0;

    for (int i = 0; i <= 10000; i++)
    {
        sum += i;
    }

    printf("sum is %d\n", sum);
    system("pause");
    return 0;
}

void add_ten(int *pa);
 
int main(void) {

    int a = 10;
    add_ten(&a);
    printf("res=%d\n", a);
    system("pause");
    
    return EXIT_SUCCESS;
}

void add_ten(int a)
{
    return a + 10;//�Ű����� ������
}*/

int* sum(int a, int b);

int main(void)
{
    int* resp;

    resp = sum(10, 20);
    printf("�� ������ ��: %d\n", *resp);

    return 0;
}

int* sum(int a, int b)
{
    static int res;

    res = a + b;
    
    return &res;//��� ������
 }
