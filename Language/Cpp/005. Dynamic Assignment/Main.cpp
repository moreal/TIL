#include <iostream>

int main()
{
	/*
	 * C++ 동적할당에 관련해서 알아보도록 합시다.
	 * C에서는 malloc, calloc, realloc, free 등을 통해 힙 영역의 메모리 공간을 다뤘었습니다.
	 * 그에 비해 C++ 에서는 new, delete를 사용하여 메모리를 할당 받고 해제합니다.
	 */
	
	int arr_size = 10;
	
	int* array = new int[arr_size];

	for(int i = 0; i < arr_size; ++i)
		array[i] = i, std::cout << array[i] << " ";
		
	std::cout << std::endl;
	
	delete array;
	
	std::cout << array[0] << std::endl; // delete 이후에는 메모리에 접근 할 수 없어 0이 아닌 다른 값이 출력됩니다.

	return 0;
}
