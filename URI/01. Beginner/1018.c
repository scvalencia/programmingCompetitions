#include <stdio.h>

int main(int argc, char const *argv[]) {
	int ammount, original;
	scanf("%d", &ammount);

	original = ammount;

	int ammount100 = ammount / 100; ammount %= 100;
	int ammount050 = ammount / 50; ammount %= 50;
	int ammount020 = ammount / 20; ammount %= 20;
	int ammount010 = ammount / 10; ammount %= 10;
	int ammount005 = ammount / 5; ammount %= 5;
	int ammount002 = ammount / 2; ammount %= 2;
	int ammount001 = ammount / 1; ammount %= 1;
	
	printf("%d\n", original);
	printf("%d nota(s) de R$ 100,00\n", ammount100);
	printf("%d nota(s) de R$ 50,00\n", ammount050);
	printf("%d nota(s) de R$ 20,00\n", ammount020);
	printf("%d nota(s) de R$ 10,00\n", ammount010);
	printf("%d nota(s) de R$ 5,00\n", ammount005);
	printf("%d nota(s) de R$ 2,00\n", ammount002);
	printf("%d nota(s) de R$ 1,00\n", ammount001);

	return 0;
}