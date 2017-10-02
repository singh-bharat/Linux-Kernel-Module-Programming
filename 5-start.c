#include <linux/kernel.h>
#include <linux/module.h>

int __init mod_init ( void )
{
	printk ( KERN_INFO "Module is starting.\n" );
	return 0;
}
