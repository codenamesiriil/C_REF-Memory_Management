#include "cns_mem_man.h"

void	*cns_memset(void *s, int c, size_t n)
{
	size_t	i;

	for (i = 0; i < n; i++)
		((unsigned char *)s)[i] = c;
	
	return (s);
}
