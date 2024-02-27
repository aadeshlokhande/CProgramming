#include <iostream>
#include <vector>
#include <fstream>
#include <string>

class Book {
public:
    std::string title;
    std::string author;
    int year;

    Book(const std::string& t, const std::string& a, int y) : title(t), author(a), year(y) {}
};

class Library {
private:
    std::vector<Book> books;

public:
    void addBook(const Book& book) {
        books.push_back(book);
    }

    void displayBooks() {
        std::cout << "Library Catalog:\n";
        for (const Book& book : books) {
            std::cout << "Title: " << book.title << "\n";
            std::cout << "Author: " << book.author << "\n";
            std::cout << "Year: " << book.year << "\n\n";
        }
    }

    void saveCatalogToFile(const std::string& filename) {
        std::ofstream file(filename);
        if (file.is_open()) {
            for (const Book& book : books) {
                file << book.title << ',' << book.author << ',' << book.year << '\n';
            }
            file.close();
        } else {
            std::cerr << "Unable to open the file.\n";
        }
    }

    void loadCatalogFromFile(const std::string& filename) {
        std::ifstream file(filename);
        if (file.is_open()) {
            std::string line;
            while (std::getline(file, line)) {
                std::string title, author;
                int year;
                if (parseBookInfo(line, title, author, year)) {
                    Book book(title, author, year);
                    addBook(book);
                }
            }
            file.close();
        } else {
            std::cerr << "Unable to open the file.\n";
        }
    }

private:
    bool parseBookInfo(const std::string& line, std::string& title, std::string& author, int& year) {
        // Implement parsing logic here, e.g., split the line by ',' and convert to appropriate types.
        // Return true if parsing is successful, false otherwise.
        // Example: "Title,Author,Year" -> "Harry Potter,J.K. Rowling,2001"
        return false; // Placeholder
    }
};

int main() {
    Library library;

    // Load library catalog from a file (if available)
    library.loadCatalogFromFile("library_catalog.csv");

    int choice;
    do {
        std::cout << "Library Management System\n";
        std::cout << "1. Add Book\n";
        std::cout << "2. Display Books\n";
        std::cout << "3. Save Catalog to File\n";
        std::cout << "4. Quit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string title, author;
                int year;

                std::cin.ignore(); // Clear the newline character
                std::cout << "Enter Title: ";
                std::getline(std::cin, title);
                std::cout << "Enter Author: ";
                std::getline(std::cin, author);
                std::cout << "Enter Year: ";
                std::cin >> year;

                Book book(title, author, year);
                library.addBook(book);
                break;
            }
            case 2:
                library.displayBooks();
                break;
            case 3:
                library.saveCatalogToFile("library_catalog.csv");
                std::cout << "Catalog saved to file.\n";
                break;
            case 4:
                std::cout << "Exiting the program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 4);

    return 0;
}