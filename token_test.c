#include "token.h"
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdint.h>

int test(char *message) {
    struct token_string_pair {
        int token;
        char string[12];
    };

    const struct token_string_pair test_pairs[] = {
        { .token = TOK_IDENTIFIER, .string = "IDENTIFIER" },
        { .token = TOK_STRING, .string = "STRING" },
        { .token = TOK_INTEGER, .string = "INTEGER" },
    };

    for (int i = 0; i < sizeof(test_pairs) / sizeof(struct token_string_pair); i++) {
        const char *actual = token_type(test_pairs[i].token);
        const char *expected = test_pairs[i].string;
        if (strcmp(expected, actual) != 0) {
            if (message != NULL) {
                sprintf(message, "expected %s, got %s", expected, actual);
            }
            return 1;
        }
    }

    return 0;
}

int main() {
    printf("token unit test\n");
    char message[256];
    int test_status = 0;

    time_t test_start, test_end;
    double duration;

    time(&test_start);
    test_status = test(message);
    time(&test_end);

    duration = difftime(test_start, test_end);

    if (test_status != 0) {
        printf("test failed: %s\n", message);
    }

    printf("test duration %.4lf\n", duration);

    return test_status;
}

