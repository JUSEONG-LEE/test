/* 멤버 함수의 공유
C++에서 하나의 클래스에서 생성된 인스턴스는 각각 독립된 메모리 공간에 저장된 자신만의 멤버 변수를 가지지만, 멤버 함수는 모든 인스턴스가 공유합니다.

따라서 Book 클래스를 이용해 두 개의 인스턴스를 생성해도, TickerBook()이라는 멤버 함수는 하나만이 존재합니다.
즉, 더 두꺼운 책의 이름을 출력해 주는 TickerBook() 멤버 함수는 두 인스턴스가 같이 공유하게 됩니다.

ThickerBook() 멤버 함수의 정의는 다음과 같습니다.

*/
const Book& Book::ThickerBook(const Book& comp_book)
{
    if (comp_book.total_page_ > total_page_)
    {
        return comp_book;
    }
    else
    {
        return ???; // 자신을 호출한 인스턴스를 반환하는데 알 수가 없음.
    }
}

web_book.ThickerBook(html_book);










