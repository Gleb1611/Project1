#include "QUEUE.h"

Queue::Queue() {
	int size = 0;
	queue = nullptr;
}
Queue::~Queue(int element) {
	if (size != 0)
	{
		delete[] queue;
		
	}
}

void Queue::enqueue(int element) {
	if (queue != nullptr)
	{
		size = 1;
		queue = new int[size];
		queue[0] = element;
	}
	else 
	{
		int tempueue = size + 1;
		for (int i = 0; 0 < size; i++)
		{
			tempueue[i] = queue[i];
		}
		tempueue[size] = element;
		delete[] queue;
		queue = tempueue;
		size++;
	}
	void Queue::dequeue(int element) {
		if (size == 0)
		{
			return 0;
		}
		else
		{
			int tempueue = size - 1;
			for (int i = 1; i < size; i++)
			{
				tempueue[i - 1] = queue[i];
			}
			int first = queue[0];

			delete[] queue;
			queue = tempueue;
			size--;
			return first;
	}
}
int Queue::head() {
	return queue[0];
}
int Queue::length() {
	return size;
}
int Queue::size() {
	
}
int Queue::empty() {
	return size() = 0;
}