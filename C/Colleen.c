/*
    Colleen: This program will print its own source in stdout when run.
*/

#include <stdio.h>

#define ATMARK 64
#define DQUOTE 34
#define DOLLAR 36
#define NEWLINE 10

const char *s = "/*$    Colleen: This program will print its own source in stdout when run.$*/$$#include <stdio.h>$$#define ATMARK 64$#define DQUOTE 34$#define DOLLAR 36$#define NEWLINE 10$$const char *s = @;$$void    ft_put_quine_char(const char c)${$    if (c == ATMARK) {$        putchar(DQUOTE);$        fputs(s, stdout);$        putchar(DQUOTE);$    } else if (c == DOLLAR) {$        putchar(NEWLINE);$    } else {$        putchar(c);$    }$}$$int     main(void)${$    for (const char *p = s; *p; ++p) {$        /*$            put NL when dollar sign, put *s surrounded by d-quote when at mark,$            otherwise put c$        */$        ft_put_quine_char(*p);$    }$    return 0;$}$";

void    ft_put_quine_char(const char c)
{
    if (c == ATMARK) {
        putchar(DQUOTE);
        fputs(s, stdout);
        putchar(DQUOTE);
    } else if (c == DOLLAR) {
        putchar(NEWLINE);
    } else {
        putchar(c);
    }
}

int     main(void)
{
    for (const char *p = s; *p; ++p) {
        /*
            put NL when dollar sign, put *s surrounded by d-quote when at mark,
            otherwise put c
        */
        ft_put_quine_char(*p);
    }
    return 0;
}
