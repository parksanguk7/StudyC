/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수,변수 영역 데이터 공유 테스트
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - Park sang uk.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void assign10(void);
void assign20(void);

int a;

// 메인함수
/*int main(void) 
{
    int a = 10, b = 20;
    printf("교환전 %d, %d", a, b); {
                int temp;
               
        temp = a;
        a = b ;
        b = temp;
    
        printf(" temp의 값 %d", temp);
    }
    printf("교환후 %d, %d\n", a, b);
    
	system("pause");
	return EXIT_SUCCESS;*/
}

int main(void) {

    printf("a의 값: %d\n", a);
    assign10();
    assign20();
    printf("a의 값: %d\n", a);
    system("pause");
    return EXIT_SUCCESS;
}
void assign10(void) {
    a = 10;
}

void assign20(void){
    //int a = 0;
    a = 20;
        
    
    
}