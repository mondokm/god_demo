# -*-Makefile-*-
#----------------------------------------------------------------------------
#       Make Workspace
#
# $Id$
#
# This file was generated by MPC.  Any changes made directly to
# this file will be lost the next time it is generated.
#
# MPC Command:
# /home/pi/opensplice/bin/mwc.pl -features ospl_os_host_linux=1 -features ospl_os_linux=1 -features ospl_64_bit=0 -value_template lib_modifier= -include /bin/MakeProjectCreator/config -include /bin/MakeProjectCreator/config/TAO -features armv6l_linux=1 -features ospl_arch_armv6l=1 -type make -features isocpp2_cxx11=1 HDE/armv6l.linux/examples/examples_simple.mwc
#
#----------------------------------------------------------------------------


all: SA_Cxx_StreamsThroughput_Types SA_Cxx_StreamsThroughput_Impl SA_Cxx_StreamsThroughput_Publisher SA_Cxx_StreamsThroughput_Subscriber

clean depend generated realclean check-syntax $(CUSTOM_TARGETS):
	@$(MAKE) -f Makefile.SA_Cxx_StreamsThroughput_Types $(@)
	@$(MAKE) -f Makefile.SA_Cxx_StreamsThroughput_Impl $(@)
	@$(MAKE) -f Makefile.SA_Cxx_StreamsThroughput_Publisher $(@)
	@$(MAKE) -f Makefile.SA_Cxx_StreamsThroughput_Subscriber $(@)

.PHONY: SA_Cxx_StreamsThroughput_Types
SA_Cxx_StreamsThroughput_Types:
	@$(MAKE) -f Makefile.SA_Cxx_StreamsThroughput_Types all

.PHONY: SA_Cxx_StreamsThroughput_Impl
SA_Cxx_StreamsThroughput_Impl: SA_Cxx_StreamsThroughput_Types
	@$(MAKE) -f Makefile.SA_Cxx_StreamsThroughput_Impl all

.PHONY: SA_Cxx_StreamsThroughput_Publisher
SA_Cxx_StreamsThroughput_Publisher: SA_Cxx_StreamsThroughput_Impl
	@$(MAKE) -f Makefile.SA_Cxx_StreamsThroughput_Publisher all

.PHONY: SA_Cxx_StreamsThroughput_Subscriber
SA_Cxx_StreamsThroughput_Subscriber: SA_Cxx_StreamsThroughput_Impl
	@$(MAKE) -f Makefile.SA_Cxx_StreamsThroughput_Subscriber all

project_name_list:
	@echo SA_Cxx_StreamsThroughput_Impl
	@echo SA_Cxx_StreamsThroughput_Publisher
	@echo SA_Cxx_StreamsThroughput_Subscriber
	@echo SA_Cxx_StreamsThroughput_Types
