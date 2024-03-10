#include<stdio.h>
#include<string.h>
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
        pokemon normal;
        char ability[20];
    }legendarypokemon;

    typedef struct godpokemon
    {
        legendarypokemon legend;
        char special_attack;
    }godpokemon;

    godpokemon pikachu;
    strcpy(pikachu.legend.normal.name,"pikachu");
    pikachu.legend.normal.hp=90;
    pikachu.legend.normal.speed=100;
    pikachu.legend.normal.attack=80;
    pikachu.legend.normal.tier='A';
    strcpy(pikachu.legend.ability,"to give shock everyone");

     printf("name=%s\n",pikachu.legend.normal.name);
    printf("hp=%d\n",pikachu.legend.normal.hp);
    printf("speed=%d\n",pikachu.legend.normal.speed);
    printf("attack=%d\n",pikachu.legend.normal.attack);
    printf("ability=%s\n",pikachu.legend.ability);
    printf("tier=%c\n\n",pikachu.legend.normal.tier);

    legendarypokemon mewtwo;
    strcpy(mewtwo.ability,"pressure");
    mewtwo.normal.hp=150;
    mewtwo.normal.attack=180;
    strcpy(mewtwo.normal.name,"mewtwo");
    mewtwo.normal.speed=100;
    mewtwo.normal.tier='s';
    
    printf("name=%s\n",mewtwo.normal.name);
    printf("ability=%s\n",mewtwo.ability);
    printf("hp=%d\n",mewtwo.normal.hp);
    printf("attack=%d\n",mewtwo.normal.attack);
    printf("speed=%d\n",mewtwo.normal.speed);
    printf("tier=%c\n\n",mewtwo.normal.tier);

    pokemon charizard;
    charizard.attack=120;
    charizard.hp=90;
    strcpy(charizard.name,"charizard");
    charizard.speed=200;
    charizard.tier='A';

    printf("name=%s\n",charizard.name);
    printf("attack=%d\n",charizard.attack);
    printf("hp=%d\n",charizard.hp);
    printf("speed=%d\n",charizard.speed);
    printf("tier=%c\n",charizard.tier);

    return 0;
}