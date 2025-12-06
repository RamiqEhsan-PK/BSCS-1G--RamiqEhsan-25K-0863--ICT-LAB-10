#include <iostream>
#include <string>

class BankAccount
{
    std::string accountNumber;
    std::string accountHolder;
    float balance;

public:
    BankAccount(std::string number, std::string holder)
    {
        accountNumber = number;
        accountHolder = holder;
        balance = 0;
    }

    void deposit(float amount)
    {
        balance += amount;
    }

    void withdraw(float amount)
    {
        if(balance>=amount){
        balance -= amount;
        }
    }

    void displayAccount()
    {
        std::cout << "Account Number: " << accountNumber << "\nAccount Holder: " << accountHolder << "\nBalance: " << balance << "\n\n";
    }
};

int main()
{

    BankAccount Account1("1", "John");
    BankAccount Account2("2", "James");

    Account1.deposit(3000);
    Account2.deposit(4000);

    Account1.withdraw(1000);

    Account1.displayAccount();
    Account2.displayAccount();

    return 0;

}
