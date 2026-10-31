#include<iostream>
#include"clsDaynamicArry.h"
using namespace std;


int main()
{
	clsDaynamicArry<int> MyDaynamicArry(6);

	cout<< "is Empty: "<<MyDaynamicArry.IsEmpty();
	cout << "\n\nArry Size: " << MyDaynamicArry.Size();

	MyDaynamicArry.SetItem(0, 10);
	MyDaynamicArry.SetItem(1, 20);
	MyDaynamicArry.SetItem(2, 30);
	MyDaynamicArry.SetItem(3, 40);
	MyDaynamicArry.SetItem(4, 50);
	MyDaynamicArry.SetItem(5, 60);

	cout << "\n\nIs Empty: " << MyDaynamicArry.IsEmpty();
	cout << "\n\narray content: " << endl;

	MyDaynamicArry.PrintList();

	//MyDaynamicArry.Resize(3);

	cout << "\n\nArray Size: " << MyDaynamicArry.Size();
	cout << "\n\nArray Items after resize: \n";
	
	MyDaynamicArry.PrintList();

	cout << "\n\nItem(2): " << MyDaynamicArry.GetItem(2);

	MyDaynamicArry.Reverse();

	cout << "\n\nArry after revers: \n";
	MyDaynamicArry.PrintList();

	MyDaynamicArry.DeleteItemAt(2);

	cout << "\n\nArray after delete item 2:\n";
	MyDaynamicArry.PrintList();

	MyDaynamicArry.DeleteFirstItem();

	cout << "\n\nArray after delete First item:\n";
	MyDaynamicArry.PrintList();

	MyDaynamicArry.DeleteLastItem();

	cout << "\n\nArray after delete last item :\n";
	MyDaynamicArry.PrintList();


	system("pause>0");
}