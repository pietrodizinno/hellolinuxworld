Sample Linux kernel module that prints hello world.

### Compile

Install dev tools and kernel-devel:

``` bash
sudo dnf install kernel-devel make gcc
```

Now you can compiled the module:

``` bash
cd src
make -C /lib/modules/$(uname -r)/build M=$(pwd) modules
```

### Load module

```bash
sudo insmod ./hello.ko
```

### Unload module

```bash
sudo rmmod hello
```

### Check output

```bash
dmesg
```

