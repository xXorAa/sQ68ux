/*
 * Copyright (c) 2022 Graeme Gregory
 *
 * SPDX: GPL-2.0-only
 */
#pragma once

#ifndef EMULATOR_HARDWARE_H
#define EMULATOR_HARDWARE_H

// time offset for RTC
#define QDOS_TIME 			((9*365+2)*86400)

// QL IO space
#define PC_CLOCK			0x18000

#define PC_TCTRL			0x18002

#define PC_IPCWR			0x18003

#define PC_MCTRL			0x18020

#define PC_IPCRD			0x18020

#define PC_INTR				0x18021
#define PC_INTRG			(1 << 0)
#define PC_INTRI			(1 << 1)
#define PC_INTRF			(1 << 3)

#define PC_TRAK1			0x18022

#define PC_TRAK2			0x18023

#define MC_STAT				0x18063
#define MC_STAT_MODE			(1 << 3)

// Q68 IO space
#define Q68_TIMER			0x1c060

#define KBD_CODE			0x1c140

#define KBD_UNLOCK			0x1c144
#define KBD_ACKN			(1 << 0)

#define KBD_STATUS			0x1c148
#define KBD_RCV				(1 << 0)
#define KBD_ISINT			(1 << 7)

#define Q68_DMODE			0xff000018

uint8_t qlHardwareRead8(unsigned int addr);
void qlHardwareWrite8(unsigned int addr, uint8_t val);

/* Shadow registers */
extern uint8_t EMU_PC_INTR;

#endif /* EMULATOR_HARDWARE_H */