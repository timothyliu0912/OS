#include <stdio.h>
int main(int argc, char** argv)
{
	int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;
	__asm__ volatile ( 
		"movl $100, %%eax\n"
		"movl $200, %%ebx\n"
	       	"addl %%ebx, %%eax\n"
		"movl %%eax, %0\n"
		:"=g" (b)
		:"g" (a), "g" (d)
		:"ebx", "eax"
	);
	printf("a=%d, b=%d, c=%d d=%d\n",a,b,c,d);	
}
