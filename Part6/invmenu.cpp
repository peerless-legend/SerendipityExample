#include <iostream>
using namespace std;

int main()
{
	cout << "Serendipity Booksellers\n";
    cout << "Inventory Database\n\n";
    
    cout << "1. Look Up a Book\n";
    cout << "2. Add a Book\n";
    cout << "3. Edit a Book's Record\n";
    cout << "4. Delete a Book\n";
    cout << "5. Return to Main Menu\n\n";
    
    bool running = true;
    while(running)
    {
        cout << "Enter Your Choice: ";
        
        int choiceNum;
        do {
            cin >> choiceNum;
            if(choiceNum < 1 || choiceNum > 5){
                cout << "\nPlease enter a number from 1-5." << endl;
            }
        } while (choiceNum < 1 || choiceNum > 5);
        cout << "\nYou've selected " << choiceNum << "." << endl;
        
        if(choiceNum == 5)
        {
            running = false;
        }
    }
    
	return 0;
}