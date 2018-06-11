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
	//��Ÿ���� ����(����� �������� ��ü 1������ ��������)
public:
	Handler();
	~Handler();

public:
	//�ش� �ð���ŭ ���μ����� �����ȴ�. (��ȣ���� ��������)
	void MySleep(int time);

	/* ���� ������ ���� ��ȣ, ���� ������ ��ȸ�� ��ȣ ~~~~~~~~~~~ */
	void leftAndRightStraight();
	void leftAndRightTurnLeft();
	void FrontAndRearStraight();
	void FrontAndRearTurnLeft();

	/* ��ȣ 12�� ���� �� 3�ʰ� ����� �� ���� */
	void OrangeLampOn(int opt);

	/* ��ȣ���� ���� ��� ������� �������� */
	void showAllSignalLamp();
};