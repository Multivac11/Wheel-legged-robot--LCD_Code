#ifndef __FONTS_H
#define __FONTS_H

#include <stdint.h>


// ������ؽṹ����
typedef struct _pFont
{    
	const uint8_t 		*pTable;  		//	��ģ�����ַ
	uint16_t 			Width; 		 	//	�����ַ�����ģ����
	uint16_t 			Height; 			//	�����ַ�����ģ����
	uint16_t 			Sizes;	 		//	�����ַ�����ģ���ݸ���
	uint16_t				Table_Rows;		// �ò���ֻ�к�����ģ�õ�����ʾ��ά������д�С
} pFONT;

/*------------------------------------ �������� ---------------------------------------------*/

extern	pFONT	CH_Font12 ;		//	1212����
extern	pFONT	CH_Font16 ;    //	1616����
extern	pFONT	CH_Font20 ;    //	2020����
extern	pFONT	CH_Font24 ;    //	2424����
extern	pFONT	CH_Font32 ;    //	3232����

/*------------------------------------ ASCII���� ---------------------------------------------*/
extern pFONT Font400;	// 400200 ����
extern pFONT Font160;	// 16080 ����
extern pFONT Font32;	// 3216 ����
extern pFONT Font24;	// 2412 ����
extern pFONT Font20; // 2010 ����
extern pFONT Font16; // 1608 ����
extern pFONT Font12; // 1206 ����

#endif 
 