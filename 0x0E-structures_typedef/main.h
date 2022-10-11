#ifndef MAIN_H
#define MAIN_H
#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* #ifndef MAIN_H */
