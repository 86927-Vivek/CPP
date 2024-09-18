#include <iostream>
#include <string>
using namespace std;


enum AccountType {
    SAVINGS,
    CURRENT,
    DMAT
};


class InsufficientFundsException {
    string message;
public:
    InsufficientFundsException(string msg) : message(msg) {}  

   
    string getMessage() {
        return message;
    }
};


class Account {
    int accountNumber;
    string accountHolderName;
    AccountType accountType;
    double balance;

public:
    
    Account() {
        accountNumber = 0;
        accountHolderName = "";
        accountType = SAVINGS;
        balance = 0.0;
    }

    
    void setAccountDetails(int accNo, string name, AccountType type, double bal) {
        accountNumber = accNo;
        accountHolderName = name;
        accountType = type;
        balance = bal;
    }

    
    void displayAccountDetails() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Type: " << (accountType == SAVINGS ? "Savings" : accountType == CURRENT ? "Current" : "Fixed Deposit") << endl;
        cout << "Account Balance: " << balance << endl;
    }

    
    void deposit(double amount) {
        if (amount < 0) {
            throw InsufficientFundsException("Cannot deposit negative amount!");
        }
        balance += amount;
        cout << "Amount deposited successfully. Updated Balance: " << balance << endl;
    }

    
    void withdraw(double amount) {
        if (amount > balance) {
            throw InsufficientFundsException("Insufficient balance to withdraw!");
        }
        balance -= amount;
        cout << "Amount withdrawn successfully. Updated Balance: " << balance << endl;
    }

    
    int getAccountNumber() {
        return accountNumber;
    }
};

int main() {
    Account accounts[5]; 
    int accNo, accType;
    string name;
    double balance;

    
    for (int i = 0; i < 5; ++i) {
        // cout << "Enter details for Account " << (i + 1) << ":\n";
        cout << "Account Number: ";
        cin >> accNo;
        cout << "Account Holder Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Account Type (0 for Savings, 1 for Current, 2 for Fixed Deposit): ";
        cin >> accType;
        cout << "Initial Balance: ";
        cin >> balance;

        
        accounts[i].setAccountDetails(accNo, name, static_cast<AccountType>(accType), balance);
        cout << endl;
    }

    
    int choice, accIndex;
    double amount;
    do {
        cout << "\n--- Menu ---\n";
        cout << "1. Deposit\n2. Withdraw\n3. Display Account\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1 || choice == 2 || choice == 3) {
            cout << "Enter account number: ";
            cin >> accNo;

            
            accIndex = -1;
            for (int i = 0; i < 5; ++i) {
                if (accounts[i].getAccountNumber() == accNo) {
                    accIndex = i;
                    break;
                }
            }

            if (accIndex == -1) {
                cout << "Account not found!\n";
                continue;
            }
        }

        try {
            switch (choice) {
                case 1: 
                    cout << "Enter amount to deposit: ";
                    cin >> amount;
                    accounts[accIndex].deposit(amount);
                    break;
                case 2: 
                    cout << "Enter amount to withdraw: ";
                    cin >> amount;
                    accounts[accIndex].withdraw(amount);
                    break;
                case 3: 
                    accounts[accIndex].displayAccountDetails();
                    break;
                case 4: 
                    cout << "Exiting...\n";
                    break;
                default:
                    cout << "Invalid choice! Please try again.\n";
            }
        } catch (InsufficientFundsException& e) {
            cout << "Error: " << e.getMessage() << endl;
        }
    } while (choice != 4);

    return 0;
}
