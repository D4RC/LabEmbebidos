@ lab4 act1 part2.1
@ write values using three different addressing modes
@       
@ ---------------------------------------
@   Data Section
@ ---------------------------------------

.data
.balign 4
b: .word 0
y: .word 0 @ tarjet variable, will contain the values
c: .word 0xcccccccc
@ ---------------------------------------
@   Code Section
@ ---------------------------------------

.text
.global main

main:
        push   {ip, lr}          @ push return address + dummy register for alignment

	ldr r1, =y
	mov r0, #0xaaaa
	movt r0, #0xaaaa
	str r0, [r1]

	ldr r2, =b
	mov r3, #0xbbbb
	movt r3, #0xbbbb
	mov r0, r3
	str r0, [r2,#4]

	ldr r3, =c
	ldr r0, [r3]
	mov r3, #1
	str r0, [r2,r3,lsl#2]

