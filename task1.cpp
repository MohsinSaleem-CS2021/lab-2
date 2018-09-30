#include<iostream>
using namespace std ;

class Account {
public:
  Account(double inital_balance)
{

  balance = inital_balance;
}


void credit(double amount)
{
  balance+=amount;
}

double getBalance ( )
{
  return balance;
}
double debit(double Debit)
{
  if(Debit>balance)
  {
    std::cout<<"Debit amount exceeded account balance"<<std::endl;
    return balance;
  }
  else
    balance=balance-Debit;
    return balance;
}

private:
  double balance;
};

int main () {
Account acct1(45);
std::cout<<" Account 1 Balance is : " <<acct1.getBalance()<<'\n';

acct1.credit(2323);
std::cout<<" Account 1 Balance is : " <<acct1.getBalance()<<'\n';

double Debit;
std::cout<<"enter amount to be withdrawn : ";std::cin>>Debit;
acct1.debit(Debit);
std::cout<<" Account 1 Balance is : " <<acct1.getBalance()<<'\n';
return 0;
}
