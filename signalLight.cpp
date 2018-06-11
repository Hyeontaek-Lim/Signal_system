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
		cout << "정지" << endl;
	if (orangeSignal.switchOn())
		cout << "노란불" << endl;
	if (greenSignal.switchOn())
		cout << "초록불" << endl;
	if (straight.switchOn())
		cout << "직진" << endl;
	if (turnLeft.switchOn())
		cout << "좌회전" << endl;
	if (cross.switchOn())
		cout << "정면 횡단보도에서 횡단가능" << endl;
}

