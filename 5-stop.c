#include <linux/kernel.h>
#include <linux/module.h>

void __exit clean_mod ( void )
{
	printk ( KERN_INFO "Soon i'll be dead!\n" );
}
