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
    
    pokemon arr[3];
    strcpy(arr[0].name,"charizard");
    arr[0].attack=150;
    arr[0].hp=100;
    arr[0].speed=200;
    arr[0].tier='s';

    strcpy(arr[1].name,"pikachu");
    arr[1].attack=150;
    arr[1].hp=40;
    arr[1].speed=40;
    arr[1].tier='A';

    strcpy(arr[2].name,"balbasaure");
    arr[2].attack=200;
    arr[2].hp=90;
    arr[2].speed=80;
    arr[2].tier='g';
    
    for(int i=0;i<3;i++)
    {
        printf("name=%s\n\n",arr[i].name);
        printf("attack=%d\n\n",arr[i].attack);
        printf("speed=%d\n\n",arr[i].speed);
        printf("tier=%c\n\n",arr[i].tier);
    }
    return 0;
    
}