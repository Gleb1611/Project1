#pragma once
class Queue
{
	int* queue;
	int size;
public:
	Queue();
	~Queue();

	int enqueue();
	int head();
	int length();
	int size();
	int empty();
};

