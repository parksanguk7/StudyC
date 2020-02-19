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
}

int main(void)//소수
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

int main(void)
{
    int a, b, result;

    printf("단을 입력하세요:\n");
    scanf("%d", &a);

    for (b = 1; b < 10; b++)
    {


        result = (a * b);

        printf("%d단 : %d * %d = %d\n", a, a, b, result);
    }
    return 0;
}


typedef int element;
int size;

void SelectionSort(int a[], int size) {

    int i, j, t, min;
    element temp;
    printf("\n정렬한 원소:");
    for (t = 0; t < size; t++) printf("%d", a[t]);
    printf("\n----------선택정렬수행-----------\n");
    for (i = 0; i < size; i++) {
        min = i;
        for (j = i + 1; j < size; j++) {
            if (a[j] < a[min]) min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;

        printf("\n%d단계", i + 1);
        for (t = 0; t < size; t++) printf("%3d", a[t]);
    }
}

    void main() {
        element list[8] = { 69,10,30,2,16,8,31,22 };
    size = 8;
    SelectionSort(list, size);

    getchar();
}
typedef int element;
int size;

void bubbleSort(element a[], int size) {
    int i, j, t;
    element temp;
    printf("\n정렬할 원소: ");
    for (t = 0; t < size; t++) printf("%d", a[t]);
    printf("\n-----------버블 정렬 수행----------");
    for (i = size - 1; i > 0; i--) {
        printf("\n %d단계>>", size - i);
        for (j = 0; j < i; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
            printf("\n\t");
            for (t = 0; t < size; t++) printf("%3d", a[t]);
        }
    }
}

void main() {
    element list[8] = { 69,10,30,2,16,8,31,22 };
    size = 8;
    bubbleSort(list, size);
    getchar();
}

typedef int element;
int size, i = 0;

int partition(element a[], int begin, int end)
{
    int pivot, L, R, t;
    element temp;
    L = begin;
    R = end;
    pivot = (int)((begin + end) / 2.0);

    printf("\n [%d단계 : pivot = %d]\n", ++i, a[pivot]);
    while (L < R) {
        while ((a[L] < a[pivot]) && (L < R)) L++;
        while ((a[R] >= a[pivot]) && (L < R)) R--;
        if (L < R) {
            temp = a[L];
            a[L] = a[R];
            a[R] = temp;

            if (L == pivot)
                pivot = R;
        }
    }

    temp = a[pivot];
    a[pivot] = a[R];
    a[R] = temp;4*
    for (t = 0; t < size; t++) printf("%d", a[t]);
    printf("\n");
    return R;
}

void quickSort(element a[], int begin, int end) {
    int p;
    if (begin < end) {
        p = partition(a, begin, end);
        quikSort(a, begin, p - 1);
        quickSort(a, p + 1, end);
    }
}
void main() {
    element list[8] = { 69,10,30,2,16,8,31,22 };
    size = 8;
    printf("\n[초기상태]\n");
    for (int i = 0; i <= size - 1; i++) printf("%d", list[i]);
    printf("\n");

    getchar();

}

typedef int element;

int partition(element a[], int begin, int end)
{

    int pivot, L, R, t;
    element temp;

    int arry[4];
    int p;
    int score;

    L = begin;
    R = end;
    pivot = (int)((begin + end) / 2.0);

    printf("점수는:?\n");
    scanf("%d", score);


    While(L < R) {
        while ((a[L] < a[pivot]) && (L < R)) L++;
        while ((a[R] >= a[pivot] && (L < R))) R--;
        if (L < R) {
            temp = a[L];
            a[L] = a[R];
            a[R] = temp;

            if (L == pivot)
                pivot = R;
        }
    }*/






int main (void) 
{

    char c;
    int b = 0, s = 0, n = 0, p = 0;

    while (1)
    {
        scanf("%c", &c);

        if (c >= '0' && c <= '9')
        {
            n++;
        }
        else if (c >= 'a' && c <= 'z')
        {
            s++;
        }
        else if (c >= 'A' && c <= 'Z')
        {
            b++;
        }
        else if (c >= 33 && c <= 64)
        {
            p++;
        }
        else if (c >= 58 && c <= 64)
        {
            p++;
        }
        else if (c >= 91 && c <= 96)
        {
            p++;
        }
        else if (c >= 123 && c <= 126)
        {
            p++;
        }
        else
        {
            break;
        }
    }
    printf("대문자 : %d\n", b);
    printf("소문자 : %d\n", s);
    printf("숫자 : %d\n", n);
    printf("특수문자 : %d\n",p );

    system("puase");
    return EXIT_SUCCESS;

}
