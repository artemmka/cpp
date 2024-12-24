#include <iostream>
#include <string>
using namespace std;
const int MAX_BOOKS = 5;

struct Book
{
    string title;
    string author;
    int year;
};

void displayBooks(const Book books[], int count)
{
    cout << "\nСписок книг:\n";
    for (int i = 0; i < count; i++)
    {
        cout << i + 1 << ". " << books[i].title << " - "
                  << books[i].author << " (" << books[i].year << ")\n";
    }
    if (count == 0)
    {
        cout << "Список пуст.\n";
    }
}

int main()
{
    Book books[MAX_BOOKS];
    int bookCount = 0;
    int choice;

    do
    {
        cout << "\n1. Добавить книгу\n2. Показать книги\n0. Выйти\n";
        cout << "Выберите действие: ";
        cin >> choice;

        if (choice == 1)
        {
            if (bookCount < MAX_BOOKS)
            {
                cout << "Введите название книги: ";
                cin.ignore();
                getline(cin, books[bookCount].title);
                cout << "Введите автора книги: ";
                getline(cin, books[bookCount].author);
                cout << "Введите год издания книги: ";
                cin >> books[bookCount].year;
                bookCount++;
            }
            else
            {
                cout << "Максимальное количество книг достигнуто.\n";
            }
        }
        else if (choice == 2)
        {
            displayBooks(books, bookCount);
        }
    } while (choice != 0);

    return 0;
}