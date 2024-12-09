#include <stdio.h>
#include "./bank.h"
#include "../log/log.h"

double CheckBalance(t_Bank *p_bank) {
    return p_bank->balance;
}

void Deposit(int amount) {
    t_Bank *p_bank;
    success("Successfully desposited %d into %s", amount, p_bank->user);
}

void Withdraw(int amount) {
    t_Bank *p_bank;

    if (amount > p_bank->balance) 
        error("Insufficient funds");
    else if (amount < 0)
        error("fuck you too man");
    else
        printf("sucessfully withdrawed %d", amount);
}