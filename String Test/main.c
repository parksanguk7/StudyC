#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARINGS
#endif // _MSC_VER

#include <stdio.h>
#include <stdlib.h>

int main() {
	char fruit[20] = "strawberry";
	char jam[4] = "jam";
	
	printf("���� : %s\n", fruit );
	printf("���� ´ ; %s %s\n", fruit, jam);
	strcpy(fruit, "water melons");
	printf("�̹� ���� : %s\n", fruit);
	
	system("pause");
	return 0;
}
	