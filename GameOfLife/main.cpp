#include <iostream>
using namespace std;

class World {
	int sX, sY;
	int capacityX, capacityY;
	string live, death;

public:




	//void reallocX(int ** sizeX, int offset = 0) {
	//	if (world == nullptr) {
	//		capacity = 8;
	//		world = new T[capacity]
	//	}
	//}

//	void realloc(int offset = 0) {
//		//O(capacity)
//		if (data == nullptr) {
//			//O(1)
//			capacity = 10;
//			data = new T[capacity];
//		}
//		else {
//			//O(capacity)
//			T* t = new T[capacity * 2];
//			for (int i = 0; i < capacity; i++) {
//				t[i + offset] = data[i];
//			}
//			delete[] data;
//			data = t;
//			capacity *= 2;
//		}
//	}
//
//public:
//	//konstruktor domyœlny / bezparametrowy
//	Array() {
//		data = nullptr;
//		size = 0;
//		capacity = 0;
//	}
//
//	Array(int capacity) {
//		this->data = new T[capacity];
//		this->size = 0;
//		this->capacity = capacity;
//	}
//
//	void addBack(T value) {
//		if (size == capacity) {
//			realloc();
//		}
//		//{2,3,2,5} size=4, cap=4, value=7
//		//{2,3,2,5, , , , }
//		//{2,3,2,5,7, , , }
//		data[size] = value;
//		size++;
//		//z³o¿onoœæ O(1)
//	}

}

int main() {
	/*
	worldCurrent[][]
	worldNext[][]

	while (true)
		cls
		display(worldCurrent)
		for (r in rows)
			for (c in cols)
				checkNeighbors(worldCurrent, r, c)
				worldNext[r][c] = newState

		worldCurrent = worldNext
		clear(worldNext)
		sleep
				

	*/
	cout << "OK";
	return 0;
}