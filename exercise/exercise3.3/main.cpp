#include <iostream>
#include <string>

class Book
{
    std::string title;
    std::string writer;
    int price;

    public:
        Book(std::string title, std::string writer, int price);
        Book(const Book& other);
        void show() const;

};

Book::Book(std::string title, std::string writer, int price)
    : title(title), writer(writer), price(price)
{
}

// Copy constructor
// コピーコンストラクタは、メンバー初期化リストを使ってメンバー変数ごとにコピーする必要があります。
Book::Book(const Book& other)
    : title(other.title), writer(other.writer), price(other.price)
{
}

void Book::show() const
{
    std::cout << title << " " << writer << " " << price << std::endl;
}

int main()
{
    Book book("dictionary", "someone", 3000);
    Book copy(book);

    copy.show();

}
