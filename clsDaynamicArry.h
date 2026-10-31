#pragma once

template <class T>

class clsDaynamicArry
{
private:
	int _Size;
	int _Count = 0;
protected:
	T* _MyArry;

public:
	clsDaynamicArry(int Size)
	{
		
		_Size = Size;
		_MyArry = new[_Size];
		
	}

	void SetItem(int Index, T Value)
	{
		if (Index >= 0 && Index < _Size)
		{
			_MyArry[Index] = Value;
			_Count++;
		}
	}

	bool IsEmpty()
	{
		return (_Count == 0 ? true : false);
	}

	void PrintList()
	{
		for (int i = 0; i <= _Size; i++)
		{
			cout << _MyArry[i] << " ";
		}
	}





};

