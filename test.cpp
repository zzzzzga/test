#include <stdio.h>

int kindof(int);

int main1()
{
	printf("有%d种可能\n", kindof(50));
	return 0;
}

int kindof(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 1;
	else{
		return kindof(n - 1) + kindof(n - 2);
	}
}