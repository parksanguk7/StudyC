#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif // _MSC_VER

#include <stdio.h>
#include <stdlib.h>

int main() {
	int age;
	double height;

	printf("���̿� Ű�� �Է��ϼ��� :");
	scanf_s("%d%lf", &age , &height);
	printf("���̴� %d��, Ű�� %0.1lfcm �Դϴ�\n", age, height);

	char grade;
	char name[20];
	getchar();

	printf("������ �Է��ϼ��� :");
	scanf("%c", &grade);
	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", &name);

	printf("%s �� ���� : % c\n", name, grade);

	
	system("pause");
	return 0;
}
	