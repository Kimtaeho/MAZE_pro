#include <linux/kernel.h>
#include <linux/module.h>

void cleanup_module()
{
    printk(KERN_INFO "short is the life of a kernel module\n");
}
