/****************************************************************************************************//**
 *
 *  CMSIS-SVD SVD Consistency Checker / Header File Generator V3.2.33
 *  Copyright (C) 2010 - 2016 ARM Ltd and ARM Germany GmbH. All rights reserved.
 *
 * @brief    CMSIS HeaderFile
 *
 * @date     30. December 2016
 *
 * @note     Generated with SVDConv V3.2.33 on Friday, 30.12.2016 10:09:25
 *
 *           from CMSIS SVD File 'XN11Exxx.svd',
 *           created on Monday, 19.12.2016 07:59:53, last modified on Friday, 30.12.2016 02:04:36
 *
 *******************************************************************************************************/

/*
  
 */



/** @addtogroup 
  * @{
  */


/** @addtogroup XN11EXXX
  * @{
  */


#ifndef XN11EXXX_H
#define XN11EXXX_H

#ifdef __cplusplus
extern "C" {
#endif


/** @addtogroup Configuration_of_CMSIS
  * @{
  */



/* =========================================================================================================================== */
/* ================                                Interrupt Number Definition                                ================ */
/* =========================================================================================================================== */

typedef enum {
/* =======================================  ARM Cortex-M0 Specific Interrupt Numbers  ======================================== */
  Reset_IRQn                = -15,              /*!< -15  Reset Vector, invoked on Power up and warm reset                     */
  NonMaskableInt_IRQn       = -14,              /*!< -14  Non maskable Interrupt, cannot be stopped or preempted               */
  HardFault_IRQn            = -13,              /*!< -13  Hard Fault, all classes of Fault                                     */
  SVCall_IRQn               =  -5,              /*!< -5 System Service Call via SVC instruction                                */
  PendSV_IRQn               =  -2,              /*!< -2 Pendable request for system service                                    */
  SysTick_IRQn              =  -1,              /*!< -1 System Tick Timer                                                      */
/* ==========================================  XN11EXXX Specific Interrupt Numbers  ========================================== */
  WAKEUP_IRQn               =   0,              /*!< 0  WAKEUP interrupt                                                       */
  PMWFAULT_IRQn             =   1,              /*!< 1  PWM fault interrupt                                                    */
  TWS_IRQn                  =   2,              /*!< 2  TWS interrupt                                                          */
  CT16B0_IRQn               =   3,              /*!< 3  CT16B0 interrupt                                                       */
  CT16B1_IRQn               =   4,              /*!< 4  CT16B1 interrupt                                                       */
  CT16B2_IRQn               =   5,              /*!< 5  CT16B2 interrupt                                                       */
  CT16B3_IRQn               =   6,              /*!< 6  CT16B3 interrupt                                                       */
  UART0_IRQn                =   7,              /*!< 7  UART0 interrupt                                                        */
  UART1_IRQn                =   8,              /*!< 8  UART1 interrupt                                                        */
  ADC_IRQn                  =   9,              /*!< 9  ADC interrupt                                                          */
  WDT_IRQn                  =  10,              /*!< 10 WDT interrupt                                                          */
  BOD_IRQn                  =  11,              /*!< 11 BOD interrupt                                                          */
  GPIO0_IRQn                =  12,              /*!< 12 GPIO0 interrupt                                                        */
  GPIO1_IRQn                =  13,              /*!< 13 GPIO1 interrupt                                                        */
  GPIO2_IRQn                =  14,              /*!< 14 GPIO2 interrupt                                                        */
  RTC_IRQn                  =  15,              /*!< 15 RTC interrupt                                                          */
  SPI_IRQn                  =  16,              /*!< 16 SPI interrupt                                                          */
  PWMEVENT_IRQn             =  17,              /*!< 17 PWM Event interrupt                                                    */
  CAPTOUCH_IRQn             =  18               /*!< 18 CAP TOUCH interrupt                                                    */
} IRQn_Type;



/* =========================================================================================================================== */
/* ================                           Processor and Core Peripheral Section                           ================ */
/* =========================================================================================================================== */

/* ===========================  Configuration of the ARM Cortex-M0 Processor and Core Peripherals  =========================== */
#define __CM0_REV                 0x0000        /*!< CM0 Core Revision                                                         */
#define __MPU_PRESENT                  0        /*!< MPU present or not                                                        */
#define __NVIC_PRIO_BITS               2        /*!< Number of Bits used for Priority Levels                                   */
#define __Vendor_SysTickConfig         0        /*!< Set to 1 if different SysTick Config is used                              */


/** @} */ /* End of group Configuration_of_CMSIS */

#include "core_CM0.h"                           /*!< ARM Cortex-M0 processor and core peripherals                              */
#include "system_XN11EXXX.h"                    /*!< XN11EXXX System                                                           */


/* ========================================  Start of section using anonymous unions  ======================================== */
#if defined(__CC_ARM)
  #pragma push
  #pragma anon_unions
#elif defined(__ICCARM__)
  #pragma language=extended
#elif defined(__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined(__TMS470__)
/* anonymous unions are enabled by default */
#elif defined(__TASKING__)
  #pragma warning 586
#else
  #warning Not supported compiler type
#endif


/* =========================================================================================================================== */
/* ================                            Device Specific Peripheral Section                             ================ */
/* =========================================================================================================================== */


/** @addtogroup Device_Peripheral_peripherals
  * @{
  */



/* =========================================================================================================================== */
/* ================                                            DIA                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief Device information array (DIA)
  */

typedef struct {                                /*!< (@ 0x1FFF1400) DIA Structure                                              */
  __I  uint32_t   RESERVED;
  __I  uint32_t   FUNCDESC;                     /*!< (@ 0x00000004) Device function description                                */
  __I  uint32_t   DID;                          /*!< (@ 0x00000008) Device ID                                                  */
  __I  uint32_t   VERID;                        /*!< (@ 0x0000000C) Hardware version                                           */
  __I  uint32_t   UNIQUEID0;                    /*!< (@ 0x00000010) Unique device serial no- low 32-bit                        */
  __I  uint32_t   UNIQUEID1;                    /*!< (@ 0x00000014) Unique device serial no- high 32-bit                       */
  __I  uint32_t   IRCTRIM;                      /*!< (@ 0x00000018) Internal IRC trim bits                                     */
} DIA_Type;                                     /*!< Size = 28 (0x1c)                                                          */



/* =========================================================================================================================== */
/* ================                                            TWS                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief two wires serial communication interface (TWS)
  */

typedef struct {                                /*!< (@ 0x40000000) TWS Structure                                              */
  __IO uint32_t   CONSET;                       /*!< (@ 0x00000000) TWS control set bit register                               */
  __I  uint32_t   STAT;                         /*!< (@ 0x00000004) TWS state register                                         */
  __IO uint32_t   DAT;                          /*!< (@ 0x00000008) TWS data register                                          */
  __IO uint32_t   ADR0;                         /*!< (@ 0x0000000C) TWS Slave Address Register 0                               */
  __IO uint32_t   SCLH;                         /*!< (@ 0x00000010) Duty Cycle Register High Half Word                         */
  __IO uint32_t   SCLL;                         /*!< (@ 0x00000014) Duty Cycle Register Low Half Word                          */
  __O  uint32_t   CONCLR;                       /*!< (@ 0x00000018) TWS Control Clear Register                                 */
  __I  uint32_t   RESERVED;
  __IO uint32_t   ADR1;                         /*!< (@ 0x00000020) TWS Slave Address Register 1                               */
  __IO uint32_t   ADR2;                         /*!< (@ 0x00000024) TWS slave address register2                                */
  __IO uint32_t   ADR3;                         /*!< (@ 0x00000028) TWS slave address register3                                */
  __I  uint32_t   DATA_BUFFER;                  /*!< (@ 0x0000002C) TWS data buffer register                                   */
  __IO uint32_t   MASK0;                        /*!< (@ 0x00000030) TWS address mask register0                                 */
  __IO uint32_t   MASK1;                        /*!< (@ 0x00000034) TWS address mask register1                                 */
  __IO uint32_t   MASK2;                        /*!< (@ 0x00000038) TWS address mask register2                                 */
  __IO uint32_t   MASK3;                        /*!< (@ 0x0000003C) TWS address mask register3                                 */
} TWS_Type;                                     /*!< Size = 64 (0x40)                                                          */



/* =========================================================================================================================== */
/* ================                                            WDT                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief Watch dog (WDT)
  */

typedef struct {                                /*!< (@ 0x40004000) WDT Structure                                              */
  __IO uint32_t   MOD;                          /*!< (@ 0x00000000) WDT mode register                                          */
  __IO uint32_t   TC;                           /*!< (@ 0x00000004) Watchdog timer constant register                           */
  __O  uint32_t   FEED;                         /*!< (@ 0x00000008) Watchdog feed sequence register                            */
  __I  uint32_t   TV;                           /*!< (@ 0x0000000C) Watchdog timer value register                              */
  __I  uint32_t   RESERVED;
  __IO uint32_t   WARNINT;                      /*!< (@ 0x00000014) Watchdog Warning Interrupt compares value                  */
  __IO uint32_t   WINDOW;                       /*!< (@ 0x00000018) Watchdog Window compares value                             */
} WDT_Type;                                     /*!< Size = 28 (0x1c)                                                          */



/* =========================================================================================================================== */
/* ================                                           UART0                                           ================ */
/* =========================================================================================================================== */


/**
  * @brief Universal asynchronous receiver/transmitter (UART0)
  */

typedef struct {                                /*!< (@ 0x40008000) UART0 Structure                                            */
  
  union {
    __I  uint32_t RDR;                          /*!< (@ 0x00000000) Receiver Data Register                                     */
    __O  uint32_t TDR;                          /*!< (@ 0x00000000) Transmit Data Register                                     */
  };
  __IO uint32_t   STATE;                        /*!< (@ 0x00000004) State of current RX and TX FIFO                            */
  __IO uint32_t   CTRL;                         /*!< (@ 0x00000008) Control UART interrupt enable and disable                  */
  __IO uint32_t   INTSTATUS;                    /*!< (@ 0x0000000C) UART RX/TX interrupt status                                */
  __IO uint32_t   BAUDDIV;                      /*!< (@ 0x00000010) UART Baud rate divider                                     */
  __O  uint32_t   FIFOCLR;                      /*!< (@ 0x00000014) Clear TX and RX FIFO                                       */
} UART0_Type;                                   /*!< Size = 24 (0x18)                                                          */



/* =========================================================================================================================== */
/* ================                                          CT16B0                                           ================ */
/* =========================================================================================================================== */


/**
  * @brief 16 bits timer (CT16B0)
  */

typedef struct {                                /*!< (@ 0x40010000) CT16B0 Structure                                           */
  __IO uint32_t   IR;                           /*!< (@ 0x00000000) Interrupt register                                         */
  __IO uint32_t   TCR;                          /*!< (@ 0x00000004) Timer control register                                     */
  __IO uint32_t   TC;                           /*!< (@ 0x00000008) Timer counter register                                     */
  __IO uint32_t   PR;                           /*!< (@ 0x0000000C) Prescale register                                          */
  __IO uint32_t   PC;                           /*!< (@ 0x00000010) Prescale Counter register                                  */
  __IO uint32_t   MCR;                          /*!< (@ 0x00000014) Match Control Register                                     */
  __IO uint32_t   MR0;                          /*!< (@ 0x00000018) Match register0                                            */
} CT16B0_Type;                                  /*!< Size = 28 (0x1c)                                                          */



/* =========================================================================================================================== */
/* ================                                          CT16B2                                           ================ */
/* =========================================================================================================================== */


/**
  * @brief 16 bits timer (CT16B2)
  */

typedef struct {                                /*!< (@ 0x40018000) CT16B2 Structure                                           */
  __IO uint32_t   IR;                           /*!< (@ 0x00000000) Interrupt register                                         */
  __IO uint32_t   TCR;                          /*!< (@ 0x00000004) Timer control register                                     */
  __IO uint32_t   TC;                           /*!< (@ 0x00000008) Timer counter register                                     */
  __IO uint32_t   PR;                           /*!< (@ 0x0000000C) Prescale register                                          */
  __IO uint32_t   PC;                           /*!< (@ 0x00000010) Prescale Counter register                                  */
  __IO uint32_t   MCR;                          /*!< (@ 0x00000014) Match Control Register                                     */
  __IO uint32_t   MR0;                          /*!< (@ 0x00000018) Match register0                                            */
  __IO uint32_t   MR1;                          /*!< (@ 0x0000001C) Match register1                                            */
  __IO uint32_t   MR2;                          /*!< (@ 0x00000020) Match register2                                            */
  __IO uint32_t   MR3;                          /*!< (@ 0x00000024) Match register3                                            */
  __IO uint32_t   CCR;                          /*!< (@ 0x00000028) Capture Control Register                                   */
  __I  uint32_t   CR0;                          /*!< (@ 0x0000002C) Capture register0                                          */
  __I  uint32_t   CR1;                          /*!< (@ 0x00000030) Capture register1                                          */
  __I  uint32_t   CR2;                          /*!< (@ 0x00000034) Capture register2                                          */
  __I  uint32_t   CR3;                          /*!< (@ 0x00000038) Capture register3                                          */
  __IO uint32_t   EMR;                          /*!< (@ 0x0000003C) External match register                                    */
  __I  uint32_t   RESERVED[12];
  __IO uint32_t   CTCR;                         /*!< (@ 0x00000070) Counter control register                                   */
  __IO uint32_t   PWMC;                         /*!< (@ 0x00000074) PWM Control Register                                       */
} CT16B2_Type;                                  /*!< Size = 120 (0x78)                                                         */



/* =========================================================================================================================== */
/* ================                                            ADC                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief Analog-to-Digital Converter (ADC)
  */

typedef struct {                                /*!< (@ 0x40020000) ADC Structure                                              */
  __IO uint32_t   CR;                           /*!< (@ 0x00000000) ADC control register                                       */
  __IO uint32_t   GDR;                          /*!< (@ 0x00000004) ADC Global Data Register                                   */
  __IO uint32_t   CHSEL;                        /*!< (@ 0x00000008) Channel select control register                            */
  __IO uint32_t   INTEN;                        /*!< (@ 0x0000000C) ADC Interrupt Enable Register                              */
  __IO uint32_t   DR0;                          /*!< (@ 0x00000010) A/D Channel 0 Data Register                                */
  __IO uint32_t   DR1;                          /*!< (@ 0x00000014) A/D Channel 1 Data Register                                */
  __IO uint32_t   DR2;                          /*!< (@ 0x00000018) A/D Channel 2 Data Register                                */
  __IO uint32_t   DR3;                          /*!< (@ 0x0000001C) A/D Channel 3 Data Register                                */
  __IO uint32_t   DR4;                          /*!< (@ 0x00000020) A/D Channel 4 Data Register                                */
  __IO uint32_t   DR5;                          /*!< (@ 0x00000024) A/D Channel 5 Data Register                                */
  __IO uint32_t   DR6;                          /*!< (@ 0x00000028) A/D Channel 6 Data Register                                */
  __IO uint32_t   DR7;                          /*!< (@ 0x0000002C) A/D Channel 7 Data Register                                */
  __IO uint32_t   STAT;                         /*!< (@ 0x00000030) ADC Status Register                                        */
  __IO uint32_t   HILMT;                        /*!< (@ 0x00000034) ADC High Limit Control Register                            */
  __IO uint32_t   LOLMT;                        /*!< (@ 0x00000038) ADC Low Limit Control Register                             */
  __I  uint32_t   RESERVED;
  __IO uint32_t   SSCR;                         /*!< (@ 0x00000040) ADC software trigger convert register                      */
  __IO uint32_t   LMTCR;                        /*!< (@ 0x00000044) ADC Limit detection output enable control register         */
} ADC_Type;                                     /*!< Size = 72 (0x48)                                                          */



/* =========================================================================================================================== */
/* ================                                            PMU                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief Power management unit (PMU)
  */

typedef struct {                                /*!< (@ 0x40038000) PMU Structure                                              */
  __IO uint32_t   PCON;                         /*!< (@ 0x00000000) Power control register                                     */
} PMU_Type;                                     /*!< Size = 4 (0x4)                                                            */



/* =========================================================================================================================== */
/* ================                                            SPI                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief Serial peripheral interface (SPI)
  */

typedef struct {                                /*!< (@ 0x40040000) SPI Structure                                              */
  __IO uint32_t   CR0;                          /*!< (@ 0x00000000) SPI control register0                                      */
  __IO uint32_t   CR1;                          /*!< (@ 0x00000004) SPI control register1                                      */
  __IO uint32_t   DR;                           /*!< (@ 0x00000008) SPI data register                                          */
  __I  uint32_t   SR;                           /*!< (@ 0x0000000C) SPI status register                                        */
  __IO uint32_t   CPSR;                         /*!< (@ 0x00000010) SPI Clock Prescale Register                                */
  __IO uint32_t   IMSC;                         /*!< (@ 0x00000014) SPI Interrupt Mask Set and Clear Register                  */
  __I  uint32_t   RIS;                          /*!< (@ 0x00000018) Raw Interrupt Status Register                              */
  __I  uint32_t   MIS;                          /*!< (@ 0x0000001C) Masked Interrupt Status Register                           */
  __O  uint32_t   ICR;                          /*!< (@ 0x00000020) SPI Interrupt Clear Register                               */
} SPI_Type;                                     /*!< Size = 36 (0x24)                                                          */



/* =========================================================================================================================== */
/* ================                                           IOCON                                           ================ */
/* =========================================================================================================================== */


/**
  * @brief I/O configuration block (IOCON)
  */

typedef struct {                                /*!< (@ 0x40044000) IOCON Structure                                            */
  __IO uint32_t   PIO2_13;                      /*!< (@ 0x00000000) Pin config register                                        */
  __IO uint32_t   PIO2_14;                      /*!< (@ 0x00000004) Pin config register                                        */
  __IO uint32_t   PIO2_15;                      /*!< (@ 0x00000008) Pin config register                                        */
  __IO uint32_t   PIO2_7;                       /*!< (@ 0x0000000C) Pin config register                                        */
  __IO uint32_t   PIO2_8;                       /*!< (@ 0x00000010) Pin config register                                        */
  __IO uint32_t   PIO2_9;                       /*!< (@ 0x00000014) Pin config register                                        */
  __IO uint32_t   PIO0_0;                       /*!< (@ 0x00000018) Pin config register                                        */
  __IO uint32_t   PIO0_1;                       /*!< (@ 0x0000001C) Pin config register                                        */
  __IO uint32_t   PIO0_2;                       /*!< (@ 0x00000020) Pin config register                                        */
  __IO uint32_t   PIO0_3;                       /*!< (@ 0x00000024) Pin config register                                        */
  __IO uint32_t   PIO0_4;                       /*!< (@ 0x00000028) Pin config register                                        */
  __IO uint32_t   PIO0_5;                       /*!< (@ 0x0000002C) Pin config register                                        */
  __IO uint32_t   PIO0_6;                       /*!< (@ 0x00000030) Pin config register                                        */
  __IO uint32_t   PIO0_7;                       /*!< (@ 0x00000034) Pin config register                                        */
  __I  uint32_t   RESERVED[8];
  __IO uint32_t   PIO1_0;                       /*!< (@ 0x00000058) Pin config register                                        */
  __IO uint32_t   PIO1_1;                       /*!< (@ 0x0000005C) Pin config register                                        */
  __IO uint32_t   PIO1_2;                       /*!< (@ 0x00000060) Pin config register                                        */
  __IO uint32_t   PIO1_10;                      /*!< (@ 0x00000064) Pin config register                                        */
  __IO uint32_t   PIO1_11;                      /*!< (@ 0x00000068) Pin config register                                        */
  __IO uint32_t   PIO1_12;                      /*!< (@ 0x0000006C) Pin config register                                        */
  __IO uint32_t   PIO1_13;                      /*!< (@ 0x00000070) Pin config register                                        */
  __IO uint32_t   PIO1_14;                      /*!< (@ 0x00000074) Pin config register                                        */
  __IO uint32_t   PIO1_15;                      /*!< (@ 0x00000078) Pin config register                                        */
  __I  uint32_t   RESERVED1[4];
  __IO uint32_t   PIO0_8;                       /*!< (@ 0x0000008C) Pin config register                                        */
  __IO uint32_t   PIO0_9;                       /*!< (@ 0x00000090) Pin config register                                        */
  __IO uint32_t   PIO0_10;                      /*!< (@ 0x00000094) Pin config register                                        */
  __IO uint32_t   PIO0_11;                      /*!< (@ 0x00000098) Pin config register                                        */
  __IO uint32_t   PIO0_12;                      /*!< (@ 0x0000009C) Pin config register                                        */
  __IO uint32_t   PIO0_13;                      /*!< (@ 0x000000A0) Pin config register                                        */
  __IO uint32_t   PIO2_10;                      /*!< (@ 0x000000A4) Pin config register                                        */
  __IO uint32_t   PIO2_11;                      /*!< (@ 0x000000A8) Pin config register                                        */
  __IO uint32_t   PIO0_14;                      /*!< (@ 0x000000AC) Pin config register                                        */
  __IO uint32_t   PIO0_15;                      /*!< (@ 0x000000B0) Pin config register                                        */
  __I  uint32_t   RESERVED2[4];
  __IO uint32_t   PIO1_3;                       /*!< (@ 0x000000C4) Pin config register                                        */
  __IO uint32_t   PIO1_4;                       /*!< (@ 0x000000C8) Pin config register                                        */
  __IO uint32_t   PIO1_5;                       /*!< (@ 0x000000CC) Pin config register                                        */
  __IO uint32_t   PIO1_6;                       /*!< (@ 0x000000D0) Pin config register                                        */
  __IO uint32_t   PIO1_7;                       /*!< (@ 0x000000D4) Pin config register                                        */
  __IO uint32_t   PIO2_12;                      /*!< (@ 0x000000D8) Pin config register                                        */
  __IO uint32_t   PIO1_8;                       /*!< (@ 0x000000DC) Pin config register                                        */
  __IO uint32_t   PIO1_9;                       /*!< (@ 0x000000E0) Pin config register                                        */
} IOCON_Type;                                   /*!< Size = 228 (0xe4)                                                         */



/* =========================================================================================================================== */
/* ================                                          SYSCON                                           ================ */
/* =========================================================================================================================== */


/**
  * @brief System control register (SYSCON)
  */

typedef struct {                                /*!< (@ 0x40048000) SYSCON Structure                                           */
  __IO uint32_t   SYSMEMREMAP;                  /*!< (@ 0x00000000) System memory remap register                               */
  __IO uint32_t   PRESETCTRL;                   /*!< (@ 0x00000004) Peripheral reset control register                          */
  __I  uint32_t   RESERVED[7];
  __IO uint32_t   WDTOSCCTRL;                   /*!< (@ 0x00000024) WDT oscillator control register                            */
  __IO uint32_t   IRCCTRL;                      /*!< (@ 0x00000028) Internal RC oscillator control register                    */
  __I  uint32_t   RESERVED1;
  __IO uint32_t   SYSRESSTAT;                   /*!< (@ 0x00000030) System reset status register                               */
  __I  uint32_t   RESERVED2[15];
  __IO uint32_t   MAINCLKSEL;                   /*!< (@ 0x00000070) Main clock source select register                          */
  __IO uint32_t   MAINCLKUEN;                   /*!< (@ 0x00000074) Main clock source update enable register                   */
  __IO uint32_t   SYSAHBCLKDIV;                 /*!< (@ 0x00000078) System AHB clock divider register                          */
  __I  uint32_t   RESERVED3;
  __IO uint32_t   SYSAHBCLKCTRL;                /*!< (@ 0x00000080) AHB clock control register                                 */
  __I  uint32_t   RESERVED4[5];
  __IO uint32_t   UART0CLKDIV;                  /*!< (@ 0x00000098) UART0 clock divider register                               */
  __IO uint32_t   UART1CLKDIV;                  /*!< (@ 0x0000009C) UARTn Clock Divider Register                               */
  __I  uint32_t   RESERVED5[16];
  __IO uint32_t   CLKOUTCLKSEL;                 /*!< (@ 0x000000E0) Clockout clock source select register                      */
  __IO uint32_t   CLKOUTUEN;                    /*!< (@ 0x000000E4) Clockout clock source update enable register               */
  __IO uint32_t   CLKOUTDIV;                    /*!< (@ 0x000000E8) Clockout clock divider register                            */
  __I  uint32_t   RESERVED6[24];
  __IO uint32_t   IOCONFIGCLKDIV;               /*!< (@ 0x0000014C) IO input filter register                                   */
  __IO uint32_t   BODCTRL;                      /*!< (@ 0x00000150) BOD power down control register                            */
  __I  uint32_t   RESERVED7[8];
  __IO uint32_t   INTNMI;                       /*!< (@ 0x00000174) NMI interrupt source configuration control                 */
  __I  uint32_t   RESERVED8[34];
  __IO uint32_t   DSWAKECTL;                    /*!< (@ 0x00000200) Deep sleep wake up control register                        */
  __IO uint32_t   DSWAKEEN;                     /*!< (@ 0x00000204) Deep sleep wake up signal enable control register          */
  __O  uint32_t   DSWAKECLR;                    /*!< (@ 0x00000208) Deep sleep wake up signal reset register                   */
  __I  uint32_t   DSWAKE;                       /*!< (@ 0x0000020C) Deep sleep wake up signal status register                  */
  __I  uint32_t   RESERVED9[8];
  __IO uint32_t   PDSLEEPCFG;                   /*!< (@ 0x00000230) Power-down states in Deep-sleep mode                       */
  __IO uint32_t   PDAWAKECFG;                   /*!< (@ 0x00000234) Power-down states after wake-up from Deep-sleep
                                                                    mode                                                       */
  __IO uint32_t   PDRUNCFG;                     /*!< (@ 0x00000238) Power-down configuration register                          */
} SYSCON_Type;                                  /*!< Size = 572 (0x23c)                                                        */



/* =========================================================================================================================== */
/* ================                                            PWM                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief Pulse-Width Modulation (PWM)
  */

typedef struct {                                /*!< (@ 0x4004C000) PWM Structure                                              */
  __IO uint32_t   CTRL;                         /*!< (@ 0x00000000) Control Register                                           */
  __IO uint32_t   FCTRL;                        /*!< (@ 0x00000004) Fault Control Register                                     */
  __IO uint32_t   FLTACK;                       /*!< (@ 0x00000008) Fault Status/Acknowledge Register                          */
  __IO uint32_t   OUTCTRL;                      /*!< (@ 0x0000000C) Output Control Register                                    */
  __I  uint32_t   CNTR;                         /*!< (@ 0x00000010) Counter Register                                           */
  __IO uint32_t   CMOD;                         /*!< (@ 0x00000014) Counter Modulo Register                                    */
  __IO uint32_t   VAL0;                         /*!< (@ 0x00000018) Value Register 0                                           */
  __IO uint32_t   VAL1;                         /*!< (@ 0x0000001C) Value Register 1                                           */
  __IO uint32_t   VAL2;                         /*!< (@ 0x00000020) Value Register 2                                           */
  __IO uint32_t   VAL3;                         /*!< (@ 0x00000024) Value Register 3                                           */
  __IO uint32_t   VAL4;                         /*!< (@ 0x00000028) Value Register 4                                           */
  __IO uint32_t   VAL5;                         /*!< (@ 0x0000002C) Value Register 5                                           */
  __I  uint32_t   RESERVED[2];
  __IO uint32_t   DTIM0;                        /*!< (@ 0x00000038) Deadtime Register 0                                        */
  __IO uint32_t   DTIM1;                        /*!< (@ 0x0000003C) Deadtime Register 1                                        */
  __IO uint32_t   DMAP0;                        /*!< (@ 0x00000040) Disable Mapping Register0                                  */
  __IO uint32_t   DMAP1;                        /*!< (@ 0x00000044) Disable Mapping Register1                                  */
  __IO uint32_t   CNFG;                         /*!< (@ 0x00000048) Configure Register                                         */
  __IO uint32_t   CCTRL;                        /*!< (@ 0x0000004C) Channel Control Register                                   */
  __IO uint32_t   PORT;                         /*!< (@ 0x00000050) Port Register                                              */
  __IO uint32_t   ICCTRL;                       /*!< (@ 0x00000054) Internal Correction Control Register                       */
  __I  uint32_t   RESERVED1[2];
  __IO uint32_t   PSCR;                         /*!< (@ 0x00000060) Polarity Invert control Register                           */
  __O  uint32_t   CNTRINI;                      /*!< (@ 0x00000064) Counter Init Register                                      */
} PWM_Type;                                     /*!< Size = 104 (0x68)                                                         */



/* =========================================================================================================================== */
/* ================                                            RTC                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief Real-time clock (RTC)
  */

typedef struct {                                /*!< (@ 0x40050000) RTC Structure                                              */
  __I  uint32_t   DR;                           /*!< (@ 0x00000000) RTC data register                                          */
  __IO uint32_t   MR;                           /*!< (@ 0x00000004) RTC match register                                         */
  __IO uint32_t   LR;                           /*!< (@ 0x00000008) RTC load register                                          */
  __IO uint32_t   CR;                           /*!< (@ 0x0000000C) RTC control register                                       */
  __IO uint32_t   ICSC;                         /*!< (@ 0x00000010) Interrupt control set/clear register                       */
  __I  uint32_t   RIS;                          /*!< (@ 0x00000014) Raw interrupt status register                              */
  __I  uint32_t   MIS;                          /*!< (@ 0x00000018) Masked interrupt status register                           */
  __O  uint32_t   ICR;                          /*!< (@ 0x0000001C) RTC interrupt clear register                               */
} RTC_Type;                                     /*!< Size = 32 (0x20)                                                          */



/* =========================================================================================================================== */
/* ================                                            LCD                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief LCD driver (LCD)
  */

typedef struct {                                /*!< (@ 0x40068000) LCD Structure                                              */
  __IO uint32_t   LCDCTRL0;                     /*!< (@ 0x00000000) LCD driver enable                                          */
  __IO uint32_t   LCDCTRL1;                     /*!< (@ 0x00000004) LCD driver control register                                */
  __IO uint32_t   MEMMAP0;                      /*!< (@ 0x00000008) LCD data memory map0                                       */
  __IO uint32_t   MEMMAP1;                      /*!< (@ 0x0000000C) LCD driver data memory map1                                */
  __IO uint32_t   MEMMAP2;                      /*!< (@ 0x00000010) LCD driver data memory map2                                */
  __IO uint32_t   MEMMAP3;                      /*!< (@ 0x00000014) LCD driver data memory map3                                */
  __I  uint32_t   RESERVED[6];
  __IO uint32_t   LCDOUTEN0;                    /*!< (@ 0x00000030) LCD output enable 0                                        */
  __IO uint32_t   LCDOUTEN1;                    /*!< (@ 0x00000034) LCD output enable 1                                        */
} LCD_Type;                                     /*!< Size = 56 (0x38)                                                          */



/* =========================================================================================================================== */
/* ================                                         CAPTOUCH                                          ================ */
/* =========================================================================================================================== */


/**
  * @brief Capacitance Touch Sense (CAPTOUCH)
  */

typedef struct {                                /*!< (@ 0x40078000) CAPTOUCH Structure                                         */
  __IO uint32_t   INTSTAT;                      /*!< (@ 0x00000000) Interrupt status register                                  */
  __IO uint32_t   CTRL;                         /*!< (@ 0x00000004) Cap Sense enable ctrl register                             */
  __IO uint32_t   SENSTM;                       /*!< (@ 0x00000008) Touchpad sense Time register                               */
  __IO uint32_t   RAWSTAT;                      /*!< (@ 0x0000000C) Interrupt status RAW register                              */
  __IO uint32_t   WATMK;                        /*!< (@ 0x00000010) Interrupt watermark register                               */
  __I  uint32_t   RESERVED;
  __I  uint32_t   TOUCHCHN;                     /*!< (@ 0x00000018) Touched pad channel register                               */
  __I  uint32_t   TOUCHCNT;                     /*!< (@ 0x0000001C) Touched pad count value register                           */
  __I  uint32_t   SCANCHN;                      /*!< (@ 0x00000020) Scanned pad channel register                               */
  __I  uint32_t   SCANCNT;                      /*!< (@ 0x00000024) Scanned pad counter value register                         */
} CAPTOUCH_Type;                                /*!< Size = 40 (0x28)                                                          */



/* =========================================================================================================================== */
/* ================                                           GPIO0                                           ================ */
/* =========================================================================================================================== */


/**
  * @brief General-purpose I/Os (GPIO0)
  */

typedef struct {                                /*!< (@ 0x50000000) GPIO0 Structure                                            */
  __IO uint32_t   MASK;                         /*!< (@ 0x00000000) Pin value mask register                                    */
  __I  uint32_t   PIN;                          /*!< (@ 0x00000004) Pin state register                                         */
  __IO uint32_t   OUT;                          /*!< (@ 0x00000008) Pin output value register                                  */
  __O  uint32_t   SET;                          /*!< (@ 0x0000000C) Pin output value set register                              */
  __O  uint32_t   CLR;                          /*!< (@ 0x00000010) Pin output value clear register                            */
  __O  uint32_t   NOT;                          /*!< (@ 0x00000014) Pin output value invert register                           */
  __I  uint32_t   RESERVED[2];
  __IO uint32_t   DIR;                          /*!< (@ 0x00000020) Data direction register                                    */
  __IO uint32_t   IS;                           /*!< (@ 0x00000024) interrupt sense register                                   */
  __IO uint32_t   IBE;                          /*!< (@ 0x00000028) Interrupt both edges register                              */
  __IO uint32_t   IEV;                          /*!< (@ 0x0000002C) Interrupt event register                                   */
  __IO uint32_t   IE;                           /*!< (@ 0x00000030) Interrupt mask register                                    */
  __I  uint32_t   RIS;                          /*!< (@ 0x00000034) Raw interrupt status register                              */
  __I  uint32_t   MIS;                          /*!< (@ 0x00000038) Masked interrupt status register                           */
  __O  uint32_t   IC;                           /*!< (@ 0x0000003C) Interrupt clear register                                   */
} GPIO0_Type;                                   /*!< Size = 64 (0x40)                                                          */



/* =========================================================================================================================== */
/* ================                                            FMC                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief Flash control block (FMC)
  */

typedef struct {                                /*!< (@ 0x50060000) FMC Structure                                              */
  __I  uint32_t   RESERVED[3];
  __IO uint32_t   FLASH_RDCYC;                  /*!< (@ 0x0000000C) Flash read cycle register                                  */
} FMC_Type;                                     /*!< Size = 16 (0x10)                                                          */



/* =========================================================================================================================== */
/* ================                                            CRC                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief Micro digital signal processor (CRC)
  */

typedef struct {                                /*!< (@ 0x50070000) CRC Structure                                              */
  __IO uint32_t   MODE;                         /*!< (@ 0x00000000) CRC mode register                                          */
  __IO uint32_t   SEED;                         /*!< (@ 0x00000004) CRC seed register                                          */
  
  union {
    __I  uint32_t SUM;                          /*!< (@ 0x00000008) CRC checksum register                                      */
    __O  uint32_t DATA;                         /*!< (@ 0x00000008) CRC data register                                          */
  };
} CRC_Type;                                     /*!< Size = 12 (0xc)                                                           */


/** @} */ /* End of group Device_Peripheral_peripherals */


/* =========================================  End of section using anonymous unions  ========================================= */
#if defined(__CC_ARM)
  #pragma pop
#elif defined(__ICCARM__)
  /* leave anonymous unions enabled */
#elif defined(__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined(__TMS470__)
  /* anonymous unions are enabled by default */
#elif defined(__TASKING__)
  #pragma warning restore
#else
  #warning Not supported compiler type
#endif


/* =========================================================================================================================== */
/* ================                          Device Specific Peripheral Address Map                           ================ */
/* =========================================================================================================================== */


/** @addtogroup Device_Peripheral_peripheralAddr
  * @{
  */

#define DIA_BASE                    0x1FFF1400UL
#define TWS_BASE                    0x40000000UL
#define WDT_BASE                    0x40004000UL
#define UART0_BASE                  0x40008000UL
#define UART1_BASE                  0x4000C000UL
#define CT16B0_BASE                 0x40010000UL
#define CT16B1_BASE                 0x40014000UL
#define CT16B2_BASE                 0x40018000UL
#define CT16B3_BASE                 0x4001C000UL
#define ADC_BASE                    0x40020000UL
#define PMU_BASE                    0x40038000UL
#define SPI_BASE                    0x40040000UL
#define IOCON_BASE                  0x40044000UL
#define SYSCON_BASE                 0x40048000UL
#define PWM_BASE                    0x4004C000UL
#define RTC_BASE                    0x40050000UL
#define LCD_BASE                    0x40068000UL
#define CAPTOUCH_BASE               0x40078000UL
#define GPIO0_BASE                  0x50000000UL
#define GPIO1_BASE                  0x50010000UL
#define GPIO2_BASE                  0x50020000UL
#define FMC_BASE                    0x50060000UL
#define CRC_BASE                    0x50070000UL

/** @} */ /* End of group Device_Peripheral_peripheralAddr */


/* =========================================================================================================================== */
/* ================                                  Peripheral declaration                                   ================ */
/* =========================================================================================================================== */


/** @addtogroup Device_Peripheral_declaration
  * @{
  */

#define DIA                         ((DIA_Type*)               DIA_BASE)
#define TWS                         ((TWS_Type*)               TWS_BASE)
#define WDT                         ((WDT_Type*)               WDT_BASE)
#define UART0                       ((UART0_Type*)             UART0_BASE)
#define UART1                       ((UART0_Type*)             UART1_BASE)
#define CT16B0                      ((CT16B0_Type*)            CT16B0_BASE)
#define CT16B1                      ((CT16B0_Type*)            CT16B1_BASE)
#define CT16B2                      ((CT16B2_Type*)            CT16B2_BASE)
#define CT16B3                      ((CT16B2_Type*)            CT16B3_BASE)
#define ADC                         ((ADC_Type*)               ADC_BASE)
#define PMU                         ((PMU_Type*)               PMU_BASE)
#define SPI                         ((SPI_Type*)               SPI_BASE)
#define IOCON                       ((IOCON_Type*)             IOCON_BASE)
#define SYSCON                      ((SYSCON_Type*)            SYSCON_BASE)
#define PWM                         ((PWM_Type*)               PWM_BASE)
#define RTC                         ((RTC_Type*)               RTC_BASE)
#define LCD                         ((LCD_Type*)               LCD_BASE)
#define CAPTOUCH                    ((CAPTOUCH_Type*)          CAPTOUCH_BASE)
#define GPIO0                       ((GPIO0_Type*)             GPIO0_BASE)
#define GPIO1                       ((GPIO0_Type*)             GPIO1_BASE)
#define GPIO2                       ((GPIO0_Type*)             GPIO2_BASE)
#define FMC                         ((FMC_Type*)               FMC_BASE)
#define CRC                         ((CRC_Type*)               CRC_BASE)

/** @} */ /* End of group Device_Peripheral_declaration */


#ifdef __cplusplus
}
#endif

#endif /* XN11EXXX_H */


/** @} */ /* End of group XN11EXXX */

/** @} */ /* End of group  */
