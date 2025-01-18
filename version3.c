#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    printf("文字列: %s\\n", str);
    printf("文字列の長さ: %lu\\n", strlen(str)); // strlenはstring.hから
    return 0;
}
