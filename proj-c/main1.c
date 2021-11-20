#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <inttypes.h>

int main(int argc, const char **argv)
{
    if (argc != 2)
    {
        fprintf(stderr, "USAGE: proj_c number\n");
        exit(1);
    }

    int32_t n = (int32_t)strtol(argv[1], NULL, 10);
    assert(n > 0);

    for (int32_t i = 0; i < n; ++i)
    {
        char *s = NULL;
        asprintf(&s, "STRING #%"PRIi32, i);

        puts(s);
        free(s);
    }

    return 0;
}
