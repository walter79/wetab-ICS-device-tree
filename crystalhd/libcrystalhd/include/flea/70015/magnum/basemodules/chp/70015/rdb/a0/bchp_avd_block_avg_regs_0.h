/***************************************************************************
 *     Copyright (c) 1999-2009, Broadcom Corporation
 *
 **********************************************************************
 * This file is part of the crystalhd device driver.
 *
 * This driver is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 2 of the License.
 *
 * This driver is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this driver.  If not, see <http://www.gnu.org/licenses/>.
 **********************************************************************
 *
 * $brcm_Workfile: bchp_avd_block_avg_regs_0.h $
 * $brcm_Revision: Hydra_Software_Devel/1 $
 * $brcm_Date: 7/17/09 7:56p $
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Fri Jul 17 19:42:49 2009
 *                 MD5 Checksum         2914699efc3fb3edefca5cb4f4f38b34
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: /magnum/basemodules/chp/70015/rdb/a0/bchp_avd_block_avg_regs_0.h $
 * 
 * Hydra_Software_Devel/1   7/17/09 7:56p albertl
 * PR56880: Initial revision.
 *
 ***************************************************************************/

#ifndef BCHP_AVD_BLOCK_AVG_REGS_0_H__
#define BCHP_AVD_BLOCK_AVG_REGS_0_H__

/***************************************************************************
 *AVD_BLOCK_AVG_REGS_0 - FGT Block Avg Registers 0
 ***************************************************************************/
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_8x8_AVG_BASE_ADDR 0x00861000 /* REG_8x8_AVG_BASE_ADDR */
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_4x8_SUM_BASE_ADDR 0x00861004 /* REG_4x8_SUM_BASE_ADDR */
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_AVG_CTL    0x00861008 /* REG_AVG_CTL */
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_IMAGE_PARAM 0x0086100c /* REG_IMAGE_PARAM */
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_AVG_ERR    0x00861010 /* REG_AVG_ERR */
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_AVG_DONE   0x00861014 /* REG_AVG_DONE */
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_AVG_RESET  0x00861018 /* REG_AVG_RESET */
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_VC1_RRMAP  0x0086101c /* REG_VC1_RRMAP */
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_BLOCK_AVG_END 0x0086103c /* REG_BLOCK_AVG_END */

/***************************************************************************
 *REG_8x8_AVG_BASE_ADDR - REG_8x8_AVG_BASE_ADDR
 ***************************************************************************/
/* AVD_BLOCK_AVG_REGS_0 :: REG_8x8_AVG_BASE_ADDR :: Value [31:00] */
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_8x8_AVG_BASE_ADDR_Value_MASK 0xffffffff
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_8x8_AVG_BASE_ADDR_Value_SHIFT 0

/***************************************************************************
 *REG_4x8_SUM_BASE_ADDR - REG_4x8_SUM_BASE_ADDR
 ***************************************************************************/
/* AVD_BLOCK_AVG_REGS_0 :: REG_4x8_SUM_BASE_ADDR :: Value [31:00] */
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_4x8_SUM_BASE_ADDR_Value_MASK 0xffffffff
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_4x8_SUM_BASE_ADDR_Value_SHIFT 0

/***************************************************************************
 *REG_AVG_CTL - REG_AVG_CTL
 ***************************************************************************/
/* AVD_BLOCK_AVG_REGS_0 :: REG_AVG_CTL :: reserved0 [31:09] */
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_AVG_CTL_reserved0_MASK       0xfffffe00
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_AVG_CTL_reserved0_SHIFT      9

/* AVD_BLOCK_AVG_REGS_0 :: REG_AVG_CTL :: Enable_stall [08:08] */
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_AVG_CTL_Enable_stall_MASK    0x00000100
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_AVG_CTL_Enable_stall_SHIFT   8

/* AVD_BLOCK_AVG_REGS_0 :: REG_AVG_CTL :: Debug [07:07] */
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_AVG_CTL_Debug_MASK           0x00000080
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_AVG_CTL_Debug_SHIFT          7

/* AVD_BLOCK_AVG_REGS_0 :: REG_AVG_CTL :: Enable [06:06] */
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_AVG_CTL_Enable_MASK          0x00000040
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_AVG_CTL_Enable_SHIFT         6

/* AVD_BLOCK_AVG_REGS_0 :: REG_AVG_CTL :: Monochrome [05:05] */
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_AVG_CTL_Monochrome_MASK      0x00000020
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_AVG_CTL_Monochrome_SHIFT     5

/* AVD_BLOCK_AVG_REGS_0 :: REG_AVG_CTL :: VC1_Interlace [04:04] */
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_AVG_CTL_VC1_Interlace_MASK   0x00000010
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_AVG_CTL_VC1_Interlace_SHIFT  4

/* AVD_BLOCK_AVG_REGS_0 :: REG_AVG_CTL :: MBAFF [03:03] */
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_AVG_CTL_MBAFF_MASK           0x00000008
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_AVG_CTL_MBAFF_SHIFT          3

/* AVD_BLOCK_AVG_REGS_0 :: REG_AVG_CTL :: Frame [02:02] */
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_AVG_CTL_Frame_MASK           0x00000004
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_AVG_CTL_Frame_SHIFT          2

/* AVD_BLOCK_AVG_REGS_0 :: REG_AVG_CTL :: Standard [01:00] */
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_AVG_CTL_Standard_MASK        0x00000003
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_AVG_CTL_Standard_SHIFT       0

