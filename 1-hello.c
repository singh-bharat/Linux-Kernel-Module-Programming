#include <linux/module.h>
#include <linux/kernel.h>

int init_mod ( void )
{
	printk (KERN_INFO "Hello, World!\n");
	return 0;
}

void exit_mod ( void )
{
	printk (KERN_INFO "Bye, World!\n");
}

module_init ( init_mod );
module_exit ( exit_mod );
