#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
//#include "STUDENT.h"


// 클래스 > 속성, 동작 (객체지향)
// cin 은 한변수에 공백을 포함한 입력을 받을수없다 공백이 하나라면 두 변수에 받을수있음
//cout << name << "의 나이는 " << age << "입니다";

//cin.getline(name, sizeof(name)); 한 변수에 공백을 포함한 문자열 받을수있다
//stoi,stof,stod,stol 문자열을 숫자로 string 라이브러리

//동적할당 
//int* a = new int[4]{ 1,2,3,4 }; 동적할당과 동시에 값을 초기화 하고싶을때


//struct Student
//{
//	string name;
//	int age;
//} student1, student2;
//
//struct Class
//{
//	struct Student student1;
//	struct Student student2;
//}AClass;
//
//
//
//int main() {
//	AClass.student1.name = "aaa";
//	AClass.student1.age = 19;
//	AClass.student2.name = "bbb";
//	AClass.student2.age = 23;
//	cout << AClass.student1.name;
//}

//STUDENT a[5] = {
//	"a",10,"b",11,"c",12,"d",13,"e",14
//};
//for (int i = 0; i < 5; i++) {
//	cout << "name: " << a[i].name << ", age: " << a[i].age << endl;
//}

//클래스선언은 헤더파일, 클래스함수의 정의는 소스파일, 
//객체생성및 테스트는 메인함수파일에서 실행

//class BodyData {
//private:
//	float height;
//	float weight;
//	int weight_state;
//public:
//	void InputBodyData() {
//		cout << "키를 입력하세요 >> ";
//		cin >> height;
//		cout << "몸무게를 입력하세요 >> ";
//		cin >> weight;
//		if (height - 100.0 - weight >= 6.0) {
//			weight_state = 1;
//		}
//		else if (height - 100.0 - weight <= -6.0) {
//			weight_state = -1;
//		}
//		else {
//			weight_state = 0;
//		}
//	}
//	void PrintBodyData() {
//		cout << endl << "키 : " << height << "cm, 몸무게 : " << weight << "kg, 체중상태 : " << weight_state << endl;
//	}
//};


//class Students {
//private:
//	string names[100];
//	int student_count = 0;
//public:
//	void InputName() {
//		cout<<"수강학생 이름 입력:"<<endl;
//		while (true){
//			char input_state;
//			cout << "이름 : ";
//			cin >> names[student_count];
//			cout << "계속 입력하시겠습니까? (y/n) ";
//			cin >> input_state;
//			student_count++;
//			if (input_state == 'n') {
//				break;
//			}
//		}
//	}
//	void PrintName() {
//		cout << endl<<"수강학생 명단 :" <<endl;
//		for (int i = 0; i < student_count; i++) {
//			cout << names[i]<<" ";
//		}
//		cout << endl << "총 수강학생 수 : " << student_count;
//	}
//	~Students() {
//		cout << endl<< "소멸";
//	};
//};
//string.append(문자열) , string.append(문자열,시작위치,개수), string.append(개수,문자)
//string.assign(문자열) , string.assign(문자열,시작위치,개수), string.assign(개수,문자)
//string.at(인덱스) : 문자하나, string.length(), string.size(), string.clear(),
//string.erase(위치,개수) : 위치서부터 개수만큼 삭제
//string.empty() : 빈 문자열인지 체크, string.substr(위치,개수) : 위치부터 개수만큼 문자열 반환
//string.swap(문자열(string만 가능)) 
//string.find(문자or문자열,시작위치), string.replace(시작위치,개수,문자열) 
//string.compare(문자열), string.compare(시작위치,개수,문자열) 문자열 비교
//string.insert(시작위치,문자열), string.insert(시작위치, 개수, 문자) : 추가 삽입

////ifstream : 파일 불러오기, ofstream : 콘솔창을 통해 파일에 데이터 입력하기(출력해주기)
//ofstream output;
////이어쓰고싶으면 ios::app추가
//output.open("test1.txt",ios::app);
//char cont = 'y';
//char word[50] = {};
////파일이 있는지 없는지 파악
//if (output.fail()) {
//	return 1;
//}
//while (cont == 'y' || cont == 'Y') {
//	cout << "단어 입력 : ";
//	cin >> word;
//	output << word << endl;

