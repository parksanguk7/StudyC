/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 문자학습
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - park sang uk         .
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    /*char small, cap = 'H';
    
    if ((cap >= 'A') && (cap <= 'Z'))
    {
        small = cap + ('a' - 'A');
    }

    printf("대문자  : %c,%c", cap, '\n');
    printf("소문자  : %c", small);

    char ch;
    
    for (int i = 0; i < 3; i++)
    {
        scanf("%c", &ch);
        printf("%c", ch);
    }
    putchar('\n');

    system("pause");
    return EXIT_SUCCESS;

    int res;
    char ch;

    while (1)
    {
        res = scanf("%c", &ch);
        if (res == -1) break;
        printf("%c", ch);*/


    int num, grade;
   

    printf("학번 입력:");
    scanf("%d", &num);

    getchar();
    printf("학점 입력:");
    grade = getchar();

    printf("학번:%d, 학점:%c", num, grade);

    return 0;
}