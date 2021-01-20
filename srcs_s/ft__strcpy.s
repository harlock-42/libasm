	section		.text
	global		ft__strcpy

ft__strcpy:
	xor	rcx, rcx	; init counter
	cmp	rsi, 0
	je	ret_null	; if av[1] is NULL --> ret_null
	cmp	rdi, 0
	je	ret_null	; if (av[2] is NULL --> ret_null

loop:
	mov	dl, byte [rsi + rcx]	; put src[i] into a buffer
	mov	byte [rdi + rcx], dl	; dst[i] = buffer
	cmp	dl, 0	; if buffer = 0 --> break
	je	end
	inc	rcx	; counter++
	jmp	loop

end:
	mov	rax, rdi	; return dst
	ret

ret_null:
	mov	rax, 0		; return NULL
	ret
