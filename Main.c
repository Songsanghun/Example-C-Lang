#include <stdio.h>
int Sum(int,int);
void main()
{
	int num1 = 0;
	int num2 = 0;
	char op[1];
	printf("���� 1 �Է�...\n");
	scanf("%d", &num1);
	printf("���� 2 �Է�...\n");
	scanf("%d", &num2);
	puts("������ �Է�...");
	scanf("%s",op);
	int result = Sum(num1,num2);
	printf("�μ��� ���� %d �Դϴ�.", result);
}
