/* ��� �Լ��� ����
C++���� �ϳ��� Ŭ�������� ������ �ν��Ͻ��� ���� ������ �޸� ������ ����� �ڽŸ��� ��� ������ ��������, ��� �Լ��� ��� �ν��Ͻ��� �����մϴ�.

���� Book Ŭ������ �̿��� �� ���� �ν��Ͻ��� �����ص�, TickerBook()�̶�� ��� �Լ��� �ϳ����� �����մϴ�.
��, �� �β��� å�� �̸��� ����� �ִ� TickerBook() ��� �Լ��� �� �ν��Ͻ��� ���� �����ϰ� �˴ϴ�.

ThickerBook() ��� �Լ��� ���Ǵ� ������ �����ϴ�.

*/
const Book& Book::ThickerBook(const Book& comp_book)
{
    if (comp_book.total_page_ > total_page_)
    {
        return comp_book;
    }
    else
    {
        return ???; // �ڽ��� ȣ���� �ν��Ͻ��� ��ȯ�ϴµ� �� ���� ����.
    }
}

web_book.ThickerBook(html_book);










