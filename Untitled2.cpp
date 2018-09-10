#include <stdio.h>

int main()
{
	int height = 1;
	int stars = 1;
	printf("Zadej vysku: ");
	
	do {
		if (height % 2 == 0) {
			printf("Cislo musi byt liche\n");
		}
		scanf("%d", &height);
	} while (height % 2 == 0);
	
	for (int i = 1; i <= height; i++) {
		
		for (int j = 0; j < height - i; j++) {
			printf(" ");
		}
		
		for (int k = 0; k < stars; k++) {
			printf("*");
		}
		
		stars += 2;
		printf("\n");
	}
	
	printf("Konec porgramu ... :-)");
	getchar();
	getchar();
}
