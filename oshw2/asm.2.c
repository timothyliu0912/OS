#include <stdio.h>
int main(int argc, char** argv) {
	long int a=10;
	long int b=20;
	long int c=30;
	long int d=40;
	__asm__ volatile (
		"mov $100, %%rax\n"
		"mov $200, %%rbx\n"
		"add %%rbx, %%rax\n"
		"mov %%rax, %0\n"
		: "=m" (b)
		: "g" (a), "g" (d)
		: "rbx", "rax"
		);
	printf("a=%ld, b=%ld, c=%ld d=%ld\n", a, b, c, d);
}
