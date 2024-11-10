#pragma once        //директива, предотвращающая многократное включение заголовочного файла
#include <string>   //включение заголовочного файла для работы со строками
using namespace std; //использование пространства имен std

///объявление класса Book
class Book{ 

//раздел частных членов класса
private: 
    string title; // название книги
    string author; //автор книги
    string genre; //жанр
    string publisher; //издательство
    string language; //язык
    short year_published; //год выпуска
    unsigned int pages; //кол-во страниц
    float rating; //рейстинг от 0 до 5
    
//раздел публичных членов класса
public: 
    bool available ; //доступность 

    // конструктор по умолчанию
    Book(); //объявление конструктора по умолчанию

    // конструктор с параметрами
    Book(string title, string author, string genre, string publisher, 
         int year_published, string language, int pages, float rating, bool available); //объявление конструктора с параметрами

   // Getters (получение значения атрибута)
    string get_title() const;           // метод get_title, возвращает значение поля title
    string get_author() const ;         // метод get_author, возвращает значение поля author
    string get_genre() const ;          // метод get_genre, возвращает значение поля genre
    string get_publisher() const;       // метод get_publisher, возвращает значение поля publisher
    string get_language() const;        // метод get_language, возвращает значение поля language
    short get_year_published() const;   // метод get_year_published, возвращает значение поля year_published
    unsigned int get_pages() const;     // метод get_pages, возвращает значение поля pages
    float get_rating() const;           // метод get_rating, возвращает значение поля rating
    bool is_available() const;          // метод is_available, возвращает значение поля available

    // Setters (установка значения атрибута)
    void set_title(const string& title);            // метод set_title, устанавливает значение поля title 
    void set_author(const string& author);          // метод set_author, устанавливает значение поля author 
    void set_genre(const string& genre);            // метод set_genre, устанавливает значение поля genre
    void set_publisher(const string& publisher);    // метод set_publisher, устанавливает значение поля publisher
    void set_language(const string& language);      // метод set_language, устанавливает значение поля language
    void set_year_published(short year_published);  // метод set_year_published, устанавливает значение поля year_published
    void set_pages(unsigned int pages);             // метод set_pages, устанавливает значение поля pages
    void set_rating(float rating);                  // метод set_rating, устанавливает значение поля rating
    void set_available(bool available);             // метод set_available, устанавливает значение поля available

    string to_string() const;                       // метод to_string, возвращает строковое представление объекта Book
};

void testBookConstructorAndGetters();
void testSetters();
