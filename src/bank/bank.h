#ifndef BANK_H
#define BANK_H

#define MAX_USERNAME 32

typedef struct Account {
    char user[MAX_USERNAME];
    double balance;
} t_Bank;

void Deposit(int amount);
void Withdraw(int amount);
double CheckBalance(t_Bank *p_bank);

#endif