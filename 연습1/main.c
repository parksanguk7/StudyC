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
    char ani[20];
    char why[80];

    printf("�����ϴ� ����:");
    scanf("%s", ani);
    fgetc(stdin);

    
    printf("�����ϴ� ����:");
    fgets(why, sizeof(why), stdin);
    printf("%s is %s", ani, why);


	system("pause");
	return EXIT_SUCCESS;
}

/*char str[20] = "apple";
char* pa = str;
char* pb = "pineapple";

printf("%s","apple");

system("pause");
return EXIT_SUCCESS;
}*/
