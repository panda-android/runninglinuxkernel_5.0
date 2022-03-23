#include <linux/init.h>
#include <linux/module.h>

static int __init my_test_init(void)
{
	printk("my first kernel module init\n");
	return 0;
}

static void __exit my_test_exit(void)
{
	printk("googlebye\n");
}

module_init(my_test_init);
module_exit(my_test_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("hp");
MODULE_DESCRIPTION("my test kernel module");
MODULE_ALIAS("mytest");
