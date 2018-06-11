#include <iostream>
#include "switchControl.h"

using namespace std;

class signalLight
{
public:
	switchControl redSignal;	//������
	switchControl orangeSignal;
	switchControl greenSignal;
	switchControl straight;		//����
	switchControl turnLeft;		//��ȸ��
	switchControl cross;
public:
	signalLight();
	~signalLight();

public:
	/* ��ȣ�� ���� ���� */
	void setSignalLamp(bool redSignal, bool orangeSignal, bool greenSignal, bool straight, bool turnLeft, bool cross);
	
	/* ������ȣ�� ��ȸ�� ��ȣ�� ���� ��Ȳ�� ���� ���� */
	void straightSetOrangeLamp();
	void turnLeftSetOrangeLamp();

	/* ��ȣ�� ���� ������ */
	void showSignalLamp();
};