//* Problem:- Bank Customer Class:
/* Challenge: Design a Customer class for a bank system that manages customer information and basic operations.

todo Attributes:
name: String containing the customer's full name.
accountNumber: Unique integer identifying the customer's account.
accountBalance: Double representing the current balance in the account.
isActive: Boolean indicating whether the account is active.

todo Methods:
deposit(amount): Adds the specified amount to the account balance.
withdraw(amount): Deducts the specified amount from the account balance (check for sufficient funds).
transfer(amount, targetAccount): Transfers the specified amount to another customer's account (within the system).
printDetails(): Prints the customer's name, account number, and current balance.
*/

#include <iostream>
using namespace std;

class Customer
{
    string name;
    double accountBalance;
    int accountNumber;
    bool isActive;

public:
    Customer() {}

    Customer(string name, double accountBalance, int accountNumber, bool isActive)
    {
        this->name = name;
        this->accountBalance = accountBalance;
        this->accountNumber = accountNumber;
        this->isActive = isActive;
    }

    int getAccountNumber()
    {
        return accountNumber;
    }

    void deposit(double amount)
    {
        if (amount > 0)
            accountBalance += amount;
        else
            cout << "Invalid deposit amount\n";
    }

    void withdraw(double amount)
    {
        if (isActive && amount > 0 && accountBalance >= amount)
            accountBalance -= amount;
        else
            cout << "Invalid withdraws & insufficient funds.\n";
    }

    void transferAmount(double amount, Customer &targetAccount)
    {
        if (isActive && amount > 0 && accountBalance >= amount)
        {
            accountBalance -= amount;
            targetAccount.deposit(amount);
        }
        else
        {
            cout << "Invalid transfer or insufficient funds.\n";
        }
    }

    void printDetails()
    {
        cout << "User Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account balance: " << accountBalance << endl;
    }

    void printTransferDetails()
    {
        cout << "User Name: " << name << endl;
        cout << "Account balance: " << accountBalance << endl;
    }
};

void runATM(Customer &userA, Customer &userB)
{
    cout << "1. Amount Deposit\n";
    cout << "2. Amount Withdraw\n";
    cout << "3. Amount transfer to another account\n";
    cout << "4. See your account details\n";
    cout << "Press the number(1-4), which option you want to choose\n";
    int option;
    cin >> option;
    system("clear");

    switch (option)
    {
    case 1:
        cout << "Enter Deposit Amount\n";
        break;

    case 2:
        cout << "Enter Withdraw Amount (Multiple of 100)\n";
        break;

    case 3:
        cout << "Enter Transfer Amount\n";
        break;

    case 4:
        userA.printDetails();
        return;

    default:
        cout << "Please choose valid option.";
        return;
    }
    double amount;
    cin >> amount;

    switch (option)
    {
    case 1:
        userA.deposit(amount);
        break;

    case 2:
        userA.withdraw(amount);
        break;

    case 3:
        userA.transferAmount(amount, (userB));
        break;
    }

    system("clear");
    char one;
    cout << "Do you want to know your details(Y/N)\n";
    cin >> one;

    system("clear");
    if ((one == 'y' || one == 'Y') && option != 3)
        userA.printDetails();
    else if ((one == 'y' || one == 'Y') && option == 3)
    {
        userA.printDetails();
        cout << endl;
        userB.printTransferDetails();
        cout << endl;
    }
    else
        cout << "Thankyou To Trust Us\n";
}

int main()
{
    system("clear");
    Customer user1("Madhur", 50000, 1234, true);
    Customer user2("Sam", 15000, 7610, true);

    cout << "Welcome to our Bank\n";
    cout << "Enter Your Account Number\n";
    int account_number;
    cin >> account_number;
    system("clear");

    if (account_number == user1.getAccountNumber())
    {
        runATM(user1, user2);
    }
    else if (account_number == user2.getAccountNumber())
    {
        runATM(user2, user1);
    }
    else
    {
        cout << "Enter valid Account Number\n";
        return 0;
    }

    return 0;
}