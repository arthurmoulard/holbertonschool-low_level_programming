#include <stdio.h>
#include "main.h"

int _atoi(char *s)
{
	int i = 0, sign = 1, num = 0;
	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if(s[i] == '-')
			sign = -sign;
		i++;
	}
	while(s[i] >= '0' && s[i] <= '9')
	{
		num = num * 10 + (s[i] - '0');
		i++
	}
	return num * sign;
}

int main(int argc, char *argv[])
{
	if(argc != 3)
	{
		printf("Error\n");
		return 1;
	}

	int num1 = _atoi(argv[1]);
	int num2 = _atoi(argv[2]);
	int result = num1 * num2;

	printf("%d\n", result);
	return 0;
}
