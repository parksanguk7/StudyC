/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수,파일 오픈 학습
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - park sang uk.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 메인함수
/*int main(void)
{
    FILE* fp;
    int i = 0;
    char str[] = "banana";



    fp = fopen("b.txt", "w");
    if (fp == NULL)
    {
        printf("파일이 생성 실패\n");
        return EXIT_FAILURE;
    }

    while (str[i] != '\0') {
        fputs(str[i], fp);
        i++;
    }
    
        fputc('\n',fp);
        fclose(fp);

	system("pause");
    return EXIT_SUCCESS;
}
int main(void)
{
    int ch;

    while (1) 
    {
        ch = fgetc(stdin);
        if (ch == EOF) { break; }

        fputc(ch, stdout);
}

int main(void)
{

    FILE* fp;
    int ary[10] = { 13, 10,13,13,10,26,13,13,10,10 };
    int i, res;

    fp = fopen("c.txt:", "Wb");
    for (int i = 0; i < 10; i++) 
{

    fputc(ary[i], fp);
}

fclose(fp);

fp = fopen("c,txt", "rt");
while (1) {
    res = fgetc(fp);
    if (res == EOF)  break; 
    printf("%4d",res);
}

printf("\n");
fclose(fp);

return 0;
}

int main(void)

{
    FILE* fp;
    char str[20];

    fp = fopen("z.txt", "a+");
    if (fp == NULL)
    {
        printf("파일을 만들지 못했습니다.\n");
        return 1;
    }

    while (1)
    {
        printf("과일 이름 :");
        scanf("%s", str);
        if (strcmp(str, "end") == 0)
        {
            break;
        }
        else if (strcmp(str, "list") == 0)
        {
            fseek(fp, 0, SEEK_SET);
            while (1)
            {
                fgets(str, sizeof(str), fp);
                if (feof(fp))
                {
                    break;
                }
                printf("%s", str);
            }
        }
        else
        {
            fprintf(fp, "%s\n", str);


        }

     
    }
    fclose(fp);

    return 0;
}

int main(void)
{
    FILE* ifp, * ofp;
    char name[20];
    int kor, eng, math;
    int total;
    double avg;
    int res;

    ifp = fopen("Text.txt", "r");
    if (ifp == NULL)
    {
        printf("입력 파일을 열지 못했습니다.\n");
        return 1;
    }

    ofp = fopen("b.txt", "w");
    if (ofp == NULL)
    {
        printf("출력 파일을 열지 못했숩니다.\n");
        return 1;
    }

    while (1)
    {
        res = fscanf(ifp, "%s%d%d%d", name, &kor, &eng, &math);
        if (res == EOF) {
            break;
        }
        total = kor + eng + math;
        avg = total / 3.0;
        fprintf(ofp, "%s%5d%7.1lf\n", name, total, avg);

    }

    fclose(ifp);
    fclose(ofp);

    return 0;
}*/

int main(void)
{
    FILE* afp, * bfp;
    int num = 213456;
    int res;

    afp = fopen("a.txt", "wt");
    if (afp == NULL) { return EXIT_FAILURE; }
    fprintf(afp, "%d", num);
    bfp = fopen("b.txt", "wb");
    if (bfp == NULL) { return EXIT_FAILURE; }
    fwrite(&num, sizeof(num), 1, bfp);

    fclose(afp);
    fclose(bfp);

    bfp = fopen("b.txt", "rb");
    fread(&res, sizeof(res), 1, bfp);
    printf("%d", res);

    fclose(bfp);

    return EXIT_SUCCESS;
}





    
 