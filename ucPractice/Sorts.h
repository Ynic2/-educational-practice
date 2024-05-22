#include <iostream>
#include <vector>
#pragma once



//Поразрядная сортировка
//Функция нахождения максимального числа в массиве
int getMax(std::vector<int>& arr) {
	int max = arr[0]; //Инициализируем переменную max значением первого элемента

	for (size_t i = 1; i < arr.size(); i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	return max;
}

//Функция для выполнения поразрядной сортировки для определенного разряда exp

void countSord(std::vector<int>& arr, int exp) {
	const size_t n = arr.size();
	std::vector<int> output(n), count(10, 0); //Создаем вспомогательные массивы output и count 

	//Заполняем count для подсчета чисел по разряду exp
	for (size_t i = 0; i < n; ++i) {
		count[(arr[i] / exp) % 10]++;//Увеличиваем значение в count для соответствующего разряда числа
	}

	//Модифицируем count, чтобы он содержал фактическое положение каждого элемента в output
	for (size_t i = 1; i < 10; ++i) {
		count[i] += count[i - 1]; //Вычисляем аккумулятивные значения в count для правильной сортировки
	}

	//Сортировка элементов в output
	for (int i = n - 1; i >= 0; --i) {
		output[count[(arr[i] / exp) % 10] - 1] = arr[i]; //Располагаем элементы в output в правильном порядке
		count[(arr[i] / exp) % 10]--; //Уменьшаем значение в count для разряда числа
	}

	//Копируем отсортированный массив обратно в arr
	for (size_t i = 0; i < n; i++) {
		arr[i] = output[i];
	}
}

//Функция поразрядной сортировки
void radixSort(std::vector<int>& arr) {
	int max = getMax(arr);
	for (int exp = 1; max / exp > 0; exp *= 10) {
		countSord(arr, exp);
	}
}


//Сортировка вставками
void insertionSort(std::vector<int>& arr) {
	int n = arr.size();
	for (int i = 1; i < n; ++i) {
		int key = arr[i];
		int j = i - 1;
		// Перемещаем элементы arr[0..i-1], которые больше чем key, на одну позицию вперед от текущей позиции
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}


//Сортировка пузырьком
void bubleSort(std::vector<int>& mass) {
	for (size_t i = 0; i < mass.size() - 1; i++) {
		for (size_t j = 0; j < mass.size() - 1 - i; j++) {
			if (mass[j] > mass[j + 1]) {
				std::swap(mass[j], mass[j + 1]);
			}
		}
	}
}


//Сортировка Шейкер
void shakerSort(std::vector<int>& arr) {
	int n = arr.size();
	bool swapped = true;
	int start = 0;
	int end = n - 1;

	while (swapped) {
		swapped = false;

		for (int i = start; i < end; ++i) {
			if (arr[i] > arr[i + 1]) {
				std::swap(arr[i], arr[i + 1]);
				swapped = true;
			}
		}

		if (!swapped)
			break;

		swapped = false;

		--end;

		for (int i = end - 1; i >= start; --i) {
			if (arr[i] > arr[i + 1]) {
				std::swap(arr[i], arr[i + 1]);
				swapped = true;
			}
		}

		++start;
	}
}
 
//Быстрая сортировка
int partition(std::vector<int>& mass, int low, int high) {
	int pivot = mass[high];
	int i = low - 1; 

	for (int j = low; j < high; ++j) {
		if (mass[j] < pivot) {
			++i;
			std::swap(mass[i], mass[j]);
		}
	}
	std::swap(mass[i + 1], mass[high]);
	return i + 1;
}


void quickSort(std::vector<int>& mass, int low, int high) {
	if (low < high) {
		int pi = partition(mass, low, high);

		quickSort(mass, low, pi - 1);
		quickSort(mass, pi + 1, high);
	}
}

void quickSort(std::vector<int>& mass) {
	quickSort(mass, 0, mass.size() - 1);
}