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
#include <string.h>

// �����Լ�
/*int main(void) 
{
    char str1[80] = "cat";
    char str2[80];
    
    strcpy(str1, "tiger");
    strcpy(str2, str1);
    printf("%s %s\n",str1,str2);

	system("pause");
	return EXIT_SUCCESS;
}*/
int main(void)
{
    char str[80];
    printf("���ڿ� �Է�:");
    gets(str);
    printf("���ڿ� ���:");
    puts(str);
    
    system("pause");
    return EXIT_SUCCESS;
}