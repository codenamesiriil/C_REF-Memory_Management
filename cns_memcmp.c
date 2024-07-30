#include "cns_mem_man.h"

int	cns_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	for (i = 0; i < n; i++)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
	}
	return (0);
}
