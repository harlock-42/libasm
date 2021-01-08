	section		.text
	global		ft__strcpy

ft__strcpy:
	mov	rcx, 0
	cmp	rsi, 0
	je	ret_null
	cmp	rdi, 0
	je	ret_null
	call	loop

loop:
	mov	dl, byte [rsi + rcx]
	mov	byte [rdi + rcx], dl
	cmp	dl, 0
	je	end
	inc	rcx
	jmp	loop

end:
	mov	rax, rsi
	ret

ret_null:
	mov	rax, 0
	ret
