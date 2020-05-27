#include <iostream>
#include <string>

class Book {
private:                // 생략 가능함.
    int current_page_;  // 현재 페이지
    void set_percent(); // 해당 책을 읽은 정도를 구함.
public:
    string title_;       // 책의 제목
    int total_page_;     // 총 페이지
    double percent_;     // 해당 책을 읽은 정도
    void Move(int page); // 현재 페이지를 전달받은 페이지로 이동시킴.
    void Open();         // 현재 페이지로 책을 엶.
    void Read();         // 현재 페이지에서 다음 페이지로 넘어감.
    void ThickerBook(const Book& comp_book);	 // 더 두꺼운 책의 이름을 출력함
};

// Book 클래스의 정의를 가지고 web_book라는 객체 선언
Book web_book;

// 클래스 선언 밖에서 Book 클래스의 Move() 멤버 함수를 정의
void Book::Move(int page) {
	current_page_ = page;
}

// 멤버 함수 호출 예제
//web_book.Move(30);

const Book& Book::ThickerBook(const Book& comp_book)
{
    if (comp_book.total_page_ > total_page_)
    {
        return comp_book;
    }
    else
    {
        return *this; // 자신을 호출한 인스턴스를 반환하는데 알 수가 없음.
    }
}

web_book.ThickerBook(html_book);

// Person 클래스
class Person
{
private:
    string name_;
    int age_;
public:
    Person(const string& name, int age); // 기초 클래스 생성자의 선언
    void ShowPersonInfo();
};

Person::Person(const string& name, int age) // 기초 클래스 생성자의 정의
{
    name_ = name;
    age_ = age;
}

// Student 클래스
class Student : public Person {
private:
    int student_id_;
public:
    Student(int sid, const string& name, int age); // 파생 클래스 생성자의 선언
};

Student::Student(int sid, const string& name, int age) : Person(name, age) // 파생 클래스 생성자의 선언
{
    student_id_ = sid;
}







