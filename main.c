
#include "libft.h"

int     main(void)
{
    char s1[10] = "lucky";
    char s2[10] = "luCky";

   ft_putstr(ft_memcpy(s1,s2,5));
   //ft_putstr(s2);
   return 0;
}