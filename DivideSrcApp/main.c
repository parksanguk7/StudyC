/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�,���������� �н�
  --------------------------------------------------------------------------------
  first created - 2020.02.11
  writer - park sang uk.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>





// �����Լ�
int main(void) 
{
    int a, b;
    double avg;

    input_data(&a, &b);
    avg = average(a,b);
    printf("a,b�� ��հ��� %.1lf\n",a,b,avg);

	system("pause");
	return EXIT_SUCCESS;
}