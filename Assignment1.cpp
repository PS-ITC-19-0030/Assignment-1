#include <iostream>
#include <string>


using namespace std;

const double vat = 0.12;
string name ;
int quantity, uniqueid;
string phone, printer, table;
const double price_of_phone = 400;
const double price_of_printer = 300;
const double price_of_table = 200;
double amount;
string item;
double price_of_item ;
double vat_amount = price_of_item * vat *quantity ;
double customer_cash;
double balance;

int main()
{

    cout << "What is your name:" << endl;
    cin >> name ;

    cout << "What is your Unique ID" << endl;
    cin >> uniqueid ;

    cout << "What do you want to buy"<< endl;
    cin >> item ;


           /* do {


				cout << "Enter a valid item" << endl;
				cin >> item;
			}while ( item!= "phone" && item!= "printer" && item!= "table");*/


    cout << "How many do you want to buy" << endl;
    cin >> quantity;

    cout <<"Your amount owed:" << endl;

    if (item == "phone")
    {
       price_of_item = price_of_phone;
       vat_amount = price_of_item * vat *quantity ;
       amount = price_of_item * quantity + vat_amount ;
       cout << amount << endl;
    }else if(item == "printer")
    {
       price_of_item = price_of_printer;
       vat_amount = price_of_item * vat * quantity ;
       amount = price_of_item * quantity + vat_amount ;
       cout << amount << endl;
    }else if(item == "table")
    {
       price_of_item = price_of_table;
       vat_amount = price_of_item * vat *quantity;
       amount = price_of_item * quantity + vat_amount ;
       cout << amount << endl;
    }else
    {

    }

        cout << "What is your available cash" << endl;

        cin >> customer_cash;

        if (customer_cash > amount)
        {
            balance = customer_cash - amount;
            cout << "Your balance: " << balance << endl;
        }else if (customer_cash == amount)
        {
            balance = customer_cash - amount;
            cout << "Your balance: " << balance << endl;
        }else
        {
            cout << "Insufficient Amount" << endl;
        }

        if (customer_cash >= amount)
        {
            cout << "" << endl;
            cout << "" << endl;

            cout << "" << endl;
            cout << "" << endl;


          cout <<                 "QWAMHE'S SUPERMARKET"              << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "CUSTOMERS NAME :"           << name << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "UNIQUE ID :"                << uniqueid << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "ITEM PURCHASED :"           << item << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "ITEM'S QUANTITY :"          << quantity << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "VAT AMOUNT :"               << vat_amount << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "TOTAL COST :"             << amount << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "TOTAL AMOUNT PAID :"        <<customer_cash << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "BALANCE "                   << balance << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "" << endl;


        cout <<       "THANK YOU AND ENJOY THE REST OF YOUR DAY"  << endl;
        }


       /* if ( customer_cash > amount)
         {
               balance = customer_cash - amount ;

             //cout << "Available Balance =" << balance << endl;

         }else if (amount = customer_cash)
         {
             balance = customer_cash - amount ;
             //cout << "Available Balance = " << balance << endl;

         }else
         {
               cout << "INSUFFICIENT CASH" << endl;
         }*/

       /* if (customer_cash >= amount)
        {
            cout << "" << endl;
            cout << "" << endl;

            cout << "" << endl;
            cout << "" << endl;


          cout <<                 "QWAMHE'S SUPERMARKET"              << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "CUSTOMERS NAME :"           << name << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "UNIQUE ID :"                << uniqueid << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "ITEM PURCHASED :"           << item << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "ITEM'S QUANTITY :"          << quantity << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "VAT AMOUNT :"               << vat_amount << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "TOTAL COST :"             << amount << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "TOTAL AMOUNT PAID :"        <<customer_cash << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "BALANCE "                   << balance << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "" << endl;


        cout <<       "THANK YOU AND ENJOY THE REST OF YOUR DAY"  << endl;


        }else{
            cout << "SORRY TRANSACTION FAILED" << endl;
        }*/




    return 0;
}

