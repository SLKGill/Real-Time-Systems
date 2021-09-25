#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

#define DRIVER_AUTHOR "Saihaj Gill and Laura Yang"
#define DRIVER_DESC "4aa4_lab2_part3"

static int myint __initdata=3;

static int __init init_hello3(void)
{
    printk (KERN_INFO  "Hello dummy world %d\n", myint);
    return 0;
}

static void __exit exit_hello3(void)
{
    printk (KERN_INFO "Hello cruel world 3\n");
}

module_init(init_hello3);
module_exit(exit_hello3);

MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
