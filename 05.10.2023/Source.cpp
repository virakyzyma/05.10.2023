#include <iostream>
using namespace std;

class Passport {

protected:

	string name;
	string nationality;
	int authority;
	int age;
public:
	Passport() = default;
	string& GetName() {
		return name;
	}
	string& GetNationality() {

		return nationality;

	}
	int& GetAuthority()
	{
		return authority;
	}
	int& GetAge() 
	{
		return age;
	}

};


class ForeignPassport : public Passport {
	int passportNumber;
	string visa;
public:
	ForeignPassport(int W) {
		passportNumber = W;
	}
	ForeignPassport(string W) {
		visa = W;
	}
	int& GetPassportNumber() {
		return passportNumber;
	}
	string& GetVisa() {
		return visa;
	}
	void Show()
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Nationality: " << nationality << endl;
		cout << "Passport number: " << passportNumber << endl;
		cout << "Visa: " << visa << endl;
	}
};



int main()
{
	//�������� ����� Passport (�������), ������� ����� ��������� ���������� ���������� � ���������� �������.
	//� ������� ��������� ������������ ���������� ����� ForeignPassport(�������������), ����������� �� Passport.
	//��������, ��� ������������� �������� ������ ���������� ������ ����� ������ � �����, ����� ��������������.

	ForeignPassport A(1);

	A.GetName() = "Anna";
	A.GetAge() = 20;
	A.GetNationality() = "Ukrain";
	A.GetAuthority() = 1234;
	A.GetPassportNumber() = 123456;
	A.GetVisa() = "Your visa";
	A.Show();


}