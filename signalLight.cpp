#include "signalLight.h"



signalLight::signalLight() 
{

}


signalLight::~signalLight()
{

}

void signalLight::setSignalLamp(bool redSignal, bool orangeSignal, bool greenSignal, bool straight, bool turnLeft, bool cross)
{
	this->redSignal.setControl(redSignal);
	this->orangeSignal.setControl(orangeSignal);
	this->greenSignal.setControl(greenSignal);
	this->straight.setControl(straight);
	this->turnLeft.setControl(turnLeft);
	this->cross.setControl(cross);
}

void signalLight::straightSetOrangeLamp()
{
	this->orangeSignal.control = true;
	this->straight.control = false;
}

void signalLight::turnLeftSetOrangeLamp() {
	this->orangeSignal.control = true;
	this->turnLeft.control = false;
}

void signalLight::showSignalLamp()
{
	if (redSignal.switchOn())
		cout << "����" << endl;
	if (orangeSignal.switchOn())
		cout << "�����" << endl;
	if (greenSignal.switchOn())
		cout << "�ʷϺ�" << endl;
	if (straight.switchOn())
		cout << "����" << endl;
	if (turnLeft.switchOn())
		cout << "��ȸ��" << endl;
	if (cross.switchOn())
		cout << "���� Ⱦ�ܺ������� Ⱦ�ܰ���" << endl;
}

