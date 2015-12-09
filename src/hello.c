#include <linux/module.h>
#include <linux/kernel.h>

#define pr_fmt(fmt)	"distroguy: "	fmt

MODULE_AUTHOR("Chris Smart <distroguy@gmail.com>");
MODULE_DESCRIPTION("Print Hello World");
MODULE_LICENSE("GPL");

int init_module(void)
{
	pr_info("Hello, Linux World!\n");
	return 0;
}

void cleanup_module(void)
{
	pr_info("Bye bye, Linux World!\n");
}

