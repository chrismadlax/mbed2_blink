@echo on
mbed compile
copy .\BUILD\LPC1114\GCC_ARM\*.bin .\ /Y
copy .\*.bin E:\ /Y

