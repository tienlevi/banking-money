#include <iostream>
using namespace std;

void deposit(int balance,int amount){
    cout << "Enter money to deposit" << endl;
    cin >> amount;
    if(amount > balance){
        cout << "You have entered more than the amount in your balance" << endl;
        return;
    }
    cout << balance - amount;
}

void withdraw(int balance,int amount){
    cout << "Enter money to withdraw" << endl;
    cin >> amount;
    cout << balance + amount;
}

int main(){
    int balance = 1000;
    int amount;
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
        deposit(balance,amount);
        break;
    case 3:
        withdraw(balance,amount);
        break;
    case 4:
        cout << "Thank your visit";
    default:
        cout << "Invalid choice";
        break;
    }
    
    return 0;  
}