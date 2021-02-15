#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

int main () {
    char buf[4096];
    ssize_t n;
    char *str = NULL;
    size_t len = 0;
    while (n = read(STDIN_FILENO, buf, sizeof buf)) {
        if (n < 0) {
            if (errno == EAGAIN)
                continue;
            perror("read");
            break;
        }
        str = realloc(str, len + n + 1);
        memcpy(str + len, buf, n);
        len += n;
        str[len] = '\0';
    }
    printf("%.*s\n", len, str);
    return 0;
}

