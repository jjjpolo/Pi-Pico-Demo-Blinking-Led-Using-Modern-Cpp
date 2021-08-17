#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include <memory>
#include "Led.h"
#include <iostream>

using namespace std;

int main()
{
	stdio_init_all();

	unique_ptr<Led> myLed (new Led(25,0));

	while (1)
	{	
		puts("Hello, CPP + multiFile + Class + unique_ptr + cout\n");
		cout << "Testing cout" << endl;

		for(int i = 0; i<6; ++i)
		{
			myLed->toggle();
			sleep_ms(1000);
		}

		myLed->demoQuickBlinking();
	}
}