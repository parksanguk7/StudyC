#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARINGS
#endif // _MSC_VER

#include <stdio.h>
#include <stdlib.h>

int main() {
	short sh = 32767;
	int in = 2147483647;
	long ln = 2147483647;
	long long lln = 123451234512345;
	unsigned int ui = 429496729;

	printf("short�� �ִ밪: %d\n", sh);
	printf("int�� �ִ밪: %d\n:", in);
	printf("long�� �ִ밪 : %ld\n", ln);
	printf("long long �ִ밪: %lld\n", lln);

	printf("unsigned int �ִ밪 %d\n", ui);
	ui = -1;
	printf("unsigned int ���簪 %u\n", ui);
	
	system("pause");
	return 0;
}
	