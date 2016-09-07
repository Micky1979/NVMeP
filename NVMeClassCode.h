//
//  NVMeClassCode.h
//  NVMeP
//
//  Created by Micky1979R on 07/09/16.
//  Copyright © 2016 Micky1979. All rights reserved.
//

#ifndef NVMeClassCode_h
#define NVMeClassCode_h

/* 
 NVM Express standard:
 - The Class Codes of PCI Header of the target device need to be compliant with:
 Base Class Code: Mass Storage Controller (01h)
 Sub-Class Code: Non-Volatile Memory Controller (08h)
 Programming Interface: NVM Express (02h)
*/
#define nvPCClassCode       @"0x01080200&0xffffff00"


/* NVM Express Apple world:
 - The Class Codes of PCI Header of the target device need to be compliant with:
 Base Class Code: Mass Storage Controller (01h)
 Sub-Class Code: Mass Storage ???? (80h)
 Programming Interface: NVM Express (02h)
*/
#define nvAppleClassCode    @"0x01800200&0xffffff00"


#endif /* NVMeClassCode_h */
