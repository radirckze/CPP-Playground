// PointerRefresher.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    std::cout << "Running Pointer Refresher ...\n\n"; 

	//working through https://www.mauriciopoppe.com/notes/programming/programming-languages/cpp-refresher/

	int tempi = 5;
	char namearray[] = "PointerRefresher";
	string name = "PointerRefresher";

	int* iptr = &tempi;
	std::cout << "Address of tempi is : " << &tempi << "; Value of iptr is: " << iptr << "\n";

	std::cout << "The value of tempi (gotten by derferencing iptr) is: " << *iptr << "\n";

	int** iptrptr = &iptr;
	std::cout << "The value of iptriptr is: " << iptrptr << "The value of tempi (gotten by de-dereferencing iptriptr is: " << **iptrptr << "\n";

	//Playing with classes
	std::cout << "\nPlaying with classes ...\n";

	class Person {
		string name;
		int age;
	public:
		Person(string pname, int page) { name = pname; age = page;  }
		void Show()
		{
			std::cout << "[PERSON] Name : " << name << "; Age : " << age << "\n";
		}
	};

	Person pfjd = Person("Jimmie Dim", 40);
	pfjd.Show();
	Person* pfbc = new Person("Butch Coolidge", 40);
	pfbc->Show();

	std::cout << "\nPointer Refresher done!\n";


}

