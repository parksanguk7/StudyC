/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�,����ü �н�
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


union student
{
    int num;
    double grade;
};

enum season {
    spring = 5,
    summer,
    fall = 10,
    winter
};
// �����Լ�
int main(void) 
{
	
   /* union student s1 = { 315 };
    printf("�й� %d\n", s1.num);
    s1.grade = 4.4;
    printf("���� %.1lf\n", s1.grade);
    printf("�й� %d\n", s1.num);*/
    enum season ss;
    char* pc = NULL;

    ss = spring;
    switch (ss)
    {
    case spring:
        pc = "inline"; break;
        break;
    case summer:
        pc = "swimming"; break;
        break;
    case fall:
        pc = "trip"; break;
        break;
    case winter:
        pc = "sking"; break;
        break;
    default:
        break;
    }
    
    printf("���� ���� Ȱ��=>%s\n", pc);

	system("pause");
	return EXIT_SUCCESS;
}