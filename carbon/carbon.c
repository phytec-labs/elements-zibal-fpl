#include "uart.h"

extern void hang(void);
extern void setup_sys(void (*)(void));

void _kernel(void)
{
	unsigned char prompt[3] = ">_ ";

	uart_init();

	uart_puts(prompt);

	hang();
}

