#include <iostream>
#include <string>


using namespace std;

class bankAccount{

private:
double balance=100000;
public:
string name;
public:
string acct_type;

public:
double getBalance(){

return balance;
}

void deposit(double amount)
{
 balance += amount;

}

void withdraw(double amount)
{
    if(balance<amount){
        cout << "sorry insufficient fund"<<endl;
    }
    else{
     balance -= amount;
      cout <<amount << "Naira has been withdrawn from your account" <<endl;
    }


}
};

int main()
{
    bankAccount myBankAccount;
   //cout << myBankAccount.balance<<endl;
  // myBankAccount.addToBalance(20000);
  //myBankAccount.acct_type="savings";
  cout << "your account balance is " << myBankAccount.getBalance()<< endl;
  myBankAccount.withdraw(60000);
  cout << "your current account balance is " << myBankAccount.getBalance();

   // cout << "Hello world!" << endl;
    return 0;
}
