#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon
{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
}pokemon;
void fun(pokemon p)
{
    printf("%d\n",p.hp);
    printf("%d\n",p.speed);
    printf("%d\n",p.attack);
    printf("%c\n",p.tier);
    printf("%s\n",p.name);

    return ;
}
int main()
{
    pokemon pikachu;
    pikachu.hp=60;
    pikachu.attack=100;
    pikachu.speed=101;
    pikachu.tier='s';
    strcpy(pikachu.name,"pikachu");
    fun(pikachu);
    return 0;
}