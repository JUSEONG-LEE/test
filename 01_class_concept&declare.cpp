///* class 개념, 선언
//
// 인스턴스
//클래스는 구조체와 마찬가지로 사용자가 정의할 수 있는 일종의 타입
//클래스를 사용하려면 해당 클래스 타입의 객체 선언
//인스턴스 = 선언된 해당 클래스 타입의 객체 = 메모리에 대입된 객체
//하나의 클래스에서 여러 개의 인스턴스 생성 가능
//각 인스턴스는 독립된 메모리 공간에 자신만의 멤버 변수(프로퍼티. property)를 가지지만
//멤버 함수(메소드. method)는 모든 인스턴스가 공유한다.
//
// class의 선언
//class 클래스이름
//{
//접근제어지시자1:
//    멤버변수1의타입 멤버변수1의이름;	// 멤버 변수 : 프로퍼티(property)
//    멤버변수2의타입 멤버변수2의이름;	// 멤버 함수 : 메소드(method)
//    ...
//    멤버함수1의 원형
//    멤버함수2의 원형
//    ...
//};*/
//class Book
//{
//private:
//	int current_page_;
//	void set_percent();
//public:
//	int total_page_;
//	//...
//};
//
///* Book 객체 선언
//클래스이름 객체참조변수이름;*/
//Book web_book;
//
///* 멤버 함수 정의
// 클래스의 선언 밖에서 멤버 함수를 정의할 때에는 범위 지정 연산자(::)를 사용하여 해당 함수가 어느 클래스에 속하지는지 명시해야 한다.
//반환타입 클래스이름::멤버함수이름(매개변수목록) { 함수의 몸체; }*/
//void Book::Move(int page) { current_page_ = page; }
//
///*  멤버 함수 호출
//멤버 참조 연산자(.)를 사용하여 호출
//1. 객체이름.멤버함수이름();               // 매개변수가 없는 멤버 함수의 호출
//2. 객체이름.멤버함수이름(전달할인수목록); // 매개변수가 있는 멤버 함수의 호출
//*/
//web_book.Move(30);
//
//
//
