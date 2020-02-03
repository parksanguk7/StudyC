/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    int i = 0;
    int j = 0;

    for (i = 2; i <= 9; i++) {

        for (j = 2; j <= 9; j++) {
            printf("%d * %d = %d\t", i,j, i * j);
        }
        printf("\n\n\n");
    }
    
	system("pause");
	return EXIT_SUCCESS;
}