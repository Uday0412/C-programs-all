#include<stdio.h>
#include<string.h>
int main()
{
    struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
    };
    struct  pokemon pikachu;
    
        pikachu.attack=60;
        pikachu.hp=50;
        pikachu.speed=100;
        pikachu.tier='A';
    struct pokemon charizard;

    charizard.attack=130;
    charizard.hp=80;
    charizard.speed=80;
    charizard.tier='S';

    struct pokemon mewtwo;

    mewtwo.attack=170;
    mewtwo.hp=150;
    mewtwo.speed=200;
    mewtwo.tier='G';

    printf("%c\n",charizard.tier);
    printf("%d\n",charizard.hp);
    printf("%d\n",charizard.speed);

    return 0;
    
        
    
}