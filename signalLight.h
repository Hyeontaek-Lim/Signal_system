#include <iostream>
#include "switchControl.h"

using namespace std;

class signalLight
{
public:
	switchControl redSignal;	//빨간불
	switchControl orangeSignal;
	switchControl greenSignal;
	switchControl straight;		//직진
	switchControl turnLeft;		//좌회전
	switchControl cross;
public:
	signalLight();
	~signalLight();

public:
	/* 신호등 점등 설정 */
	void setSignalLamp(bool redSignal, bool orangeSignal, bool greenSignal, bool straight, bool turnLeft, bool cross);
	
	/* 직진신호와 좌회전 신호에 따른 주황색 램프 설정 */
	void straightSetOrangeLamp();
	void turnLeftSetOrangeLamp();

	/* 신호등 상태 보여줌 */
	void showSignalLamp();
};