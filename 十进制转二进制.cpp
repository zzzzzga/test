/*
����ת��ʹ�õݹ�
*/
#include <stdio.h>
/*ʮ����ת������*/
void dtob(int n){
	if (n == 0){
		return;
	}
	else
	{
		int i;
		i = n % 2;
		dtob(n / 2);
		printf("%d",i);
	}
}
/*ʮ����ת16����*/
void dtoh(int n){
	if (n == 0){
		return;
	}
	else
	{
		int i;
		i = n % 16;
		dtoh(n / 16);
		switch (i)
		{
		case 10:
			printf("A");
			break;
		case 11:
			printf("B");
			break;
		case 12:
			printf("C");
			break;
		case 13:
			printf("D");
			break;
		case 14:
			printf("E");
			break;
		case 15:
			printf("F");
			break;
		default:
			printf("%d", i);
			break;
		}
	}
}

int main(){
	int i;
	scanf_s("%d", &i);
	dtob(i);
	printf("\n");
	dtoh(i);
	while (1)
	getchar();
	return 0;
}