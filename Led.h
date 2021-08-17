#pragma once

class Led
{
	private:
		const uint ledPin = 0;
		int state = 0;
	
	public:
		//Constructor
		Led(const uint, int);

		//Change LED state (no parameter needed)
		void toggle();

		//A demo animation for the LED
		void demoQuickBlinking();

		//Destructor
		~Led();
};