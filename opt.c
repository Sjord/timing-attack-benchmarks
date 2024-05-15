#include <string.h>
#include <stdio.h>

typedef unsigned long int __attribute__ ((__may_alias__)) op_t;


int main() {
	op_t a;
	printf("%d", sizeof(a));
}
