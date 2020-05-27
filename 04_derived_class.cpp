///* 상속
//	- 상속(inheritance)은 추상화, 캡슐화와 더불어 객체 지향 프로그래밍을 구성하는 중요한 특징 중 하나
//	- 상속은 사용자에게 높은 수준의 코드 재활용성을 제공하며, 클래스 간의 계층적 관계를 구성함으로써 다형성의 문법적 토대를 마련합니다.
//*/
//
///*클래스 상속(class inheritance)
//클래스 상속이란 기존에 정의되어 있는 클래스의 모든 멤버 변수와 멤버 함수를 물려받아, 새로운 클래스를 작성하는 것을 의미
//	기존 class			->		상속class
//기초 클래스(base class)			파생 클래스(derived class)
//부모 클래스(parent class)		자식 클래스(child class)
//상위 클래스(super class)		하위 클래스(sub class)
//
//클래스 상속 장점
//	1. 기존에 작성된 클래스를 재활용할 수 있습니다.
//	2. 공통적인 부분은 기초 클래스에 미리 작성하여, 파생 클래스에서 중복되는 부분을 제거할 수 있습니다.
//*/
//
///*파생 클래스(derived class)
//파생 클래스(derived class)란 기초 클래스의 모든 특성을 물려받아 새롭게 작성된 클래스
//C++에서 파생 클래스는 다음과 같은 문법을 통해 선언합니다.
//class 파생클래스이름 : 접근제어지시자 기초클래스이름[, 접근제어지시자 기초클래스이름, ...]
//{
//    // 파생 클래스 멤버 리스트
//}
//
//접근 제어 지시자 : 기초 클래스의 멤버를 사용할 수 있는 파생 클래스의 접근 제어 권한 설정
//	접근 제어 지시자 생략 시, 파생 클래스의 접근 제어 권한은 private로 기본 설정
//
//또한, 쉼표(,)를 사용하여 상속받을 기초 클래스를 여러 개 명시 가능
//단일 상속(single inheritance) : 파생 클래스가 상속받는 기초 클래스가 하나
//다중 상속(multiple inheritance) : 여러 개의 기초 클래스를 상속
//*/
//
///*파생 클래스의 특징
//	파생 클래스는 특징
// 	1. 파생 클래스는 반드시 자신만의 생성자를 작성해야 합니다.
//	2. 파생 클래스에는 기초 클래스의 접근할 수 있는 모든 멤버 변수들이 저장됩니다.
//	3. 파생 클래스는 기초 클래스의 접근할 수 있는 모든 멤버 함수를 사용할 수 있습니다.
//	4. 파생 클래스에는 필요한 만큼 멤버를 추가할 수 있습니다.
//*/
//
//// Person 클래스
//class Person
//{
//private:
//    string name_;
//    int age_;
//public:
//    Person(const string& name, int age); // 기초 클래스 생성자의 선언
//    void ShowPersonInfo();
//};
//
//Person::Person(const string& name, int age) // 기초 클래스 생성자의 정의
//{
//    name_ = name;
//    age_ = age;
//}
//
//// Student 클래스
//class Student : public Person {
//private:
//    int student_id_;
//public:
//    Student(int sid, const string& name, int age); // 파생 클래스 생성자의 선언
//};
//
//Student::Student(int sid, const string& name, int age) : Person(name, age) // 파생 클래스 생성자의 선언
//{
//    student_id_ = sid;
//}
//
//
//
//
//
//
//
//
