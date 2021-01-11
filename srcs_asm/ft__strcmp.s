	section		.text
	global		ft__strcmp

ft__strcmp:
	xor		rax, rax	; init return value
	cmp		rsi, 0
	je		error
	cmp		rdi, 0
	je		error
	xor		rcx, rcx ; i = 0

loop:
	mov		r9b, [rdi + rcx]	; put s1[i] in a buffer
	mov		r10b, [rsi + rcx]	; put s2[i] in a buffer
	cmp		r9b, r10b
	jne	end	; if s1[i] != s2[i] --> break
	cmp		r9b, 0
	je	end	; if s1[i] == 0 --> break
	inc	rcx	; i++
	jmp	loop

end:
	sub		r9b, r10b ; s1[i] = s1[i] - s2[i]
	mov		al, r9b ; ret = s1[i]
	movsx		rax, al ; put result with sign extension in ret
	ret

error:
	ret
