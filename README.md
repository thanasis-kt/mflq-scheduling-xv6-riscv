# MLFQ Scheduling Implementation on xv6 

> [!NOTE]
> This project was part of the course **Operating Systems** in **DiT UoA**. The assignment is attached in this repository. If you want you can find the original code for the xv6 operating system in RISCV in https://github.com/mit-pdos/xv6-riscv

You can compile and run this code using the following command:
```
make qemu
```

And then you can check that the operating system works correctly by entering:
```
usertests
```

# ps Program

In the assignment I also created a program matching `ps` in linux, using a self-made syscall called `getpinfo` (you can find more information in the attached pdf). You can run this program just like ps:
```
ps
```
