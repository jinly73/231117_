#include <iostream>
#include <vector>

#include "Parent.h"
#include "Child.h"
#include "GrandChild.h"

using namespace std;

//����ü
class Bullet
{
public:
	Bullet()
	{
		cout << "����" << endl;
	};
	~Bullet() {
		cout << "����" << endl;
	};

	int A = 10;
	int B = 5;
	int C = 3;
};

int main()
{

	//vector<int> IntVector;
	//vector<FParent*> Family;
	//Family.push_back(new FParent());
	//Family.push_back(new FChild());
	//Family.push_back(new FGrandChild());
	//IntVector.push_back(12);
	////Family.clear(); // ������ �������� ��Ծ��?
	//for (auto Value : Family)
	//{

	//	cout << Value << endl;

	//	delete Value;
	//}

	
	/*
	FParent* Parent = new FParent;

	delete Parent;

	FChild* Child = new FChild;

	delete Child;
	*/

	
	// �����Ҵ�
	
	Bullet* Bullet1 = new Bullet();

	/*cout << Bullet1.A << endl;
	cout << Bullet1.B << endl;
	cout << Bullet1.C << endl;
	//cout << new Bullet << endl;
	cout << Bullet1->A << endl;
	cout << (*Bullet1).A << endl;
	Bullet1.A
	*/
	delete Bullet1;

	return 0;
}