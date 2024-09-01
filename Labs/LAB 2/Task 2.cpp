#include <iostream>
#include <string>
using namespace std;
struct Book {
    string title;
    string author;
    int year;
    string genre;
};
int findBook(const Book books[], int size, const string& searchKey) {
    for (int i = 0; i < size; ++i) {
        if (books[i].title == searchKey || books[i].author == searchKey) {
            return i;
        }
    }
    return -1;
}
void displayBook(const Book& book) {
    cout << "Title: " << book.title << endl;
    cout << "Author: " << book.author << endl;
    cout << "Year: " << book.year << endl;
    cout << "Genre: " << book.genre << endl;
    cout << endl;
}
int main() {
    const int MAX_BOOKS = 100;
    Book library[MAX_BOOKS];
    int numBooks = 0;
    char choice;
    bool loop = true;
    for (int i = 0; loop; ++i) {
        cout << "1. Add a new book\n";
        cout << "2. Update book data\n";
        cout << "3. Display all books\n";
        cout << "4. Search for a book\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case '1': {
                Book newBook;
                cout << "Enter title: ";
                cin.ignore(); 
                getline(cin, newBook.title);
                cout << "Enter author: ";
                getline(cin, newBook.author);
                cout << "Enter year of publication: ";
                cin >> newBook.year;
                cout << "Enter genre: ";
                cin.ignore();
                getline(cin, newBook.genre);

                if (numBooks < MAX_BOOKS) {
                    library[numBooks++] = newBook;
                    cout << "Book added successfully.\n";
                } else {
                    cout << "Library is full. Cannot add more books.\n";
                }
                break;
            }
            case '2': {
                string searchKey;
                cout << "Enter the title or author of the book to update: ";
                cin.ignore();
                getline(cin, searchKey);

                int index = findBook(library, numBooks, searchKey);
                if (index != -1) {
                    cout << "Enter new details for the book:\n";
                    cout << "Title: ";
                    getline(cin, library[index].title);
                    cout << "Author: ";
                    getline(cin, library[index].author);
                    cout << "Year: ";
                    cin >> library[index].year;
                    cout << "Genre: ";
                    cin.ignore();
                    getline(cin, library[index].genre);
                    cout << "Book details updated successfully.\n";
                } else {
                    cout << "Book not found.\n";
                }
                break;
            }
            case '3':
                if (numBooks == 0) {
                    cout << "Library is empty.\n\n";
                } else {
                    cout << "Library Contents:\n";
                    for (int i = 0; i < numBooks; ++i) {
                        displayBook(library[i]);
                    }
                }
                break;
            case '4': {
                string searchKey;
                cout << "Enter the title or author of the book to search: ";
                cin.ignore();
                getline(cin, searchKey);

                int index = findBook(library, numBooks, searchKey);
                if (index != -1) {
                    cout << "Book found:\n";
                    displayBook(library[index]);
                } else {
                    cout << "Book not found.\n";
                }
                break;
            }
            case '5':
                cout << "Exiting program.\n";
                loop = false; 
                break;
            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }
    }
    return 0;
}
