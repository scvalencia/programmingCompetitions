#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int main(int argc, char const *argv[]) {
	char* c1 = (char*) malloc(sizeof(char) * 100);
	char* c2 = (char*) malloc(sizeof(char) * 100);
	char* c3 = (char*) malloc(sizeof(char) * 100);

	scanf("%s%s%s", c1, c2, c3);

	if(strcmp(c1, "vertebrado") == 0) {
		if(strcmp(c2, "ave") == 0) {
			if(strcmp(c3, "carnivoro") == 0) {
				printf("aguia\n");
			} else {
				printf("pomba\n");
			}
		} else {
			if(strcmp(c3, "onivoro") == 0) {
				printf("homem\n");
			} else {
				printf("vaca\n");
			}
		}
	} else {
		if(strcmp(c2, "inseto") == 0) {
			if(strcmp(c3, "hematofago") == 0) {
				printf("pulga\n");
			} else {
				printf("lagarta\n");
			}
		} else {
			if(strcmp(c3, "hematofago") == 0) {
				printf("sanguessuga\n");
			} else {
				printf("minhoca\n");
			}
		}
	}
	
	return 0;
}