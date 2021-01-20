	section		.text
	global		ft__write
	extern		__errno_location

ft__write:
	mov	rax, 1
	syscall		; write()
	cmp	rax, 0
	jl	error	; if ret < 0 --> error
	mov	rax, rdx	; return size to write
	ret

error:
	mov	rcx, rax	; save return value of write
	call	__errno_location	; find errno address
	neg	rcx	; write() return value * (-1)
	mov	[rax], rcx	; put error code into errno address
	mov	rax, -1		; return (-1)
	ret
