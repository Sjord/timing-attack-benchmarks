#include <stdio.h>
#include <string.h>
#include <time.h>

int main(int argc, char ** argv) {
	clock_t start, end;
	char * secret = "hello world";
	int res = 0;
	cpucycles();
	start = cpucycles();
	for (int i = 0; i < 1e9; i++) {
		res = strcmp(secret, argv[1]);
	}
	end = cpucycles();
	printf("%d %lld\n", res, end - start);
}