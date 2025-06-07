#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Book {
public:
    int id;
    string title;
    string author;
    bool isIssued;

    void input() {
        cout << "Enter Book ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Book Title: ";
        getline(cin, title);
        cout << "Enter Book Author: ";
        getline(cin, author);
        isIssued = false;
    }

    void display() {
        cout << "ID: " << id << " | Title: " << title << " | Author: " << author;
        cout << " | Status: " << (isIssued ? "Issued" : "Available") << endl;
    }
};

vector<Book> loadBooksFromFile() {
    vector<Book> books;
    ifstream file("books.txt");
    Book b;
    while (file >> b.id) {
        file.ignore();
        getline(file, b.title);
        getline(file, b.author);
        file >> b.isIssued;
        books.push_back(b);
    }
    file.close();
    return books;
}

void saveBooksToFile(const vector<Book>& books) {
    ofstream file("books.txt");
    for (const Book& b : books) {
        file << b.id << endl;
        file << b.title << endl;
        file << b.author << endl;
        file << b.isIssued << endl;
    }
    file.close();
}

void addBook() {
    Book b;
    b.input();
    vector<Book> books = loadBooksFromFile();
    books.push_back(b);
    saveBooksToFile(books);
    cout << "Book added successfully!\n";
}

void displayBooks() {
    vector<Book> books = loadBooksFromFile();
    if (books.empty()) {
        cout << "No books available.\n";
    } else {
        cout << "\nList of Books:\n";
        for (Book& b : books) {
            b.display();
        }
    }
}

void searchBook() {
    int id;
    cout << "Enter Book ID to search: ";
    cin >> id;
    vector<Book> books = loadBooksFromFile();
    for (Book& b : books) {
        if (b.id == id) {
            b.display();
            return;
        }
    }
    cout << "Book not found.\n";
}

void issueBook() {
    int id;
    cout << "Enter Book ID to issue: ";
    cin >> id;
    vector<Book> books = loadBooksFromFile();
    for (Book& b : books) {
        if (b.id == id) {
            if (!b.isIssued) {
                b.isIssued = true;
                saveBooksToFile(books);
                cout << "Book issued successfully.\n";
            } else {
                cout << "Book is already issued.\n";
            }
            return;
        }
    }
    cout << "Book not found.\n";
}

void returnBook() {
    int id;
    cout << "Enter Book ID to return: ";
    cin >> id;
    vector<Book> books = loadBooksFromFile();
    for (Book& b : books) {
        if (b.id == id) {
            if (b.isIssued) {
                b.isIssued = false;
                saveBooksToFile(books);
                cout << "Book returned successfully.\n";
            } else {
                cout << "Book is not issued.\n";
            }
            return;
        }
    }
    cout << "Book not found.\n";
}

void menu() {
    int choice;
    do {
        cout << "\n===== Library Management System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: addBook(); break;
        case 2: displayBooks(); break;
        case 3: searchBook(); break;
        case 4: issueBook(); break;
        case 5: returnBook(); break;
        case 6: cout << "Exiting...\n"; break;
        default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 6);
}

int main() {
    menu();
    return 0;
}
