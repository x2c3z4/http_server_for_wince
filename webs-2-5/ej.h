/*
 *	ej.h -- Ejscript(TM) header
 *
 * Copyright (c) GoAhead Software Inc., 1992-2010. All Rights Reserved.
 *
 *	See the file "license.txt" for information on usage and redistribution
 *
 */

#ifndef _h_EJ
#define _h_EJ 1

/******************************** Description *********************************/

/*
 *	GoAhead Ejscript(TM) header. This defines the Ejscript API and internal
 *	structures.
 */

/********************************* Includes ***********************************/

#include	"uemf.h"

/********************************** Defines ***********************************/

/******************************** Prototypes **********************************/

extern int 		ejArgs(int argc, char_t **argv, char_t *fmt, ...);
extern void		ejSetResult(int eid, char_t *s);
extern int		ejOpenEngine(sym_fd_t variables, sym_fd_t functions);
extern void		ejCloseEngine(int eid);
extern int 		ejSetGlobalFunction(int eid, char_t *name,
                                    int (*fn)(int eid, void *handle, int argc, char_t **argv));
extern void		ejSetVar(int eid, char_t *var, char_t *value);
extern int		ejGetVar(int eid, char_t *var, char_t **value);
extern char_t	*ejEval(int eid, char_t *script, char_t **emsg);

#endif /* _h_EJ */

/*****************************************************************************/

