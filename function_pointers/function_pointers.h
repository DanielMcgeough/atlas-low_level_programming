#ifndef MAIN_H
#define MAIN_H

void print_name(char *name, void (*f)(char *));
void array_iteration(int *array, size_t size, void (*action)(int));

#endif
