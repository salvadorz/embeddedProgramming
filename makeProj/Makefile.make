ProjDirPath         := C:/myWorkspace/myProject
CWInstallDirPath    := C:/Freescale/CW MCU v10.2
GnuInstallDirPath   := $(CWInstallDirPath)/gnu/bin
LL := "$(CWInstallDirPath)/MCU/prog/arm-gnu"
LLFLAGS :=
CC := "$(CWInstallDirPath)/MCU/prog/arm-gnu"
CCFLAGS := -I"$(CWInstallDirPath)/MCU/lib/K60/include"

all: project.abs
	@echo 'all done!'

project.abs: project.prm main.o start.o
	$(LL) $(LLFLAGS) project.prm \
	-Add(main.o) \
	-Add(start.o) \
	-O"project.abs"

start.o: start.c
	$(CC) $(CCFLAGS) start.c

main.o: main.c
	$(CC) $(CCFLAGS) main.c