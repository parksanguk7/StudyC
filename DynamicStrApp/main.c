/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�,�����Ҵ� �н�
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// �����Լ�
int main(void) 
{
    char temp[80];
    char* str[20] = { 0 };
    int i;

    while ( i < 20)
    {
        printf("���ڿ� �Է��ϼ���:");
        gets(temp);
        if (strcmp(temp, "end") == 0) break; 
        str[i] = (char *)malloc(strlen(temp) + 1);
        strcpy(str[i], temp);
        i++;
    }

    for(i = 0; str[i] != NULL; i++)
    {
        free(str[i]);
    }
               
	system("pause");
	return EXIT_SUCCESS;
}

void print_str(char **ps)
{
    while (*ps != NULL)
    {
        printf("%s\n", *ps);
        ps++;
    } 
}