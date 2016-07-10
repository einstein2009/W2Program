   
#ifndef H_petTypeVirtual
#define H_petTypeVirtual
 
#include <string>

using namespace std;

class petType
{
public:
    void print();
    petType(string n = "");

private:
    string name;
};

void petType::print()
{
	cout << "Name: " << name;
}

petType::petType(string n)
{
	name = n;
}

#endif
