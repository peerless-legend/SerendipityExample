#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "invmenu.h"

void invMenu()
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
        
        switch(choiceNum)
        {
            case 1:
            //ignore()?
                lookUpBook();
                break;
            case 2:
                addBook();
                break;
            case 3:
                editBook();
                break;
            case 4:
                deleteBook();
                break;
            case 5:
                running = false;
                break;
        }
        /*if(choiceNum == 5)
        {
            running = false;
        }*/
    }
}

// lookup stub function
void lookUpBook()
{
    cout << "You've selected 'Look Up Book.'";
}
void addBook()
{
    cout << "You've selected 'Add Book.'";
}
void editBook()
{
    cout << "You've selected 'Edit Book.'";
}
void deleteBook()
{
    cout << "You've selected 'Delete Book.'";
}