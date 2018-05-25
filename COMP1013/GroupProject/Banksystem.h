#ifndef GROUPPROJECT_BANKSYSTEM_H
#define GROUPPROJECT_BANKSYSTEM_H

struct theAccount {
    char accountnum[10]; //To store the ID of the account
    char accountname[30]; //To store the name of the account
    char accountpass[10]; //To store the password of the account
    double accountmoney; //To store the money of the account
    char accounttype; //To store whether the account is VIP or Normal account
};

void Upload(int, struct theAccount *);
int islogin(int, struct theAccount *);
void Inquiry(int, struct theAccount *);
void Save(int, struct theAccount *);
void Withdraw(int, struct theAccount *);
void Transfer(int, struct theAccount *);
void Quit();
void function_list(int acci, struct theAccount *);
#endif //GROUPPROJECT_BANKSYSTEM_H
