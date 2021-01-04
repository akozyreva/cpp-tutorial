#include <iostream>

// сортировка слиянием
void input_arr(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << "Enter " << i + 1 << " val of arr: ";
		std::cin >> arr[i];
	}
}

void merge_sort(int *arr, int size)
{
	if (size <= 1) return; // base case of recursion
	int middle = size / 2;
	int *left = arr;
	// it's pointer's sum = arr + middle 
	int *right = arr + middle;
	int left_size = middle;
	int right_size = size - left_size;
	
	merge_sort(left, left_size);
	merge_sort(right, right_size);
	// merge these 2 already sorted halfs of arr
	int *buffer = new int[size];
	int left_i = 0;
        int right_i = 0;
        int buffer_i = 0;
	while (left_i < left_size and right_i < right_size)
	{
		if(left[left_i] <= right[right_i])
		{
			// taking the lesser from left part of arr
			buffer[buffer_i] = left[left_i];
			left_i ++;
			buffer_i ++;
		}
		else 
		{
			// taking the lesser from right part of arr
			buffer[buffer_i] = right[right_i];
			right_i ++;
			buffer_i ++;
		}
	}
	// copying left elements from the left size (if they're some elements)
	while(left_i < left_size)
	{
			buffer[buffer_i] = left[left_i];
			left_i ++;
			buffer_i ++;
	}

	while(right_i < right_size)
	{
			buffer[buffer_i] = right[right_i];
			right_i ++;
			buffer_i ++;
	}

	// copying from buffer to original arr
	for (int i = 0; i < size ; i++)
	{
		arr[i] = buffer[i];
	}
	delete[] buffer;	
	
}
void print_arr(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << '\t';
	}
	std::cout << '\n';
}


int main()
{
	int size;
	std::cout << "Enter size of arr: ";
	std::cin >> size;

	int *arr = new int[size];

	input_arr(arr, size);
	merge_sort(arr, size);
	print_arr(arr, size);

	delete[] arr;
}
