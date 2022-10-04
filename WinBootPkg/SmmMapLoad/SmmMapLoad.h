/** @file
  TODO: Brief Description of UEFI Driver SmmMapLoad
  
  TODO: Detailed Description of UEFI Driver SmmMapLoad

  TODO: Copyright for UEFI Driver SmmMapLoad
  
  TODO: License for UEFI Driver SmmMapLoad

**/

#ifndef __EFI_SMM_MAP_LOAD_H__
#define __EFI_SMM_MAP_LOAD_H__

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

//
// Driver Version
//
#define SMM_MAP_LOAD_VERSION  0x00000000

//
// Protocol instances
//
extern EFI_DRIVER_BINDING_PROTOCOL  gSmmMapLoadDriverBinding;
extern EFI_COMPONENT_NAME2_PROTOCOL  gSmmMapLoadComponentName2;
extern EFI_COMPONENT_NAME_PROTOCOL  gSmmMapLoadComponentName;

//
// Include files with function prototypes
//
#include "DriverBinding.h"
#include "ComponentName.h"

#endif
