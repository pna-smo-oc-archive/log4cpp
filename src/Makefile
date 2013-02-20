LIST=CPU
#MAKEFILE:=Makefile

#relative to makefile that includes common.mk
EXTRA_INCVPATH=../../../include

ifndef QRECURSE
QRECURSE=recurse.mk
ifdef QCONFIG
QRDIR=$(dir $(QCONFIG))
endif
endif
include $(QRDIR)$(QRECURSE)