/* 접근 제어

정보 은닉(data hiding) : 사용자가 굳이 알 필요가 없는 정보는 사용자로부터 숨겨야함
접근 제어(access control) : 정보 은닉을 위한 기능
	접근 제어 지시자 사용, 클래스 외부에서의 직접적인 접근을 허용하지 않는 멤버를 설정, 정보 은닉 구체화 의미
접근 제어 지시자
1. public
2. private
3. protected
*/

/* 1. public 접근 제어 지시자
	- 해당 객체의 private 멤버와 프로그램 사이의 인터페이스 역할
	- public 멤버 함수를 통해 해당 객체의 private 멤버에도 접근 가능
*/
class Book
{
public:
    string title_;       // 책의 제목
    int total_page_;     // 총 페이지
    double percent_;     // 해당 책을 읽은 정도
    void Move(int page); // 현재 페이지를 전달받은 페이지로 이동시킴.
    void Open();         // 현재 페이지로 책을 엶.
    void Read();         // 현재 페이지에서 다음 페이지로 넘어감.
};

/* 2. private 접근 제어 지시자
	- private 접근 제어 지시자로 선언된 클래스 멤버는 외부 공개 X. 외부에서 직접 접근 X
	- 해당 객체의 publice 멤버 함수를 통해서만 접근 가능
	- class의 기본 접근 제어 권한
	- 일반적으로 private 멤버는 public 인터페이스를 직접 구성하지 않는 클래스의 세부적인 동작을 구현하는 데 사용
 */
class Book {
private:                // 생략 가능함.
    int current_page_;  // 현재 페이지
    void set_percent(); // 해당 책을 읽은 정도를 구함.
public:
    string title_;
    int total_page_;
    double percent_;
    void Move(int page);
    void Open();
    void Read();
};

/* 3. protected 접근 제어 지시자
	- C++ 클래스는 private 멤버로 정보를 은닉하고, public 멤버로 사용자나 프로그램과의 인터페이스를 구축합니다.
	- 여기에 파생 클래스(derived class)와 관련된 접근 제어 지시자가 하나 더 존재합니다.
	- protected 멤버는 파생 클래스에 대해서는 public 멤버처럼 취급되며, 외부에서는 private 멤버처럼 취급됩니다.

	protected 멤버에 접근할 수 있는 영역은 다음과 같습니다.
	1. 이 멤버를 선언한 클래스의 멤버 함수
	2. 이 멤버를 선언한 클래스의 프렌드
	3. 이 멤버를 선언한 클래스에서 public 또는 protected 접근 제어로 파생된 클래스

	다음 그림은 클래스의 protected 멤버에 접근할 수 있는 영역을 나타냅니다.


 */






