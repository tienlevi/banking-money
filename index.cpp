#include <iostream>
using namespace std;

void deposit(int balance,int money){
    cout << "Enter money to deposit" << endl;
    cin >> money;
    cout << balance - money;
}

void withdraw(int balance,int money){
    cout << "Enter money to withdraw" << endl;
    cin >> money;
    cout << balance + money;
}

int main(){
    int balance = 1000;
    int money;
    int choice = 0;

    cout << "Enter your choice:" << endl;
    cout << "1. Show Balance" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw Money" << endl;
    cout << "4. Exit\n";
    cin >> choice;

    switch (choice){
    case 1:
        cout << balance;
        break;
    case 2: 
        deposit(balance,money);
        break;
    case 3:
        withdraw(balance,money);
        break;
    case 4:
        cout << "Thank your visit";
    default:
        cout << "Invalid choice";
        break;
    }
    
    return 0;  
}