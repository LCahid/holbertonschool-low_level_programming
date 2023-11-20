#ifndef H_H
#define H_H
/**
  * struct dog - dog
  * @name: name
  * @age: age
  * @owner: owner
  * Description: desc
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
