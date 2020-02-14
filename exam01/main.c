/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.14
  writer - Park sang uk.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct card
{
    char name[50];
    int  num[50];
    char phone[50];
    char email[50];
  
} card;
  
card cards[50];
int num = 1;

void input_business_card()
{
    
    {
        printf("--�����Է�--\n");

        printf("���Թ�ȣ %d\n", num);
        fflush(stdin);
        gets(cards[num].name);

        printf("�ѱ��̸�:\n");
        gets(cards[num].name);

        printf("����ȣ:\n");
        gets(cards[num].phone);

        printf("�̸���:");
        gets(cards[num].email);

        printf("\n");
        num++;

    }
    
}


int select_menu()
{
    int p;
    printf("\n��ɼ���=>");
    scanf("%d", &p);
    printf("\n");
    return p;
}

int delete_business_card(char name[])
{
    int i;
    for (i = 1; i < num; i++)
    {
        
        if (!strcmp(cards[i].name, name))
        {
            for (i; i < num; i++)cards[i] = cards[i + 1];

            return 1;
        }
    }
    return 0;
}
void search_business_card(int name[])
{
    int i;
    for (i = 1; i < num; i++)
    {
        if (!strcmp(cards[i].name, name))
        {
            printf("%-s\t", name);
            printf("%10s\t", cards[i].phone);
            printf("%10s\n", cards[i].email);
        }
    }
}
void search_business_card_all()
{
    int i;
    for (i = 1; i < num; i++)
    {
        printf("%1s\t", cards[i].name);
        printf("%10s\t", cards[i].phone);
        printf("%10s\n", cards[i].email);
    }
}

void show_line_cards()
{
    printf("�̸�\t\t����ȣ\t\t�̸���\n");
    printf("-------------------------------------------------\n");
}

// �����Լ�
int main(void) 
{
    int i = 1;
    char name[4];
    printf("   <<��   ��>>\n");
    printf("--------------------\n");
    printf("1. �Է�\n");
    printf("2. ����\n");
    printf("3. �˻�\n");
    printf("4. ��ü�˻�\n");
    printf("5. ����\n");

    while ((i = select_menu()) != 5)
    {
        switch (i)
        {
        case 1: input_business_card();
            break;
        case 2: printf("\n �̸�: ");
            fflush(stdin);
            gets(name);
            if (!delete_business_card(name))
                printf("\n ã�� ����\n");
            break;
        case 3: printf("\n �̸�: ");
            fflush(stdin);
            gets(name);
            show_line_cards();
            search_business_card(name);
            break;
        case 4: input_business_card();
                search_business_card_all();
            break;
        }
    }
    printf("����\n");
}






