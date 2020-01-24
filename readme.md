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

6. change directory to mbed2_blink...

	cd mbed2_blink
	
7. deploy mbed tools library...
	
	mbed deploy
	
	[mbed] Working path "C:\Users\chrismadlax\Documents\temp\mbed2_blink" (program)
	[mbed] Adding library "mbed" from "https://github.com/ARMmbed/mbed-dev.git" at latest revision in the current branch
	[mbed] Couldn't find build tools in your program. Downloading the mbed 2.0 SDK tools...
	[mbed] Updating the mbed 2.0 SDK tools...


8. set TOOLchain & TARGET , I use LPC1114 boards & GCC_ARM compiler...

	mbed toolchain GCC_ARM

	[mbed] Working path "C:\Users\chrismadlax\Documents\temp\mbed2_blink" (program)
	[mbed] GCC_ARM now set as default toolchain in program "mbed2_blink"

	mbed target LPC1114

	[mbed] Working path "C:\Users\chrismadlax\Documents\temp\mbed2_blink" (program)
	[mbed] LPC1114 now set as default target in program "mbed2_blink"

9. check config set...

	mbed config --list

	[mbed] Working path "C:\Users\chrismadlax\Documents\temp\mbed2_blink" (program)
	[mbed] Global config:
	GCC_ARM_PATH=C:\Program Files (x86)\GNU Tools ARM Embedded\6 2017-q2-update\bin

	[mbed] Local config (C:\Users\chrismadlax\Documents\temp\mbed2_blink):
	TOOLCHAIN=GCC_ARM
	TARGET=LPC1114
	
10. then run mbed compiler...

	mbed compile

	[mbed] Working path "C:\Users\chrismadlax\Documents\temp\mbed2_blink" (program)
	Using targets from C:\Users\chrismadlax\Documents\temp\mbed2_blink\mbed\targets\targets.json
	Building project mbed2_blink (LPC1114, GCC_ARM)
	Scan: mbed2_blink
	Link: mbed2_blink
	Elf2Bin: mbed2_blink
	| Module         |     .text |   .data |    .bss |
	|----------------|-----------|---------|---------|
	| [fill]         |   203(+0) |   0(+0) |   5(+0) |
	| [lib]\c_nano.a |  3569(+0) | 100(+0) |  12(+0) |
	| [lib]\gcc.a    |  1668(+0) |   0(+0) |   0(+0) |
	| [lib]\misc     |   244(+0) |  12(+0) |  28(+0) |
	| main.o         |   225(+0) |   4(+0) |  16(+0) |
	| mbed\drivers   |    74(+0) |   0(+0) |   0(+0) |
	| mbed\hal       |  1601(+0) |   4(+0) |  66(+0) |
	| mbed\platform  |  2624(+0) | 260(+0) | 133(+0) |
	| mbed\targets   |  2190(+0) |   4(+0) |  16(+0) |
	| Subtotals      | 12398(+0) | 384(+0) | 276(+0) |
	Total Static RAM memory (data + bss): 660(+0) bytes
	Total Flash memory (text + data): 12782(+0) bytes
	
	Image: .\BUILD\LPC1114\GCC_ARM\mbed2_blink.bin

11. you get a bin file >> "mbed_blink_OS2only.bin" ,move this file to LPC1114's folder, 
	mbed I/f will automatic update program to LPC1114, then press BL button on boards to run new program.
	
12. you can run makeBIN.bat to compile , bin file will be save to program root path
	
enjoy fun