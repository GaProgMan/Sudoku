##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=SudokuRedux
ConfigurationName      :=Debug
WorkspacePath          := "/Users/jamietaylor/Code Projects/Sudoku/SudokuRedux"
ProjectPath            := "/Users/jamietaylor/Code Projects/Sudoku/SudokuRedux"
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
Objects0=$(IntermediateDirectory)/src_main.c$(ObjectSuffix) $(IntermediateDirectory)/src_Matrix.c$(ObjectSuffix) $(IntermediateDirectory)/src_SudokuBoard.c$(ObjectSuffix) $(IntermediateDirectory)/src_Vector3d.c$(ObjectSuffix) 



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
$(IntermediateDirectory)/src_main.c$(ObjectSuffix): src/main.c $(IntermediateDirectory)/src_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/Users/jamietaylor/Code Projects/Sudoku/SudokuRedux/src/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_main.c$(DependSuffix): src/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/src_main.c$(DependSuffix) -MM "src/main.c"

$(IntermediateDirectory)/src_main.c$(PreprocessSuffix): src/main.c
	@$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_main.c$(PreprocessSuffix) "src/main.c"

$(IntermediateDirectory)/src_Matrix.c$(ObjectSuffix): src/Matrix.c $(IntermediateDirectory)/src_Matrix.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/Users/jamietaylor/Code Projects/Sudoku/SudokuRedux/src/Matrix.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Matrix.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Matrix.c$(DependSuffix): src/Matrix.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_Matrix.c$(ObjectSuffix) -MF$(IntermediateDirectory)/src_Matrix.c$(DependSuffix) -MM "src/Matrix.c"

$(IntermediateDirectory)/src_Matrix.c$(PreprocessSuffix): src/Matrix.c
	@$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Matrix.c$(PreprocessSuffix) "src/Matrix.c"

$(IntermediateDirectory)/src_SudokuBoard.c$(ObjectSuffix): src/SudokuBoard.c $(IntermediateDirectory)/src_SudokuBoard.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/Users/jamietaylor/Code Projects/Sudoku/SudokuRedux/src/SudokuBoard.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_SudokuBoard.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_SudokuBoard.c$(DependSuffix): src/SudokuBoard.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_SudokuBoard.c$(ObjectSuffix) -MF$(IntermediateDirectory)/src_SudokuBoard.c$(DependSuffix) -MM "src/SudokuBoard.c"

$(IntermediateDirectory)/src_SudokuBoard.c$(PreprocessSuffix): src/SudokuBoard.c
	@$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_SudokuBoard.c$(PreprocessSuffix) "src/SudokuBoard.c"

$(IntermediateDirectory)/src_Vector3d.c$(ObjectSuffix): src/Vector3d.c $(IntermediateDirectory)/src_Vector3d.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/Users/jamietaylor/Code Projects/Sudoku/SudokuRedux/src/Vector3d.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Vector3d.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Vector3d.c$(DependSuffix): src/Vector3d.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_Vector3d.c$(ObjectSuffix) -MF$(IntermediateDirectory)/src_Vector3d.c$(DependSuffix) -MM "src/Vector3d.c"

$(IntermediateDirectory)/src_Vector3d.c$(PreprocessSuffix): src/Vector3d.c
	@$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Vector3d.c$(PreprocessSuffix) "src/Vector3d.c"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) ./Debug/*$(ObjectSuffix)
	$(RM) ./Debug/*$(DependSuffix)
	$(RM) $(OutputFile)
	$(RM) ".build-debug/SudokuRedux"


