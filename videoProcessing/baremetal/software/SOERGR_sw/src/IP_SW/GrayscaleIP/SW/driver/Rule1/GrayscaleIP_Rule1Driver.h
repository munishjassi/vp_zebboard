// this driver corresponds to Grayscale IP configuration corresponding to GRIP Rule 1 i.e Grayscale IP integrated with AXI-VDMA 
// it is generated by modifying the auto-generated template


#ifndef __GRAYSCALEIP_RULE1_DRIVER_H__
#define __GRAYSCALEIP_RULE1_DRIVER_H__


#include "GrayscaleIP_VDMA_Driver.h"
#include "xscugic.h"


#define bool unsigned char

// all the hardware related info needed by the driver functions should be provided in this struct
typedef struct {
    unsigned int baseaddr;
    GRAYSCALEIP_VDMADriverInstance vdmaDriver;
    unsigned int intr_id;
} GrayscaleIPRule1DriverInstance;


typedef struct {
    unsigned int offset;
    unsigned int value;
    unsigned int mask;
} GrayscaleIPRule1RegType;



// register map for Grayscale IP peripheral registers
typedef struct {
	GrayscaleIPRule1RegType AP_CTRL;
	GrayscaleIPRule1RegType GIE;
	GrayscaleIPRule1RegType IER;
	GrayscaleIPRule1RegType ISR;
	GrayscaleIPRule1RegType ROWS_DATA;
	GrayscaleIPRule1RegType COLS_DATA;
} GrayscaleIPRule1RegMap;



// API for GrayscaleIP_Driver to use if this rule is applied by GRIP
// NOTE: if any of the functions requires runtime info then their prototype should be matched with _SW() function
void GrayscaleIP_Rule1Driver_initialize(GrayscaleIPRule1DriverInstance *InstancePtr, XScuGic *InterruptController, unsigned long ImgIn_BaseAddr,unsigned long ImgOut_BaseAddr,unsigned short width, unsigned short height, unsigned short horizontalActiveTime, unsigned short verticalActiveTime);
void GrayscaleIP_Rule1Driver_start(GrayscaleIPRule1DriverInstance *InstancePtr, unsigned long ImgIn_BaseAddr,unsigned long ImgOut_BaseAddr,unsigned short width, unsigned short height, unsigned short horizontalActiveTime, unsigned short verticalActiveTime);
void GrayscaleIP_Rule1Driver_stop(GrayscaleIPRule1DriverInstance *InstancePtr);
bool GrayscaleIP_Rule1Driver_isBusy(GrayscaleIPRule1DriverInstance *InstancePtr);

// NOTE: for now _stop(), _isBusy() are not expected to take in any realtime info from SW so they have no arguments but if they need it in future then they should have same arguments as that of _initialize(), _start() methods to make the job of code-generator easier!!








#endif













