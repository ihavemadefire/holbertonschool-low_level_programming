#ifndef dog_h
#define dog_h
/**
 * struct dog - dog attributes
 * @name: Dog Name
 * @owner: owner name
 * @age: Age of dog
 * Description: Data type to store doggie-flavored info
 */
typedef struct dog
{
	char *name;
	char  *owner;
	float age;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

int _strlen(char *s);

char *_strcpy(char *dest, char *src);
#endif
