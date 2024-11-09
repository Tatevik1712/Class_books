#include <iostream> // библиотеки для ввода/вывода
#include "Books.h"  // заголовочнный файл Books.h для работы с классом Book
//#include "Books.cpp"
#include <cassert>
using namespace std; // Использование пространства имен std для упрощения записи

// Функция для печати информации о книге
void print_book(const Book & book) { 
    cout << book.to_string(); // Вывод строки, полученной из метода to_string() класса Book
}



void testBookConstructorAndGetters() {
    // Тест 1: Конструктор с параметрами
    Book book1("1984", "Джордж Оруэлл", "Антиутопия", "Симон и Шустер", 1949, "Английский", 328, 4.7, true);
    assert(book1.to_string() == "1984 Джордж Оруэлл Антиутопия Симон и Шустер 1949 328 4.7 true");

    // Тест 2: Конструктор по умолчанию
    Book book2;
    string result = book2.to_string();
    cout << "Полученная строка: " << result << endl; // Вывод отладочной информации
    assert(result == "Без названия Неизвестный автор Без жанра Неизвестное издательство 0 0 0 false");

}

void testSetters() {
    // Тест 3: Проверка сеттеров
    Book book;
    book.set_title("Война и мир");
    book.set_author("Лев Толстой");
    book.set_genre("Роман");
    book.set_publisher("АСТ");
    book.set_year_published(1869);
    book.set_language("Русский");
    book.set_pages(1225);
    book.set_rating(5.0);
    book.set_available(true);
    
    assert(book.to_string() == "Война и мир Лев Толстой Роман АСТ 1869 1225 5 true");

    //работа методов с неверными входами
    book.set_title("");
    assert(book.to_string() == "Без названия Лев Толстой Роман АСТ 1869 1225 5 true");

    book.set_author("");
    assert(book.to_string() == "Без названия Неизвестный автор Роман АСТ 1869 1225 5 true");

    book.set_genre("");
    assert(book.to_string() == "Без названия Неизвестный автор Без жанра АСТ 1869 1225 5 true");

    book.set_year_published(-1);
    assert(book.to_string() == "Без названия Неизвестный автор Без жанра АСТ 0 1225 5 true");

    book.set_pages(-250);
    assert(book.to_string() == "Без названия Неизвестный автор Без жанра АСТ 0 0 5 true");

    book.set_rating(6.0); // Проверка вне диапазона
    assert(book.to_string() == "Без названия Неизвестный автор Без жанра АСТ 0 0 0 true");
}

int main() {

    testBookConstructorAndGetters(); // Запуск тестов конструкторов и геттеров
    testSetters(); // Запуск тестов сеттеров
    
    cout << "Все тесты пройдены" << endl; // Сообщение о успешном выполнении тестов

    // Массив указателей на объекты класса Book
    Book* bookeees[3]; // Объекты ещё не созданы; массив готов для хранения указателей на книги

    // Цикл для создания объектов класса Book и их хранения в массиве
    for (int i = 0; i < 3; i++) {
        // Создание нового объекта Book с параметрами и сохранение указателя в массив
        bookeees[i] = new Book("Идиот", "Ф. М. Достоевский", "Классика", "АСТ", 1954, "Русский", 1170, 4.8, true);
        
        // Вызов функции для печати информации о созданной книге
        print_book(*bookeees[i]); 
        cout << "\n"; // Печать новой строки для отделения информации о книгах
    }

    // Цикл для освобождения памяти, занятой объектами
    for (int i = 0; i < 3; i++)
        delete bookeees[i]; // Освобождение памяти, выделенной для каждого объекта
}
