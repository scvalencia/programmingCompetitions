#include <stdio.h>
#include <stdlib.h>

struct product {
	int code;
	int ammount;
	double price;
};

struct product scanfProduct() {
	int code, ammount;
	double price;

	scanf("%d%d%lf", &code, &ammount, &price);

	struct product ansProduct;

	ansProduct.code = code;
	ansProduct.ammount = ammount;
	ansProduct.price = price;

	return ansProduct;

}

int main(int argc, char const *argv[]) {
	struct product product1 = scanfProduct();
	struct product product2 = scanfProduct();

	double total = (double) product1.ammount * product1.price;
	total += (double) product2.ammount * product2.price;

	printf("VALOR A PAGAR: R$ %.2lf\n", total);

	return 0;
}