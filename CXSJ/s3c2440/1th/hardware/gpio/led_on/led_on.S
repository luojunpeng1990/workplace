@*****************************
@function:light the led
@timme:2017年7月13日12:17:52
@key:arm assemble、 link  lds
@*****************************

.text
.global _start
_start:
       LDR   R0,=0X56000010

       MOV   R1,#0x00000400
       STR   R1,[R0]
       LDR   R0,=0x56000014

       MOV   R1,#0x00000000

       STR   R1,[R0]
MAIN_LOOP:
       B     MAIN_LOOP      