  ; ===========================================
  ; usbcamd.inc copyright MASM32 1998 - 2005
  ; ===========================================

IFNDEF USBCAMD_INC
USBCAMD_INC equ <1>

USBCAMD_AdapterReceivePacket PROTO :DWORD,:DWORD,:DWORD,:DWORD
USBCAMD_ControlVendorCommand PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
USBCAMD_Debug_LogEntry PROTO :DWORD,:DWORD,:DWORD,:DWORD
USBCAMD_DriverEntry PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
USBCAMD_GetRegistryKeyValue PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
USBCAMD_InitializeNewInterface PROTO :DWORD,:DWORD,:DWORD,:DWORD
USBCAMD_SelectAlternateInterface PROTO :DWORD,:DWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file usbcamd.inc
echo -----------------------------------------
ENDIF
