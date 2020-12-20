	section		.data
line:	db		'salut', 10, 0

	section		.text
	global		hello

hello:

	call	_print
	call	_end

_print:
	mov	rax, 1
	mov	rdi, 1
	mov	rsi, line
	push	rsi
	mov	rdx, 0
	call	_loop
	pop	rsi
	syscall
	ret

_end:
	mov	rax, 60
	mov	rdi, 0
	syscall

_loop:
	inc	rdx
	inc	rsi
	mov	cl, [rsi]
	cmp	cl, 0
	jne	_loop
	ret
