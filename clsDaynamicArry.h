#pragma once
#include<iostream>

using namespace std;

template <class T>

class clsDaynamicArry
{
private:

	int _Size = 0;

protected:

	T* OriginalArry;

public:
	clsDaynamicArry(int Size = 0)
	{
		if (Size < 0)
			Size = 0;

		_Size = Size;
		OriginalArry = new T[_Size];
		
	}

	~clsDaynamicArry()
	{
		delete[]  OriginalArry;
	}

	bool SetItem(int Index, T Value)
	{
		if (Index >= _Size &&  _Size != 0)
		{
			return false;
		}

		OriginalArry[Index] = Value;
		return true;
	}

	bool IsEmpty()
	{
		return (_Size == 0 ? true : false);
	}

	int Size()
	{
		return _Size;
	}


	void PrintList()
	{
		for (int i = 0; i <= _Size - 1; i++)
		{
			cout << OriginalArry[i] << " ";
		}
		cout << "\n";
	}

	void Resize(int Size)
	{
		if ((Size == _Size) || (Size < 0 ))
		{
			return;
		}

		T* NewArry =new T[Size];

		for (int i = 0; i < Size; i++)
		{
			NewArry[i] = OriginalArry[i];
		}

		_Size = Size;

		delete[]  OriginalArry;

		OriginalArry = NewArry;



	}



};

