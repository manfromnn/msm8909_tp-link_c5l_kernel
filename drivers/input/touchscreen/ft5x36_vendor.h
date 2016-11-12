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
