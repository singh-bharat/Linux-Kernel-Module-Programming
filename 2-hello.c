#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>

static int __init init_mod ( void )
{
	printk ( KERN_INFO "Hello, World!\n");
	return 0;
}

static void __exit exit_mod ( void )
{
	printk ( KERN_INFO "Goodbye!\n");
}

module_init ( init_mod );
module_exit ( exit_mod );
