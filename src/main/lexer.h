#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <utils.h>
#include <uuid.h>
#include <object.h>

const char * keywords[] = {
    "print",
    "if", "else", "while", "for",
    "int",
    "string",
    "bool",
    "void",
    "return",
    "break",
    "continue",
};

const char * operators[] = {
    "+", "-", "*", "/", "%",
    "==", "!=", "<", "<=", ">", ">=",
    "&&", "||", "!",
    "=", "+=", "-=", "*=", "/=", "%=",
    "++", "--",
};

const char * data_types[] = {
};
    "int", "string", "bool", "void", "null", "object", "class", "runnable", "function"

Object[] objects[] = {};

int is_keyword(const char *token) {
    for (int i = 0; i < sizeof(keywords) / sizeof(keywords[0]); i++) {
        if (strcmp(keywords[i], token) == 0) {
            return 1;
        }
    }
    return 0;
}

char* get_type(const char *value, const char *inputed_type) {
    
}