/** @file
  TODO: Brief Description of UEFI Driver TestDrv
  
  TODO: Detailed Description of UEFI Driver TestDrv

  TODO: Copyright for UEFI Driver TestDrv
  
  TODO: License for UEFI Driver TestDrv

**/

#ifndef __EFI_TEST_DRV_H__
#define __EFI_TEST_DRV_H__

#include <Uefi.h>

//
// Libraries
//
#include <Library/UefiBootServicesTableLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/BaseLib.h>
#include <Library/UefiLib.h>
#include <Library/DevicePathLib.h>
#include <Library/DebugLib.h>


//
// UEFI Driver Model Protocols
//


//
// Consumed Protocols
//
#include <Protocol/PciIo.h>
#include <Protocol/SimpleFileSystem.h>

//
// Produced Protocols
//

//
// Guids
//
#include <Guid/FileInfo.h>

//
// Driver Version
//
#define TEST_DRV_VERSION  0x00000000

//
// Protocol instances
//


//
// Include files with function prototypes
//

#endif
