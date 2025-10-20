#include <stdio.h>
int main(void)
{
	printf("char : %zu octet\n", sizeof(char));
	printf("int : %zu octet\n", sizeof(int));
	printf("long int : %zu octet\n", sizeof(long int));
	printf("long long int : %zu octet\n", sizeof(long long int));
	printf("float : %zu octet\n", sizeof(float));

	return 0;
}
