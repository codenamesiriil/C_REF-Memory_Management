#include "cns_mem_man.h"

void	*cns_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst || !src)
		return (NULL);

	for (i = 0; i < n; i++)
		((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];

	return (dst);
}
