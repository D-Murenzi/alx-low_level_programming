#ifdef MAIN_H
#def MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);
int _strlen(char *s);
void *_calloc(unsigned int nmemb, unsigned int size);
#endif
