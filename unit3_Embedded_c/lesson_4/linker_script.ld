/* linker script for cortexM4
Eng. slim benhammouda
*/

MEMORY
{
	FLASH(RX) : ORIGIN = 0X00000000, LENGTH = 512M
	SRAM(RWX) : ORIGIN = 0X20000000, LENGTH = 512M
}
SECTIONS
{
	.text : {
			*(.vectors*)
			*(.text*)
			*(.rodata)
			_E_text_ = . ;
	}> FLASH
 
	.data : {
			_S_DATA_ = . ;
			*(.data)
			. = ALIGN(4) ;
			_E_DATA_ = . ;
	}> SRAM AT> FLASH
	.bss : {
			_S_BSS_ = . ;
			*(.bss)
			. = ALIGN(4) ;
			_E_BSS_ = . ;
	}> SRAM
}