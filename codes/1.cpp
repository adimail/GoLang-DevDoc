#include <iostream>
#include <string>

using namespace std;

class bank_customer
{
public:
    string name, phone;

    bank_customer(string customer_name, string customer_phone)
    {
        name = customer_name;
        phone = customer_phone;
    }

    void display()
    {
        cout << "Bank Customer\n";
        cout << "Customer name  : " << name << endl;
        cout << "Customer phone : " << phone << endl
             << endl;
    }
};

class depositor : public bank_customer
{
public:
    string account_number;
    int balance;

    depositor(string customer_name, string customer_phone, string customer_account_number, int customer_balance) : bank_customer(customer_name, customer_phone)
    {
        account_number = customer_account_number;
        balance = customer_balance;
    }

    void display()
    {
        cout << "Bank depositor\n";
        cout << "Customer name            : " << name << endl;
        cout << "Customer phone           : " << phone << endl;
        cout << "Customer accounnt number : " << account_number << endl;
        cout << "Customer bank balance    : " << balance << endl;
    }
};

class borrower : public bank_customer
{
public:
    string loan_number;
    int loan_amount;

    borrower(string customer_name, string customer_phone, string customer_loan_number, int customer_loan_amount) : bank_customer(customer_name, customer_phone)
    {
        loan_number = customer_loan_number;
        loan_amount = customer_loan_amount;
    }

    void display()
    {
        cout << "Bank depositor\n";
        cout << "Customer name           : " << name << endl;
        cout << "Customer phone          : " << phone << endl;
        cout << "Customer loan number    : " << loan_number << endl;
        cout << "Customer loan amount    : " << loan_amount << endl
             << endl;
    }
};

int main()
{
    bank_customer sakshi("Sakshi Mane", "8552847070");
    borrower aditya("Aditya Godse", "7248945402", "AISSMS-456", 800000000);
    depositor jaydeep("Jaydeep Tayshete", "7030546362", "12345678910", 999000);

    sakshi.display();
    aditya.display();
    jaydeep.display();

    return 0;
}