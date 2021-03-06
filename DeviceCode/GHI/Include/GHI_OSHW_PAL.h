////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Copyright (c) GHI Electronics, LLC.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef _GHI_OSHW_PAL_H_
#define _GHI_OSHW_PAL_H_

#include <tinyhal.h>

typedef UINT32 OSHW_PAL_ERROR;

OSHW_PAL_ERROR OSHW_PAL_Bitmap_ConvertBPP(BYTE* bimap, INT32 bimapSize, BYTE* output, INT32 outputSize, BYTE bpp);

#endif
