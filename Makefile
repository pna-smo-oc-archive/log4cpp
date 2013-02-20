LIST=CPU

#relative to the makefile that includes common.mk
EXTRA_SRCVPATH=../../src
EXTRA_INCVPATH=../../include

ifndef QRECURSE
QRECURSE=recurse.mk
ifdef QCONFIG
QRDIR=$(dir $(QCONFIG))
endif
endif
include $(QRDIR)$(QRECURSE)
