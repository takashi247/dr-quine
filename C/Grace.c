#include <stdio.h>
#define FILE_NAME "Grace_kid.c"
#define CODE "#include <stdio.h>%c#define FILE_NAME %cGrace_kid.c%c%c#define CODE %c%s%c%c#define FT(code) int main(){FILE* fp = fopen(FILE_NAME, %cw%c);fprintf(fp, code, 10, 34, 34, 10, 34, code, 34, 10, 34, 34, 10, 10);fclose(fp);return 0;}%cFT(CODE)%c"
#define FT(code) int main(){FILE* fp = fopen(FILE_NAME, "w");fprintf(fp, code, 10, 34, 34, 10, 34, code, 34, 10, 34, 34, 10, 10);fclose(fp);return 0;}
FT(CODE)
