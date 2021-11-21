all: bin/proj-asm

INC_FILES := syscall.i parse.i

bin/proj-asm: bin main.s $(INC_FILES)
	fasm $(PWD)/main.s $(PWD)/bin/proj-asm

bin:
	mkdir -p $(PWD)/bin
