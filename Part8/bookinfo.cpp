#include <string>
using namespace std;

#include "bookinfo.h"
#include <iostream>
#include <iomanip>

void bookInfo(string isbn, string title, string author, string publisher, string date, int qty, double wholesale, double retail)
{
	cout << "Serendipity Booksellers\n";
    cout << "\tBook Information\n\n";
    
    cout << "ISBN: " << isbn << "\n";
    cout << "Title: " << title << "\n";
    cout << "Author: " << author << "\n";
    cout << "Publisher: " << publisher << "\n";
    cout << "Date Added: " << date << "\n";
    cout << "Quantity-On-Hand: " << qty << "\n";
    cout << fixed << setprecision(2);
    cout << "Wholesale Cost: " << wholesale << "\n";
    cout << "Retail Price: " << retail << endl;
}