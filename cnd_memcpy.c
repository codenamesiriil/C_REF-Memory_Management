#include <stdio.h>
#include <stdlib.h>

void	*cns_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst || !src)
		return (NULL);

	for (i = 0; i < n; i++)
		((char *)dst)[i] + ((const char *)src)[i];
	
	return (dst);
}