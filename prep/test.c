#include <stdio.h>
const char *s =
"#include <stdio.h>"
"const char *s = @; "
"int main() {"
    "for (const char *p = s; *p; ++p) {"
        "if (*p == 64) {"
            "putchar(34);"
            "fputs(s, stdout);"
            "putchar(34);"
        "} else if (*p == 36) {"
            "putchar(10);"
        "} else {"
            "putchar(*p);"
        "}"
    "}"
    "return 0;"
"}";
int main() {
    for (const char *p = s; *p; ++p) { // s を1文字ずつ走査
        if (*p == 64) {         // *p == '@' なら s の値をダブルクォートで囲んで表示
            putchar(34);
            fputs(s, stdout);
            putchar(34);
        } else if (*p == 36) {  // *p == '$' なら改行
            putchar(10);
        } else {                // そうでなければ *p を表示
            putchar(*p);
        }
    }
    return 0;
}
