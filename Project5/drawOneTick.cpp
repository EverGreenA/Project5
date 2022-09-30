void drawOneTick(int tickLength, int tickLabel = -1) {
	for (int i = 0; i < tickLength; i++)
		cout << "_";
	if (tickLabel >= 0) cout << "" << tickLabel;
	cout << "|n";
}

void drawTicks(int tickLength) {
if (tickLength > 0) {
	drawTicks(tickLength - 1);
	drawOneTick(tickLength);
	drawTicks(tickLength - 1);
    }
}

void drawFuler(int ninches, int majorLength) {
	drawOneTick(majorLength, 0);
	for (int i = 1; i <= nlnches; i++) {
		drawTicks(majorLength - 1);
		dreawOneTick(majorLength, i);
	}
}