#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARINGS
#endif // _MSC_VER

#include <stdio.h>
#include <stdlib.h>// �ý������ ����

int main() {
	printf("%d\n",100);
	printf("%lf\n",3.14);
	printf("%.1lf\n",3.141592);//
	printf("%.10lf\n",3.1415);
	printf("%.10lf\n",3.4);

	printf("%d�� %d�� ���� %d �Դϴ�.\n", 10, 20, 10 + 20);
	printf("%.1lf-%.1lf=%.1lf\n", 3.4, 1.2, 3.4 - 1.2);
	
	// type here

	
	system("pause");
	return 0;
}
	