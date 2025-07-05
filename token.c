#include "token.h"

#define TOK_END TOK_CHAR

static char token_string[][12] = {
    "ILLEGAL",
    "EOF",

    "IDENTIFIER",
    "STRING",
    "INTEGER",

    "(",
    "{",
    "[",
    ")",
    "}",
    "]",
    ";",

    "struct",
    "int",
    "char"
};

const char *token_type(int token) {
    return token_string[token];
}
