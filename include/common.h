/****************************************************************************************************/
/**
\file       common.h
\brief      Variable types and common macros
\author     Salvador Zendejas
\version    1.0
\date       09/02/2017
*/
/****************************************************************************************************/


#ifndef COMMON_H_
#define COMMON_H_

/*****************************************************************************************************
* Include files
*****************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

/*****************************************************************************************************
* Declaration of project wide TYPES
*****************************************************************************************************/
typedef volatile unsigned char 	vuint8;	/*unsigned  8 bit definition */
typedef volatile unsigned short vuint16;/*unsigned 16 bit definition */
typedef volatile unsigned int	vuint32;/*unsigned 32 bit definition */
typedef volatile unsigned long	vuint64;/*unsigned 64 bit definition */

typedef volatile signed char	vsint8;	/*signed  8 bit definition */
typedef volatile signed short 	vsint16;/*signed 16 bit definition */
typedef volatile signed int		vsint32;/*signed 32 bit definition */
typedef volatile signed long 	vsint64;/*signed 64 bit definition */

typedef unsigned char 		uint8;	/*unsigned  8 bit definition */
typedef unsigned short int	uint16;	/*unsigned 16 bit definition */
typedef unsigned int		uint32;	/*unsigned 32 bit definition */
typedef unsigned long int	uint64;	/*unsigned 64 bit definition */

typedef signed char			sint8;	/*signed  8 bit definition */
typedef signed short int	sint16;	/*signed 16 bit definition */
typedef signed int			sint32;	/*signed 32 bit definition */
typedef signed long int		sint64;	/*signed 64 bit definition */

typedef float				float32;
typedef double				float64;
typedef long double			float128;

/*type used for callback function*/
	typedef  void  ( * tCallbackFunction )( void  );
	typedef  void  ( * tPtr_to_function  )( void  );

/*****************************************************************************************************
* Definition of module wide MACROs / #DEFINE-CONSTANTs
*****************************************************************************************************/

/* Common Constants */
#ifndef ON
	#define    ON     1u
#endif

#ifndef OFF
	#define    OFF    0u
#endif

#ifndef TRUE
	#define    TRUE    1u
#endif

#ifndef FALSE
	#define    FALSE    0u
#endif

#ifndef PASS
	#define    PASS    0u
#endif

#ifndef FAIL
	#define    FAIL    1u
#endif

#ifndef SET
	#define    SET    1u
#endif

#ifndef CLEAR
	#define    CLEAR    0u
#endif

#ifndef YES
	#define    YES    1u
#endif

#ifndef NO
	#define    NO     0u
#endif

#ifndef DISABLED
	#define 	 DISABLED  0u
#endif

#ifndef ENABLE
	#define 	 ENABLE 1u
#endif

#ifndef NULL
  #define    NULL    ( ( void * ) 0 )
#endif

//#define _DEBUG



#endif /* COMMON_H_ */
