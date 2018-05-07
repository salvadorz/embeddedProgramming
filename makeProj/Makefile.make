ProjDirPath         := C:/myWorkspace/myProject
CWInstallDirPath    := C:/Freescale/CW MCU v10.2
GnuInstallDirPath   := $(CWInstallDirPath)/gnu/bin
OBJ_PATH := obj
SRC_PATH := src
RM := "$(GnuInstallDirPath)/rm" -f
LL := "$(CWInstallDirPath)/MCU/prog/arm-gnu"
LLFLAGS :=
CC := "$(CWInstallDirPath)/MCU/prog/arm-gnu"
CCFLAGS := -I"$(CWInstallDirPath)/MCU/lib/K60/include" -ObjN="$(OBJ_PATH)/%%n.o" -EnvTEXTPATH=obj

all: $(OBJ_PATH)/project.abs
	@echo 'all done!'

$(OBJ_PATH)/project.abs: $(SRC_PATH)/project.prm $(OBJ_PATH)/main.o $(OBJ_PATH)/start.o
	@echo 'Linking file: $<'
	$(LL) $(LLFLAGS) $(SRC_PATH)/project.prm \
	-Add($(OBJ_PATH)/main.o) \
	-Add($(OBJ_PATH)/start.o) \
	-O"$(OBJ_PATH)/project.abs"

# rule how to build an object file from a C file
$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@echo 'Building file: $<'
	$(CC) $(CCFLAGS) $<

clean:
	@echo 'Cleaning generated files...'
	$(RM) $(OBJ_PATH)/*.abs
	$(RM) $(OBJ_PATH)/*.o
	$(RM) $(OBJ_PATH)/*.map
	$(RM) EDOUT
	$(RM) err.log
