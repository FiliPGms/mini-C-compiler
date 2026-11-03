#include "lexer.h"
#include <stdio.h>
#include <stdlib.h>

struct token_t {
  int line;
  char *input;
  Type token_type;
};

Token *criaToken(char *input) {
  Token *t = (Token *)malloc(sizeof(Token));
  if (!t) {
    return 0;
  }
  t->input = input;
  t->line = 0;
  return t;
}

void destroiToken(Token *t) {
  if (t != NULL) {
    free(t->input);
  }
  free(t);
}