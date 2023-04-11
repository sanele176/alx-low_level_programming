#ifndef MAIN_H
#define MAIN_H

char *_strdup(char *str);
char *create_array(unsigned int size, char c);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
int _putchar(char c);
#endif /* MAIN_H */
