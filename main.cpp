#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Book {
    int id;
    string title;
    string author;
    bool isIssued;
    string issuedTo;
};

void addSampleBooks(vector<Book>& library) {
    Book b1;
    b1.id = 1;
    b1.title = "The Alchemist";
    b1.author = "Paulo Coelho";
    b1.isIssued = false;
    b1.issuedTo = "";
    library.push_back(b1);

    Book b2;
    b2.id = 2;
    b2.title = "Wings of Fire";
    b2.author = "A P J Abdul Kalam";
    b2.isIssued = false;
    b2.issuedTo = "";
    library.push_back(b2);

    Book b3;
    b3.id = 3;
    b3.title = "The Hobbit";
    b3.author = "J.R.R. Tolkien";
    b3.isIssued = true;
    b3.issuedTo = "kazim";
    library.push_back(b3);
}

void listBooks(const vector<Book>& library) {
    if (library.empty()) {
        cout << "No books in the library.\n";
        return;
    }

    cout << "\nList of books:\n";
    cout << "ID\tTitle\t\t\tAuthor\t\t\tStatus\t\t\tIssued to\n";
    for (int i = 0; i < library.size(); ++i) {
        cout << library[i].id << "\t" << library[i].title << "\t\t" << library[i].author
             << "\t\t" << (library[i].isIssued ? "Issued" : "Available") << "\t\t\t"<< library[i].issuedTo <<"\n";
    }
}

int main() {
    vector<Book> library;

    addSampleBooks(library);

    listBooks(library);

    return 0;
}
