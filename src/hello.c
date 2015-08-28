#include <linux/module.h>
#include <linux/kernel.h>

MODULE_AUTHOR("Chris Smart <distroguy@gmail.com>");
MODULE_DESCRIPTION("Print hello world");
MODULE_LICENSE("GPL");

int init_module() {
  printk("Hello, Linux World!\n");
  return 0;
}

void cleanup_module() {
  printk("Bye bye, Linux World!\n");
}

