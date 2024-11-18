/*
 * $Source: /cvsroot/f2j/f2j/src/f2jmem.h,v $
 * $Revision: 1.6 $
 * $Date: 2004/02/04 06:25:43 $
 * $Author: keithseymour $
 */


#ifndef F2JMEM_H
#define F2JMEM_H

#include"f2j.h"

void
  alloc_error(size_t),
  f2jfree(void *, size_t),
  free_var_info(struct var_info *),
  * f2jalloc(size_t),
  * f2jcalloc(size_t, size_t),
  * f2jrealloc(void *, size_t),
  free_ast_node(AST *);

#endif
