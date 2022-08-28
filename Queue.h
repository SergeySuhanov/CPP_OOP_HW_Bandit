
#ifndef __QUEUE__H__
#define __QUEUE__H__

#include "stdafx.h"
#include "Bandit.h"

class Queue
{
private:
	Drums* Wait;          // �������
	int MaxQueueLength; // ������������ ������ �������
	int CurQueueLength; // �������      ������ �������
public:
	Queue(int max);
	~Queue();
	void Add(Drums spin); // ��������
	Drums  Extract(); // �������
	void Clear();   // ��������
	void Print();   // ����������
	void PrintLast(); // �������� ����������
	bool IsEmpty(); // ������ �� �������
	bool IsFull();  // ������ �� �������
	int  Size();    // ������ �������
};

#endif