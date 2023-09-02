#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon
    {
        int hp;
        int attack;
        int speed;
        char tier;
        char name[15];
    }pokemon;
void change(pokemon* p)
{
    (*p).hp=70;//same as: p->hp=90;
    (*p).attack=80;// same as:   p->attack=70;
    (*p).speed=110;
    (*p).tier='S';
    
    p->hp=90;
    p->attack=70;
    strcpy((*p).name,"Raichu");
    return;
}
int main()
{
    
    pokemon pikachu = {60,70,100,'A',"Pikachu"};
    // pikachu.hp=60;
    // pikachu.attack=70;
    // pikachu.speed=100;
    // pikachu.tier='A';
    //strcpy(pikachu.name,"Pikachu");
    //int* x -> address of integer value
    pokemon* x=&pikachu; 
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n\n\n",pikachu.name );

    change(&pikachu);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name );
    return 0;
}