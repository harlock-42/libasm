	section		.text
	global		ft__strlen

ft__strlen:
	mov	rcx, 0
	cmp	rdi, 0
	je	end
	call	loop

loop:
	cmp	byte [rdi + rcx], 0
	je	end
	inc	rcx
	jmp	loop

end:
	mov	rax, rcx
	ret
