/*
    Colleen: This program will print its own source in stdout when run.
*/

#include <stdio.h>
const char *s = "/*$    Colleen: This program will print its own source in stdout when run.$*/$$#include <stdio.h>$const char *s = @;$int main() {$    for (const char *p = s; *p; ++p) {$        if (*p == 64) {$            putchar(34);$            fputs(s, stdout);$            putchar(34);$        } else if (*p == 36) {$            putchar(10);$        } else {$            putchar(*p);$        }$    }$    return 0;$}$";
int main() {
    for (const char *p = s; *p; ++p) {
        if (*p == 64) {
            putchar(34);
            fputs(s, stdout);
            putchar(34);
        } else if (*p == 36) {
            putchar(10);
        } else {
            putchar(*p);
        }
    }
    return 0;
}
