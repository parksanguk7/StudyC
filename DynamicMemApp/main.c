/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�,�����޸𸮤�����
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - Park sang uk.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// �����Լ�
/*int main(void)

{
    int* pi;
    int i, sum = 0;

    pi = (int*)malloc(5 * sizeof(int));
    if (pi == NULL)
    {
        printf("#�޸𸮰� �����մϴ�. \n");
        exit(1);
    }

    printf("�ټ� ���� ���̸� �Է��ϼ���:");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &pi[i]);
        sum += pi[i];

    }

    printf("�ټ� ���� ��� ���� : %.1lf\n", (sum / 5.0));

    free(pi);


    return 0;
}*/
int main(void)
{
    int* pi;
    int size = 5;
    int count = 0;
    int num;
    int i;

    pi = (int*)calloc(size, sizeof(int));
    while (1)
    {
        printf("����� �Է��ϼ��� => ");
        scanf("%d", &num);
        if (num <= 0) break;
        if (count == size)
        {

            size += 5;
            pi = (int*)realloc(pi , size * sizeof(int));
        }
        pi[count++] = num;
    }
    for (i = 0; i < count; i++)
    {
        printf("%5d", pi[i]);
    }
    printf("\n");
    
    free(pi);

    return 0;
}*/



