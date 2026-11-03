#ifndef LEXER_H
#define LEXER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct token_t Token;
typedef enum {
  TOKEN_KEYWORD,
  TOKEN_STRING,
  TOKEN_NUMBER,
  TOKEN_IDENTIFIER,
  TOKEN_LPAREN,
  TOKEN_RPAREN,
  TOKEN_NEWLINE,
  TOKEN_EOF,
} Type;

Token *criaToken(char *input);
void destroiToken(Token *t);

#endif