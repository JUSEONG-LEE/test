#include <iostream>
#include <string>

class Book {
private:                // ���� ������.
    int current_page_;  // ���� ������
    void set_percent(); // �ش� å�� ���� ������ ����.
public:
    string title_;       // å�� ����
    int total_page_;     // �� ������
    double percent_;     // �ش� å�� ���� ����
    void Move(int page); // ���� �������� ���޹��� �������� �̵���Ŵ.
    void Open();         // ���� �������� å�� ��.
    void Read();         // ���� ���������� ���� �������� �Ѿ.
    void ThickerBook(const Book& comp_book);	 // �� �β��� å�� �̸��� �����
};

// Book Ŭ������ ���Ǹ� ������ web_book��� ��ü ����
Book web_book;

// Ŭ���� ���� �ۿ��� Book Ŭ������ Move() ��� �Լ��� ����
void Book::Move(int page) {
	current_page_ = page;
}

// ��� �Լ� ȣ�� ����
//web_book.Move(30);

const Book& Book::ThickerBook(const Book& comp_book)
{
    if (comp_book.total_page_ > total_page_)
    {
        return comp_book;
    }
    else
    {
        return *this; // �ڽ��� ȣ���� �ν��Ͻ��� ��ȯ�ϴµ� �� ���� ����.
    }
}

web_book.ThickerBook(html_book);

// Person Ŭ����
class Person
{
private:
    string name_;
    int age_;
public:
    Person(const string& name, int age); // ���� Ŭ���� �������� ����
    void ShowPersonInfo();
};

Person::Person(const string& name, int age) // ���� Ŭ���� �������� ����
{
    name_ = name;
    age_ = age;
}

// Student Ŭ����
class Student : public Person {
private:
    int student_id_;
public:
    Student(int sid, const string& name, int age); // �Ļ� Ŭ���� �������� ����
};

Student::Student(int sid, const string& name, int age) : Person(name, age) // �Ļ� Ŭ���� �������� ����
{
    student_id_ = sid;
}







