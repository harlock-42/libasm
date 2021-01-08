	section		.text
	global		ft__write
	extern		__errno_location

ft__write:
	mov	rax, 1
	syscall
	cmp	rax, 0
	jl	error
	mov	rax, rdx
	ret

error:
	mov	rcx, rax
	call	__errno_location
	neg	rcx
	mov	[rax], rcx
	mov	rax, -1
	ret
