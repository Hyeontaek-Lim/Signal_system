#include <Windows.h> //	for sleep()
#include <stdio.h>
#include <stdlib.h>

#include "Handler.h"

int main(void) {
	Handler handler;

	while (true) {
		handler.leftAndRightStraight();
		handler.showAllSignalLamp();
		handler.MySleep(12000);
		handler.OrangeLampOn(1);
		handler.showAllSignalLamp();
		handler.MySleep(3000);

		handler.leftAndRightTurnLeft();
		handler.showAllSignalLamp();
		handler.MySleep(12000);
		handler.OrangeLampOn(2);
		handler.showAllSignalLamp();
		handler.MySleep(3000);

		handler.FrontAndRearStraight();
		handler.showAllSignalLamp();
		handler.MySleep(12000);
		handler.OrangeLampOn(3);
		handler.showAllSignalLamp();
		handler.MySleep(3000);

		handler.FrontAndRearTurnLeft();
		handler.showAllSignalLamp();
		handler.MySleep(12000);
		handler.OrangeLampOn(4);
		handler.showAllSignalLamp();
		handler.MySleep(3000);
	}
}