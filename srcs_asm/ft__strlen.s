	section		.text
	global		ft__strlen

ft__strlen:
	xor	rcx, rcx	; init counter
	cmp	rdi, 0		; if av[1] is NULL --> return 0
	je	end
	call	loop

loop:
	cmp	byte [rdi + rcx], 0	; if str[i] == '\0' --> break
	je	end
	inc	rcx	; counter++
	jmp	loop

end:
	mov	rax, rcx	; return len
	ret
