	section		.text
	global		ft__strdup
	extern		ft__strlen
	extern		ft__strcpy
	extern		malloc

ft__strdup:
	xor	rax, rax	; init return value
	xor	r9, r9		; init buffer
	call	ft__strlen
	inc	rax	; count the '\0' of the string to dup
	mov		r9, rdi		; save the string to dup
	mov		rdi, rax	; first malloc's av : string's len
	call	malloc
	cmp	rax, 0
	je	malloc_error	; if malloc return NULL, the fuction will return NULL
	
	mov		rdi, rax	; set *dst for ft__strcpy
	mov		rsi, r9		; set *src for ft__strcpy
	call	ft__strcpy
	ret

malloc_error:
;	xor	rax, rax
	ret
