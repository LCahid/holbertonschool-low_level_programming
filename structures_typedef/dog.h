#ifndef H_H
#define H_H
/**
  * struct dog - dog
  * @name: name
  * @age: age
  * @owner: owner
  * Description: desc
  */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
