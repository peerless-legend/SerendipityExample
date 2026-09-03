#include <iostream>
using namespace std;

int main()
{
    cout << "Serendipity Booksellers\n";
    cout << "\tBook Information\n\n";
    
    cout << "1. Inventory Listing\n";
    cout << "1. Inventory Wholesale Value\n";
    cout << "1. Inventory Retail Value\n";
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
        
        if(choiceNum == 7)
        {
            running = false;
        }
    }
    
    return 0;
}