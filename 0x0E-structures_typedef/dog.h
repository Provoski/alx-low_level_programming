#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a data types that hold members or
 * dog properts of different types
 * @name: first member
 * @age: second member
 * @owner: third member
 * Description: this struct data type contains three members
 * and objects can be created from it
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 * Description: now representing the struct dog data type
 */
typedef struct dog dog_t;

#endif /* #ifndef DOG_H */
