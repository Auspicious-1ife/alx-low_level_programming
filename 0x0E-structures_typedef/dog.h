#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Represents information about a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The name of the dog's owner.
 *
 * Description: This struct stores information about a dog,
 * including its name, age, and owner's name.
 */
struct dog
{
char *name;
float age;
char *owner;
};
/* Define dog_t as a typedef for struct dog */
typedef struct dog dog_t;
/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */
