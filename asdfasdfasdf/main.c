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
#include <string.h>

// 메인함수
/*int main(void) 
{
    int a, b, temp;


    printf("변수를 입력하세요:");
    scanf("%d  %d" ,&a, &b);

    temp = a;
    a = b;
    b = temp;
    
    pritnf("바뀐 변수는 %d %d입니다.\n", a, b);

	system("pause");
	return EXIT_SUCCESS;
}


{
int w, h;

scanf("%d %d", &w, %h);

int area = (w * h) / 2;

printf("%d\n"), area;
}

/int main(void)
{
    int sum = 0;

    for (int i = 1; i < 101; i++)
    {

            sum += i;


    }

    printf("%d\n", sum);
    return 0;
}

int main(void)
{
    int num = 3;
    for (int i = 0; i < num; i++) {
        for (int j = num - 1; j > i; j--) {
            printf(" ");
        }

        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 1; i < num; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }

        for (int j = 2 * num - 1; j > 2 * i; j--) {
            printf("*");
        }
        printf("\n");
    }
}


int main(void)
{
    
    char a;
    

   
    scanf("%c ", &a);
    printf("%d\n", a);

    
    return 0;
}

int main(void)
{
    
       
    
    for (int i = 0; i < 6; i++)
    {
        

    }
}


int main(void)
{
    int sum = 0;
    int a, b;

    while (a != 0)
    {
        b = a % 10;
        a = a / 10;
        sum += b;
    }
   
  
   
    scanf("%d", &a);
    printf("%d", sum);

    return 0;
}




    long long int root(long long int n)
    {
        int a = sqrt(n);

        if (a * a == n)
        {
            return (long long int)(a + 1) * (a + 1);
        }
        else
        {
            return -1;
        }
    }

    int main()
    {
        long long int n;
        int a;

        scanf("%11d", &n);

        printf("%11d\n", root (n));
        
        return 0;
        
    }
       
        




char n1[300];
char* p;

void main(void)
{
        
        p = n1;
        printf("자연수 입력:\n");
        scanf("%s", n1);
        
        printf(p);
        printf("\n");
        
        for (int i = strlen(p) - 1; i > -1; i--)
        {
            printf("%s", p[i]);
        }
        printf("\n");

       
}

int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return (fibo(n - 1) % 1234567 + fibo(n - 2) % 1234567) % 1234567;
    }

}

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d\n", fibo(n) % 1234567);
    
    return 0;
}

int main(void)
{
    for (char i = 'A'; i <= 'Z'; i++)
    {
        for (char j = 'A'; j <= 'Z'; j++)
        {
            for (char k = 'A'; k <= 'Z'; k++) {

                printf("%c%c%c\t", i, j, k);
            }
        }
    }
    return 0;
}*/

int main(void)
{
    in i,j,count=1;
    
    for ( i=1; i<=100;i++)
    {
        for ( j = 2; j < i; j++) 
        {
            

            if ((i % j) == 0)
                break;
        }

        if (i == j) 
        {
            
            printf("%d\t", i);
            count++;

            
        }
    }

    return 0;
}