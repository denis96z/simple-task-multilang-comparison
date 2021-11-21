format ELF64 executable 0x03
entry main

segment readable executable

include './syscall.i'
include './parse.i'

main:
  mov RAX, [RSP] ; argc
  cmp RAX, 2
  je  @f

  write STDERR, USAGE_MSG, USAGE_MSG_LEN
  exit 1

@@:
  mov RAX, [RSP + 16] ; argv[1]
  parse_u64

@@:
  write STDOUT, HELLO_MSG, HELLO_MSG_LEN
  exit 0

segment readable writeable

USAGE_MSG db 'USAGE: proj-asm number',0x0A
USAGE_MSG_LEN = $-USAGE_MSG

HELLO_MSG db 'HELLO, WORLD',0x0A
HELLO_MSG_LEN = $-HELLO_MSG
