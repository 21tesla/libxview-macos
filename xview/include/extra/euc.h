#ifndef _SYS_EUC_H
#define _SYS_EUC_H
    
#pragma ident   "%Z%%M% %I%     %E% SMI"        /* SVr4.0 1.2   */
  
#ifdef  __cplusplus
extern "C" {
#endif
   
#ifndef NOTASCII
#define SS2     0x008e
#define SS3     0x008f
   
/* NOTE: c of following macros must be the 1st byte of characters */
#define ISASCII(c)      (!((c) & ~0177))
#define NOTASCII(c)     ((c) & ~0177)
#define ISSET2(c)       (((c) & 0x00ff) == SS2)
#define ISSET3(c)       (((c) & 0x00ff) == SS3)
#define ISPRINT(c, wp)  (wp._multibyte && !ISASCII(c) || isprint(c))
#ifndef _EUCWIDTH_T
#define _EUCWIDTH_T
typedef struct {
   short int _eucw1, _eucw2, _eucw3;       /*      EUC width       */
   short int _scrw1, _scrw2, _scrw3;       /*      screen width    */
   short int _pcw;         /*      WIDE_CHAR width */
   char _multibyte;        /*      1=multi-byte, 0=single-byte     */
   } eucwidth_t;
#endif  /* ! _EUCWIDTH_T */
#endif  /* ! NOTASCII */
   
#ifdef  __cplusplus
  }
#endif
 
#endif  /* _SYS_EUC_H */