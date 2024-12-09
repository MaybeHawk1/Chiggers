#include <stdio.h>
#include "../bank/bank.h"
#include "shop.h"
#include "../log/log.h"

int Draw() {
    int choice = 0;
    printf("Hello\nWelcome to our shop\nWould you like to\n1) Buy\n2) Sell");

    scanf("%d", &choice);

    return choice;
}

void Buy() {
    t_Bank *p_Bank;
    int choice = 0;

    printf("Items:\n\t1) Quake I Nailgun\n\t2) Quake III Rocket Launcher\n\t3) DOOM Super shotgun\n\t4) HEV Batteries\n\t5) Phys Gun [GMod]");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            Withdraw(50);
            break;
        case 2:
            Withdraw(50);
            break;
        case 3:
            Withdraw(30);
            break;
        case 4:
            Withdraw(10);
            break;
        case 5:
            Withdraw(100);
            break;
        default:
            error("something happend");
    }
}

void Sell() {
    t_Bank *p_Bank;

    // TODO: Implemant an inventory system
}

void ShopMain() {
    int choice = Draw();

    if (choice == 1) {
        Buy();
    } else if (choice == 2) {
        Sell();
    } else {
        error("Invalid return value");
    }
}