STDIN  equ 0x00
STDOUT equ 0x01
STDERR equ 0x02

SYS_READ  equ 0x00
SYS_WRITE equ 0x01
SYS_EXIT  equ 0x3C

macro __do_syscall__ _n_
{
    mov RAX, _n_
    syscall
}

macro write _fd_, _buf_, _size_
{
    mov RDI, _fd_
    mov RSI, _buf_
    mov RDX, _size_
    __do_syscall__ SYS_WRITE
}

macro exit _code_
{
    mov RDI, _code_
    __do_syscall__ SYS_EXIT
}
