#pragma once
#include<iostream>

using namespace std;

template <class T>

class clsDaynamicArry
{
private:

	int _Size = 0;

protected:

	T* _TempArray;

public:
	T* OriginalArry;

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

	void Resize(int NewSize)
	{
		if (NewSize < 0)
			NewSize = 0;
		
		//limit the original size to the new size if it is less
		if (NewSize < _Size)
			_Size = NewSize;

		_TempArray =new T[NewSize];

		for (int i = 0; i < _Size; i++)
		{
			_TempArray[i] = OriginalArry[i];
		}

		_Size = NewSize;

		delete[]  OriginalArry;

		OriginalArry = _TempArray;
	}

	T GetItem(int Index)
	{
		if (!(Index < 0 || Index>_Size))
		{
			return OriginalArry[Index];
		}

	}

	void Reverse()
	{
		T Temp;

		int midSize = _Size / 2;

		for (int i = 0; i <midSize ; i++)
		{
			
			swap(OriginalArry[i], OriginalArry[_Size - 1 - i]);
			
		}
	}

	void Clear()
	{
		_Size = 0;
		_TempArray = new T[0];
		delete[] OriginalArry;

		OriginalArry = _TempArray;
	}

	bool DeleteItemAt(int Index)
	{
		if (Index < 0 || Index >= _Size)
			return false;

		_Size--;

		_TempArray = new T[_Size];

		for (int i = 0; i < Index; i++)
		{
			_TempArray[i] = OriginalArry[i];
		}
		
		for (int i = Index+1; i <_Size + 1; i++)
		{
			_TempArray[i - 1] = OriginalArry[i];
		}

		delete[] OriginalArry;
		OriginalArry = _TempArray;

		return true;
	}

	bool DeleteFirstItem()
	{
		if (DeleteItemAt(0))
		{
			return true;
		}

		return false;
	}

	bool DeleteLastItem()
	{
		int index = _Size - 1;

		if (DeleteItemAt(index))
		{
			return true;
		}

		return false;
		
	}
};

