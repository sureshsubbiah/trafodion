#######################################################################
# @@@ START COPYRIGHT @@@
#
# (C) Copyright 2007-2015 Hewlett-Packard Development Company, L.P.
#
#  Licensed under the Apache License, Version 2.0 (the "License");
#  you may not use this file except in compliance with the License.
#  You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
#  Unless required by applicable law or agreed to in writing, software
#  distributed under the License is distributed on an "AS IS" BASIS,
#  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#  See the License for the specific language governing permissions and
#  limitations under the License.
#
# @@@ END COPYRIGHT @@@
#######################################################################

CPPSRC := CharSetConstants.cpp \
	Define.cpp \
	ExpConvMxcs.cpp \
	Formatter.cpp \
	immudefs.cpp \
	InputStmt.cpp \
	Log.cpp \
	MsgCat.cpp \
	Obey.cpp \
	Param.cpp \
	Prepare.cpp \
	ShellCmd.cpp \
	SqlciCmd.cpp \
	SqlciEnv.cpp \
	SqlciError.cpp \
	SqlciHelp.cpp \
	SqlciNode.cpp \
	SqlciParser.cpp \
	SqlciReset.cpp \
	SqlciRWCmd.cpp \
	SqlciCSCmd.cpp \
	SqlciShow.cpp \
	SqlciStats.cpp \
	SqlciStmts.cpp \
	SqlciUsage.cpp \
	SqlciUtil.cpp \
	SqlCmd.cpp \
	UtilInt.cpp \
	UtilMsg.cpp \
	sqlclicmd.cpp


YINC := tdm_sqlmxmsg_intl

CPPSRC += SqlciRWSimulator.cpp \
	SqlciCSSimulator.cpp

DEFS += -DSQLCLI_LIB -DCLI_DLL -D_UNICODE -DCOPYRIGHT_VERSION_H=\"$(TRAFODION_VER)\"

CPPSRC += vers_libsqlcilib.cpp


YSRC := sqlci_yacc.y
LSRC := sqlci_lex.ll
YACC_VAR_PREFIX := sqlci
LEX_PREFIX := sqlci

SRCPATH := sqlci exp

$(TARGOBJDIR)/$(LEX_PREFIX)/sqlci_lex.$(OBJSUFFIX) : $(TARGOBJDIR)/sqlci_yacc.h
$(TARGOBJDIR)/SqlCmd.$(OBJSUFFIX): tdm_sqlmxmsg_intl/$(TARGTYPE)/$(ARCHBITS)/$(FLAVOR)/sqlmxmsg_msg.h
$(TARGOBJDIR)/SqlciEnv.$(OBJSUFFIX): tdm_sqlmxmsg_intl/$(TARGTYPE)/$(ARCHBITS)/$(FLAVOR)/sqlmxmsg_msg.h
