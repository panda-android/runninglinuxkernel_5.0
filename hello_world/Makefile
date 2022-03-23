BASEINCLUDE ?= /data/01_Code/03_runninglinux/kernel/runninglinuxkernel_5.0

mytest-objs := my_test.o
obj-m := mytest.o

all:
	$(MAKE) -C $(BASEINCLUDE) M=$(PWD) modules
clean:
	$(MAKE) -C $(BASEINCLUDE) SUBDIRS=$(PWD) clean
	rm -rf *.ko
