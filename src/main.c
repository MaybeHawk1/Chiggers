// Region: Includes
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include "log/log.h"
// End of region

// Region: Macros
#define MAX_BUFFER_SIZE 2048
#define MAX_ITEM_NAME 128
// End of region

// Region: Function defenitions
void Init(t_Player *p_player);
void Upgrade(t_Player *p_player, float points);
char *DeclareAbility(t_Player *p_player);
int shop();
// End of region

// Region: Data
typedef struct {
    char name[MAX_BUFFER_SIZE];
    double health;
    uint32_t ability; // Explantion at EOF

} t_Player;

typedef struct {
    char name[MAX_ITEM_NAME];
    int damage;
    int cost;
    float durability;
} t_Inv;

// End of region

// App
int main(int argc, char *argv[]) {
    t_Player player;
}

void Init(t_Player *p_player) {
    srand(TIME(NULL));

    int ability = rand() % 5;
    p_player->health = 100;
    p_player->name[0] = getenv("USERNAME");
    p_player->ability = 0;

    switch (ability) {
        case 1:
            p_player->ability = 1;
            break;
        case 2:
            p_player->ability = 2;
            break;
        case 3:
            p_player->ability = 3;
            break;
        case 4:
            p_player->ability = 4;
            break;
        case 5:
            p_player->ability = 5;
            break;
        default:
            error("Number is too large");
    }
}

char *DeclareAbility(t_Player *p_player) {
    char *power = malloc(sizeof(power));

    switch(p_player->ability) {
        case 1:
            power = "Xray";
            break;
        case 2:
            power = "Fly";
            break;
        case 3:
            power = "Bhop";
            break;
        case 4:
            power = "ABH";
            break;
        case 5:
            power = "Gordon freeman";
            break;
        default:
            error("What the hell even happend while Init-ing???????!!!!!!");
    }

    return power;
}

void Upgrade(t_Player *p_player, float points) {
    int choice = 0;

    printf("Welcome to the baltimore half-life 1 quake upgrade shop thing!!!!!!\n");
    printf("Please enter a choice\n");
    printf("1) +10 speed\n2) +10 Fly speed\n3) -10 Bhop difficulty\n4) -10 ABH Difficulty\n5) +10 HEV Suit Charge");

    scanf("%d", &choice);
}

int shop() {
    int choice;
    printf("Hello\nWelcome to our shop\nWhat would you like to buy?");
    printf("1) Nailgun from quake I\n2) Super shotgun from DOOM II 3) HEV Batteries");
    scanf("%d", &choice);
}

// End of region

/* * p_player->ability explanation:
* The ability could be an unsigned int between 1 and 5
* Each of these numbers is supposed to represent a power
* for example:
| - * 1 = Xray
| - * 2 = Fly
| - * 3 = Noclip
| - * 4 = Gordon freeman
| - * 5 = Bhopping
* I thought using an int would make it easier for me to use p_player->ability in if statements
* And overall improve the readabilty of the code
* */