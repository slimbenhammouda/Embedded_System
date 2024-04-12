/* startup_cortexM3.s
eng slim benhammouda
*/

.section .vectors

.word 0x20001000              /* stack top address */
.word reset                   /* 1 Reset */
.word vector_handler          /* 2 NMI */     
.word vector_handler          /* 3 Hard Fault */
.word vector_handler          /* 4 MM Fault */
.word vector_handler          /* 5 Bus Fault */
.word vector_handler          /* 6 Usage Fault */
.word vector_handler          /* 7 RESERVED */
.word vector_handler          /* 8 RESERVED */
.word vector_handler          /* 9 RESERVED */
.word vector_handler          /* 10 RESERVED */
.word vector_handler          /* 11 SV Call */
.word vector_handler          /* 12 Debug Reserved */
.word vector_handler          /* 13 RESERVED */
.word vector_handler          /* 14 PendSV */
.word vector_handler          /* 15 SysTick */
.word vector_handler          /* 16 IRQ0 */
.word vector_handler          /* 17 IRQ1 */
.word vector_handler          /* 18 IRQ2 */

.section .text

reset:
	bl main
	b .
.thumb_func
vector_handler:
	b reset	