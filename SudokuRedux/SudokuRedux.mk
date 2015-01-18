##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=SudokuRedux
ConfigurationName      :=Debug
WorkspacePath          := "/Users/jamietaylor/Code Projects/SudokuRedux"
ProjectPath            := "/Users/jamietaylor/Code Projects/SudokuRedux"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=GaProgMan
Date                   :=2015-01-18
CodeLitePath           :="/Users/jamietaylor/Library/Application Support/codelite"
LinkerName             :=/usr/bin/g++ 
SharedObjectLinkerName :=/usr/bin/g++ -dynamiclib -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="SudokuRedux.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++ 
CC       := /usr/bin/gcc 
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as 


##
## User defined environment variables
##
CodeLiteDir:=/Applications/codelite.app/Contents/SharedSupport/
Objects0=$(IntermediateDirectory)/main.c$(ObjectSuffix) $(IntermediateDirectory)/include_Vector3d.c$(ObjectSuffix) $(IntermediateDirectory)/include_Matrix.c$(ObjectSuffix) $(IntermediateDirectory)/include_SudokuBoard.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.c$(ObjectSuffix): main.c $(IntermediateDirectory)/main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/Users/jamietaylor/Code Projects/SudokuRedux/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.c$(DependSuffix): main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/main.c$(DependSuffix) -MM "main.c"

$(IntermediateDirectory)/main.c$(PreprocessSuffix): main.c
	@$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.c$(PreprocessSuffix) "main.c"

$(IntermediateDirectory)/include_Vector3d.c$(ObjectSuffix): include/Vector3d.c $(IntermediateDirectory)/include_Vector3d.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/Users/jamietaylor/Code Projects/SudokuRedux/include/Vector3d.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/include_Vector3d.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/include_Vector3d.c$(DependSuffix): include/Vector3d.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/include_Vector3d.c$(ObjectSuffix) -MF$(IntermediateDirectory)/include_Vector3d.c$(DependSuffix) -MM "include/Vector3d.c"

$(IntermediateDirectory)/include_Vector3d.c$(PreprocessSuffix): include/Vector3d.c
	@$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/include_Vector3d.c$(PreprocessSuffix) "include/Vector3d.c"

$(IntermediateDirectory)/include_Matrix.c$(ObjectSuffix): include/Matrix.c $(IntermediateDirectory)/include_Matrix.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/Users/jamietaylor/Code Projects/SudokuRedux/include/Matrix.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/include_Matrix.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/include_Matrix.c$(DependSuffix): include/Matrix.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/include_Matrix.c$(ObjectSuffix) -MF$(IntermediateDirectory)/include_Matrix.c$(DependSuffix) -MM "include/Matrix.c"

$(IntermediateDirectory)/include_Matrix.c$(PreprocessSuffix): include/Matrix.c
	@$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/include_Matrix.c$(PreprocessSuffix) "include/Matrix.c"

$(IntermediateDirectory)/include_SudokuBoard.c$(ObjectSuffix): include/SudokuBoard.c $(IntermediateDirectory)/include_SudokuBoard.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/Users/jamietaylor/Code Projects/SudokuRedux/include/SudokuBoard.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/include_SudokuBoard.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/include_SudokuBoard.c$(DependSuffix): include/SudokuBoard.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/include_SudokuBoard.c$(ObjectSuffix) -MF$(IntermediateDirectory)/include_SudokuBoard.c$(DependSuffix) -MM "include/SudokuBoard.c"

$(IntermediateDirectory)/include_SudokuBoard.c$(PreprocessSuffix): include/SudokuBoard.c
	@$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/include_SudokuBoard.c$(PreprocessSuffix) "include/SudokuBoard.c"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) ./Debug/*$(ObjectSuffix)
	$(RM) ./Debug/*$(DependSuffix)
	$(RM) $(OutputFile)
	$(RM) ".build-debug/SudokuRedux"


