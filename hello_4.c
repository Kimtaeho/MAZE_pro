#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#define DRIVER_AUTHOR "Kim Taeho <sputumman@naver.com>"
#define DRIVER_DESC "A sample driver"

static int __int init_hello_4(void)
{
    printk(KERN_INFO "Hello, world 4\n");
    return 0;
}
static void __exit exit_hello_4(void)
{
    printk(KERN_INFO "Goodbye, world 4\n");
}

module_init(init_hello_4);
module_exit(exit_hello_4);

MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);

MODULE_SUPPORTED_DEVICE("testdevice");
