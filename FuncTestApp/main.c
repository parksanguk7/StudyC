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
/*int sum(int x, int y)
int get_num();

// �����Լ�
int main(void)
{
    int a = 10, b = 20;
    int result;

    result = sum(a, b);
    get_num();
    printf("result:%d\n", result);
    
    system("pause");
	return EXIT_SUCCESS;
}

void get_cum(void) {

}
// �հ� �Լ�
    int sum(int x, int y) {
    int temp;
    temp = x + y;
    return temp;
}*/
int factorial(int count);

//�����Լ�

int main(void)
{   
    int result = factorial(5);
    printf("result=%d\n", result);
    system("pause");
    return EXIT_SUCCESS;
}

int factorial(int count) {
    
    if (count ==1){ return 1; }
       

    return count * factorial(count - 1);
}
