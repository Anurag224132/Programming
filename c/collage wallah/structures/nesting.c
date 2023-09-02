#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;

    typedef struct legendarypokemon
    {
        pokemon x;
        char ability[10];
    }legendarypokemon;

    legendarypokemon newto;

    typedef struct godpokemon
    {
        legendarypokemon legends;
        int specialattack;

    }godpokemon;

    godpokemon anu;
    anu.specialattack=300;
    strcpy(anu.legends.ability,"Sone");
    anu.legends.x.attack=500;


    newto.x.attack=200;
    strcpy(newto.ability,"Pressure");
    newto.x.hp=30;
    strcpy(newto.x.name,"anurag");
    newto.x.speed=200;
    newto.x.tier="S";
    return 0;
}