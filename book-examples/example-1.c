/* A simple /hello-world/ implementation in kernel module */

#define  MODULE
#include <linux/module.h>

int init_module (void) { printk ("<1>Hello, World!\n"); return 0; }
void cleanup_module (void) { printk ("<1>Goodbye, Cruel world!\n");}


