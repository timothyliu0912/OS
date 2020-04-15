#include <stdio.h>
int main(int argc, char** argv) 
{
	unsigned long msr;
	asm volatile (
		"rdtsc\n\t"  // Returns the time in EDX:EAX.
		"shl $32, %%rdx\n\t"   // Shift the upper bits left.
		"or %%rax, %%rdx\n\t" // 'Or' in the lower bits.
		"mov %%rdx , %0" //msr = rdx
		: "=m" (msr)  //msr會放在記憶體
		: 
		: "rdx","rax"
	);
	printf("msr: %lx\n", msr);
}
