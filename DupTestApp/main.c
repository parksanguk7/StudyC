/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�,��� �ߺ� ���� �н�
  --------------------------------------------------------------------------------
  first created - 2020.02.11
  writer - Park sang uk.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "point.h"
#include "line.h"

// �����Լ�
int main(void) 
{

    Line a = { {1,2},{5,6} };
    Point b;

    b.x = (a.first.x + a.second.x) / 2;
    b.y = (a.first.y + a.second.y) / 2;
    printf("���� ��� �� ��ǥ : (%d");
	
	system("pause");
	return EXIT_SUCCESS;
}