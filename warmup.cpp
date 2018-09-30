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

private:
  double balance;
};

int main () {
Account acct1(45);
std::cout<<" Account 1 Balance is : " <<acct1.getBalance()<<'\n';

acct1.credit(2323);
std::cout<<" Account 1 Balance is : " <<acct1.getBalance()<<'\n';
return 0;
}
