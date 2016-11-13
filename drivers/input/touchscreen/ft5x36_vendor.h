/*
 focaltelech tp firmware update infomations
 
 Date           Author       Module    vendor id    Old_ver    New_ver
 20150824   shihuijun     DIJING          0X67       NULL       0x0a
 20150907   shihuijun     DIJING          0X67       0x0a       0x0b 
 20150914   pangle        DIJING          0X67       0x11       0x12
 20150923   pangle        DIJING          0X67       0x12       0x13
 20151022   pangle        DIJING          0X67       0x13       0x14
 20151105   pangle        DIJING          0X67       0x14       0x15
 20151109   pangle        DIJING          0X67       0x15       0x16
 20151120   pangle        DIJING          0X67       0x16       0x19
 20151201   pangle        DIJING          0X67       0x19       0x20
 */
#ifndef __FOCALTECH_VENDOR_H__
#define __FOCALTECH_VENDOR_H__

#include "ft5x36_vendor_id.h"

//added by shj for QL613 fw upgrade at 20150811 begin
#if defined(CONFIG_QL613_BASE)
static unsigned char FT6X36_FIRMWARE0x67_DJ[] = {
#if defined(CONFIG_QL613_BASE)
	#include "ft5x36_firmware/QL613_TP-LINK_FT6336_DJ_0x67_Ver20_20151201.h"
#endif
}; 
#endif

//added by shj for QL613 fw upgrade at 20150710 end


#endif
=======
/*
 focaltelech tp firmware update infomations
 
 Date           Author       Module    vendor id    Old_ver    New_ver
 2015.01.19    pangle     toptouch     0xA0         null         0x0C
 2015.04.09    pangle     toptouch     0xA0         0x0C         0x0D
 2015.04.09    pangle     toptouch     0xA0         0x0D         0x0F
 2015.05.08    pangle     toptouch     0xA0         0x0F          0x10
 2015.05.08    pangle     toptouch     0xA0         0x10          0x11
 2015.06.26    pangle     toptouch     0xA0         0x11          0x14
 2016.04.05    shihuijun  toptouch     0xA0         0x14          0x15
 */
#ifndef __FOCALTECH_VENDOR_H__
#define __FOCALTECH_VENDOR_H__

#include "ft5x36_vendor_id.h"

//added by pangle for 702 fw upgrade at 20150303 begin
#if defined(CONFIG_Y560_U23_BASE) || defined(CONFIG_Y560_L01_BASE)|| defined(CONFIG_Y560_L02_BASE)
static unsigned char FT6X36_FIRMWARE0xA0_TOPTOUCH[] = {
#if defined(CONFIG_Y560_U23_BASE) || defined(CONFIG_Y560_L01_BASE)|| defined(CONFIG_Y560_L02_BASE)
	//#include "ft5x36_firmware/QW702_QL703_huawei_y560_FT6336_0xA0_Ver0x0B_20150309.h"
	//#include "ft5x36_firmware/QW702_QL703_huawei_y560_FT6336_0xA0_Ver0x0D_20150409.h"
	//#include "ft5x36_firmware/QW702_QL703_huawei_y560_FT6336_0xA0_Ver0x0F_20150413.h"
	//#include "ft5x36_firmware/QW702_QL703_huawei_y560_FT6336_0xA0_Ver0x10_20150508.h"
	//#include "ft5x36_firmware/QW702_QL703_huawei_y560_FT6336_0xA0_Ver0x11_20150512.h"
	//#include "ft5x36_firmware/QW702_QL703_huawei_y560_FT6336_0xA0_Ver0x12_20150519.h"
	//#include "ft5x36_firmware/QW702_QL703_huawei_y560_FT6336_0xA0_Ver0x14_20150608.h"
	#include "ft5x36_firmware/QW702_QL703_huawei_y560_FT6336_0xA0_Ver0x15_20160405.h"
#endif
}; 
#endif
//added by pangle for 702 fw upgrade at 20150303 begin



#endif
>>>>>>> 77c6e77f178876ab80ee9ae8288ae78a753cf3d3
