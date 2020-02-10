/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수,공용체 학습
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
// 메인함수
int main(void) 
{
	
   /* union student s1 = { 315 };
    printf("학번 %d\n", s1.num);
    s1.grade = 4.4;
    printf("학점 %.1lf\n", s1.grade);
    printf("학번 %d\n", s1.num);*/
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
    
    printf("나의 레저 활동=>%s\n", pc);

	system("pause");
	return EXIT_SUCCESS;
}