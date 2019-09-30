#include "MyArray.h"

template<typename T>
void MyArray<T>::print()
{
	for (int i = 0; i < m_length; i++)
	{
		std::cout << m_data[i] << " ";
	}
	std::cout << std::endl;
}

//explicit instantiation
//함수를 하는방식
template void MyArray<double>::print();


//클래스를 하는 방식
template class MyArray<double>;
template class MyArray<char>;
