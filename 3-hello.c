#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

#define DRIVER_AUTHOR "Bharat Singh"
#define DRIVER_DESC "Prints Hello World!"

static int __init init_mod ( void )
{
	printk ( KERN_INFO "Bharat Singh.\n");
	return 0;
}

static void __exit exit_mod ( void )
{
	printk ( KERN_INFO "returning!\n");
}

module_init ( init_mod );
module_exit ( exit_mod );

MODULE_AUTHOR ( DRIVER_AUTHOR );
MODULE_LICENSE ("GPL");
MODULE_DESCRIPTION ( DRIVER_DESC );
MODULE_SUPPORTED_DEVICE ( "testdevice" );

