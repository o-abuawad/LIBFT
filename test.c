#include "libft.h"

int	main(void)
{
	char	*c;

	c = ft_strjoin("hello ", "world");
	printf("%s\n", c);
	free(c);
	return (0);
}