//	cout << "y/n : ";
//	cin >> cont;
//}
//output.close(); 

//ifstream input;
//char word1[50] = {};
//input.open("test1.txt");
//if (input.fail()) {
//	return 1;  
//}
////파일을 불러오고 줄단위로 실행
//while (input.eof() == false) {
//	input >> word1;
//	cout << word1 << endl;
//}
//input.close();

/*fstream fp;
int score[5] = { 34,75,76,94,43 };
fp.open("test1.txt", ios::out | ios::binary);
//score는 score[0]의 주소값을 나타내고, 그 소주가 가르키는 값을 char로 하고
//총 크기는 int(4바이트)*5 => 20바이트다
fp.write((char*)score, 20);
fp.close();
return 0;*/

//fstream fp;
//int score;
//fp.open("test1.txt", ios::in | ios::binary);
//if (fp.fail()) {
//	return 1;
//}
////score는 주소가 아니라 값을 가르키고 score의 주소가 가르키는 값을 한줄씩 저장하고
////int 이기에 4바이트다
///*while (fp.read((char*)&score, 4), !fp.eof()) {
//	cout << setw(3) << right << score << endl;
//}*/

//fp.read((char*)&score, 4);
//cout << score << endl;
////출력: 파일에 작성, 입력: 파일데이터를 불러옴
////seekp(바이트,이동기준) 출력할떄 포인터를 이동, seekg(바이트,이동기준) 입력할떄 포인터를 이동, 
////ios::beg 파일의 처음시작위치부터 이동, ios::end 파일의 끝부터 역이동, ios::cur 현재위치부터 이동 
//fp.seekg(4, ios::cur);
//fp.read((char*)&score, 4);
//cout << score << endl;

//fp.close();


//class  FigureData {
//public:
//	void SetData() {
//		cout << "도형의 모양 : ";
//		cin >> shape;
//		cout << "도형의 높이 : ";
//		cin >> height;
//		cout << "도형의 폭 : ";
//		cin >> length;
//		cout << "도형의 색 : ";
//		cin >> color;
//	}
//	double Setarea() {
//		return height * length;
//	}
//	void print(double data1) {
//		cout << "도형의 모양 : " << shape << " 도형의 색 : " << color << " 도형의 넓이 : " << data1 << endl;
//	}
//private:
//	double length, height;
//	string color;
//	string shape;
//};
//
//class PrintFigureData : public FigureData {
//public:
//	void SetData() {
//		FigureData::SetData();
//	}
//	void print() {
//		area = FigureData::Setarea();
//		FigureData::print(area);
//	}
// //protected:는 클래스 내에서만 참조 가능하고 main이나 다른곳에선 참조 불가능
// //상속에서 다른클래스에서 참조하고싶을때 private말고 protected 사용
// protected:
// 
//private:
//	double area;
//
//};



//class GeometricFigure {
//public:
//	void Setcolor(const string color) {
//		this->color = color;
//	}
//	bool Ispaint() {
//		if (color.empty()) {
//			return false;
//		}
//		else {
//			return true;
//		}
//	}
//	string Getcolor() {
//		return color;
//	}
//protected:
//	string color;
//};

//class Rectangle : GeometricFigure {
//public:
//	void SetLengthHeight() {
//		cout << "폭 : ";
//		cin >> width;
//		cout << "높이 : ";
//		cin >> height;
//	}
//	void getcolor() {
//		GeometricFigure::Setcolor("red");
//		if (GeometricFigure::Ispaint() == true) {
//			this->color = GeometricFigure::Getcolor();
//		}
//		else {
//			this->color = "empty";
//		}
//	}
//	void CalArea() {
//		this->area = width * height;
//	}
//	void PrintData() {
//		SetLengthHeight();
//		getcolor();
//		CalArea();
//		cout << " 폭: " << width << " 높이: " << height << " 색: " << color << " 면적: " << area << endl;
//	}
//
//private:
//	double width, height, area;
//	string color;
//};

//상속 클래스의 생성과 소멸의 순서는
//상속되는 클래스 생성 > 상속받는 클래스 생성 > 상속받는 클래스 소멸 > 상속되는 클래스 소멸

#include <iostream>
using namespace std;
int main() {
	int A, B;
	cin >> A >> B;
	cout << fixed;
	cout.precision(9);
	cout << A / (long double)B;
}

