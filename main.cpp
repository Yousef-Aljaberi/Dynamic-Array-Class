#include<iostream>
#include"clsDaynamicArry.h"
using namespace std;


int main()
{
	clsDaynamicArry<int> MyDaynamicArry(10);

	cout<< "is Empty: "<<MyDaynamicArry.IsEmpty();
	cout << "\n\nArry Size: " << MyDaynamicArry.Size();

	MyDaynamicArry.SetItem(0, 10);
	MyDaynamicArry.SetItem(1, 20);
	MyDaynamicArry.SetItem(2, 30);
	MyDaynamicArry.SetItem(3, 40);

	cout << "\n\nIs Empty: " << MyDaynamicArry.IsEmpty();
	cout << "\n\narray content: " << endl;

	MyDaynamicArry.PrintList();

	MyDaynamicArry.Resize(2);

	cout << "\n\nArray Size: " << MyDaynamicArry.Size();
	cout << "\n\nArray Items after resize: \n";
	
	MyDaynamicArry.PrintList();



	system("pause>0");
}