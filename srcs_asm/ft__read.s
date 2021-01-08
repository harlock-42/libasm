	section		.text
	global		ft__read
	extern		__errno_location

ft__read:
	xor		rax, rax	; init sycall number
	syscall
	cmp	rax, 0
	jl	error
	ret

error:
	mov	rcx, rax
	call	__errno_location
	neg	rcx
	mov	[rax], rcx
	mov	rax, -1
	ret
