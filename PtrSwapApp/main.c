/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수,포인터 스왑 학습
  --------------------------------------------------------------------------------
  first created - 2020.02.06
  writer - Park sang uk.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*void swap_ptr(char** ppa, char** pp);
// 메인함수
int main(void) 
{
    char* pa = "success";
    char* pb = "failure";

    printf("pa=%s,pb=%s\n", pa, pb);
    swap_ptr(&pa, &pb);
    printf("pa=%s,pb=%s\n", pa, pb);
	system("pause");
	return EXIT_SUCCESS;
}

void swap_ptr(char** ppa, char** ppb) {
    char* temp;
    temp = *ppa;
    *ppa = *ppb;
    *ppb = temp;
}

void print_str(char** src, int count);
int main(void) {
    char* ptr_ary[4] = { "eagle","tiger","lion","squirrel" };
    int count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
    print_str(ptr_ary, count);

    system("pause");
    return EXIT_SUCCESS;
}

void print_str(char** src, int count) {
    for (int i = 0; i < count; i++) {
        printf("%s\n", src[i]);
    }
}

int main(void) {
    int ary[5] = { 1,2,3,4 };

    printf(" ary의 값:%u\n", ary);
    printf(" ary의 주소:%u\n", &ary);
    printf(" ary+1%u\n", ary +1);
    printf(" &ary +1%u\n", &ary + 1);

    
    system("pause");
    return EXIT_SUCCESS;
   

}

int main(void){
int ary[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
int(*pa)[4];

pa = ary;

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 4; j++)
    {
        printf("%5d", pa[i][j]);
    }
    printf("\n");

}
system("pause");
return EXIT_SUCCESS;
}*/


void print_ary(int (*)[4]);

int main(void)
{
    int ary[3][4] = { {1,2,3,4},{5,6,7,8}, {9,10,11,12} };

    print_ary(ary);

    system("pause");
    return EXIT_SUCCESS;
}

void print_ary(int(*pa)[4])
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%5d", pa[i][j]);
        }
        printf("\n");
    }
 
}