/***************************************************************************
 *REG_IMAGE_PARAM - REG_IMAGE_PARAM
 ***************************************************************************/
/* AVD_BLOCK_AVG_REGS_0 :: REG_IMAGE_PARAM :: Image_Width [31:16] */
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_IMAGE_PARAM_Image_Width_MASK 0xffff0000
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_IMAGE_PARAM_Image_Width_SHIFT 16

/* AVD_BLOCK_AVG_REGS_0 :: REG_IMAGE_PARAM :: Image_Height [15:00] */
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_IMAGE_PARAM_Image_Height_MASK 0x0000ffff
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_IMAGE_PARAM_Image_Height_SHIFT 0

/***************************************************************************
 *REG_AVG_ERR - REG_AVG_ERR
 ***************************************************************************/
/* AVD_BLOCK_AVG_REGS_0 :: REG_AVG_ERR :: reserved0 [31:01] */
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_AVG_ERR_reserved0_MASK       0xfffffffe
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_AVG_ERR_reserved0_SHIFT      1

/* AVD_BLOCK_AVG_REGS_0 :: REG_AVG_ERR :: Overflow_error [00:00] */
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_AVG_ERR_Overflow_error_MASK  0x00000001
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_AVG_ERR_Overflow_error_SHIFT 0

/***************************************************************************
 *REG_AVG_DONE - REG_AVG_DONE
 ***************************************************************************/
/* AVD_BLOCK_AVG_REGS_0 :: REG_AVG_DONE :: reserved0 [31:01] */
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_AVG_DONE_reserved0_MASK      0xfffffffe
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_AVG_DONE_reserved0_SHIFT     1

/* AVD_BLOCK_AVG_REGS_0 :: REG_AVG_DONE :: Average_done [00:00] */
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_AVG_DONE_Average_done_MASK   0x00000001
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_AVG_DONE_Average_done_SHIFT  0

/***************************************************************************
 *REG_AVG_RESET - REG_AVG_RESET
 ***************************************************************************/
/* AVD_BLOCK_AVG_REGS_0 :: REG_AVG_RESET :: reserved0 [31:01] */
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_AVG_RESET_reserved0_MASK     0xfffffffe
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_AVG_RESET_reserved0_SHIFT    1

/* AVD_BLOCK_AVG_REGS_0 :: REG_AVG_RESET :: Reset [00:00] */
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_AVG_RESET_Reset_MASK         0x00000001
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_AVG_RESET_Reset_SHIFT        0

/***************************************************************************
 *REG_VC1_RRMAP - REG_VC1_RRMAP
 ***************************************************************************/
/* AVD_BLOCK_AVG_REGS_0 :: REG_VC1_RRMAP :: VC1_main [31:31] */
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_VC1_RRMAP_VC1_main_MASK      0x80000000
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_VC1_RRMAP_VC1_main_SHIFT     31

/* AVD_BLOCK_AVG_REGS_0 :: REG_VC1_RRMAP :: reserved0 [30:16] */
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_VC1_RRMAP_reserved0_MASK     0x7fff0000
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_VC1_RRMAP_reserved0_SHIFT    16

/* AVD_BLOCK_AVG_REGS_0 :: REG_VC1_RRMAP :: Luma_range_en [15:15] */
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_VC1_RRMAP_Luma_range_en_MASK 0x00008000
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_VC1_RRMAP_Luma_range_en_SHIFT 15

/* AVD_BLOCK_AVG_REGS_0 :: REG_VC1_RRMAP :: reserved1 [14:11] */
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_VC1_RRMAP_reserved1_MASK     0x00007800
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_VC1_RRMAP_reserved1_SHIFT    11

/* AVD_BLOCK_AVG_REGS_0 :: REG_VC1_RRMAP :: Luma_range [10:08] */
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_VC1_RRMAP_Luma_range_MASK    0x00000700
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_VC1_RRMAP_Luma_range_SHIFT   8

/* AVD_BLOCK_AVG_REGS_0 :: REG_VC1_RRMAP :: Chroma_range_en [07:07] */
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_VC1_RRMAP_Chroma_range_en_MASK 0x00000080
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_VC1_RRMAP_Chroma_range_en_SHIFT 7

/* AVD_BLOCK_AVG_REGS_0 :: REG_VC1_RRMAP :: reserved2 [06:03] */
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_VC1_RRMAP_reserved2_MASK     0x00000078
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_VC1_RRMAP_reserved2_SHIFT    3

/* AVD_BLOCK_AVG_REGS_0 :: REG_VC1_RRMAP :: Chroma_range [02:00] */
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_VC1_RRMAP_Chroma_range_MASK  0x00000007
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_VC1_RRMAP_Chroma_range_SHIFT 0

/***************************************************************************
 *REG_BLOCK_AVG_END - REG_BLOCK_AVG_END
 ***************************************************************************/
/* AVD_BLOCK_AVG_REGS_0 :: REG_BLOCK_AVG_END :: reserved0 [31:00] */
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_BLOCK_AVG_END_reserved0_MASK 0xffffffff
#define BCHP_AVD_BLOCK_AVG_REGS_0_REG_BLOCK_AVG_END_reserved0_SHIFT 0

#endif /* #ifndef BCHP_AVD_BLOCK_AVG_REGS_0_H__ */

/* End of File */
