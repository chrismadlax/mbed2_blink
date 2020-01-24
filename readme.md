make mbed offline development environment use mbed-CLI

1. download & install mbed-cli tool from...

	https://github.com/ARMmbed/mbed-cli-windows-installer/releases

2. upgrade python pip manager...

	python -m pip install --upgrade pip

3. make workspace directory...

	ex: "C:\Users\<username>\Documents\mbed2"

4. set GNU ARM compiler path in mbed global value...

	mbed config -G GCC_ARM_PATH "C:\Program Files (x86)\GNU Tools ARM Embedded\6 2017-q2-update\bin"
	
5. clone "mbed2_blink" repository...

	git clone https://github.com/chrismadlax/mbed2_blink.git

6. change directory to mbed_blink_OS2only...

	cd mbed2_blink
	
7. deploy mbed tools library...
	
	mbed deploy

8. set TOOLchain & TARGET , I use LPC1114 boards & GCC_ARM compiler...

	mbed toolchain GCC_ARM

	mbed target LPC1114

9. check config set...

	mbed config --list
	
10. then run mbed compiler...

	mbed compile

11. you get a bin file >> "mbed_blink_OS2only.bin" ,move this file to LPC1114's folder, 
	mbed I/f will automatic update program to LPC1114, then press BL button on boards to run new program.
	
12. you can run makeBIN.bat to compile , bin file will be save to program root path
	
enjoy fun