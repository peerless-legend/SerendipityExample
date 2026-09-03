#include <iostream>
using namespace std;

int main()
{
    string dateInput;
    int quantityInput;
    string ISBNInput;
    string titleInput;
    float priceInput;
    
    cout << "Serendipity Booksellers\n";
    cout << "\tMain Menu\n\n";
    
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
        cin >> titleInput;
        
        cout << "Price: ";
        cin >> priceInput;
        
        double untaxedTotal = quantityInput * priceInput;
        double tax = untaxedTotal * 0.06;
        double total = tax + untaxedTotal;
        
        cout << endl;
        cout << "Serendipity Book Sellers\n\n";
        cout << "Date: " << dateInput << "\n\n";
        cout << "Qty\t" << "ISBN\t" << "Title\t" << "Price\t" << "\n";
        cout << "--------------------------------------\n";
        cout << quantityInput << "\t" << ISBNInput << "\t" << titleInput << "\t" << "$ " << priceInput << "\t" << "$ " << untaxedTotal << "\n\n";
        cout << "\tSubtotal\t\t$" << untaxedTotal << "\n";
        cout << "\tTax\t\t$" << tax << "\n";
        cout << "\tTotal\t\t$" << total << "\n\n";
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
    return 0;
}