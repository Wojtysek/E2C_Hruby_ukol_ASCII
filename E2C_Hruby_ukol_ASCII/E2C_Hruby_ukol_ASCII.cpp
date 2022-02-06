#include <stdio.h>

int main(void) {

	FILE* soubor = fopen("ASCII.txt", "w");

	if (soubor == NULL) {
		printf("ERROR: soubor nelze otevrit\n");
	}
	return 1;

	int ascii = 0x40;

	fprintf(soubor, "znak\n");

		for (int i = 1; i <= 26; i++) {
			ascii += 1;
			fwrite(&ascii, sizeof(int), 1, soubor);
			fprintf(soubor, "0x%x\n", ascii);
		}
}
	