/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, �����н�
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - park sang uk         .
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    /*char small, cap = 'H';
    
    if ((cap >= 'A') && (cap <= 'Z'))
    {
        small = cap + ('a' - 'A');
    }

    printf("�빮��  : %c,%c", cap, '\n');
    printf("�ҹ���  : %c", small);

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
   

    printf("�й� �Է�:");
    scanf("%d", &num);

    getchar();
    printf("���� �Է�:");
    grade = getchar();

    printf("�й�:%d, ����:%c", num, grade);

    return 0;
}