macro parse_u64 ; s=RAX, x=RCX
{
  xor RCX, RCX
  mov RDX, RAX

lbl_loop_lr:
  mov  BL, [RAX]
  test BL, BL
  jz   lbl_loop_lr_done

  cmp BL, '0'
  jge @f

  exit 2

@@:
  cmp BL, '9'
  jle @f

  exit 3

@@:
  inc RAX
  jmp lbl_loop_lr

lbl_loop_lr_done:


lbl_loop_rl:
  dec RAX
  cmp RAX, RDX
  jl  lbl_loop_rl_done

  mov BL, [RAX]

lbl_loop_rl_done:
}
