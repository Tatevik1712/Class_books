#include "Books.h"  // Подключение заголовочного файла Books.h
#include <iostream> // Подключение библиотеки для ввода/вывода
#include <string>   // Подключение библиотеки для работы со строками
#include <sstream>  // Подключение библиотеки для работы с потоками строки
using namespace std;

// Конструктор по умолчанию
Book::Book() 
{   title = "Без названия"; 
    author = "Неизвестный автор"; 
    genre = "Без жанра"; 
    publisher = "Неизвестное издательство"; 
    year_published = 0; 
    language = "Без языка"; 
    pages = 0; 
    rating = 0; 
    available = false;}

// Конструктор с параметрами
Book::Book(const string title, const string author, const string genre, const string publisher, 
         int year_published, string language, int pages, float rating, bool available) 
{
    // Установка значений с помощью соответствующих методов
    set_title(title);
    set_author(author);
    set_genre(genre);
    set_publisher(publisher);
    set_year_published(year_published);
    set_language(language);
    set_pages(pages);
    set_rating(rating);
    set_available(available);
}

// Метод для установки названия книги
void Book::set_title(string title) {
    if (!title.empty()) { // Проверка, что название не пустое
        this->title = title;
    } else {
        // Установка значения по умолчанию для пустого названия
        this->title = "Без названия";
    }
}

// Метод для установки автора книги
void Book::set_author(string author) {
    if (!author.empty()) { // Проверка, что автор не пустой
        this->author = author;
    } else {
        // Установка значения по умолчанию для пустого автора
        this->author = "Неизвестный автор";
    }
}

// Метод для установки жанра книги
void Book::set_genre(string genre) {
    if (!genre.empty()) { // Проверка, что жанр не пустой
        this->genre = genre;
    } else {
        // Установка значения по умолчанию для пустого жанра
        this->genre = "Без жанра";
    }
}

// Метод для установки издательства книги
void Book::set_publisher(string publisher) {
    if (!publisher.empty()) { // Проверка, что издательство не пустое
        this->publisher = publisher;
    } else {
        // Установка значения по умолчанию для пустого издательства
        this->publisher = "Неизвестное издательство";
    }
}

// Метод для установки года публикации
void Book::set_year_published(int year_published) {
    if (year_published > 0) { // Проверка, что год положительный
        this->year_published = year_published;
    } else {
        // Установка значения по умолчанию для некорректного года
        this->year_published = 0;
    }
}

// Метод для установки языка книги
void Book::set_language(string language) {
    if (!language.empty()) { // Проверка, что язык не пустой
        this->language = language;
    } else {
        // Установка значения по умолчанию для пустого языка
        this->language = "Без языка";
    }
}

// Метод для установки количества страниц
void Book::set_pages(int pages) {
    if (pages > 0) { // Проверка, что количество страниц положительное
        this->pages = pages;
    } else {
        // Установка значения по умолчанию для некорректного количества страниц
        this->pages = 0;
    }
}

// Метод для установки рейтинга книги
void Book::set_rating(float rating) {
    if (0 <= rating && rating <= 5) { // Проверка диапазона рейтинга
        this->rating = rating;
    } else {
        // Установка значения по умолчанию для некорректного рейтинга
        this->rating = 0;
    }
}

// Метод для установки доступности книги
void Book::set_available(bool available) {
    this->available = available; 
}

// Метод для преобразования данных книги в строку
string Book::to_string() const {
    stringstream ss;
    // Формирование строки из атрибутов книги
    ss << title << " " << author << " " << genre << " " << publisher << " " 
       << year_published << " " << pages << " " << rating << " "
       << (available ? "true" : "false"); 
    return ss.str(); // Возврат сформированной строки
}


