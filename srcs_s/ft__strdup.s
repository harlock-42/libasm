	section		.text
	global		ft__strdup
	extern		ft__strlen
	extern		ft__strcpy
	extern		malloc

ft__strdup:
	xor		rax, rax	; init return value
	xor		rbx, rbx		; init buffer

	cmp		rdi, 0
	je	error	; if the string to dup is NULL --> error

	call	ft__strlen
	inc		rax	; count the '\0' of the string to dup

	mov	rbx, rdi		; save the string to dup
	mov		rdi, rax	; first malloc's av : string's len
	call	malloc
	cmp		rax, 0
	je	error	; if malloc return NULL, the fuction will return NULL
	mov	rsi, rbx
	mov	rdi, rax
	
	call	ft__strcpy

ret
	
error:
	xor	rax, rax	; return NULL
	ret
