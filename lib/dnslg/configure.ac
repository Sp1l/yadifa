dnl ############################################################################
dnl 
dnl Copyright (c) 2011-2016, EURid. All rights reserved.
dnl The YADIFA TM software product is provided under the BSD 3-clause license:
dnl  
dnl Redistribution and use in source and binary forms, with or without 
dnl modification, are permitted provided that the following conditions
dnl are met:
dnl 
dnl        * Redistributions of source code must retain the above copyright 
dnl          notice, this list of conditions and the following disclaimer.
dnl        * Redistributions in binary form must reproduce the above copyright
dnl          notice, this list of conditions and the following disclaimer in
dnl          the documentation and/or other materials provided with the 
dnl          distribution.
dnl        * Neither the name of EURid nor the names of its contributors may be
dnl          used to endorse or promote products derived from this software 
dnl          without specific prior written permission.
dnl 
dnl THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
dnl AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE 
dnl IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
dnl ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
dnl LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR 
dnl CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF 
dnl SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
dnl INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN 
dnl CONTRACT, STRICT LIABILITY,OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
dnl ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
dnl POSSIBILITY OF SUCH DAMAGE.
dnl 
dnl ############################################################################

AC_PREREQ(2.61)
AC_REVISION([$Revision: 6237 $])

AC_INIT([dnslg],m4_esyscmd([svn info 2> /dev/null | grep 'Last Changed Rev: ' | sed -re 's/.*: (.*)/Revision: \1 $/' -e 's/^/$/' >> revision.txt;echo $(cat VERSION)-$(grep \$Revision: * | sed -e 's/^.*\$Revision: *//' -e 's/\$.*//' -e 's/ *//' | sort -n| /usr/bin/tail -1 | tr -d '\n') | tr -d '\n']),[bugreport@yadifa.eu])

echo
echo
echo "DNSLG START"
echo "-----------"
echo
echo

m4_include([../../m4/eurid.m4])
m4_include([../../m4/yadifa.m4])

AC_CONFIG_AUX_DIR([.])
AM_INIT_AUTOMAKE([subdir-objects -Wall -Werror tar-pax])
AC_CONFIG_HEADER([include/dnslg/dnslg-config.h])

AC_CONFIG_MACRO_DIR([m4])

dnl AC_DEFUN([SYSCONF], [/$prefix/PACKAGE/PACKAGE.conf])

AC_CANONICAL_BUILD

dnl Checks for programs.
dnl m4_ifdef([AM_PROG_AR], [AM_PROG_AR])
AM_PROG_AR

AC_PROG_CC
AM_PROG_CC_C_O

LT_INIT([disable-shared])

AC_DARWIN_LIBTOOL
AC_PROG_LIBTOOL

dnl Checks for libraries.
AC_CHECK_LIB([c], [printf])
AC_CHECK_LIB([pthread], [pthread_mutex_init])

dnl Checks for header files.
AC_HEADER_STDC
AC_CHECK_HEADERS([arpa/inet.h fcntl.h netinet/in.h stdlib.h string.h sys/time.h syslog.h unistd.h])
dnl Check for Darwin or Linux
AC_CHECK_HEADERS([linux/limits.h sys/syslimits.h i386/limits.h ppc/limits.h])
dnl Check for Darwin or Linux
AC_CHECK_HEADERS([sys/types.h i386/types.h])
dnl
AC_CHECK_HEADERS([sys/socket.h])

dnl Checks for typedefs, structures, and compiler characteristics.
AC_C_CONST
AC_C_BIGENDIAN
AC_TYPE_MODE_T
AC_TYPE_PID_T
AC_TYPE_SIZE_T
AC_STRUCT_TM
dnl AC_PROG_RANLIB
AC_CHECK_TYPES(uint64_t)
AC_CHECK_TYPES(int64_t) 
AC_CHECK_TYPES(long long)
AC_CHECK_TYPES(u_char)

AC_SYS_LARGEFILE

AC_COMPILER_CHECK
AC_PTHREAD_SPINLOCK_CHECK
AC_PTHREAD_SETNAME_NP_CHECK

AC_YADIFA_FEATURES

AC_YADIFA_ENABLE_DNSCORE

AC_YADIFA_ADD_LIBS

AC_CHECK_LTO

CPPFLAGS="$CPPFLAGS -DDNSLG_BUILD"

dnl option: DEFAULT_ASSUMED_CPU_COUNT 2

dnl Checks for library functions.
AC_FUNC_FORK

dnl AC_FUNC_MALLOC does weird things:
dnl	http://sources.redhat.com/ml/automake/2003-05/msg00023.html
dnl	http://www.mail-archive.com/autoconf@gnu.org/msg08935.html
dnl AC_FUNC_MALLOC goals:
dnl malloc(0) will not return NULL
dnl realloc(NULL,x) will not crash (occurs on rare systems)
dnl
dnl AC_FUNC_MALLOC

AC_FUNC_SELECT_ARGTYPES
AC_TYPE_SIGNAL
AC_FUNC_STAT
AC_CHECK_FUNCS([bzero memset select socket])

AC_CONFIG_FILES([Makefile])

dnl AC_YADIFA_SUMMARY

AC_OUTPUT

dnl ----------------------------------------------------------------------------

AC_MAKE_BUILDINFO

echo
echo "SUMMARY for DNSLG:"
echo "------------------"
echo
echo "CC .................................. : $CC"
echo "LD .................................. : $LD"
echo "AR .................................. : $AR"
echo "CFLAGS .............................. : $CFLAGS"
echo "CPPFLAGS ............................ : $CPPFLAGS"
echo "LDFLAGS ............................. : $LDFLAGS"
echo "LIBS ................................ : $LIBS"

if [[ ! "${OPENSSL}" = "" ]]
then
	echo "Using OpenSLL from .................. : ${OPENSSL}"
fi

echo
echo "Install prefix ...................... : $prefix"
echo
echo
echo "DNSLG DONE"
echo "----------"
echo
echo

