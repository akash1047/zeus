/* token.h
 *
 * tokens are of 3 categories -
 *   1. literals
 *   2. punctations
 *   3. keywords
 *
 * literals includes -
 *   1. IDENTIFIER
 *   2. STRING
 *   3. INTEGER
 *
 * punctations includes -
 *   1. LEFT_PARENTHESIS
 *   2. LEFT_BRACES
 *   3. LEFT_BRACKETS
 *   4. RIGHT_PARENTHESIS
 *   5. RIGHT_BRACES
 *   6. RIGHT_BRACKETS
 *   7. SEMICOLON
 *
 * keywords includues -
 *   1. STRUCT
 *   2. INT
 *   3. CHAR
 *
 * tokens and their lex
 * --------------------
 *  1. IDENTIFIER           [a-zA-Z][a-zA-Z0-9]*
 *  2. STRING               '"' ~ [a-zA-Z0-9 ] ~ '"'
 *  3. INTEGER              [0-9]+
 *
 *  4. LEFT_PARENTHESIS     (
 *  5. LEFT_BRACES          {
 *  6. LEFT_BRACKETS        [
 *  7. RIGHT_PARENTHESIS    )
 *  8. RIGHT_BRACES         }
 *  9. RIGHT_BRACKETS       ]
 *  10. SEMICOLON           ;
 *
 *  11. STRUCT              'struct'
 *  12. INT                 'int'
 *  13. CHAR                'char'
 */

enum {
    TOK_ILLEGAL = 0,
    TOK_EOF,

    TOK_IDENTIFIER,
    TOK_STRING,
    TOK_INTEGER,

    TOK_LEFT_PARENTHESIS,
    TOK_LEFT_BRACES,
    TOK_LEFT_BRACKETS,
    TOK_RIGHT_PARENTHESIS,
    TOK_RIGHT_BRACES,
    TOK_RIGHT_BRACKETS,
    TOK_SEMICOLON,

    TOK_STRUCT,
    TOK_INT,
    TOK_CHAR
};

// get human readable string value for a token type
//
// token_type(TOK_INTEGER) = "INTEGER"
// token_type(TOK_SEMICOLON) = ";"
// token_type(TOK_INT) = "int"
const char *token_type(int token);
