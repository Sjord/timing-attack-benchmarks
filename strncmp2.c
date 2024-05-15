#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {
	char * secret = "1715762622-Mb12K2Epbm46OhMOmzhrBOueEPxCMB";
	char input[60];
	int len = strlen(secret);
	int result = 0;
    printf("# (Changed character index) (time in nanosecond per comparison)\n");
	for (int x = 0; x < len; x++) {
		strcpy(input, secret);
		input[x] = '0';
		clock_t start = clock();
		for (int i = 0; i < 1e9; i++)
			result ^= strncmp(input, secret, len);
		clock_t end = clock();
		printf("%d %Lf\n", x, (long double)(end - start) / CLOCKS_PER_SEC);
	}
    printf("# result: %d\n", result);
}
