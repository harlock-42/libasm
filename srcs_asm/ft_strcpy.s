	section		.text
	global		ft_strcpy

ft_strcpy:
	mov	rcx, 0
	cmp	rsi, 0
	je	end
	cmp	rdi, 0
	je	end
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
