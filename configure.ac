#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([jmath], [1.0], [joel@joelburton.com])
AC_CONFIG_SRCDIR([src])
AC_CONFIG_HEADERS([config.h])
AC_CHECK_PROG(PKG_CONFIG, pkg-config, pkg-config)
if test "x$PKG_CONFIG" = x; then
	    AC_MSG_ERROR([Please install pkg-config])
fi
CFLAGS="$CFLAGS `pkg-config --cflags glib-2.0` -g -O3 -Wall"
AC_CHECK_LIB([glib-2.0],[g_free])
AC_CHECK_HEADER(glib-2.0/glib.h,, AC_MSG_ERROR([Please install libglib development package.]))

# Checks for programs.
AC_PROG_CC

# Checks for libraries.

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AM_INIT_AUTOMAKE
AC_CONFIG_FILES([Makefile src/Makefile])
AC_OUTPUT
