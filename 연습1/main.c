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
    char ani[20];
    char why[80];

    printf("좋아하는 동물:");
    scanf("%s", ani);
    fgetc(stdin);

    
    printf("좋아하는 이유:");
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
