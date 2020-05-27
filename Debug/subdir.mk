################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../00_src.cpp \
../01_class_concept&declare.cpp \
../02_access_control.cpp \
../03_this_pointer.cpp \
../04_derived_class.cpp 

OBJS += \
./00_src.o \
./01_class_concept&declare.o \
./02_access_control.o \
./03_this_pointer.o \
./04_derived_class.o 

CPP_DEPS += \
./00_src.d \
./01_class_concept&declare.d \
./02_access_control.d \
./03_this_pointer.d \
./04_derived_class.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


