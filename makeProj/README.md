# MyMake on Bare Metal

*Samples of Code in C/C++ for demostrating purposes of general questions.*
*You can [preview the documentation to see the purpose of the project](https://salvadorz.github.io/embeddedProgramming/)*


## Usage

You can download the project and import as a C Project on Eclipse

### Prerequisites

1.  File > New > Other (Enable the checkbox for Show All Wizards).
1.  C Project (If ask to enable Generic C/C++ GNU Development, it's fine).
1.  Set the Project Name, Project Type: Makefile Project > Empty Project
1.  Other Toolchain
![C Project with Make](https://mcuoneclipse.files.wordpress.com/2012/02/c-project-12-02-2012.png)

1.  Make utility (Codewarrior comes with mingw32-make).
1.  Project > Properties > Build Command: 
```
${system:ECLIPSE_HOME}/../gnu/bin/mingw32-make -j6
```
1.  Files needed
  - Startup file *<installation>\MCU\lib\<familyMCU>\src\startXX.c*
  - Linker file *<installation>\MCU\lib\<familyMCU>\prm*
  - source file e.g. *main.c* with the main function.
  - The makefile itself.
```make
ProjDirPath         := C:/myWorkspace/myProject
CWInstallDirPath    := C:/Freescale/CW MCU v10.2
GnuInstallDirPath   := $(CWInstallDirPath)/gnu/bin
LL := "$(CWInstallDirPath)/MCU/prog/linker"
LLFLAGS :=
CC := "$(CWInstallDirPath)/MCU/prog/<dir_compiler>"
CCFLAGS := -I"$(CWInstallDirPath)/MCU/lib/<familyMCU>/include"

target: dependency list
<tab>commands

# Generic rules: rule how to build an object file from a C file
%.o: %.c
    @echo 'Building file: $<'
    $(CC) $(CCFLAGS) $<
```

### Tips

#### Using Rules
 Using rules for specific files still makes sense as for files which need some special treatment.

```make
# rule how to build an object file from a C file
%.o: %.c
    @echo 'Building file: $<'
    $(CC) $(CCFLAGS) $<
```

#### Targets
 The common case is to have the all target to compile. it's is useful also to have a target for clean. And you can assign this specific targets on Eclipse  with the **Make Target View**.

```make
RM := "$(GnuInstallDirPath)/rm" -f

clean:
    $(RM) *.abs
    $(RM) *.o
    $(RM) *.map
    $(RM) EDOUT
```

#### Separate folders
 Add extra variables OBJ_PATH and SRC_PATH in the makefile and change the options and rules to use it.

```make
ProjDirPath         := C:/myWorkspace/myProject
CWInstallDirPath    := C:/Freescale/CW MCU v10.2
GnuInstallDirPath   := $(CWInstallDirPath)/gnu/bin
OBJ_PATH := obj
SRC_PATH := src
RM := "$(GnuInstallDirPath)/rm" -f
```
***
```make
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
```
### References

1. [GNU Make](http://www.gnu.org/software/make/manual/make.html)

### Warnings

Common error in make files is using **spaces instead of tabs** at the beginning of command lines.

_It's recomendded use the **Show Whitespaces Characters** option_
Also you can use Outline view to spot errors.
