	section		.text
	global		ft_strcmp

ft_strcmp:
	xor	rax, rax
	xor	rcx, rcx
	call	loop

loop:
	xor	rdx, rdx
	xor	r9, r9
	mov	dl, [rdi + rcx]
	cmp	dl, 0
	je	end
	mov	r9b, [rsi + rcx]
	cmp	r9b, 0
	je	end
	cmp	r9b, dl
	jne	end
	inc	rcx
	jmp	loop

end:
	sub	al, r9b
	ret
