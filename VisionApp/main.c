/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, structure ��ȯ�� �н�
  --------------------------------------------------------------------------------
  first created - 2020.02.07.
  writer - park sang uk.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct vision {
    double left;
    double right;
};

struct vision exchage(struct vision robot);
// �����Լ�
int main(void) 
{
    struct vision robot;
    printf("�÷� �Է�:");
    scanf("%lf%lf", &(robot.left), &(robot.right));
    printf("ó�� �÷�: %.1lf, %.1lf\n", robot.left, robot.right);
    robot = exchage(robot);
    printf("�ٲ� �÷�: %.1lf, %.1lf\n", robot.left, robot.right);

    system("pause");
	return EXIT_SUCCESS;
}

struct vision exchage(struct vision robot) {
    double temp;
    
    temp = robot.left;
    robot.left = robot.right;
    robot.right = temp;

    return robot;

}
