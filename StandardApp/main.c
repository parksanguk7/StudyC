/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 전처리 학습
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - Park sang uk.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"
// 메인함수
int main(void)
{
    /*Student s1 = { 315, "홍길동" };
    printf("%d, %s\n", s1.num, s1.name);


    double radius, area;

    printf("반지름 입력(100이하):");
    scanf("%lf", &radius);

    if (radius > LIMIT) {
        ERR_PRN;
    }
    else {
        area = PI * radius * radius;
        printf("원의 면적 : %.2lf(%s)\n", area, MSG);

    }

    int a = 10, b = 20;
    double x = 11.2, y = 20.3;
    int res;

    printf("a+b=%d\n", SUM(a, b));
    printf("x+y=%.1lf\n", SUM(x, y));
    res = 30 / MUL(2, 5);
    printf("30/(2*5)=%d\n", res);

    system("pause");
    return EXIT_SUCCESS;
}
    


        int a1, a2;
        NAME_CAT(a, 1) = 10;
        NAME_CAT(a, 2) = 20;
        PRINT_EXPR(a1 + a2);
        PRINT_EXPR(a2 - a1);
*/

    int max;

#if VER>=6
    printf("버전 %d입니다.\n", VER);
#endif

#if BIT==16
    max = 32767;

#else
    max = 2147483647;
#endif


    printf("int형 변수의 최대값: %d\n", max);


    system("pause");
    return EXIT_SUCCESS;
}
