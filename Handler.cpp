#include "Handler.h"

Handler::Handler()
{
}


Handler::~Handler()
{
}

void Handler::MySleep(int time)
{
	Sleep(time);
	system("cls");
}

void Handler::leftAndRightStraight() {
	obj[0].setSignalLamp(false, false, false, true, false, false);
	obj[1].setSignalLamp(false, false, false, true, false, false);
	obj[2].setSignalLamp(true, false, false, false, false, true);
	obj[3].setSignalLamp(true, false, false, false, false, true);
}
void Handler::leftAndRightTurnLeft() {
	obj[0].setSignalLamp(false, false, false, false, true, false);
	obj[1].setSignalLamp(false, false, false, false, true, false);
	obj[2].setSignalLamp(true, false, false, false, false, false);
	obj[3].setSignalLamp(true, false, false, false, false, false);
}

void Handler::FrontAndRearStraight() {
	obj[2].setSignalLamp(false, false, false, true, false, false);
	obj[3].setSignalLamp(false, false, false, true, false, false);
	obj[0].setSignalLamp(true, false, false, false, false, true);
	obj[1].setSignalLamp(true, false, false, false, false, true);
}
void Handler::FrontAndRearTurnLeft() {
	obj[2].setSignalLamp(false, false, false, false, true, false);
	obj[3].setSignalLamp(false, false, false, false, true, false);
	obj[0].setSignalLamp(true, false, false, false, false, false);
	obj[1].setSignalLamp(true, false, false, false, false, false);
}

void Handler::OrangeLampOn(int opt) {
	switch (opt) {
	case OPT1:
		obj[0].straightSetOrangeLamp();
		obj[1].straightSetOrangeLamp();
		break;

	case OPT2:
		obj[0].turnLeftSetOrangeLamp();
		obj[1].turnLeftSetOrangeLamp();
		break;

	case OPT3:
		obj[2].straightSetOrangeLamp();
		obj[3].straightSetOrangeLamp();
		break;

	case OPT4:
		obj[2].turnLeftSetOrangeLamp();
		obj[3].turnLeftSetOrangeLamp();
		break;
	}
}

void Handler::showAllSignalLamp()
{
	cout << "-------------서쪽 신호등-------------" << endl;
	obj[0].showSignalLamp();
	cout << endl;

	cout << "-------------동쪽 신호등-------------" << endl;
	obj[1].showSignalLamp();
	cout << endl;

	cout << "-------------남쪽 신호등-------------" << endl;
	obj[2].showSignalLamp();
	cout << endl;

	cout << "-------------북쪽 신호등-------------" << endl;
	obj[3].showSignalLamp();
	cout << endl;
}