PROJECT = awesomesauce
BUILD_DIR = bin

SHARED_DIR = ../my-common-code
CFILES = main.c basic_io.c
CFILES += api.c
AFILES += api-asm.S

CFLAGS += -DLITTLE_BIT=200000
V ?= 1

# TODO - you will need to edit these two lines!
DEVICE=stm32l432kc
# Default st_nucleo_l4.cfg from openocd doesn't work, see comment in custom one.
#OOCD_FILE = board/st_nucleo_l4.cfg
OOCD_FILE = custom_st_nucleo_l4.cfg

# You shouldn't have to edit anything below here.
VPATH += $(SHARED_DIR)
INCLUDES += $(patsubst %,-I%, . $(SHARED_DIR))
OPENCM3_DIR=../libopencm3

include $(OPENCM3_DIR)/mk/genlink-config.mk
include ../rules.mk
include $(OPENCM3_DIR)/mk/genlink-rules.mk

.PHONY: debug
debug:
	openocd -f custom_st_nucleo_l4.cfg -c "init; reset halt; arm semihosting enable; resume"
