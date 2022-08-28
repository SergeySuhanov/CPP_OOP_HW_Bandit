#include "Queue.h"

Queue::Queue(int max)
{ 
	MaxQueueLength = max;
	Wait = new Drums[MaxQueueLength];
	CurQueueLength = 0;
}
Queue::~Queue()
{
	delete[] Wait;
}
void Queue::Add(Drums spin)
{
	// Если в очереди есть свободное место
	if (!IsFull())
	{
		// Встаём в очередь
		Wait[CurQueueLength++] = spin;
	}	
}
Drums Queue::Extract()
{
	// Если очередь не пуста
	if (!IsEmpty())
	{
		// Сохраняем начало очереди во временную переменную
		Drums temp = Wait[0];
		// Сдвигаем очередь на 1
		for (int i = 0; i < CurQueueLength - 1; i++)
			Wait[i] = Wait[i + 1];
		// Уменьшаем итоговое кол-во элементов в очереди на 1
		CurQueueLength--;
		// Возвращаем сохранённую временную переменную
		return temp;
	}
}
void Queue::Clear()
{ 
	// Эффективная "очистка" очереди
	CurQueueLength = 0;
}
void Queue::Print()
{
	for (int i = 0; i < CurQueueLength; i++)
	{
		cout << Wait[i].drum1 << ' ';
		cout << Wait[i].drum1 << ' ';
		cout << Wait[i].drum1 << ' ';
	}
	cout << endl;
}
void Queue::PrintLast()
{
	cout << Wait[CurQueueLength - 1].drum1 << ' ';
	cout << Wait[CurQueueLength - 1].drum1 << ' ';
	cout << Wait[CurQueueLength - 1].drum1 << ' ';
	cout << endl;
}

bool Queue::IsEmpty() { return CurQueueLength == 0; }
bool Queue::IsFull() { return CurQueueLength == MaxQueueLength; }
int Queue::Size() { return CurQueueLength; }