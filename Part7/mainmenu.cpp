#include <iostream>
using namespace std;

#include "bookinfo.h"
#include "cashier.h"
#include "invmenu.h"
#include "reports.h"

// const for array sizes
const int SIZE = 20;

// global arrays
string bookTitle[SIZE];
string isbn[SIZE];
string author[SIZE];
string publisher[SIZE];
string dataAdded[SIZE];
int qtyOnHand[SIZE];
double wholesale[SIZE];
double retail[SIZE];

int main()
{
    bool running = true;
    while(running)
    {
       
        // menu input
        int choiceNum;
        do {
            cin >> choiceNum;
            
            cout << "Serendipity Booksellers\n";
            cout << "\tMain Menu\n\n";
            cout << "1. Cashier Module\n";
            cout << "2. Inventory Database Module\n";
            cout << "3. Report Module\n";
            cout << "4. Exit\n\n";
            cout << "Enter choice: ";

            if(choiceNum < 1 || choiceNum > 4){
                cout << "\nPlease enter a number from 1-4: ";
            }
        } while (choiceNum < 1 || choiceNum > 4);
        cout << "\nYou've selected " << choiceNum << "." << endl;

        switch(choiceNum)
        {
            case 1:
            //ignore()?
                cashier();
                break;
            case 2:
                invMenu();
                break;
            case 3:
                reports();
                break;
            case 4:
                running = false;
                break;
        }
        //if(choiceNum == 4)
       // {
       //     running = false;
       // }
        cout << endl;
    }
	return 0;
}