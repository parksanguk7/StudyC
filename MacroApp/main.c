d/*
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

int func(void);

// �����Լ�
int main(void)
{
    printf("������ ��¥�� �ð�: %s, %s\n", __DATE__, __TIME__);
    printf("���ϸ� : %s\n", __FILE__);
    printf("�Լ��� : %s\n", __FUNCTION__);
    printf("���ȣ : %d\n", __LINE__);

#line 100 "macro.c"

    func();
    return 0;
}

    void func(void)
    {
        printf("\n");
        printf("���ϸ� :%s \n", __FILE__);
        printf("�Լ��� :%s \n", __FUNCTION__);
        printf("���ȣ :%d \n", __LINE__);
        
    }
	
