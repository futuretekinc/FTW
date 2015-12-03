/*
 * wpa_supplicant/hostapd - Default include files
 * Copyright (c) 2005-2006, Jouni Malinen <j@w1.fi>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * Alternatively, this software may be distributed under the terms of BSD
 * license.
 *
 * See README and COPYING for more details.
 *
 * This header file is included into all C files so that commonly used header
 * files can be selected with OS specific ifdef blocks in one place instead of
 * having to have OS/C library specific selection in many files.
 */

#ifndef INCLUDES_H
#define INCLUDES_H
#define CONFIG_TI_COMPILER //TODO GAINSPAN
/* Include possible build time configuration before including anything else */
#include "supplicant/utils/build_config.h"

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

#ifndef _WIN32_WCE
#ifndef CONFIG_TI_COMPILER
#include <signal.h>
#include <sys/types.h>
#endif /* CONFIG_TI_COMPILER */
//#include <errno.h> GAINSPAN COMMENTED
#endif /* _WIN32_WCE */
#include <ctype.h>
// GAINSPAN - time.h is available in IAR 
#include <time.h> //GAINSPAN COMMENTED
#ifndef __time_t_defined
//typedef unsigned long       time_t; /*GAINSPAN COMMENTED*/
#endif
#if 0
//#include <time.h> GAINSPAN COMMENTED
#ifndef OS_UVEL
#ifndef __time_t_defined
typedef unsigned long       time_t;
#endif
#endif
#endif

#ifndef CONFIG_TI_COMPILER
#ifndef _MSC_VER
//GAINSPAN #include <unistd.h>
#endif /* _MSC_VER */
#endif /* CONFIG_TI_COMPILER */

#ifndef CONFIG_NATIVE_WINDOWS
#ifndef CONFIG_TI_COMPILER
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#ifndef __vxworks
#ifndef __SYMBIAN32__
#include <sys/uio.h>
#endif /* __SYMBIAN32__ */
#include <sys/time.h>
#endif /* __vxworks */
#endif /* CONFIG_TI_COMPILER */
#endif /* CONFIG_NATIVE_WINDOWS */

#endif /* INCLUDES_H */
