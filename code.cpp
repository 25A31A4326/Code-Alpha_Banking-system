#include <iostream>
using namespace std;

class BankAccount {
private:
    int accNo;
    string name;
    double balance;

public:
    void createAccount() {
        cout << "Enter Account Number: ";
        cin >> accNo;
        cout << "Enter Customer Name: ";
        cin >> name;
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit() {
        double amount;
        cout << "Enter Deposit Amount: ";
        cin >> amount;
        balance += amount;
        cout << "Amount Deposited Successfully!\n";
    }

    void withdraw() {
        double amount;
        cout << "Enter Withdrawal Amount: ";
        cin >> amount;

        if (amount <= balance) {
            balance -= amount;
            cout << "Amount Withdrawn Successfully!\n";
        } else {
            cout << "Insufficient Balance!\n";
        }
    }

    void display() {
        cout << "\nAccount Number: " << accNo;
        cout << "\nCustomer Name: " << name;
        cout << "\nBalance: Rs. " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    int choice;

    acc.createAccount();

    do {
        cout << "\n\n===== BANKING SYSTEM =====";
        cout << "\n1. Deposit";
        cout << "\n2. Withdraw";
        cout << "\n3. Display Account Details";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                acc.deposit();
                break;

            case 2:
                acc.withdraw();
                break;

            case 3:
                acc.display();
                break;

            case 4:
                cout << "Thank You!";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while (choice != 4);

    return 0;
}
