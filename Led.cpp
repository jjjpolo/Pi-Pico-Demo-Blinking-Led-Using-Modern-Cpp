#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include <memory>
#include "Led.h"
#include <iostream>

using namespace std;
	
Led::Led(const uint pin, int initialState):
ledPin(pin),
state(initialState)
{
    cout<<"Led::Led(int,int)\n";
    gpio_init(ledPin);
    gpio_set_dir(ledPin, GPIO_OUT);
    gpio_put(ledPin, state);
}

void Led::toggle()
{
    cout<<"Led::togle(void)\n";
    state =! state;
    gpio_put(ledPin, state);
}

void Led::demoQuickBlinking()
{
    cout<<"Led::demoQuickBlinking(void)\n";
    for(int i = 0; i<3; ++i)
    {
        this->toggle();
        sleep_ms(250);
    }
}

Led::~Led()
{
    cout<<"Led::~Led()\n";
}