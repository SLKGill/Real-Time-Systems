#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

#define DRIVER_AUTHOR "Saihaj Gill and Laura Yang"
#define DRIVER_DESC "4aa4_lab2_part3"

static int myint __initdata=4;
static char *my_string = "dummy"; //Note no __indata

module_param(my_string, charp, 0000);



static int __init init_hello4(void)
{
    printk (KERN_INFO "Hello dummy world %s %d\n", my_string, myint);
    return 0;
}

static void __exit exit_hello4(void)
{
    printk (KERN_INFO "Hello cruel world 3\n");
}

module_init(init_hello4);
module_exit(exit_hello4);

MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_PARM_DESC(my_string, "A character string");

MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);

