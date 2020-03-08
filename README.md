

> IT17009614
> A.M.I.S Abeykoon

**Compile asessmbly_shell.asm**

	nasm -f elf32 asessmbly_shell.asm

	ld -melf_i386 -o asessmbly_shell asessmbly_shell.o

**Test shell using**

	./asessmbly_shell

**Extract the shellcode**

	objdump -M intel -d asessmbly_shell

**Create c file using shellcode (shell.c)**

**Compile c file**

	gcc -m32 -fno-stack-protector -z execstack -o shell shell.c

**Run shell**

	./shell
