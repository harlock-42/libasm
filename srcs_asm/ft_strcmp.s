	section		.text
	global		ft_strcmp

ft_strcmp:
	xor	rax, rax
	mov	dl, byte[rdi + 0]
	cmp	dl, 0
	je	end
	ret

end:
	sub	rax, rdx
	ret
