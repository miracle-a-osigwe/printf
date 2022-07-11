#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdlib.h>
#include <stdarg>
#include <stddef.h>
#include <string.h>


int _putchar(char c);
int _printf(const char *format, ...);
int _switch_check(int *format, va_list *nlist);
void strHandler(char * str);
void characterHandler(int c);


char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);



#endif
