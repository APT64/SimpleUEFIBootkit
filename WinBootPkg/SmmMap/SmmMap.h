/** @file
  TODO: Brief Description of UEFI Driver SmmMap
  
  TODO: Detailed Description of UEFI Driver SmmMap

  TODO: Copyright for UEFI Driver SmmMap
  
  TODO: License for UEFI Driver SmmMap

**/

#ifndef __EFI_SMM_MAP_H__
#define __EFI_SMM_MAP_H__

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
#include <Protocol/DriverBinding.h>
#include <Protocol/ComponentName2.h>
#include <Protocol/ComponentName.h>

//
// Consumed Protocols
//
#include <Protocol/PciIo.h>

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
#define SMM_MAP_VERSION  0x00000000

//
// Protocol instances
//
extern EFI_DRIVER_BINDING_PROTOCOL  gSmmMapDriverBinding;
extern EFI_COMPONENT_NAME2_PROTOCOL  gSmmMapComponentName2;
extern EFI_COMPONENT_NAME_PROTOCOL  gSmmMapComponentName;

//
// Include files with function prototypes
//
#include "DriverBinding.h"
#include "ComponentName.h"

#endif
