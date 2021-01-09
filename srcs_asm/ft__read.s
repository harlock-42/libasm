	section		.text
	global		ft__read
	extern		__errno_location

ft__read:
	xor		rax, rax	; init sycall number
	syscall		; read()
	cmp	rax, 0
	jl	error	; if return value < 0 --> error
	ret

error:
	mov	rcx, rax	; save return value of read()
	call	__errno_location	; put errno address into rax
	neg	rcx	; return value of read() * (-1)
	mov	[rax], rcx	; put error code value into errno address
	mov	rax, -1	; return (-1)
	ret
