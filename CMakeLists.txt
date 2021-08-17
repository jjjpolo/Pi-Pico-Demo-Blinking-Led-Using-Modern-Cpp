cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)

project(demoModernBlinkingLED C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

add_executable(demoModernBlinkingLED
	main.cpp
	Led.h
	Led.cpp
	)

target_link_libraries(demoModernBlinkingLED pico_stdlib)

pico_enable_stdio_usb(demoModernBlinkingLED 1)
pico_enable_stdio_uart(demoModernBlinkingLED 1)

pico_add_extra_outputs(demoModernBlinkingLED)