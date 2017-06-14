#include <stdio.h>
int Sum(int,int);
void main()
{
	int num1 = 0;
	int num2 = 0;
	char op[1];
	printf("숫자 1 입력...\n");
	scanf("%d", &num1);
	printf("숫자 2 입력...\n");
	scanf("%d", &num2);
	puts("연산자 입력...");
	scanf("%s",op);
	int result = Sum(num1,num2);
	printf("두수의 합은 %d 입니다.", result);
}
