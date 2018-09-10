#include <stdio.h>

int main()
{
	int height = 1;
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
		
		int stars = i * 2 - 1;
		for (int k = 0; k < stars; k++) {
			printf("*");
		}
		
		printf("\n");
	}
	
	printf("Konec programu ... :-)");
	getchar();
	getchar();
}
