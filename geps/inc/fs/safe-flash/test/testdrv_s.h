/****************************************************************************
 *
 *            Copyright (c) 2005-2012 by HCC Embedded
 *
 * This software is copyrighted by and is the sole property of
 * HCC.  All rights, title, ownership, or other interests
 * in the software remain the property of HCC.  This
 * software may only be used in accordance with the corresponding
 * license agreement.  Any unauthorized use, duplication, transmission,
 * distribution, or disclosure of this software is expressly forbidden.
 *
 * This Copyright notice may not be removed or modified without prior
 * written consent of HCC.
 *
 * HCC reserves the right to modify this software without notice.
 *
 * HCC Embedded
 * Budapest 1133
 * Vaci ut 76
 * Hungary
 *
 * Tel:  +36 (1) 450 1302
 * Fax:  +36 (1) 450 1303
 * http: www.hcc-embedded.com
 * email: info@hcc-embedded.com
 *
 ***************************************************************************/

#ifndef _TESTDRV_S_H_
#define _TESTDRV_S_H_

#include "fs/version/ver_safe.h"
#if VER_SAFE_MAJOR != 4
 #error "VER_SAFE_MAJOR invalid"
#endif
#if VER_SAFE_MINOR != 2
 #error "VER_SAFE_MINOR invalid"
#endif

#ifdef __cplusplus
extern "C" {
#endif


/****************************************************************************
 *
 *  Exports
 *
 ***************************************************************************/

extern int f_dotestdrv ( FS_PHYGETID phyfunc );


/****************************************************************************
 *
 *	Imports
 *
 ***************************************************************************/

extern void _f_dump ( char * s );                  /* use to display text */
extern int _f_result ( int testnum, long result ); /* use to display test result */

#ifdef __cplusplus
}
#endif


/****************************************************************************
 *
 * end of testdrv_s.h
 *
 ***************************************************************************/

#endif  /* _TESTDRV_S_H_ */

