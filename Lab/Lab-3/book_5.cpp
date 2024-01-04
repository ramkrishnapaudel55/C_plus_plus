#include <iostream>
#include <string>
using namespace std;
class Book {
private:
    string title;
    string author;
    int year;

public:
    Book(string bookTitle, string bookAuthor, int publicationYear) {
        title = bookTitle;
        author = bookAuthor;
        year = publicationYear;
    }


    void printDetails() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Book book("Think like a monk", "Jay shetty", 2020);
    book.printDetails();

    return 0;
}
