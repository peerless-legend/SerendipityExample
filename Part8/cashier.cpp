#include "cashier.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void cashier()
{
    string dateInput;
    int quantityInput;
    string ISBNInput;
    string titleInput;
    float priceInput;
    
    cout << "Serendipity Booksellers\n";
    cout << "\tCashier\n\n";
    
    bool running = true;
    while(running)
    {
         cout << "Date: ";
        cin >> dateInput;
        
        cout << "Quantity of Book: ";
        cin >> quantityInput;
        
        cout << "ISBN: ";
        cin >> ISBNInput;
        
        cout << "Title: ";
        cin.ignore();
        getline(cin, titleInput);
        
        cout << "Price: ";
        cin >> priceInput;
        
        double untaxedTotal = quantityInput * priceInput;
        double tax = untaxedTotal * 0.06;
        double total = tax + untaxedTotal;
        
        cout << endl;
        cout << "Serendipity Book Sellers\n\n";
        cout << "Date: " << dateInput << "\n\n";
        cout << "Qty\tISBN\t\tTitle\t\t\t\tPrice\t\tTotal\n";
        cout << "----------------------------------------";
        cout << "---------------------------------------\n\n\n";
        cout << quantityInput << "\t";
        cout << left << setw(14) << ISBNInput << "\t";
        cout << left << setw(26) << titleInput << "\t$";
        cout << fixed << showpoint << right << setprecision(2);

        cout << setw(6) << priceInput << "\t\t$";
        cout << setw(6) << untaxedTotal << "\n\n\n";
        
        cout << "\tSubtotal\t\t\t\t\t\t\t$" << setw(6) << untaxedTotal << "\n";
        cout << "\tTax\t\t\t\t\t\t\t\t$" << setw(6) << tax << "\n";
        cout << "\tTotal\t\t\t\t\t\t\t\t$" << setw(6) << total << "\n\n";
        cout << "Thank You for Shopping at Serendipity!\n\n";
        char choiceChar;
        cout << "Would You Like to Shop Again? (y/n): ";
        cin >> choiceChar;
        if(choiceChar != 'y')
        {
            running = false;
            cout << endl;
        }
    }
}