#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARINGS
#endif // _MSC_VER

#include <stdio.h>
#include <stdlib.h>// 시스템헤더 파일

int main() {
	printf("%d\n",100);
	printf("%lf\n",3.14);
	printf("%.1lf\n",3.141592);
	printf("%.10lf\n",3.1415);
	printf("%.10lf\n",3.4);

	printf("%d과 %d의 합은 %d 입니다.\n", 10, 20, 10 + 20);
	printf("%.1lf-%.1lf=%.1lf\n", 3.4, 1.2, 3.4 - 1.2);
	
	// type here

	printf("%.1lf\n",1e10);
	printf("%.8lf\n", 3.13e-5);
	printf("%le\n", 0.0000314);
	printf("%.2le\n",0.00000413);

	printf("%c\n", 'A');
	printf("%s\n", "Asad");
	printf("%c는 %s입니다.\n", '1', "first");

	system("pause");
	return 0;
}
	