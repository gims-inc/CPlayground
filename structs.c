#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct dog{
    char *owner;
    char *name;
    float age;
} dog_t;

void init_dog(struct dog *d, char *o, char *n, float a){
    if (d != NULL){
        d->owner = o;
        d->name = n;
        d->age = a;
    }
}

dog_t *new_dog(char *d_owner,char *d_name,float d_age){
    struct dog *dogptr = malloc(sizeof(struct dog));
    
    if (dogptr == NULL) {
        // Handle allocation failure
        return NULL;
    }

     // Allocate memory for owner and name buffers
    dogptr->owner = malloc(strlen(d_owner) + 1);
    dogptr->name = malloc(strlen(d_name) + 1);
    
    if (dogptr->owner == NULL || dogptr->name == NULL) {
        // Handle allocation failure
        free(dogptr->owner);
        free(dogptr->name);
        free(dogptr);
        return NULL;
    }
    
    strcpy(dogptr->owner, d_owner);
    strcpy(dogptr->name, d_name);
    dogptr->age = d_age;

    return (dogptr);
}







void print_dog(struct dog *d){
    printf("\nDog Owner: %s,\t Dog Name: %s,\t Dog Age: %f\n", d->owner,d->name,d->age);

}

void free_dog(dog_t *d){
    if (d != NULL){
        free(d->name);
        free(d->owner);
        free(d);
    }
}

int main(void){
    /*__________*/
    struct dog my_dog;
    
    my_dog.name = "Poppy";
    my_dog.owner = "Gab";
    my_dog.age = 4.5;
    print_dog(&my_dog);

    /*_________*/
    struct dog dog_i;

    init_dog(&dog_i,"Owner", "Sussy",8.2); 
    print_dog(&dog_i);

    /* ________*/
    dog_t *dog_ii;
    
    dog_ii = new_dog("Brown","Fox", 3.8);
    print_dog(dog_ii);
    
    free_dog(dog_ii);

    
    
    return 0;
}


