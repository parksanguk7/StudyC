/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�/������ ����
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - park sang uk.
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    int a = 10;
    int* pa = &a;
    double* pd = pa;
    
    printf("a :%d\n", a);
    printf("pa : %d\n", *pa);
    printf("pd : %lf\n", *pd);

   
	system("pause");
	return EXIT_SUCCESS;
}