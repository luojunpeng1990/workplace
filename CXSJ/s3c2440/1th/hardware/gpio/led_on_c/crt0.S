@***********************
@function:use it to jump to c program
@time：2017年7月19日02:15:31
@core:assemble language
@***********************

.text
.global _start
_start:
       ldr   r0,=0x56000010
       mov   r1,#0x0
       str   r1,[r0]

       ldr   sp,=1024*4

       bl    main 
halt_loop:
       b     halt_loop