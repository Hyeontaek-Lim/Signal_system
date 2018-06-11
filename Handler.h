#include <Windows.h> //	for sleep()
#include <stdio.h>
#include <stdlib.h>
#include "signalLight.h"

typedef enum {
	OPT1 = 1,
	OPT2 = 2,
	OPT3 = 3,
	OPT4 = 4
}OPTTION;

class Handler {
private:
	signalLight obj[4];
	//사거리라고 가정(가운데를 기준으로 객체 1번부터 서동남북)
public:
	Handler();
	~Handler();

public:
	//해당 시간만큼 프로세스가 정지된다. (신호등의 유지목적)
	void MySleep(int time);

	/* 왼쪽 오른쪽 직진 신호, 왼쪽 오른쪽 좌회전 신호 ~~~~~~~~~~~ */
	void leftAndRightStraight();
	void leftAndRightTurnLeft();
	void FrontAndRearStraight();
	void FrontAndRearTurnLeft();

	/* 신호 12초 받은 후 3초간 노란색 불 점등 */
	void OrangeLampOn(int opt);

	/* 신호등의 상태 출력 순서대로 서동남북 */
	void showAllSignalLamp();
};