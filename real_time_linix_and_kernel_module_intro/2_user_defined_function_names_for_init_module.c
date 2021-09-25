#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int myint __initdata=2;

static int __init init_hello2(void)
{
    printk (KERN_INFO  "Hello dummy world %d\n", myint);
    return 0;
}

static void __exit exit_hello2(void)
{
    printk (KERN_INFO "Goodbye cruel world 2\n");
}

module_init(init_hell2);
module_exit(exit_hello2);
