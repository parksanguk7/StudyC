/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    char str1[80], str2[80];
    char temp[80];

    printf("���ڿ��� �Է��ϼ���:");
    scanf("%s %s", str1, str2);
    printf("�ٲٱ���:%s,%s", str1, str2);

    strcpy(temp, str1);
    strcpy(str2, str1);
    strcpy(str2, temp);

    printf("�ٲ���:%s, %s", str1,str2);

	system("pause");
	return EXIT_SUCCESS;
}