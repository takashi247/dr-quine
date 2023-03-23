/*
    Colleen: This program will print its own source in stdout when run.
*/

#include <stdio.h>
const char *s = "/*$    Colleen: This program will print its own source in stdout when run.$*/$$#include <stdio.h>$const char *s = @;$$void    ft_put_quine_char(const char c)${$    if (c == 64) {$        putchar(34);$        fputs(s, stdout);$        putchar(34);$    } else if (c == 36) {$        putchar(10);$    } else {$        putchar(c);$    }$}$$int     main(void)${$    for (const char *p = s; *p; ++p) {$        /*$            ft_put_quine_char: put NL when dollar sign, put *s when at mark,$            otherwise put c$        */$        ft_put_quine_char(*p);$    }$    return 0;$}$";

void    ft_put_quine_char(const char c)
{
    if (c == 64) {
        putchar(34);
        fputs(s, stdout);
        putchar(34);
    } else if (c == 36) {
        putchar(10);
    } else {
        putchar(c);
    }
}

int     main(void)
{
    for (const char *p = s; *p; ++p) {
        /*
            ft_put_quine_char: put NL when dollar sign, put *s when at mark,
            otherwise put c
        */
        ft_put_quine_char(*p);
    }
    return 0;
}
