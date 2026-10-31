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


	cout << "\n\nArray Size: " << MyDaynamicArry.Size();
	cout << "\n\nArray Items after resize: \n";
	
	MyDaynamicArry.PrintList();

	cout << "\n\nItem(2): " << MyDaynamicArry.GetItem(2);

	int index = MyDaynamicArry.Find(30);

	if (index != -1)
		cout << "\n\nItem  found." << endl;
	else
		cout << "\n\nItem not found." << endl;

	MyDaynamicArry.DeleteItem(30);

	cout << "\n\nArray after delete item 30: " << endl;
	MyDaynamicArry.PrintList();

	cout << "\n\n after insert in index 2\n";
	MyDaynamicArry.InsertAt(2, 39);
	MyDaynamicArry.PrintList();
	
	cout << "\n\n after insert at beginning\n";
	MyDaynamicArry.InsertAtBeginning(100);
	MyDaynamicArry.PrintList();
	
	cout << "\n\n after insert after 2 \n";
	MyDaynamicArry.InsertAfter(2, 200);
	MyDaynamicArry.PrintList();
	
	cout << "\n\n after insert before\n";
	MyDaynamicArry.InsertAt(2, 300);
	MyDaynamicArry.PrintList();
	
	cout << "\n\n after insert at end\n";
	MyDaynamicArry.InsertAtEnd(300);
	MyDaynamicArry.PrintList();


	system("pause>0");
}