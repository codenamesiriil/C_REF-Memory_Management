#include "cns_mem_man.h"

int	main(void)
{
	{
		char	str1[20];
		char	str2[] = "Hello world!";

		cns_memcpy(str1, str2, 20);
		printf("%s\n", str1);
	}
	return (0);
}