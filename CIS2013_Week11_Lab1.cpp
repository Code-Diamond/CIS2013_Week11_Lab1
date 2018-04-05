#include <iostream>

using namespace std;
//A struct
struct myStructure
{
	int a = 0;
	int b = 1;
	int c = 2;

	int aMethod()
	{
		cout << "will this work?" << endl;
	}

};
//An enum
enum myEnumerator
{
	red, blue, green
};
//An object
class Person
{
public:
	Person()
	{
		cout << "";
	}
};


int main()
{
	myStructure structure;
	Person person;
	
	myEnumerator a = green;
	

	cout << a;
	structure.aMethod();
	return 0;
}