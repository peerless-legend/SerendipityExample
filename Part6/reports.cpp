#include "reports.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void reports()
{
    cout << "Serendipity Booksellers\n";
    cout << "\tReports\n\n";
    
    cout << "1. Inventory Listing\n";
    cout << "2. Inventory Wholesale Value\n";
    cout << "3. Inventory Retail Value\n";
    cout << "4. Listing by Quantity\n";
    cout << "5. Listing by Cost\n";
    cout << "6. Listing by Age\n";
    cout << "7. Return to Main Menu\n\n";
    
    bool running = true;
    while(running)
    {
        cout << "Enter your Choice: ";
        
        int choiceNum;
        do {
            cin >> choiceNum;
            if(choiceNum < 1 || choiceNum > 7){
                cout << "\nPlease enter a number from 1-7: ";
            }
        } while (choiceNum < 1 || choiceNum > 7);
        cout << "\nYou've selected " << choiceNum << "." << endl;

        switch(choiceNum)
        {
            case 1:
            //ignore()?
                repListing();
                break;
            case 2:
                repWholesale();
                break;
            case 3:
                repRetail();
                break;
            case 4:
                repQty();
                break;
            case 5:
                repCost();
                break;
            case 6:
                repAge();
                break;
            case 7:
                running = false;
                break;
        }
        
        /*if(choiceNum == 7)
        {
            running = false;
        }*/
    }
}

void repListing()
{
   cout << "You've selected 'Listing.'"; 
}
void repWholesale()
{
    cout << "You've selected 'Inventory Wholesale Value.'";
}
void repRetail()
{
    cout << "You've selected 'Inventory Retail Value.'";
}
void repQty()
{
    cout << "You've selected 'Listing By Quantity.'";
}
void repCost()
{
    cout << "You've selected 'Listing By Cost.'";
}
void repAge()
{
    cout << "You've selected 'Listing By Age.'";
}