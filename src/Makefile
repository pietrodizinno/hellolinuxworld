obj-m := hello.o

KDIR  := /lib/modules/$(shell uname -r)/build
PWD   := $(shell pwd)

default:
	[TAB]$(MAKE) -C $(KDIR) M=$(PWD) modules
