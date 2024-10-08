#ifndef CNS_MEM_MAN_H
#	define CNS_MEM_MAN_H

# include <stdlib.h>
# include <stdio.h>

int     cns_memcmp(const void *s1, const void *s2, size_t n);
void	*cns_memcpy(void *dst, const void *src, size_t n);
void	*cns_memset(void *s, int c, size_t n);
void	*cns_memchr(const void *s, int c, size_t n);
void	cns_bzero(void *s, size_t n);


#endif