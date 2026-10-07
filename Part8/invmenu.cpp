#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "invmenu.h"
#include "bookinfo.h"

// const for array sizes
const int SIZE = 20;

// global arrays
extern string bookTitle[SIZE];
extern string isbn[SIZE];
extern string author[SIZE];
extern string publisher[SIZE];
extern string dateAdded[SIZE];
extern int qtyOnHand[SIZE];
extern double wholesale[SIZE];
extern double retail[SIZE];

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
    cout << endl;
    cout << "Enter your select book's title: ";
    string title;
    cin.ignore();
    getline(cin, title);

    bool found = false;
    int index = 0;
    while(!found && index < SIZE)
    {
        if(bookTitle[index] == title)
        {
            found = true;
            cout << "Book found." << endl;
            bookInfo(bookTitle[index], isbn[index], author[index], publisher[index],
                     dateAdded[index], qtyOnHand[index], wholesale[index], retail[index]);
            cout << endl;
        }
        else
        {
            index++;
        }
    }
    if(!found)
    {
        cout << "Book not found!" << endl;
        cout << endl;
    }
}
void addBook()
{
    cout << "You've selected 'Add Book.'";
    cout << endl;
    bool found = false;
    int index = 0;
    while(!found && index < SIZE){
        if(bookTitle[index].empty()){
            found = true;
        }
        else{
            index++;
        }
    }
    if(found){
        string titleInput;
        string isbnInput;
        string authorInput;
        string publisherInput;
        string dateAddedInput;
        int qtyOnHandInput;
        double wholesaleInput;
        double retailInput;
        
        cout << "Enter your information for the new book:\n";
        cout << "Title: ";
        cin.ignore();
        getline(cin, titleInput);
        
        cout << "ISBN: ";
        getline(cin, isbnInput);
        
        cout << "Author: ";
        getline(cin, authorInput);
        
        cout << "Publisher: ";
        getline(cin, publisherInput);
        
        cout << "Date Added (mm/dd/yyyy): ";
        getline(cin, dateAddedInput);
        
        cout << "Quantity on Hand: ";
        cin >> qtyOnHandInput;
        
        cout << "Wholesale Cost: ";
        cin >> wholesaleInput;
        
        cout << "Retail Price: ";
        cin >> retailInput;
        
        bookTitle[index] = titleInput;
        isbn[index] = isbnInput;
        author[index] = authorInput;
        publisher[index] = publisherInput;
        dateAdded[index] = dateAddedInput;
        qtyOnHand[index] = qtyOnHandInput;
        wholesale[index] = wholesaleInput;
        retail[index] = retailInput;

        bookInfo(titleInput, isbnInput, authorInput, publisherInput, dateAddedInput, qtyOnHandInput, wholesaleInput, retailInput);
        cout << endl;
    }
    else{
        cout << "Sorry, our inventory is full at this time!" << endl;
        cout << endl;
    }

}
void editBook()
{
    cout << "You've selected 'Edit Book.'";
    cout << endl; 
    cout << "Enter your select book's title: ";
    string title;
    cin.ignore();
    getline(cin, title);

    bool found = false;
    int index = 0;
    while(!found && index < SIZE)
    {
        if(bookTitle[index] == title)
        {
            found = true;
            cout << "Book found." << endl;
            bookInfo(bookTitle[index], isbn[index], author[index], publisher[index],
                     dateAdded[index], qtyOnHand[index], wholesale[index], retail[index]);
            cout << endl;
            cout << "Which field would you like to edit?\n";
            cout << "1. Title\n2. ISBN\n3. Author\n4. Publisher\n";
            cout << "5. Date Added\n6. Quantity on Hand\n7. Wholesale Cost\n8. Retail Price\n";
           
            int fieldChoice;
            cin >> fieldChoice;
            switch(fieldChoice)
            {
                case 1:
                    cout << "Enter new title: ";
                    cin.ignore();
                    getline(cin, bookTitle[index]);
                    break;
                case 2:
                    cout << "Enter new ISBN: ";
                    cin.ignore();
                    getline(cin, isbn[index]);
                    break;
                case 3:
                    cout << "Enter new author: ";
                    cin.ignore();
                    getline(cin, author[index]);
                    break;
                case 4:
                    cout << "Enter new publisher: ";
                    cin.ignore();
                    getline(cin, publisher[index]);
                    break;
                case 5:
                    cout << "Enter new date added (mm/dd/yyyy): ";
                    cin.ignore();
                    getline(cin, dateAdded[index]);
                    break;
                case 6:
                    cout << "Enter new quantity on hand: ";
                    cin >> qtyOnHand[index];
                    break;
                case 7:
                    cout << "Enter new wholesale cost: ";
                    cin >> wholesale[index];
                    break;
                case 8:
                    cout << "Enter new retail price: ";
                    cin >> retail[index];
                    break;
                default:
                    cout << "Invalid choice.";
            }
            cout << endl;
        }
        else
        {
            index++;
        }
    }
    if(!found)
    {
        cout << "Book not found!" << endl;
        cout << endl;
    }
}
void deleteBook()
{
    cout << "You've selected 'Delete Book.'\n";
    cout << endl;
    cout << "Enter your select book's title: ";
    string title;
    cin.ignore();
    getline(cin, title);

    bool found = false;
    int index = 0;
    while(!found && index < SIZE)
    {
        if(bookTitle[index] == title)
        {
            found = true;
        }
        else
        {
            index++;
        }
    }
    if(!found)
    {
        cout << "Book not found!" << endl;
        cout << endl;
    }
    else
    {
        cout << "You're about to delete this book, are you sure? (y/n): ";
        cout << endl;
        char confirm;
        cin >> confirm;
        while(confirm != 'y' && confirm != 'Y' && confirm != 'n' && confirm != 'N')
        {
            cout << "Please enter 'y' or 'n': ";
            cout << endl;
            cin >> confirm;
        }
        if(confirm == 'y' || confirm == 'Y')
        {
            bookTitle[index] = "";
            isbn[index] = "";
            author[index] = "";
            publisher[index] = "";
            dateAdded[index] = "";
            qtyOnHand[index] = 0;
            wholesale[index] = 0.0;
            retail[index] = 0.0;
            cout << "Book deleted." << endl;
            cout << endl;
        }
        else
        {
            cout << "Deletion canceled." << endl;
            cout << endl;
        }
    }
}