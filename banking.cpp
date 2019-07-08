#include <iostream>

using namespace std;

// bank class
class Bank {
    private:
    //declare variables
    int balance;
    int withdraw_amount;
    int deposit_amount;

    // default constructor
    public:
        Bank()
        {
            balance = 1000;
            withdraw_amount = 0;
            deposit_amount = 0;

        }

    //deposit method
    // reinitializing variables?
    int deposit(int deposit_amount){
        balance = balance + deposit_amount;
        return balance;  
    }

    //withdraw method
    int withdraw(int withdraw_amount){
        balance = balance - withdraw_amount;
        return balance;
    }

    // check balance method
    int check_balance(){
        return balance;
    }

};

// main method
int main(void) {
    Bank banking;
    string choice;
    int deposit_amt;
    int withdraw_amt;
    
    // call the methods
    // banking.deposit(1000);

    // print the balance after deposit
    // cout << "The balance after deposit: " << banking.deposit(1000) << endl;

    //print the balance after withdraw
    // cout << "The balance after withdraw: " << banking.withdraw(400) << endl;

    // output the form in terminal
    while (true) {
    cout << "Choose course of action: " << endl;
    cout << "A: Deposit" << endl;
    cout << "B: Withdraw" << endl;
    cout << "C: Check Balance" << endl;
    cin >> choice;

    if (choice == "A") {
        cout << "Enter amount you wish to deposit: " << endl;
        cin >> deposit_amt;
        cout << "The balance after deposit is: " << banking.deposit(deposit_amt) << endl;
    }
    if (choice == "B") {
        cout << "Enter amount you wish to withdraw: " << endl;
        cin >> withdraw_amt;
        cout << "The balance after withdrwa is: " << banking.withdraw(withdraw_amt) << endl;
    }
    if (choice == "C") {
        cout << "Your Account balance is: " << banking.check_balance() << endl;
    }
    if (choice != "A" || "B" || "c") {
        cout << "Please Select either option A, B or C" << endl;
    }
}

    return 0;

}
