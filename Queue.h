
#ifndef __QUEUE__H__
#define __QUEUE__H__

#include "stdafx.h"
#include "Bandit.h"

class Queue
{
private:
	Drums* Wait;          // Очередь
	int MaxQueueLength; // Максимальный размер очереди
	int CurQueueLength; // Текущий      размер очереди
public:
	Queue(int max);
	~Queue();
	void Add(Drums spin); // Добавить
	Drums  Extract(); // Извлечь
	void Clear();   // Очистить
	void Print();   // Напечатать
	void PrintLast(); // Показать последнего
	bool IsEmpty(); // Пустая ли очередь
	bool IsFull();  // Полная ли очередь
	int  Size();    // Размер очереди
};

#endif