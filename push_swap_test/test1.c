#include<stdio.h>
#include<stdlib.h>
typedef struct Element Element;
struct Element
{
    int nombre;
    Element *suivant;
};

typedef struct Pile Pile;
struct Pile
{
    Element *premier;
};
void empiler(Pile *pile, int nvNombre)
{
    Element *nouveau = malloc(sizeof(*nouveau));
    if (pile == NULL || nouveau == NULL)
    {
        exit(1);
    }

    nouveau->nombre = nvNombre;
    nouveau->suivant = pile->premier;
    pile->premier = nouveau;
}
void afficherPile(Pile *pile)
{
    if (pile == NULL)
    {
        exit(1);
    }
    Element *actuel = pile->premier;

    while (actuel != NULL)
    {
        printf("%d\n", actuel->nombre);
        actuel = actuel->suivant;
    }
    printf("\n");
}
int main()
{
    Pile *stack_a;
    stack_a->premier->nombre = 1;
    stack_a->premier->suivant = NULL;
    int i = 0;
    while(i < 5)
    {
        empiler(stack_a,i);
        i++;
    }
    afficherPile(stack_a);
}