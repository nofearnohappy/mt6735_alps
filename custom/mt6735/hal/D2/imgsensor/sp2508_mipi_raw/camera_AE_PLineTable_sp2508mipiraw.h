/* Copyright Statement:
*
* This software/firmware and related documentation ("MediaTek Software") are
* protected under relevant copyright laws. The information contained herein
* is confidential and proprietary to MediaTek Inc. and/or its licensors.
* Without the prior written permission of MediaTek inc. and/or its licensors,
* any reproduction, modification, use or disclosure of MediaTek Software,
* and information contained herein, in whole or in part, shall be strictly prohibited.
*/
/* MediaTek Inc. (C) 2010. All rights reserved.
*
* BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
* THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
* RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON
* AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
* NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
* SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
* SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
* THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
* THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
* CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
* SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
* STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
* CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
* AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
* OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
* MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
* The following software/firmware and/or related documentation ("MediaTek Software")
* have been modified by MediaTek Inc. All revisions are subject to any receiver's
 * applicable license agreements with MediaTek Inc.
*/

#ifndef _CAMERA_AE_PLINETABLE_SP2508_MIPI_RAW_H
#define _CAMERA_AE_PLINETABLE_SP2508_MIPI_RAW_H

#include "camera_custom_AEPlinetable.h"
static strEvPline sPreviewPLineTable_60Hz =
{
{
    {310,1216,1096, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.46  BV=10.17
    {310,1328,1048, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.52  BV=10.11
    {349,1216,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.45  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {426,1216,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.46  BV=9.71
    {465,1216,1072, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.43  BV=9.62
    {503,1216,1064, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=4.41  BV=9.51
    {542,1216,1064, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=4.41  BV=9.41
    {581,1216,1064, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=4.41  BV=9.31
    {619,1216,1064, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=4.41  BV=9.21
    {658,1216,1072, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=4.43  BV=9.12
    {735,1216,1032, 0, 0, 0},  //TV = 10.41(19 lines)  AV=2.97  SV=4.37  BV=9.01
    {774,1216,1048, 0, 0, 0},  //TV = 10.34(20 lines)  AV=2.97  SV=4.39  BV=8.91
    {851,1216,1024, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=4.36  BV=8.81
    {890,1216,1048, 0, 0, 0},  //TV = 10.13(23 lines)  AV=2.97  SV=4.39  BV=8.71
    {967,1216,1032, 0, 0, 0},  //TV = 10.01(25 lines)  AV=2.97  SV=4.37  BV=8.61
    {1045,1216,1024, 0, 0, 0},  //TV = 9.90(27 lines)  AV=2.97  SV=4.36  BV=8.51
    {1122,1216,1024, 0, 0, 0},  //TV = 9.80(29 lines)  AV=2.97  SV=4.36  BV=8.41
    {1199,1216,1024, 0, 0, 0},  //TV = 9.70(31 lines)  AV=2.97  SV=4.36  BV=8.32
    {1277,1216,1032, 0, 0, 0},  //TV = 9.61(33 lines)  AV=2.97  SV=4.37  BV=8.21
    {1354,1216,1048, 0, 0, 0},  //TV = 9.53(35 lines)  AV=2.97  SV=4.39  BV=8.11
    {1470,1216,1032, 0, 0, 0},  //TV = 9.41(38 lines)  AV=2.97  SV=4.37  BV=8.01
    {1586,1216,1024, 0, 0, 0},  //TV = 9.30(41 lines)  AV=2.97  SV=4.36  BV=7.91
    {1702,1216,1024, 0, 0, 0},  //TV = 9.20(44 lines)  AV=2.97  SV=4.36  BV=7.81
    {1818,1216,1024, 0, 0, 0},  //TV = 9.10(47 lines)  AV=2.97  SV=4.36  BV=7.72
    {1934,1216,1032, 0, 0, 0},  //TV = 9.01(50 lines)  AV=2.97  SV=4.37  BV=7.61
    {2089,1216,1024, 0, 0, 0},  //TV = 8.90(54 lines)  AV=2.97  SV=4.36  BV=7.51
    {2243,1216,1024, 0, 0, 0},  //TV = 8.80(58 lines)  AV=2.97  SV=4.36  BV=7.41
    {2398,1216,1024, 0, 0, 0},  //TV = 8.70(62 lines)  AV=2.97  SV=4.36  BV=7.32
    {2553,1216,1032, 0, 0, 0},  //TV = 8.61(66 lines)  AV=2.97  SV=4.37  BV=7.21
    {2746,1216,1032, 0, 0, 0},  //TV = 8.51(71 lines)  AV=2.97  SV=4.37  BV=7.11
    {2978,1136,1096, 0, 0, 0},  //TV = 8.39(77 lines)  AV=2.97  SV=4.36  BV=7.00
    {3171,1216,1024, 0, 0, 0},  //TV = 8.30(82 lines)  AV=2.97  SV=4.36  BV=6.91
    {3403,1216,1024, 0, 0, 0},  //TV = 8.20(88 lines)  AV=2.97  SV=4.36  BV=6.81
    {3635,1216,1024, 0, 0, 0},  //TV = 8.10(94 lines)  AV=2.97  SV=4.36  BV=6.72
    {3906,1216,1024, 0, 0, 0},  //TV = 8.00(101 lines)  AV=2.97  SV=4.36  BV=6.61
    {4177,1216,1024, 0, 0, 0},  //TV = 7.90(108 lines)  AV=2.97  SV=4.36  BV=6.52
    {4486,1216,1024, 0, 0, 0},  //TV = 7.80(116 lines)  AV=2.97  SV=4.36  BV=6.41
    {4795,1216,1024, 0, 0, 0},  //TV = 7.70(124 lines)  AV=2.97  SV=4.36  BV=6.32
    {5143,1216,1024, 0, 0, 0},  //TV = 7.60(133 lines)  AV=2.97  SV=4.36  BV=6.22
    {5569,1136,1096, 0, 0, 0},  //TV = 7.49(144 lines)  AV=2.97  SV=4.36  BV=6.10
    {5955,1136,1096, 0, 0, 0},  //TV = 7.39(154 lines)  AV=2.97  SV=4.36  BV=6.00
    {6381,1136,1096, 0, 0, 0},  //TV = 7.29(165 lines)  AV=2.97  SV=4.36  BV=5.90
    {6767,1216,1024, 0, 0, 0},  //TV = 7.21(175 lines)  AV=2.97  SV=4.36  BV=5.82
    {7309,1136,1096, 0, 0, 0},  //TV = 7.10(189 lines)  AV=2.97  SV=4.36  BV=5.71
    {7811,1216,1024, 0, 0, 0},  //TV = 7.00(202 lines)  AV=2.97  SV=4.36  BV=5.61
    {8314,1216,1032, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.37  BV=5.51
    {8314,1216,1104, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.47  BV=5.41
    {8314,1328,1088, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.57  BV=5.31
    {8314,1424,1080, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.66  BV=5.22
    {8314,1536,1088, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.78  BV=5.10
    {8314,1728,1024, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.87  BV=5.02
    {8314,1840,1040, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.98  BV=4.90
    {8314,1936,1056, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.07  BV=4.81
    {8314,2048,1072, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.18  BV=4.70
    {8314,2240,1048, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.27  BV=4.61
    {16666,1216,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.36  BV=4.52
    {16666,1216,1104, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.47  BV=4.41
    {16666,1328,1080, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.56  BV=4.31
    {16666,1424,1080, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.66  BV=4.21
    {16666,1536,1080, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.77  BV=4.10
    {16666,1728,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.87  BV=4.01
    {24980,1216,1040, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.38  BV=3.91
    {24980,1216,1112, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.48  BV=3.82
    {24980,1328,1096, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.58  BV=3.71
    {24980,1424,1096, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.68  BV=3.61
    {33332,1216,1024, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=4.36  BV=3.52
    {33332,1216,1104, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=4.47  BV=3.41
    {33332,1328,1080, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=4.56  BV=3.31
    {33332,1424,1080, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=4.66  BV=3.21
    {41646,1216,1088, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.45  BV=3.11
    {41646,1328,1072, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.55  BV=3.00
    {41646,1424,1072, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.65  BV=2.90
    {41646,1536,1056, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.74  BV=2.82
    {41646,1632,1072, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.85  BV=2.71
    {41646,1728,1080, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.94  BV=2.61
    {41646,1936,1032, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.04  BV=2.52
    {41646,2048,1048, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.14  BV=2.41
    {41646,2240,1032, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.25  BV=2.30
    {41646,2352,1048, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.34  BV=2.21
    {49998,2144,1024, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=5.18  BV=2.12
    {49998,2240,1056, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=5.28  BV=2.01
    {58312,2048,1064, 0, 0, 0},  //TV = 4.10(1508 lines)  AV=2.97  SV=5.17  BV=1.90
    {58312,2240,1040, 0, 0, 0},  //TV = 4.10(1508 lines)  AV=2.97  SV=5.26  BV=1.81
    {66664,2048,1064, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.17  BV=1.71
    {66664,2240,1048, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.27  BV=1.60
    {66664,2448,1024, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.37  BV=1.51
    {66664,2560,1048, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.47  BV=1.41
    {66664,2752,1048, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.57  BV=1.31
    {66664,2960,1040, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.66  BV=1.21
    {66664,3200,1032, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.77  BV=1.11
    {66664,3456,1024, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.87  BV=1.01
    {66664,3584,1056, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.96  BV=0.92
    {66664,3968,1032, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=6.08  BV=0.80
    {66664,4224,1032, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=6.17  BV=0.71
    {66664,4480,1040, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=6.26  BV=0.62
    {74978,4352,1024, 0, 0, 0},  //TV = 3.74(1939 lines)  AV=2.97  SV=6.20  BV=0.51
    {83330,4096,1048, 0, 0, 0},  //TV = 3.59(2155 lines)  AV=2.97  SV=6.14  BV=0.41
    {91644,3968,1056, 0, 0, 0},  //TV = 3.45(2370 lines)  AV=2.97  SV=6.11  BV=0.31
    {91644,4352,1032, 0, 0, 0},  //TV = 3.45(2370 lines)  AV=2.97  SV=6.21  BV=0.21
    {99996,4224,1048, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.19  BV=0.10
    {99996,4608,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.29  BV=0.00
    {99996,4864,1048, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.39  BV=-0.10
    {99996,5248,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.49  BV=-0.20
    {99996,5632,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.59  BV=-0.30
    {99996,6144,1024, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.70  BV=-0.40
    {99996,6544,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.80  BV=-0.51
    {99996,7072,1024, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.90  BV=-0.61
    {99996,7472,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.99  BV=-0.70
    {99996,7936,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=7.09  BV=-0.79
    {99996,8448,1056, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=7.20  BV=-0.91
    {108310,8448,1040, 0, 0, 0},  //TV = 3.21(2801 lines)  AV=2.97  SV=7.18  BV=-1.00
    {116662,8448,1040, 0, 0, 0},  //TV = 3.10(3017 lines)  AV=2.97  SV=7.18  BV=-1.11
    {125014,8448,1040, 0, 0, 0},  //TV = 3.00(3233 lines)  AV=2.97  SV=7.18  BV=-1.21
    {125014,9040,1040, 0, 0, 0},  //TV = 3.00(3233 lines)  AV=2.97  SV=7.28  BV=-1.30
    {125014,9696,1040, 0, 0, 0},  //TV = 3.00(3233 lines)  AV=2.97  SV=7.38  BV=-1.41
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sPreviewPLineTable_50Hz =
{
{
    {310,1216,1096, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.46  BV=10.17
    {310,1328,1048, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.52  BV=10.11
    {349,1216,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.45  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {426,1216,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.46  BV=9.71
    {465,1216,1072, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.43  BV=9.62
    {503,1216,1064, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=4.41  BV=9.51
    {542,1216,1064, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=4.41  BV=9.41
    {581,1216,1064, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=4.41  BV=9.31
    {619,1216,1064, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=4.41  BV=9.21
    {658,1216,1072, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=4.43  BV=9.12
    {735,1216,1032, 0, 0, 0},  //TV = 10.41(19 lines)  AV=2.97  SV=4.37  BV=9.01
    {774,1216,1048, 0, 0, 0},  //TV = 10.34(20 lines)  AV=2.97  SV=4.39  BV=8.91
    {851,1216,1024, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=4.36  BV=8.81
    {890,1216,1048, 0, 0, 0},  //TV = 10.13(23 lines)  AV=2.97  SV=4.39  BV=8.71
    {967,1216,1032, 0, 0, 0},  //TV = 10.01(25 lines)  AV=2.97  SV=4.37  BV=8.61
    {1045,1216,1024, 0, 0, 0},  //TV = 9.90(27 lines)  AV=2.97  SV=4.36  BV=8.51
    {1122,1216,1024, 0, 0, 0},  //TV = 9.80(29 lines)  AV=2.97  SV=4.36  BV=8.41
    {1199,1216,1024, 0, 0, 0},  //TV = 9.70(31 lines)  AV=2.97  SV=4.36  BV=8.32
    {1277,1216,1032, 0, 0, 0},  //TV = 9.61(33 lines)  AV=2.97  SV=4.37  BV=8.21
    {1354,1216,1048, 0, 0, 0},  //TV = 9.53(35 lines)  AV=2.97  SV=4.39  BV=8.11
    {1470,1216,1032, 0, 0, 0},  //TV = 9.41(38 lines)  AV=2.97  SV=4.37  BV=8.01
    {1586,1216,1024, 0, 0, 0},  //TV = 9.30(41 lines)  AV=2.97  SV=4.36  BV=7.91
    {1702,1216,1024, 0, 0, 0},  //TV = 9.20(44 lines)  AV=2.97  SV=4.36  BV=7.81
    {1818,1216,1024, 0, 0, 0},  //TV = 9.10(47 lines)  AV=2.97  SV=4.36  BV=7.72
    {1934,1216,1032, 0, 0, 0},  //TV = 9.01(50 lines)  AV=2.97  SV=4.37  BV=7.61
    {2089,1216,1024, 0, 0, 0},  //TV = 8.90(54 lines)  AV=2.97  SV=4.36  BV=7.51
    {2243,1216,1024, 0, 0, 0},  //TV = 8.80(58 lines)  AV=2.97  SV=4.36  BV=7.41
    {2398,1216,1024, 0, 0, 0},  //TV = 8.70(62 lines)  AV=2.97  SV=4.36  BV=7.32
    {2553,1216,1032, 0, 0, 0},  //TV = 8.61(66 lines)  AV=2.97  SV=4.37  BV=7.21
    {2746,1216,1032, 0, 0, 0},  //TV = 8.51(71 lines)  AV=2.97  SV=4.37  BV=7.11
    {2978,1136,1096, 0, 0, 0},  //TV = 8.39(77 lines)  AV=2.97  SV=4.36  BV=7.00
    {3171,1216,1024, 0, 0, 0},  //TV = 8.30(82 lines)  AV=2.97  SV=4.36  BV=6.91
    {3403,1216,1024, 0, 0, 0},  //TV = 8.20(88 lines)  AV=2.97  SV=4.36  BV=6.81
    {3635,1216,1024, 0, 0, 0},  //TV = 8.10(94 lines)  AV=2.97  SV=4.36  BV=6.72
    {3906,1216,1024, 0, 0, 0},  //TV = 8.00(101 lines)  AV=2.97  SV=4.36  BV=6.61
    {4177,1216,1024, 0, 0, 0},  //TV = 7.90(108 lines)  AV=2.97  SV=4.36  BV=6.52
    {4486,1216,1024, 0, 0, 0},  //TV = 7.80(116 lines)  AV=2.97  SV=4.36  BV=6.41
    {4795,1216,1024, 0, 0, 0},  //TV = 7.70(124 lines)  AV=2.97  SV=4.36  BV=6.32
    {5143,1216,1024, 0, 0, 0},  //TV = 7.60(133 lines)  AV=2.97  SV=4.36  BV=6.22
    {5569,1136,1096, 0, 0, 0},  //TV = 7.49(144 lines)  AV=2.97  SV=4.36  BV=6.10
    {5955,1136,1096, 0, 0, 0},  //TV = 7.39(154 lines)  AV=2.97  SV=4.36  BV=6.00
    {6381,1136,1096, 0, 0, 0},  //TV = 7.29(165 lines)  AV=2.97  SV=4.36  BV=5.90
    {6767,1216,1024, 0, 0, 0},  //TV = 7.21(175 lines)  AV=2.97  SV=4.36  BV=5.82
    {7309,1136,1096, 0, 0, 0},  //TV = 7.10(189 lines)  AV=2.97  SV=4.36  BV=5.71
    {7811,1216,1024, 0, 0, 0},  //TV = 7.00(202 lines)  AV=2.97  SV=4.36  BV=5.61
    {8391,1136,1096, 0, 0, 0},  //TV = 6.90(217 lines)  AV=2.97  SV=4.36  BV=5.51
    {9049,1136,1096, 0, 0, 0},  //TV = 6.79(234 lines)  AV=2.97  SV=4.36  BV=5.40
    {9706,1136,1096, 0, 0, 0},  //TV = 6.69(251 lines)  AV=2.97  SV=4.36  BV=5.30
    {10016,1216,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.40  BV=5.21
    {10016,1328,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.50  BV=5.12
    {10016,1424,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.60  BV=5.01
    {10016,1536,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.70  BV=4.92
    {10016,1632,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.81  BV=4.81
    {10016,1728,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.91  BV=4.70
    {10016,1840,1064, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.01  BV=4.60
    {10016,1936,1080, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.11  BV=4.51
    {10016,2144,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.20  BV=4.41
    {10016,2240,1064, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.30  BV=4.32
    {19992,1216,1064, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.41  BV=4.20
    {19992,1328,1040, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.51  BV=4.11
    {19992,1424,1040, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.61  BV=4.01
    {19992,1536,1032, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.71  BV=3.91
    {19992,1632,1040, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.81  BV=3.81
    {19992,1728,1056, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.91  BV=3.70
    {30007,1216,1064, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.41  BV=3.62
    {30007,1328,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.52  BV=3.51
    {30007,1424,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.62  BV=3.41
    {30007,1536,1040, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.72  BV=3.31
    {39983,1216,1056, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.40  BV=3.21
    {39983,1328,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.51  BV=3.11
    {39983,1424,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.61  BV=3.01
    {39983,1536,1032, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.71  BV=2.91
    {39983,1632,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.81  BV=2.81
    {39983,1728,1048, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.90  BV=2.72
    {39983,1840,1056, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.00  BV=2.61
    {39983,1936,1072, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.10  BV=2.52
    {39983,2144,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.20  BV=2.42
    {39983,2240,1064, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.30  BV=2.32
    {39983,2448,1056, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.41  BV=2.20
    {49998,2144,1024, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=5.18  BV=2.12
    {49998,2240,1056, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=5.28  BV=2.01
    {60014,2048,1032, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.12  BV=1.91
    {60014,2144,1056, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.22  BV=1.81
    {60014,2352,1024, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.31  BV=1.72
    {60014,2448,1064, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.42  BV=1.61
    {60014,2656,1048, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.52  BV=1.51
    {60014,2864,1040, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.62  BV=1.41
    {60014,3072,1048, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.73  BV=1.30
    {60014,3328,1032, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.82  BV=1.21
    {60014,3584,1024, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.92  BV=1.11
    {60014,3840,1024, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=6.02  BV=1.01
    {60014,4096,1024, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=6.11  BV=0.92
    {60014,4352,1040, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=6.22  BV=0.81
    {60014,4736,1024, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=6.32  BV=0.71
    {69990,4352,1024, 0, 0, 0},  //TV = 3.84(1810 lines)  AV=2.97  SV=6.20  BV=0.61
    {69990,4608,1032, 0, 0, 0},  //TV = 3.84(1810 lines)  AV=2.97  SV=6.29  BV=0.52
    {80005,4352,1024, 0, 0, 0},  //TV = 3.64(2069 lines)  AV=2.97  SV=6.20  BV=0.42
    {89981,4096,1040, 0, 0, 0},  //TV = 3.47(2327 lines)  AV=2.97  SV=6.13  BV=0.31
    {89981,4352,1048, 0, 0, 0},  //TV = 3.47(2327 lines)  AV=2.97  SV=6.23  BV=0.21
    {99996,4224,1048, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.19  BV=0.10
    {99996,4608,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.29  BV=0.00
    {99996,4864,1048, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.39  BV=-0.10
    {99996,5248,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.49  BV=-0.20
    {99996,5632,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.59  BV=-0.30
    {99996,6144,1024, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.70  BV=-0.40
    {99996,6544,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.80  BV=-0.51
    {99996,7072,1024, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.90  BV=-0.61
    {99996,7472,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.99  BV=-0.70
    {99996,7936,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=7.09  BV=-0.79
    {99996,8448,1056, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=7.20  BV=-0.91
    {110011,8448,1024, 0, 0, 0},  //TV = 3.18(2845 lines)  AV=2.97  SV=7.16  BV=-1.00
    {119987,8192,1040, 0, 0, 0},  //TV = 3.06(3103 lines)  AV=2.97  SV=7.13  BV=-1.10
    {119987,8720,1040, 0, 0, 0},  //TV = 3.06(3103 lines)  AV=2.97  SV=7.22  BV=-1.19
    {119987,9344,1048, 0, 0, 0},  //TV = 3.06(3103 lines)  AV=2.97  SV=7.33  BV=-1.30
    {119987,10080,1040, 0, 0, 0},  //TV = 3.06(3103 lines)  AV=2.97  SV=7.43  BV=-1.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_PreviewAutoTable =
{
    AETABLE_RPEVIEW_AUTO,    //eAETableID
    117,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    102,    //i4MaxBV
    -14,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -10,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sPreviewPLineTable_60Hz,
    sPreviewPLineTable_50Hz,
    NULL,
};

static strEvPline sCapturePLineTable_60Hz =
{
{
    {310,1216,1096, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.46  BV=10.17
    {310,1328,1048, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.52  BV=10.11
    {349,1216,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.45  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {426,1216,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.46  BV=9.71
    {465,1216,1072, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.43  BV=9.62
    {503,1216,1064, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=4.41  BV=9.51
    {542,1216,1064, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=4.41  BV=9.41
    {581,1216,1064, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=4.41  BV=9.31
    {619,1216,1064, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=4.41  BV=9.21
    {658,1216,1072, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=4.43  BV=9.12
    {735,1216,1032, 0, 0, 0},  //TV = 10.41(19 lines)  AV=2.97  SV=4.37  BV=9.01
    {774,1216,1048, 0, 0, 0},  //TV = 10.34(20 lines)  AV=2.97  SV=4.39  BV=8.91
    {851,1216,1024, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=4.36  BV=8.81
    {890,1216,1048, 0, 0, 0},  //TV = 10.13(23 lines)  AV=2.97  SV=4.39  BV=8.71
    {967,1216,1032, 0, 0, 0},  //TV = 10.01(25 lines)  AV=2.97  SV=4.37  BV=8.61
    {1045,1216,1024, 0, 0, 0},  //TV = 9.90(27 lines)  AV=2.97  SV=4.36  BV=8.51
    {1122,1216,1024, 0, 0, 0},  //TV = 9.80(29 lines)  AV=2.97  SV=4.36  BV=8.41
    {1199,1216,1024, 0, 0, 0},  //TV = 9.70(31 lines)  AV=2.97  SV=4.36  BV=8.32
    {1277,1216,1032, 0, 0, 0},  //TV = 9.61(33 lines)  AV=2.97  SV=4.37  BV=8.21
    {1354,1216,1048, 0, 0, 0},  //TV = 9.53(35 lines)  AV=2.97  SV=4.39  BV=8.11
    {1470,1216,1032, 0, 0, 0},  //TV = 9.41(38 lines)  AV=2.97  SV=4.37  BV=8.01
    {1586,1216,1024, 0, 0, 0},  //TV = 9.30(41 lines)  AV=2.97  SV=4.36  BV=7.91
    {1702,1216,1024, 0, 0, 0},  //TV = 9.20(44 lines)  AV=2.97  SV=4.36  BV=7.81
    {1818,1216,1024, 0, 0, 0},  //TV = 9.10(47 lines)  AV=2.97  SV=4.36  BV=7.72
    {1934,1216,1032, 0, 0, 0},  //TV = 9.01(50 lines)  AV=2.97  SV=4.37  BV=7.61
    {2089,1216,1024, 0, 0, 0},  //TV = 8.90(54 lines)  AV=2.97  SV=4.36  BV=7.51
    {2243,1216,1024, 0, 0, 0},  //TV = 8.80(58 lines)  AV=2.97  SV=4.36  BV=7.41
    {2398,1216,1024, 0, 0, 0},  //TV = 8.70(62 lines)  AV=2.97  SV=4.36  BV=7.32
    {2553,1216,1032, 0, 0, 0},  //TV = 8.61(66 lines)  AV=2.97  SV=4.37  BV=7.21
    {2746,1216,1032, 0, 0, 0},  //TV = 8.51(71 lines)  AV=2.97  SV=4.37  BV=7.11
    {2978,1136,1096, 0, 0, 0},  //TV = 8.39(77 lines)  AV=2.97  SV=4.36  BV=7.00
    {3171,1216,1024, 0, 0, 0},  //TV = 8.30(82 lines)  AV=2.97  SV=4.36  BV=6.91
    {3403,1216,1024, 0, 0, 0},  //TV = 8.20(88 lines)  AV=2.97  SV=4.36  BV=6.81
    {3635,1216,1024, 0, 0, 0},  //TV = 8.10(94 lines)  AV=2.97  SV=4.36  BV=6.72
    {3906,1216,1024, 0, 0, 0},  //TV = 8.00(101 lines)  AV=2.97  SV=4.36  BV=6.61
    {4177,1216,1024, 0, 0, 0},  //TV = 7.90(108 lines)  AV=2.97  SV=4.36  BV=6.52
    {4486,1216,1024, 0, 0, 0},  //TV = 7.80(116 lines)  AV=2.97  SV=4.36  BV=6.41
    {4795,1216,1024, 0, 0, 0},  //TV = 7.70(124 lines)  AV=2.97  SV=4.36  BV=6.32
    {5143,1216,1024, 0, 0, 0},  //TV = 7.60(133 lines)  AV=2.97  SV=4.36  BV=6.22
    {5569,1136,1096, 0, 0, 0},  //TV = 7.49(144 lines)  AV=2.97  SV=4.36  BV=6.10
    {5955,1136,1096, 0, 0, 0},  //TV = 7.39(154 lines)  AV=2.97  SV=4.36  BV=6.00
    {6381,1136,1096, 0, 0, 0},  //TV = 7.29(165 lines)  AV=2.97  SV=4.36  BV=5.90
    {6767,1216,1024, 0, 0, 0},  //TV = 7.21(175 lines)  AV=2.97  SV=4.36  BV=5.82
    {7309,1136,1096, 0, 0, 0},  //TV = 7.10(189 lines)  AV=2.97  SV=4.36  BV=5.71
    {7811,1216,1024, 0, 0, 0},  //TV = 7.00(202 lines)  AV=2.97  SV=4.36  BV=5.61
    {8314,1216,1032, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.37  BV=5.51
    {8314,1216,1104, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.47  BV=5.41
    {8314,1328,1088, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.57  BV=5.31
    {8314,1424,1080, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.66  BV=5.22
    {8314,1536,1088, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.78  BV=5.10
    {8314,1728,1024, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.87  BV=5.02
    {8314,1840,1040, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.98  BV=4.90
    {8314,1936,1056, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.07  BV=4.81
    {8314,2048,1072, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.18  BV=4.70
    {8314,2240,1048, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.27  BV=4.61
    {16666,1216,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.36  BV=4.52
    {16666,1216,1104, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.47  BV=4.41
    {16666,1328,1080, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.56  BV=4.31
    {16666,1424,1080, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.66  BV=4.21
    {16666,1536,1080, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.77  BV=4.10
    {16666,1728,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.87  BV=4.01
    {24980,1216,1040, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.38  BV=3.91
    {24980,1216,1112, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.48  BV=3.82
    {24980,1328,1096, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.58  BV=3.71
    {24980,1424,1096, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.68  BV=3.61
    {33332,1216,1024, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=4.36  BV=3.52
    {33332,1216,1104, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=4.47  BV=3.41
    {33332,1328,1080, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=4.56  BV=3.31
    {33332,1424,1080, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=4.66  BV=3.21
    {41646,1216,1088, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.45  BV=3.11
    {41646,1328,1072, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.55  BV=3.00
    {41646,1424,1072, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.65  BV=2.90
    {41646,1536,1056, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.74  BV=2.82
    {41646,1632,1072, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.85  BV=2.71
    {41646,1728,1080, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.94  BV=2.61
    {41646,1936,1032, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.04  BV=2.52
    {41646,2048,1048, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.14  BV=2.41
    {41646,2240,1032, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.25  BV=2.30
    {41646,2352,1048, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.34  BV=2.21
    {49998,2144,1024, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=5.18  BV=2.12
    {49998,2240,1056, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=5.28  BV=2.01
    {58312,2048,1064, 0, 0, 0},  //TV = 4.10(1508 lines)  AV=2.97  SV=5.17  BV=1.90
    {58312,2240,1040, 0, 0, 0},  //TV = 4.10(1508 lines)  AV=2.97  SV=5.26  BV=1.81
    {66664,2048,1064, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.17  BV=1.71
    {66664,2240,1048, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.27  BV=1.60
    {66664,2448,1024, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.37  BV=1.51
    {66664,2560,1048, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.47  BV=1.41
    {66664,2752,1048, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.57  BV=1.31
    {66664,2960,1040, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.66  BV=1.21
    {66664,3200,1032, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.77  BV=1.11
    {66664,3456,1024, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.87  BV=1.01
    {66664,3584,1056, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.96  BV=0.92
    {66664,3968,1032, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=6.08  BV=0.80
    {66664,4224,1032, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=6.17  BV=0.71
    {66664,4480,1040, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=6.26  BV=0.62
    {74978,4352,1024, 0, 0, 0},  //TV = 3.74(1939 lines)  AV=2.97  SV=6.20  BV=0.51
    {83330,4096,1048, 0, 0, 0},  //TV = 3.59(2155 lines)  AV=2.97  SV=6.14  BV=0.41
    {91644,3968,1056, 0, 0, 0},  //TV = 3.45(2370 lines)  AV=2.97  SV=6.11  BV=0.31
    {91644,4352,1032, 0, 0, 0},  //TV = 3.45(2370 lines)  AV=2.97  SV=6.21  BV=0.21
    {99996,4224,1048, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.19  BV=0.10
    {99996,4608,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.29  BV=0.00
    {99996,4864,1048, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.39  BV=-0.10
    {99996,5248,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.49  BV=-0.20
    {99996,5632,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.59  BV=-0.30
    {99996,6144,1024, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.70  BV=-0.40
    {99996,6544,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.80  BV=-0.51
    {99996,7072,1024, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.90  BV=-0.61
    {99996,7472,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.99  BV=-0.70
    {99996,7936,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=7.09  BV=-0.79
    {99996,8448,1056, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=7.20  BV=-0.91
    {108310,8448,1040, 0, 0, 0},  //TV = 3.21(2801 lines)  AV=2.97  SV=7.18  BV=-1.00
    {116662,8448,1040, 0, 0, 0},  //TV = 3.10(3017 lines)  AV=2.97  SV=7.18  BV=-1.11
    {125014,8448,1040, 0, 0, 0},  //TV = 3.00(3233 lines)  AV=2.97  SV=7.18  BV=-1.21
    {125014,9040,1040, 0, 0, 0},  //TV = 3.00(3233 lines)  AV=2.97  SV=7.28  BV=-1.30
    {125014,9696,1040, 0, 0, 0},  //TV = 3.00(3233 lines)  AV=2.97  SV=7.38  BV=-1.41
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCapturePLineTable_50Hz =
{
{
    {310,1216,1096, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.46  BV=10.17
    {310,1328,1048, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.52  BV=10.11
    {349,1216,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.45  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {426,1216,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.46  BV=9.71
    {465,1216,1072, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.43  BV=9.62
    {503,1216,1064, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=4.41  BV=9.51
    {542,1216,1064, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=4.41  BV=9.41
    {581,1216,1064, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=4.41  BV=9.31
    {619,1216,1064, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=4.41  BV=9.21
    {658,1216,1072, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=4.43  BV=9.12
    {735,1216,1032, 0, 0, 0},  //TV = 10.41(19 lines)  AV=2.97  SV=4.37  BV=9.01
    {774,1216,1048, 0, 0, 0},  //TV = 10.34(20 lines)  AV=2.97  SV=4.39  BV=8.91
    {851,1216,1024, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=4.36  BV=8.81
    {890,1216,1048, 0, 0, 0},  //TV = 10.13(23 lines)  AV=2.97  SV=4.39  BV=8.71
    {967,1216,1032, 0, 0, 0},  //TV = 10.01(25 lines)  AV=2.97  SV=4.37  BV=8.61
    {1045,1216,1024, 0, 0, 0},  //TV = 9.90(27 lines)  AV=2.97  SV=4.36  BV=8.51
    {1122,1216,1024, 0, 0, 0},  //TV = 9.80(29 lines)  AV=2.97  SV=4.36  BV=8.41
    {1199,1216,1024, 0, 0, 0},  //TV = 9.70(31 lines)  AV=2.97  SV=4.36  BV=8.32
    {1277,1216,1032, 0, 0, 0},  //TV = 9.61(33 lines)  AV=2.97  SV=4.37  BV=8.21
    {1354,1216,1048, 0, 0, 0},  //TV = 9.53(35 lines)  AV=2.97  SV=4.39  BV=8.11
    {1470,1216,1032, 0, 0, 0},  //TV = 9.41(38 lines)  AV=2.97  SV=4.37  BV=8.01
    {1586,1216,1024, 0, 0, 0},  //TV = 9.30(41 lines)  AV=2.97  SV=4.36  BV=7.91
    {1702,1216,1024, 0, 0, 0},  //TV = 9.20(44 lines)  AV=2.97  SV=4.36  BV=7.81
    {1818,1216,1024, 0, 0, 0},  //TV = 9.10(47 lines)  AV=2.97  SV=4.36  BV=7.72
    {1934,1216,1032, 0, 0, 0},  //TV = 9.01(50 lines)  AV=2.97  SV=4.37  BV=7.61
    {2089,1216,1024, 0, 0, 0},  //TV = 8.90(54 lines)  AV=2.97  SV=4.36  BV=7.51
    {2243,1216,1024, 0, 0, 0},  //TV = 8.80(58 lines)  AV=2.97  SV=4.36  BV=7.41
    {2398,1216,1024, 0, 0, 0},  //TV = 8.70(62 lines)  AV=2.97  SV=4.36  BV=7.32
    {2553,1216,1032, 0, 0, 0},  //TV = 8.61(66 lines)  AV=2.97  SV=4.37  BV=7.21
    {2746,1216,1032, 0, 0, 0},  //TV = 8.51(71 lines)  AV=2.97  SV=4.37  BV=7.11
    {2978,1136,1096, 0, 0, 0},  //TV = 8.39(77 lines)  AV=2.97  SV=4.36  BV=7.00
    {3171,1216,1024, 0, 0, 0},  //TV = 8.30(82 lines)  AV=2.97  SV=4.36  BV=6.91
    {3403,1216,1024, 0, 0, 0},  //TV = 8.20(88 lines)  AV=2.97  SV=4.36  BV=6.81
    {3635,1216,1024, 0, 0, 0},  //TV = 8.10(94 lines)  AV=2.97  SV=4.36  BV=6.72
    {3906,1216,1024, 0, 0, 0},  //TV = 8.00(101 lines)  AV=2.97  SV=4.36  BV=6.61
    {4177,1216,1024, 0, 0, 0},  //TV = 7.90(108 lines)  AV=2.97  SV=4.36  BV=6.52
    {4486,1216,1024, 0, 0, 0},  //TV = 7.80(116 lines)  AV=2.97  SV=4.36  BV=6.41
    {4795,1216,1024, 0, 0, 0},  //TV = 7.70(124 lines)  AV=2.97  SV=4.36  BV=6.32
    {5143,1216,1024, 0, 0, 0},  //TV = 7.60(133 lines)  AV=2.97  SV=4.36  BV=6.22
    {5569,1136,1096, 0, 0, 0},  //TV = 7.49(144 lines)  AV=2.97  SV=4.36  BV=6.10
    {5955,1136,1096, 0, 0, 0},  //TV = 7.39(154 lines)  AV=2.97  SV=4.36  BV=6.00
    {6381,1136,1096, 0, 0, 0},  //TV = 7.29(165 lines)  AV=2.97  SV=4.36  BV=5.90
    {6767,1216,1024, 0, 0, 0},  //TV = 7.21(175 lines)  AV=2.97  SV=4.36  BV=5.82
    {7309,1136,1096, 0, 0, 0},  //TV = 7.10(189 lines)  AV=2.97  SV=4.36  BV=5.71
    {7811,1216,1024, 0, 0, 0},  //TV = 7.00(202 lines)  AV=2.97  SV=4.36  BV=5.61
    {8391,1136,1096, 0, 0, 0},  //TV = 6.90(217 lines)  AV=2.97  SV=4.36  BV=5.51
    {9049,1136,1096, 0, 0, 0},  //TV = 6.79(234 lines)  AV=2.97  SV=4.36  BV=5.40
    {9706,1136,1096, 0, 0, 0},  //TV = 6.69(251 lines)  AV=2.97  SV=4.36  BV=5.30
    {10016,1216,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.40  BV=5.21
    {10016,1328,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.50  BV=5.12
    {10016,1424,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.60  BV=5.01
    {10016,1536,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.70  BV=4.92
    {10016,1632,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.81  BV=4.81
    {10016,1728,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.91  BV=4.70
    {10016,1840,1064, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.01  BV=4.60
    {10016,1936,1080, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.11  BV=4.51
    {10016,2144,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.20  BV=4.41
    {10016,2240,1064, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.30  BV=4.32
    {19992,1216,1064, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.41  BV=4.20
    {19992,1328,1040, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.51  BV=4.11
    {19992,1424,1040, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.61  BV=4.01
    {19992,1536,1032, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.71  BV=3.91
    {19992,1632,1040, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.81  BV=3.81
    {19992,1728,1056, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.91  BV=3.70
    {30007,1216,1064, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.41  BV=3.62
    {30007,1328,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.52  BV=3.51
    {30007,1424,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.62  BV=3.41
    {30007,1536,1040, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.72  BV=3.31
    {39983,1216,1056, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.40  BV=3.21
    {39983,1328,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.51  BV=3.11
    {39983,1424,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.61  BV=3.01
    {39983,1536,1032, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.71  BV=2.91
    {39983,1632,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.81  BV=2.81
    {39983,1728,1048, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.90  BV=2.72
    {39983,1840,1056, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.00  BV=2.61
    {39983,1936,1072, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.10  BV=2.52
    {39983,2144,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.20  BV=2.42
    {39983,2240,1064, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.30  BV=2.32
    {39983,2448,1056, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.41  BV=2.20
    {49998,2144,1024, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=5.18  BV=2.12
    {49998,2240,1056, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=5.28  BV=2.01
    {60014,2048,1032, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.12  BV=1.91
    {60014,2144,1056, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.22  BV=1.81
    {60014,2352,1024, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.31  BV=1.72
    {60014,2448,1064, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.42  BV=1.61
    {60014,2656,1048, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.52  BV=1.51
    {60014,2864,1040, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.62  BV=1.41
    {60014,3072,1048, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.73  BV=1.30
    {60014,3328,1032, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.82  BV=1.21
    {60014,3584,1024, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.92  BV=1.11
    {60014,3840,1024, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=6.02  BV=1.01
    {60014,4096,1024, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=6.11  BV=0.92
    {60014,4352,1040, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=6.22  BV=0.81
    {60014,4736,1024, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=6.32  BV=0.71
    {69990,4352,1024, 0, 0, 0},  //TV = 3.84(1810 lines)  AV=2.97  SV=6.20  BV=0.61
    {69990,4608,1032, 0, 0, 0},  //TV = 3.84(1810 lines)  AV=2.97  SV=6.29  BV=0.52
    {80005,4352,1024, 0, 0, 0},  //TV = 3.64(2069 lines)  AV=2.97  SV=6.20  BV=0.42
    {89981,4096,1040, 0, 0, 0},  //TV = 3.47(2327 lines)  AV=2.97  SV=6.13  BV=0.31
    {89981,4352,1048, 0, 0, 0},  //TV = 3.47(2327 lines)  AV=2.97  SV=6.23  BV=0.21
    {99996,4224,1048, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.19  BV=0.10
    {99996,4608,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.29  BV=0.00
    {99996,4864,1048, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.39  BV=-0.10
    {99996,5248,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.49  BV=-0.20
    {99996,5632,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.59  BV=-0.30
    {99996,6144,1024, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.70  BV=-0.40
    {99996,6544,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.80  BV=-0.51
    {99996,7072,1024, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.90  BV=-0.61
    {99996,7472,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.99  BV=-0.70
    {99996,7936,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=7.09  BV=-0.79
    {99996,8448,1056, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=7.20  BV=-0.91
    {110011,8448,1024, 0, 0, 0},  //TV = 3.18(2845 lines)  AV=2.97  SV=7.16  BV=-1.00
    {119987,8192,1040, 0, 0, 0},  //TV = 3.06(3103 lines)  AV=2.97  SV=7.13  BV=-1.10
    {119987,8720,1040, 0, 0, 0},  //TV = 3.06(3103 lines)  AV=2.97  SV=7.22  BV=-1.19
    {119987,9344,1048, 0, 0, 0},  //TV = 3.06(3103 lines)  AV=2.97  SV=7.33  BV=-1.30
    {119987,10080,1040, 0, 0, 0},  //TV = 3.06(3103 lines)  AV=2.97  SV=7.43  BV=-1.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureAutoTable =
{
    AETABLE_CAPTURE_AUTO,    //eAETableID
    117,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    102,    //i4MaxBV
    -14,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCapturePLineTable_60Hz,
    sCapturePLineTable_50Hz,
    NULL,
};

static strEvPline sVideoPLineTable_60Hz =
{
{
    {310,1216,1096, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.46  BV=10.17
    {310,1328,1048, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.52  BV=10.11
    {349,1216,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.45  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {426,1216,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.46  BV=9.71
    {465,1216,1072, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.43  BV=9.62
    {503,1216,1064, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=4.41  BV=9.51
    {542,1216,1064, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=4.41  BV=9.41
    {581,1216,1064, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=4.41  BV=9.31
    {619,1216,1064, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=4.41  BV=9.21
    {658,1216,1072, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=4.43  BV=9.12
    {735,1216,1032, 0, 0, 0},  //TV = 10.41(19 lines)  AV=2.97  SV=4.37  BV=9.01
    {774,1216,1048, 0, 0, 0},  //TV = 10.34(20 lines)  AV=2.97  SV=4.39  BV=8.91
    {851,1216,1024, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=4.36  BV=8.81
    {890,1216,1048, 0, 0, 0},  //TV = 10.13(23 lines)  AV=2.97  SV=4.39  BV=8.71
    {967,1216,1032, 0, 0, 0},  //TV = 10.01(25 lines)  AV=2.97  SV=4.37  BV=8.61
    {1045,1216,1024, 0, 0, 0},  //TV = 9.90(27 lines)  AV=2.97  SV=4.36  BV=8.51
    {1122,1216,1024, 0, 0, 0},  //TV = 9.80(29 lines)  AV=2.97  SV=4.36  BV=8.41
    {1199,1216,1024, 0, 0, 0},  //TV = 9.70(31 lines)  AV=2.97  SV=4.36  BV=8.32
    {1277,1216,1032, 0, 0, 0},  //TV = 9.61(33 lines)  AV=2.97  SV=4.37  BV=8.21
    {1354,1216,1048, 0, 0, 0},  //TV = 9.53(35 lines)  AV=2.97  SV=4.39  BV=8.11
    {1470,1216,1032, 0, 0, 0},  //TV = 9.41(38 lines)  AV=2.97  SV=4.37  BV=8.01
    {1586,1216,1024, 0, 0, 0},  //TV = 9.30(41 lines)  AV=2.97  SV=4.36  BV=7.91
    {1702,1216,1024, 0, 0, 0},  //TV = 9.20(44 lines)  AV=2.97  SV=4.36  BV=7.81
    {1818,1216,1024, 0, 0, 0},  //TV = 9.10(47 lines)  AV=2.97  SV=4.36  BV=7.72
    {1934,1216,1032, 0, 0, 0},  //TV = 9.01(50 lines)  AV=2.97  SV=4.37  BV=7.61
    {2089,1216,1024, 0, 0, 0},  //TV = 8.90(54 lines)  AV=2.97  SV=4.36  BV=7.51
    {2243,1216,1024, 0, 0, 0},  //TV = 8.80(58 lines)  AV=2.97  SV=4.36  BV=7.41
    {2398,1216,1024, 0, 0, 0},  //TV = 8.70(62 lines)  AV=2.97  SV=4.36  BV=7.32
    {2553,1216,1032, 0, 0, 0},  //TV = 8.61(66 lines)  AV=2.97  SV=4.37  BV=7.21
    {2746,1216,1032, 0, 0, 0},  //TV = 8.51(71 lines)  AV=2.97  SV=4.37  BV=7.11
    {2978,1136,1096, 0, 0, 0},  //TV = 8.39(77 lines)  AV=2.97  SV=4.36  BV=7.00
    {3171,1216,1024, 0, 0, 0},  //TV = 8.30(82 lines)  AV=2.97  SV=4.36  BV=6.91
    {3403,1216,1024, 0, 0, 0},  //TV = 8.20(88 lines)  AV=2.97  SV=4.36  BV=6.81
    {3635,1216,1024, 0, 0, 0},  //TV = 8.10(94 lines)  AV=2.97  SV=4.36  BV=6.72
    {3906,1216,1024, 0, 0, 0},  //TV = 8.00(101 lines)  AV=2.97  SV=4.36  BV=6.61
    {4177,1216,1024, 0, 0, 0},  //TV = 7.90(108 lines)  AV=2.97  SV=4.36  BV=6.52
    {4486,1216,1024, 0, 0, 0},  //TV = 7.80(116 lines)  AV=2.97  SV=4.36  BV=6.41
    {4795,1216,1024, 0, 0, 0},  //TV = 7.70(124 lines)  AV=2.97  SV=4.36  BV=6.32
    {5143,1216,1024, 0, 0, 0},  //TV = 7.60(133 lines)  AV=2.97  SV=4.36  BV=6.22
    {5569,1136,1096, 0, 0, 0},  //TV = 7.49(144 lines)  AV=2.97  SV=4.36  BV=6.10
    {5955,1136,1096, 0, 0, 0},  //TV = 7.39(154 lines)  AV=2.97  SV=4.36  BV=6.00
    {6381,1136,1096, 0, 0, 0},  //TV = 7.29(165 lines)  AV=2.97  SV=4.36  BV=5.90
    {6767,1216,1024, 0, 0, 0},  //TV = 7.21(175 lines)  AV=2.97  SV=4.36  BV=5.82
    {7309,1136,1096, 0, 0, 0},  //TV = 7.10(189 lines)  AV=2.97  SV=4.36  BV=5.71
    {7811,1216,1024, 0, 0, 0},  //TV = 7.00(202 lines)  AV=2.97  SV=4.36  BV=5.61
    {8314,1216,1032, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.37  BV=5.51
    {8314,1216,1104, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.47  BV=5.41
    {8314,1328,1088, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.57  BV=5.31
    {8314,1424,1080, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.66  BV=5.22
    {8314,1536,1088, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.78  BV=5.10
    {8314,1728,1024, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.87  BV=5.02
    {8314,1840,1040, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.98  BV=4.90
    {8314,1936,1056, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.07  BV=4.81
    {8314,2048,1072, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.18  BV=4.70
    {8314,2240,1048, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.27  BV=4.61
    {16666,1216,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.36  BV=4.52
    {16666,1216,1104, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.47  BV=4.41
    {16666,1328,1080, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.56  BV=4.31
    {16666,1424,1080, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.66  BV=4.21
    {16666,1536,1080, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.77  BV=4.10
    {16666,1728,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.87  BV=4.01
    {24980,1216,1040, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.38  BV=3.91
    {24980,1216,1112, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.48  BV=3.82
    {24980,1328,1096, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.58  BV=3.71
    {24980,1424,1096, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.68  BV=3.61
    {33216,1216,1032, 0, 0, 0},  //TV = 4.91(859 lines)  AV=2.97  SV=4.37  BV=3.51
    {33216,1216,1104, 0, 0, 0},  //TV = 4.91(859 lines)  AV=2.97  SV=4.47  BV=3.42
    {33216,1328,1088, 0, 0, 0},  //TV = 4.91(859 lines)  AV=2.97  SV=4.57  BV=3.31
    {33216,1424,1080, 0, 0, 0},  //TV = 4.91(859 lines)  AV=2.97  SV=4.66  BV=3.22
    {41646,1216,1088, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.45  BV=3.11
    {41646,1328,1072, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.55  BV=3.00
    {41646,1424,1072, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.65  BV=2.90
    {41646,1536,1056, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.74  BV=2.82
    {41646,1632,1072, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.85  BV=2.71
    {41646,1728,1080, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.94  BV=2.61
    {41646,1936,1032, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.04  BV=2.52
    {41646,2048,1048, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.14  BV=2.41
    {41646,2240,1032, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.25  BV=2.30
    {41646,2352,1048, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.34  BV=2.21
    {49998,2144,1024, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=5.18  BV=2.12
    {49998,2240,1056, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=5.28  BV=2.01
    {58312,2048,1064, 0, 0, 0},  //TV = 4.10(1508 lines)  AV=2.97  SV=5.17  BV=1.90
    {58312,2240,1040, 0, 0, 0},  //TV = 4.10(1508 lines)  AV=2.97  SV=5.26  BV=1.81
    {66548,2048,1064, 0, 0, 0},  //TV = 3.91(1721 lines)  AV=2.97  SV=5.17  BV=1.71
    {66548,2240,1040, 0, 0, 0},  //TV = 3.91(1721 lines)  AV=2.97  SV=5.26  BV=1.62
    {66548,2448,1024, 0, 0, 0},  //TV = 3.91(1721 lines)  AV=2.97  SV=5.37  BV=1.51
    {66548,2560,1048, 0, 0, 0},  //TV = 3.91(1721 lines)  AV=2.97  SV=5.47  BV=1.41
    {66548,2752,1040, 0, 0, 0},  //TV = 3.91(1721 lines)  AV=2.97  SV=5.56  BV=1.32
    {66548,2960,1048, 0, 0, 0},  //TV = 3.91(1721 lines)  AV=2.97  SV=5.68  BV=1.20
    {66548,3200,1032, 0, 0, 0},  //TV = 3.91(1721 lines)  AV=2.97  SV=5.77  BV=1.11
    {66548,3456,1024, 0, 0, 0},  //TV = 3.91(1721 lines)  AV=2.97  SV=5.87  BV=1.01
    {66548,3712,1032, 0, 0, 0},  //TV = 3.91(1721 lines)  AV=2.97  SV=5.98  BV=0.90
    {66548,3968,1032, 0, 0, 0},  //TV = 3.91(1721 lines)  AV=2.97  SV=6.08  BV=0.80
    {66548,4224,1032, 0, 0, 0},  //TV = 3.91(1721 lines)  AV=2.97  SV=6.17  BV=0.71
    {66548,4480,1040, 0, 0, 0},  //TV = 3.91(1721 lines)  AV=2.97  SV=6.26  BV=0.62
    {74978,4352,1024, 0, 0, 0},  //TV = 3.74(1939 lines)  AV=2.97  SV=6.20  BV=0.51
    {83330,4096,1048, 0, 0, 0},  //TV = 3.59(2155 lines)  AV=2.97  SV=6.14  BV=0.41
    {91644,3968,1056, 0, 0, 0},  //TV = 3.45(2370 lines)  AV=2.97  SV=6.11  BV=0.31
    {91644,4352,1032, 0, 0, 0},  //TV = 3.45(2370 lines)  AV=2.97  SV=6.21  BV=0.21
    {99996,4224,1048, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.19  BV=0.10
    {99996,4608,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.29  BV=0.00
    {99996,4864,1048, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.39  BV=-0.10
    {99996,5248,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.49  BV=-0.20
    {99996,5632,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.59  BV=-0.30
    {99996,6144,1024, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.70  BV=-0.40
    {99996,6544,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.80  BV=-0.51
    {99996,7072,1024, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.90  BV=-0.61
    {99996,7472,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.99  BV=-0.70
    {99996,7936,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=7.09  BV=-0.79
    {99996,8448,1056, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=7.20  BV=-0.91
    {108310,8448,1040, 0, 0, 0},  //TV = 3.21(2801 lines)  AV=2.97  SV=7.18  BV=-1.00
    {116662,8448,1040, 0, 0, 0},  //TV = 3.10(3017 lines)  AV=2.97  SV=7.18  BV=-1.11
    {125014,8448,1040, 0, 0, 0},  //TV = 3.00(3233 lines)  AV=2.97  SV=7.18  BV=-1.21
    {125014,9040,1040, 0, 0, 0},  //TV = 3.00(3233 lines)  AV=2.97  SV=7.28  BV=-1.30
    {125014,9696,1040, 0, 0, 0},  //TV = 3.00(3233 lines)  AV=2.97  SV=7.38  BV=-1.41
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sVideoPLineTable_50Hz =
{
{
    {310,1216,1096, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.46  BV=10.17
    {310,1328,1048, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.52  BV=10.11
    {349,1216,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.45  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {426,1216,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.46  BV=9.71
    {465,1216,1072, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.43  BV=9.62
    {503,1216,1064, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=4.41  BV=9.51
    {542,1216,1064, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=4.41  BV=9.41
    {581,1216,1064, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=4.41  BV=9.31
    {619,1216,1064, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=4.41  BV=9.21
    {658,1216,1072, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=4.43  BV=9.12
    {735,1216,1032, 0, 0, 0},  //TV = 10.41(19 lines)  AV=2.97  SV=4.37  BV=9.01
    {774,1216,1048, 0, 0, 0},  //TV = 10.34(20 lines)  AV=2.97  SV=4.39  BV=8.91
    {851,1216,1024, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=4.36  BV=8.81
    {890,1216,1048, 0, 0, 0},  //TV = 10.13(23 lines)  AV=2.97  SV=4.39  BV=8.71
    {967,1216,1032, 0, 0, 0},  //TV = 10.01(25 lines)  AV=2.97  SV=4.37  BV=8.61
    {1045,1216,1024, 0, 0, 0},  //TV = 9.90(27 lines)  AV=2.97  SV=4.36  BV=8.51
    {1122,1216,1024, 0, 0, 0},  //TV = 9.80(29 lines)  AV=2.97  SV=4.36  BV=8.41
    {1199,1216,1024, 0, 0, 0},  //TV = 9.70(31 lines)  AV=2.97  SV=4.36  BV=8.32
    {1277,1216,1032, 0, 0, 0},  //TV = 9.61(33 lines)  AV=2.97  SV=4.37  BV=8.21
    {1354,1216,1048, 0, 0, 0},  //TV = 9.53(35 lines)  AV=2.97  SV=4.39  BV=8.11
    {1470,1216,1032, 0, 0, 0},  //TV = 9.41(38 lines)  AV=2.97  SV=4.37  BV=8.01
    {1586,1216,1024, 0, 0, 0},  //TV = 9.30(41 lines)  AV=2.97  SV=4.36  BV=7.91
    {1702,1216,1024, 0, 0, 0},  //TV = 9.20(44 lines)  AV=2.97  SV=4.36  BV=7.81
    {1818,1216,1024, 0, 0, 0},  //TV = 9.10(47 lines)  AV=2.97  SV=4.36  BV=7.72
    {1934,1216,1032, 0, 0, 0},  //TV = 9.01(50 lines)  AV=2.97  SV=4.37  BV=7.61
    {2089,1216,1024, 0, 0, 0},  //TV = 8.90(54 lines)  AV=2.97  SV=4.36  BV=7.51
    {2243,1216,1024, 0, 0, 0},  //TV = 8.80(58 lines)  AV=2.97  SV=4.36  BV=7.41
    {2398,1216,1024, 0, 0, 0},  //TV = 8.70(62 lines)  AV=2.97  SV=4.36  BV=7.32
    {2553,1216,1032, 0, 0, 0},  //TV = 8.61(66 lines)  AV=2.97  SV=4.37  BV=7.21
    {2746,1216,1032, 0, 0, 0},  //TV = 8.51(71 lines)  AV=2.97  SV=4.37  BV=7.11
    {2978,1136,1096, 0, 0, 0},  //TV = 8.39(77 lines)  AV=2.97  SV=4.36  BV=7.00
    {3171,1216,1024, 0, 0, 0},  //TV = 8.30(82 lines)  AV=2.97  SV=4.36  BV=6.91
    {3403,1216,1024, 0, 0, 0},  //TV = 8.20(88 lines)  AV=2.97  SV=4.36  BV=6.81
    {3635,1216,1024, 0, 0, 0},  //TV = 8.10(94 lines)  AV=2.97  SV=4.36  BV=6.72
    {3906,1216,1024, 0, 0, 0},  //TV = 8.00(101 lines)  AV=2.97  SV=4.36  BV=6.61
    {4177,1216,1024, 0, 0, 0},  //TV = 7.90(108 lines)  AV=2.97  SV=4.36  BV=6.52
    {4486,1216,1024, 0, 0, 0},  //TV = 7.80(116 lines)  AV=2.97  SV=4.36  BV=6.41
    {4795,1216,1024, 0, 0, 0},  //TV = 7.70(124 lines)  AV=2.97  SV=4.36  BV=6.32
    {5143,1216,1024, 0, 0, 0},  //TV = 7.60(133 lines)  AV=2.97  SV=4.36  BV=6.22
    {5569,1136,1096, 0, 0, 0},  //TV = 7.49(144 lines)  AV=2.97  SV=4.36  BV=6.10
    {5955,1136,1096, 0, 0, 0},  //TV = 7.39(154 lines)  AV=2.97  SV=4.36  BV=6.00
    {6381,1136,1096, 0, 0, 0},  //TV = 7.29(165 lines)  AV=2.97  SV=4.36  BV=5.90
    {6767,1216,1024, 0, 0, 0},  //TV = 7.21(175 lines)  AV=2.97  SV=4.36  BV=5.82
    {7309,1136,1096, 0, 0, 0},  //TV = 7.10(189 lines)  AV=2.97  SV=4.36  BV=5.71
    {7811,1216,1024, 0, 0, 0},  //TV = 7.00(202 lines)  AV=2.97  SV=4.36  BV=5.61
    {8391,1136,1096, 0, 0, 0},  //TV = 6.90(217 lines)  AV=2.97  SV=4.36  BV=5.51
    {9049,1136,1096, 0, 0, 0},  //TV = 6.79(234 lines)  AV=2.97  SV=4.36  BV=5.40
    {9706,1136,1096, 0, 0, 0},  //TV = 6.69(251 lines)  AV=2.97  SV=4.36  BV=5.30
    {10016,1216,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.40  BV=5.21
    {10016,1328,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.50  BV=5.12
    {10016,1424,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.60  BV=5.01
    {10016,1536,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.70  BV=4.92
    {10016,1632,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.81  BV=4.81
    {10016,1728,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.91  BV=4.70
    {10016,1840,1064, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.01  BV=4.60
    {10016,1936,1080, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.11  BV=4.51
    {10016,2144,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.20  BV=4.41
    {10016,2240,1064, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.30  BV=4.32
    {19992,1216,1064, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.41  BV=4.20
    {19992,1328,1040, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.51  BV=4.11
    {19992,1424,1040, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.61  BV=4.01
    {19992,1536,1032, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.71  BV=3.91
    {19992,1632,1040, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.81  BV=3.81
    {19992,1728,1056, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.91  BV=3.70
    {30007,1216,1064, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.41  BV=3.62
    {30007,1328,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.52  BV=3.51
    {30007,1424,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.62  BV=3.41
    {30007,1536,1040, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.72  BV=3.31
    {39983,1216,1056, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.40  BV=3.21
    {39983,1328,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.51  BV=3.11
    {39983,1424,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.61  BV=3.01
    {39983,1536,1032, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.71  BV=2.91
    {39983,1632,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.81  BV=2.81
    {39983,1728,1048, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.90  BV=2.72
    {39983,1840,1056, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.00  BV=2.61
    {39983,1936,1072, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.10  BV=2.52
    {39983,2144,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.20  BV=2.42
    {39983,2240,1064, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.30  BV=2.32
    {39983,2448,1056, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.41  BV=2.20
    {49998,2144,1024, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=5.18  BV=2.12
    {49998,2240,1056, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=5.28  BV=2.01
    {60014,2048,1032, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.12  BV=1.91
    {60014,2144,1056, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.22  BV=1.81
    {60014,2352,1024, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.31  BV=1.72
    {60014,2448,1064, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.42  BV=1.61
    {60014,2656,1048, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.52  BV=1.51
    {60014,2864,1040, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.62  BV=1.41
    {60014,3072,1048, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.73  BV=1.30
    {60014,3328,1032, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.82  BV=1.21
    {60014,3584,1024, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.92  BV=1.11
    {60014,3840,1024, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=6.02  BV=1.01
    {60014,4096,1024, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=6.11  BV=0.92
    {60014,4352,1040, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=6.22  BV=0.81
    {60014,4736,1024, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=6.32  BV=0.71
    {69990,4352,1024, 0, 0, 0},  //TV = 3.84(1810 lines)  AV=2.97  SV=6.20  BV=0.61
    {69990,4608,1032, 0, 0, 0},  //TV = 3.84(1810 lines)  AV=2.97  SV=6.29  BV=0.52
    {80005,4352,1024, 0, 0, 0},  //TV = 3.64(2069 lines)  AV=2.97  SV=6.20  BV=0.42
    {89981,4096,1040, 0, 0, 0},  //TV = 3.47(2327 lines)  AV=2.97  SV=6.13  BV=0.31
    {89981,4352,1048, 0, 0, 0},  //TV = 3.47(2327 lines)  AV=2.97  SV=6.23  BV=0.21
    {99996,4224,1048, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.19  BV=0.10
    {99996,4608,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.29  BV=0.00
    {99996,4864,1048, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.39  BV=-0.10
    {99996,5248,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.49  BV=-0.20
    {99996,5632,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.59  BV=-0.30
    {99996,6144,1024, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.70  BV=-0.40
    {99996,6544,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.80  BV=-0.51
    {99996,7072,1024, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.90  BV=-0.61
    {99996,7472,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.99  BV=-0.70
    {99996,7936,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=7.09  BV=-0.79
    {99996,8448,1056, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=7.20  BV=-0.91
    {110011,8448,1024, 0, 0, 0},  //TV = 3.18(2845 lines)  AV=2.97  SV=7.16  BV=-1.00
    {119987,8192,1040, 0, 0, 0},  //TV = 3.06(3103 lines)  AV=2.97  SV=7.13  BV=-1.10
    {119987,8720,1040, 0, 0, 0},  //TV = 3.06(3103 lines)  AV=2.97  SV=7.22  BV=-1.19
    {119987,9344,1048, 0, 0, 0},  //TV = 3.06(3103 lines)  AV=2.97  SV=7.33  BV=-1.30
    {119987,10080,1040, 0, 0, 0},  //TV = 3.06(3103 lines)  AV=2.97  SV=7.43  BV=-1.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_VideoAutoTable =
{
    AETABLE_VIDEO_AUTO,    //eAETableID
    117,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    102,    //i4MaxBV
    -14,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sVideoPLineTable_60Hz,
    sVideoPLineTable_50Hz,
    NULL,
};

static strEvPline sVideo1PLineTable_60Hz =
{
{
    {310,1216,1096, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.46  BV=10.17
    {310,1328,1048, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.52  BV=10.11
    {349,1216,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.45  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {426,1216,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.46  BV=9.71
    {465,1216,1072, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.43  BV=9.62
    {503,1216,1064, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=4.41  BV=9.51
    {542,1216,1064, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=4.41  BV=9.41
    {581,1216,1064, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=4.41  BV=9.31
    {619,1216,1064, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=4.41  BV=9.21
    {658,1216,1072, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=4.43  BV=9.12
    {735,1216,1032, 0, 0, 0},  //TV = 10.41(19 lines)  AV=2.97  SV=4.37  BV=9.01
    {774,1216,1048, 0, 0, 0},  //TV = 10.34(20 lines)  AV=2.97  SV=4.39  BV=8.91
    {851,1216,1024, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=4.36  BV=8.81
    {890,1216,1048, 0, 0, 0},  //TV = 10.13(23 lines)  AV=2.97  SV=4.39  BV=8.71
    {967,1216,1032, 0, 0, 0},  //TV = 10.01(25 lines)  AV=2.97  SV=4.37  BV=8.61
    {1045,1216,1024, 0, 0, 0},  //TV = 9.90(27 lines)  AV=2.97  SV=4.36  BV=8.51
    {1122,1216,1024, 0, 0, 0},  //TV = 9.80(29 lines)  AV=2.97  SV=4.36  BV=8.41
    {1199,1216,1024, 0, 0, 0},  //TV = 9.70(31 lines)  AV=2.97  SV=4.36  BV=8.32
    {1277,1216,1032, 0, 0, 0},  //TV = 9.61(33 lines)  AV=2.97  SV=4.37  BV=8.21
    {1354,1216,1048, 0, 0, 0},  //TV = 9.53(35 lines)  AV=2.97  SV=4.39  BV=8.11
    {1470,1216,1032, 0, 0, 0},  //TV = 9.41(38 lines)  AV=2.97  SV=4.37  BV=8.01
    {1586,1216,1024, 0, 0, 0},  //TV = 9.30(41 lines)  AV=2.97  SV=4.36  BV=7.91
    {1702,1216,1024, 0, 0, 0},  //TV = 9.20(44 lines)  AV=2.97  SV=4.36  BV=7.81
    {1818,1216,1024, 0, 0, 0},  //TV = 9.10(47 lines)  AV=2.97  SV=4.36  BV=7.72
    {1934,1216,1032, 0, 0, 0},  //TV = 9.01(50 lines)  AV=2.97  SV=4.37  BV=7.61
    {2089,1216,1024, 0, 0, 0},  //TV = 8.90(54 lines)  AV=2.97  SV=4.36  BV=7.51
    {2243,1216,1024, 0, 0, 0},  //TV = 8.80(58 lines)  AV=2.97  SV=4.36  BV=7.41
    {2398,1216,1024, 0, 0, 0},  //TV = 8.70(62 lines)  AV=2.97  SV=4.36  BV=7.32
    {2553,1216,1032, 0, 0, 0},  //TV = 8.61(66 lines)  AV=2.97  SV=4.37  BV=7.21
    {2746,1216,1032, 0, 0, 0},  //TV = 8.51(71 lines)  AV=2.97  SV=4.37  BV=7.11
    {2978,1136,1096, 0, 0, 0},  //TV = 8.39(77 lines)  AV=2.97  SV=4.36  BV=7.00
    {3171,1216,1024, 0, 0, 0},  //TV = 8.30(82 lines)  AV=2.97  SV=4.36  BV=6.91
    {3403,1216,1024, 0, 0, 0},  //TV = 8.20(88 lines)  AV=2.97  SV=4.36  BV=6.81
    {3635,1216,1024, 0, 0, 0},  //TV = 8.10(94 lines)  AV=2.97  SV=4.36  BV=6.72
    {3906,1216,1024, 0, 0, 0},  //TV = 8.00(101 lines)  AV=2.97  SV=4.36  BV=6.61
    {4177,1216,1024, 0, 0, 0},  //TV = 7.90(108 lines)  AV=2.97  SV=4.36  BV=6.52
    {4486,1216,1024, 0, 0, 0},  //TV = 7.80(116 lines)  AV=2.97  SV=4.36  BV=6.41
    {4795,1216,1024, 0, 0, 0},  //TV = 7.70(124 lines)  AV=2.97  SV=4.36  BV=6.32
    {5143,1216,1024, 0, 0, 0},  //TV = 7.60(133 lines)  AV=2.97  SV=4.36  BV=6.22
    {5569,1136,1096, 0, 0, 0},  //TV = 7.49(144 lines)  AV=2.97  SV=4.36  BV=6.10
    {5955,1136,1096, 0, 0, 0},  //TV = 7.39(154 lines)  AV=2.97  SV=4.36  BV=6.00
    {6381,1136,1096, 0, 0, 0},  //TV = 7.29(165 lines)  AV=2.97  SV=4.36  BV=5.90
    {6767,1216,1024, 0, 0, 0},  //TV = 7.21(175 lines)  AV=2.97  SV=4.36  BV=5.82
    {7309,1136,1096, 0, 0, 0},  //TV = 7.10(189 lines)  AV=2.97  SV=4.36  BV=5.71
    {7811,1216,1024, 0, 0, 0},  //TV = 7.00(202 lines)  AV=2.97  SV=4.36  BV=5.61
    {8314,1216,1032, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.37  BV=5.51
    {8314,1216,1104, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.47  BV=5.41
    {8314,1328,1088, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.57  BV=5.31
    {8314,1424,1080, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.66  BV=5.22
    {8314,1536,1088, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.78  BV=5.10
    {8314,1728,1024, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.87  BV=5.02
    {8314,1840,1040, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.98  BV=4.90
    {8314,1936,1056, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.07  BV=4.81
    {8314,2048,1072, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.18  BV=4.70
    {8314,2240,1048, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.27  BV=4.61
    {16666,1216,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.36  BV=4.52
    {16666,1216,1104, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.47  BV=4.41
    {16666,1328,1080, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.56  BV=4.31
    {16666,1424,1080, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.66  BV=4.21
    {16666,1536,1080, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.77  BV=4.10
    {16666,1728,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.87  BV=4.01
    {24980,1216,1040, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.38  BV=3.91
    {24980,1216,1112, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.48  BV=3.82
    {24980,1328,1096, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.58  BV=3.71
    {24980,1424,1096, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.68  BV=3.61
    {33216,1216,1032, 0, 0, 0},  //TV = 4.91(859 lines)  AV=2.97  SV=4.37  BV=3.51
    {33216,1216,1104, 0, 0, 0},  //TV = 4.91(859 lines)  AV=2.97  SV=4.47  BV=3.42
    {33216,1328,1088, 0, 0, 0},  //TV = 4.91(859 lines)  AV=2.97  SV=4.57  BV=3.31
    {33216,1424,1080, 0, 0, 0},  //TV = 4.91(859 lines)  AV=2.97  SV=4.66  BV=3.22
    {41646,1216,1088, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.45  BV=3.11
    {41646,1328,1072, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.55  BV=3.00
    {41646,1424,1072, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.65  BV=2.90
    {41646,1536,1056, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.74  BV=2.82
    {41646,1632,1072, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.85  BV=2.71
    {41646,1728,1080, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.94  BV=2.61
    {41646,1936,1032, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.04  BV=2.52
    {41646,2048,1048, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.14  BV=2.41
    {41646,2240,1032, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.25  BV=2.30
    {41646,2352,1048, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.34  BV=2.21
    {41646,2560,1032, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.44  BV=2.11
    {41646,2752,1032, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.55  BV=2.01
    {41646,2960,1032, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.65  BV=1.90
    {41646,3072,1064, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.75  BV=1.81
    {41646,3328,1048, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.84  BV=1.71
    {41646,3584,1040, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.94  BV=1.62
    {41646,3840,1048, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=6.05  BV=1.51
    {41646,4096,1048, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=6.14  BV=1.41
    {41646,4480,1024, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=6.24  BV=1.32
    {41646,4736,1040, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=6.34  BV=1.21
    {41646,5120,1040, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=6.46  BV=1.10
    {41646,5504,1032, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=6.55  BV=1.01
    {41646,5888,1032, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=6.65  BV=0.91
    {41646,6240,1040, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=6.74  BV=0.82
    {41646,6704,1040, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=6.84  BV=0.71
    {41646,7280,1024, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=6.94  BV=0.62
    {41646,7696,1040, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=7.04  BV=0.51
    {41646,8192,1048, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=7.14  BV=0.41
    {41646,8720,1056, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=7.25  BV=0.31
    {41646,9696,1024, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=7.35  BV=0.20
    {41646,10080,1048, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=7.44  BV=0.11
    {41646,10240,1120, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=7.56  BV=-0.01
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sVideo1PLineTable_50Hz =
{
{
    {310,1216,1096, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.46  BV=10.17
    {310,1328,1048, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.52  BV=10.11
    {349,1216,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.45  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {426,1216,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.46  BV=9.71
    {465,1216,1072, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.43  BV=9.62
    {503,1216,1064, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=4.41  BV=9.51
    {542,1216,1064, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=4.41  BV=9.41
    {581,1216,1064, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=4.41  BV=9.31
    {619,1216,1064, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=4.41  BV=9.21
    {658,1216,1072, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=4.43  BV=9.12
    {735,1216,1032, 0, 0, 0},  //TV = 10.41(19 lines)  AV=2.97  SV=4.37  BV=9.01
    {774,1216,1048, 0, 0, 0},  //TV = 10.34(20 lines)  AV=2.97  SV=4.39  BV=8.91
    {851,1216,1024, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=4.36  BV=8.81
    {890,1216,1048, 0, 0, 0},  //TV = 10.13(23 lines)  AV=2.97  SV=4.39  BV=8.71
    {967,1216,1032, 0, 0, 0},  //TV = 10.01(25 lines)  AV=2.97  SV=4.37  BV=8.61
    {1045,1216,1024, 0, 0, 0},  //TV = 9.90(27 lines)  AV=2.97  SV=4.36  BV=8.51
    {1122,1216,1024, 0, 0, 0},  //TV = 9.80(29 lines)  AV=2.97  SV=4.36  BV=8.41
    {1199,1216,1024, 0, 0, 0},  //TV = 9.70(31 lines)  AV=2.97  SV=4.36  BV=8.32
    {1277,1216,1032, 0, 0, 0},  //TV = 9.61(33 lines)  AV=2.97  SV=4.37  BV=8.21
    {1354,1216,1048, 0, 0, 0},  //TV = 9.53(35 lines)  AV=2.97  SV=4.39  BV=8.11
    {1470,1216,1032, 0, 0, 0},  //TV = 9.41(38 lines)  AV=2.97  SV=4.37  BV=8.01
    {1586,1216,1024, 0, 0, 0},  //TV = 9.30(41 lines)  AV=2.97  SV=4.36  BV=7.91
    {1702,1216,1024, 0, 0, 0},  //TV = 9.20(44 lines)  AV=2.97  SV=4.36  BV=7.81
    {1818,1216,1024, 0, 0, 0},  //TV = 9.10(47 lines)  AV=2.97  SV=4.36  BV=7.72
    {1934,1216,1032, 0, 0, 0},  //TV = 9.01(50 lines)  AV=2.97  SV=4.37  BV=7.61
    {2089,1216,1024, 0, 0, 0},  //TV = 8.90(54 lines)  AV=2.97  SV=4.36  BV=7.51
    {2243,1216,1024, 0, 0, 0},  //TV = 8.80(58 lines)  AV=2.97  SV=4.36  BV=7.41
    {2398,1216,1024, 0, 0, 0},  //TV = 8.70(62 lines)  AV=2.97  SV=4.36  BV=7.32
    {2553,1216,1032, 0, 0, 0},  //TV = 8.61(66 lines)  AV=2.97  SV=4.37  BV=7.21
    {2746,1216,1032, 0, 0, 0},  //TV = 8.51(71 lines)  AV=2.97  SV=4.37  BV=7.11
    {2978,1136,1096, 0, 0, 0},  //TV = 8.39(77 lines)  AV=2.97  SV=4.36  BV=7.00
    {3171,1216,1024, 0, 0, 0},  //TV = 8.30(82 lines)  AV=2.97  SV=4.36  BV=6.91
    {3403,1216,1024, 0, 0, 0},  //TV = 8.20(88 lines)  AV=2.97  SV=4.36  BV=6.81
    {3635,1216,1024, 0, 0, 0},  //TV = 8.10(94 lines)  AV=2.97  SV=4.36  BV=6.72
    {3906,1216,1024, 0, 0, 0},  //TV = 8.00(101 lines)  AV=2.97  SV=4.36  BV=6.61
    {4177,1216,1024, 0, 0, 0},  //TV = 7.90(108 lines)  AV=2.97  SV=4.36  BV=6.52
    {4486,1216,1024, 0, 0, 0},  //TV = 7.80(116 lines)  AV=2.97  SV=4.36  BV=6.41
    {4795,1216,1024, 0, 0, 0},  //TV = 7.70(124 lines)  AV=2.97  SV=4.36  BV=6.32
    {5143,1216,1024, 0, 0, 0},  //TV = 7.60(133 lines)  AV=2.97  SV=4.36  BV=6.22
    {5569,1136,1096, 0, 0, 0},  //TV = 7.49(144 lines)  AV=2.97  SV=4.36  BV=6.10
    {5955,1136,1096, 0, 0, 0},  //TV = 7.39(154 lines)  AV=2.97  SV=4.36  BV=6.00
    {6381,1136,1096, 0, 0, 0},  //TV = 7.29(165 lines)  AV=2.97  SV=4.36  BV=5.90
    {6767,1216,1024, 0, 0, 0},  //TV = 7.21(175 lines)  AV=2.97  SV=4.36  BV=5.82
    {7309,1136,1096, 0, 0, 0},  //TV = 7.10(189 lines)  AV=2.97  SV=4.36  BV=5.71
    {7811,1216,1024, 0, 0, 0},  //TV = 7.00(202 lines)  AV=2.97  SV=4.36  BV=5.61
    {8391,1136,1096, 0, 0, 0},  //TV = 6.90(217 lines)  AV=2.97  SV=4.36  BV=5.51
    {9049,1136,1096, 0, 0, 0},  //TV = 6.79(234 lines)  AV=2.97  SV=4.36  BV=5.40
    {9706,1136,1096, 0, 0, 0},  //TV = 6.69(251 lines)  AV=2.97  SV=4.36  BV=5.30
    {10016,1216,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.40  BV=5.21
    {10016,1328,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.50  BV=5.12
    {10016,1424,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.60  BV=5.01
    {10016,1536,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.70  BV=4.92
    {10016,1632,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.81  BV=4.81
    {10016,1728,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.91  BV=4.70
    {10016,1840,1064, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.01  BV=4.60
    {10016,1936,1080, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.11  BV=4.51
    {10016,2144,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.20  BV=4.41
    {10016,2240,1064, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.30  BV=4.32
    {19992,1216,1064, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.41  BV=4.20
    {19992,1328,1040, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.51  BV=4.11
    {19992,1424,1040, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.61  BV=4.01
    {19992,1536,1032, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.71  BV=3.91
    {19992,1632,1040, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.81  BV=3.81
    {19992,1728,1056, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.91  BV=3.70
    {30007,1216,1064, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.41  BV=3.62
    {30007,1328,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.52  BV=3.51
    {30007,1424,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.62  BV=3.41
    {30007,1536,1040, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.72  BV=3.31
    {39983,1216,1056, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.40  BV=3.21
    {39983,1328,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.51  BV=3.11
    {39983,1424,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.61  BV=3.01
    {39983,1536,1032, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.71  BV=2.91
    {39983,1632,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.81  BV=2.81
    {39983,1728,1048, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.90  BV=2.72
    {39983,1840,1056, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.00  BV=2.61
    {39983,1936,1072, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.10  BV=2.52
    {39983,2144,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.20  BV=2.42
    {39983,2240,1064, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.30  BV=2.32
    {39983,2448,1048, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.40  BV=2.21
    {39983,2656,1032, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.50  BV=2.12
    {39983,2864,1032, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.61  BV=2.01
    {39983,3072,1032, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.71  BV=1.91
    {39983,3200,1064, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.81  BV=1.81
    {39983,3456,1048, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.90  BV=1.72
    {39983,3712,1048, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=6.00  BV=1.61
    {39983,3968,1056, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=6.11  BV=1.51
    {39983,4352,1024, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=6.20  BV=1.42
    {39983,4608,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=6.30  BV=1.31
    {39983,4992,1024, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=6.40  BV=1.22
    {39983,5376,1024, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=6.50  BV=1.11
    {39983,5760,1024, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=6.60  BV=1.01
    {39983,6144,1032, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=6.71  BV=0.91
    {39983,6544,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=6.81  BV=0.81
    {39983,7072,1024, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=6.90  BV=0.72
    {39983,7472,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=7.00  BV=0.61
    {39983,7936,1048, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=7.10  BV=0.52
    {39983,8720,1024, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=7.20  BV=0.41
    {39983,9344,1032, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=7.31  BV=0.30
    {39983,10080,1024, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=7.41  BV=0.21
    {39983,10240,1080, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=7.51  BV=0.11
    {39983,10240,1168, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=7.62  BV=-0.01
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Video1AutoTable =
{
    AETABLE_VIDEO1_AUTO,    //eAETableID
    103,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    102,    //i4MaxBV
    0,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sVideo1PLineTable_60Hz,
    sVideo1PLineTable_50Hz,
    NULL,
};

static strEvPline sVideo2PLineTable_60Hz =
{
{
    {310,1216,1096, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.46  BV=10.17
    {310,1328,1048, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.52  BV=10.11
    {349,1216,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.45  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {426,1216,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.46  BV=9.71
    {465,1216,1072, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.43  BV=9.62
    {503,1216,1064, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=4.41  BV=9.51
    {542,1216,1064, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=4.41  BV=9.41
    {581,1216,1064, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=4.41  BV=9.31
    {619,1216,1064, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=4.41  BV=9.21
    {658,1216,1072, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=4.43  BV=9.12
    {735,1216,1032, 0, 0, 0},  //TV = 10.41(19 lines)  AV=2.97  SV=4.37  BV=9.01
    {774,1216,1048, 0, 0, 0},  //TV = 10.34(20 lines)  AV=2.97  SV=4.39  BV=8.91
    {851,1216,1024, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=4.36  BV=8.81
    {890,1216,1048, 0, 0, 0},  //TV = 10.13(23 lines)  AV=2.97  SV=4.39  BV=8.71
    {967,1216,1032, 0, 0, 0},  //TV = 10.01(25 lines)  AV=2.97  SV=4.37  BV=8.61
    {1045,1216,1024, 0, 0, 0},  //TV = 9.90(27 lines)  AV=2.97  SV=4.36  BV=8.51
    {1122,1216,1024, 0, 0, 0},  //TV = 9.80(29 lines)  AV=2.97  SV=4.36  BV=8.41
    {1199,1216,1024, 0, 0, 0},  //TV = 9.70(31 lines)  AV=2.97  SV=4.36  BV=8.32
    {1277,1216,1032, 0, 0, 0},  //TV = 9.61(33 lines)  AV=2.97  SV=4.37  BV=8.21
    {1354,1216,1048, 0, 0, 0},  //TV = 9.53(35 lines)  AV=2.97  SV=4.39  BV=8.11
    {1470,1216,1032, 0, 0, 0},  //TV = 9.41(38 lines)  AV=2.97  SV=4.37  BV=8.01
    {1586,1216,1024, 0, 0, 0},  //TV = 9.30(41 lines)  AV=2.97  SV=4.36  BV=7.91
    {1702,1216,1024, 0, 0, 0},  //TV = 9.20(44 lines)  AV=2.97  SV=4.36  BV=7.81
    {1818,1216,1024, 0, 0, 0},  //TV = 9.10(47 lines)  AV=2.97  SV=4.36  BV=7.72
    {1934,1216,1032, 0, 0, 0},  //TV = 9.01(50 lines)  AV=2.97  SV=4.37  BV=7.61
    {2089,1216,1024, 0, 0, 0},  //TV = 8.90(54 lines)  AV=2.97  SV=4.36  BV=7.51
    {2243,1216,1024, 0, 0, 0},  //TV = 8.80(58 lines)  AV=2.97  SV=4.36  BV=7.41
    {2398,1216,1024, 0, 0, 0},  //TV = 8.70(62 lines)  AV=2.97  SV=4.36  BV=7.32
    {2553,1216,1032, 0, 0, 0},  //TV = 8.61(66 lines)  AV=2.97  SV=4.37  BV=7.21
    {2746,1216,1032, 0, 0, 0},  //TV = 8.51(71 lines)  AV=2.97  SV=4.37  BV=7.11
    {2978,1136,1096, 0, 0, 0},  //TV = 8.39(77 lines)  AV=2.97  SV=4.36  BV=7.00
    {3171,1216,1024, 0, 0, 0},  //TV = 8.30(82 lines)  AV=2.97  SV=4.36  BV=6.91
    {3403,1216,1024, 0, 0, 0},  //TV = 8.20(88 lines)  AV=2.97  SV=4.36  BV=6.81
    {3635,1216,1024, 0, 0, 0},  //TV = 8.10(94 lines)  AV=2.97  SV=4.36  BV=6.72
    {3906,1216,1024, 0, 0, 0},  //TV = 8.00(101 lines)  AV=2.97  SV=4.36  BV=6.61
    {4177,1216,1024, 0, 0, 0},  //TV = 7.90(108 lines)  AV=2.97  SV=4.36  BV=6.52
    {4486,1216,1024, 0, 0, 0},  //TV = 7.80(116 lines)  AV=2.97  SV=4.36  BV=6.41
    {4795,1216,1024, 0, 0, 0},  //TV = 7.70(124 lines)  AV=2.97  SV=4.36  BV=6.32
    {5143,1216,1024, 0, 0, 0},  //TV = 7.60(133 lines)  AV=2.97  SV=4.36  BV=6.22
    {5569,1136,1096, 0, 0, 0},  //TV = 7.49(144 lines)  AV=2.97  SV=4.36  BV=6.10
    {5955,1136,1096, 0, 0, 0},  //TV = 7.39(154 lines)  AV=2.97  SV=4.36  BV=6.00
    {6381,1136,1096, 0, 0, 0},  //TV = 7.29(165 lines)  AV=2.97  SV=4.36  BV=5.90
    {6767,1216,1024, 0, 0, 0},  //TV = 7.21(175 lines)  AV=2.97  SV=4.36  BV=5.82
    {7309,1136,1096, 0, 0, 0},  //TV = 7.10(189 lines)  AV=2.97  SV=4.36  BV=5.71
    {7811,1216,1024, 0, 0, 0},  //TV = 7.00(202 lines)  AV=2.97  SV=4.36  BV=5.61
    {8314,1216,1032, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.37  BV=5.51
    {8314,1216,1104, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.47  BV=5.41
    {8314,1328,1088, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.57  BV=5.31
    {8314,1424,1080, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.66  BV=5.22
    {8314,1536,1088, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.78  BV=5.10
    {8314,1728,1024, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.87  BV=5.02
    {8314,1840,1040, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.98  BV=4.90
    {8314,1936,1056, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.07  BV=4.81
    {8314,2048,1072, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.18  BV=4.70
    {8314,2240,1048, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.27  BV=4.61
    {16666,1216,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.36  BV=4.52
    {16666,1216,1104, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.47  BV=4.41
    {16666,1328,1080, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.56  BV=4.31
    {16666,1424,1080, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.66  BV=4.21
    {16666,1536,1080, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.77  BV=4.10
    {16666,1728,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.87  BV=4.01
    {24980,1216,1040, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.38  BV=3.91
    {24980,1216,1112, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.48  BV=3.82
    {24980,1328,1096, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.58  BV=3.71
    {24980,1424,1096, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.68  BV=3.61
    {33216,1216,1032, 0, 0, 0},  //TV = 4.91(859 lines)  AV=2.97  SV=4.37  BV=3.51
    {33216,1216,1104, 0, 0, 0},  //TV = 4.91(859 lines)  AV=2.97  SV=4.47  BV=3.42
    {33216,1328,1088, 0, 0, 0},  //TV = 4.91(859 lines)  AV=2.97  SV=4.57  BV=3.31
    {33216,1424,1080, 0, 0, 0},  //TV = 4.91(859 lines)  AV=2.97  SV=4.66  BV=3.22
    {41646,1216,1088, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.45  BV=3.11
    {41646,1328,1072, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.55  BV=3.00
    {41646,1424,1072, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.65  BV=2.90
    {41646,1536,1056, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.74  BV=2.82
    {41646,1632,1072, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.85  BV=2.71
    {41646,1728,1080, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.94  BV=2.61
    {41646,1936,1032, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.04  BV=2.52
    {41646,2048,1048, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.14  BV=2.41
    {41646,2240,1032, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.25  BV=2.30
    {41646,2352,1048, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.34  BV=2.21
    {41646,2560,1032, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.44  BV=2.11
    {41646,2752,1032, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.55  BV=2.01
    {41646,2960,1032, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.65  BV=1.90
    {41646,3072,1064, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.75  BV=1.81
    {41646,3328,1048, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.84  BV=1.71
    {41646,3584,1040, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.94  BV=1.62
    {41646,3840,1048, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=6.05  BV=1.51
    {41646,4096,1048, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=6.14  BV=1.41
    {41646,4480,1024, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=6.24  BV=1.32
    {41646,4736,1040, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=6.34  BV=1.21
    {41646,5120,1040, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=6.46  BV=1.10
    {41646,5504,1032, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=6.55  BV=1.01
    {41646,5888,1032, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=6.65  BV=0.91
    {41646,6240,1040, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=6.74  BV=0.82
    {41646,6704,1040, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=6.84  BV=0.71
    {41646,7280,1024, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=6.94  BV=0.62
    {41646,7696,1040, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=7.04  BV=0.51
    {41646,8192,1048, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=7.14  BV=0.41
    {41646,8720,1056, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=7.25  BV=0.31
    {41646,9696,1024, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=7.35  BV=0.20
    {41646,10080,1048, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=7.44  BV=0.11
    {41646,10240,1120, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=7.56  BV=-0.01
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sVideo2PLineTable_50Hz =
{
{
    {310,1216,1096, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.46  BV=10.17
    {310,1328,1048, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.52  BV=10.11
    {349,1216,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.45  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {426,1216,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.46  BV=9.71
    {465,1216,1072, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.43  BV=9.62
    {503,1216,1064, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=4.41  BV=9.51
    {542,1216,1064, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=4.41  BV=9.41
    {581,1216,1064, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=4.41  BV=9.31
    {619,1216,1064, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=4.41  BV=9.21
    {658,1216,1072, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=4.43  BV=9.12
    {735,1216,1032, 0, 0, 0},  //TV = 10.41(19 lines)  AV=2.97  SV=4.37  BV=9.01
    {774,1216,1048, 0, 0, 0},  //TV = 10.34(20 lines)  AV=2.97  SV=4.39  BV=8.91
    {851,1216,1024, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=4.36  BV=8.81
    {890,1216,1048, 0, 0, 0},  //TV = 10.13(23 lines)  AV=2.97  SV=4.39  BV=8.71
    {967,1216,1032, 0, 0, 0},  //TV = 10.01(25 lines)  AV=2.97  SV=4.37  BV=8.61
    {1045,1216,1024, 0, 0, 0},  //TV = 9.90(27 lines)  AV=2.97  SV=4.36  BV=8.51
    {1122,1216,1024, 0, 0, 0},  //TV = 9.80(29 lines)  AV=2.97  SV=4.36  BV=8.41
    {1199,1216,1024, 0, 0, 0},  //TV = 9.70(31 lines)  AV=2.97  SV=4.36  BV=8.32
    {1277,1216,1032, 0, 0, 0},  //TV = 9.61(33 lines)  AV=2.97  SV=4.37  BV=8.21
    {1354,1216,1048, 0, 0, 0},  //TV = 9.53(35 lines)  AV=2.97  SV=4.39  BV=8.11
    {1470,1216,1032, 0, 0, 0},  //TV = 9.41(38 lines)  AV=2.97  SV=4.37  BV=8.01
    {1586,1216,1024, 0, 0, 0},  //TV = 9.30(41 lines)  AV=2.97  SV=4.36  BV=7.91
    {1702,1216,1024, 0, 0, 0},  //TV = 9.20(44 lines)  AV=2.97  SV=4.36  BV=7.81
    {1818,1216,1024, 0, 0, 0},  //TV = 9.10(47 lines)  AV=2.97  SV=4.36  BV=7.72
    {1934,1216,1032, 0, 0, 0},  //TV = 9.01(50 lines)  AV=2.97  SV=4.37  BV=7.61
    {2089,1216,1024, 0, 0, 0},  //TV = 8.90(54 lines)  AV=2.97  SV=4.36  BV=7.51
    {2243,1216,1024, 0, 0, 0},  //TV = 8.80(58 lines)  AV=2.97  SV=4.36  BV=7.41
    {2398,1216,1024, 0, 0, 0},  //TV = 8.70(62 lines)  AV=2.97  SV=4.36  BV=7.32
    {2553,1216,1032, 0, 0, 0},  //TV = 8.61(66 lines)  AV=2.97  SV=4.37  BV=7.21
    {2746,1216,1032, 0, 0, 0},  //TV = 8.51(71 lines)  AV=2.97  SV=4.37  BV=7.11
    {2978,1136,1096, 0, 0, 0},  //TV = 8.39(77 lines)  AV=2.97  SV=4.36  BV=7.00
    {3171,1216,1024, 0, 0, 0},  //TV = 8.30(82 lines)  AV=2.97  SV=4.36  BV=6.91
    {3403,1216,1024, 0, 0, 0},  //TV = 8.20(88 lines)  AV=2.97  SV=4.36  BV=6.81
    {3635,1216,1024, 0, 0, 0},  //TV = 8.10(94 lines)  AV=2.97  SV=4.36  BV=6.72
    {3906,1216,1024, 0, 0, 0},  //TV = 8.00(101 lines)  AV=2.97  SV=4.36  BV=6.61
    {4177,1216,1024, 0, 0, 0},  //TV = 7.90(108 lines)  AV=2.97  SV=4.36  BV=6.52
    {4486,1216,1024, 0, 0, 0},  //TV = 7.80(116 lines)  AV=2.97  SV=4.36  BV=6.41
    {4795,1216,1024, 0, 0, 0},  //TV = 7.70(124 lines)  AV=2.97  SV=4.36  BV=6.32
    {5143,1216,1024, 0, 0, 0},  //TV = 7.60(133 lines)  AV=2.97  SV=4.36  BV=6.22
    {5569,1136,1096, 0, 0, 0},  //TV = 7.49(144 lines)  AV=2.97  SV=4.36  BV=6.10
    {5955,1136,1096, 0, 0, 0},  //TV = 7.39(154 lines)  AV=2.97  SV=4.36  BV=6.00
    {6381,1136,1096, 0, 0, 0},  //TV = 7.29(165 lines)  AV=2.97  SV=4.36  BV=5.90
    {6767,1216,1024, 0, 0, 0},  //TV = 7.21(175 lines)  AV=2.97  SV=4.36  BV=5.82
    {7309,1136,1096, 0, 0, 0},  //TV = 7.10(189 lines)  AV=2.97  SV=4.36  BV=5.71
    {7811,1216,1024, 0, 0, 0},  //TV = 7.00(202 lines)  AV=2.97  SV=4.36  BV=5.61
    {8391,1136,1096, 0, 0, 0},  //TV = 6.90(217 lines)  AV=2.97  SV=4.36  BV=5.51
    {9049,1136,1096, 0, 0, 0},  //TV = 6.79(234 lines)  AV=2.97  SV=4.36  BV=5.40
    {9706,1136,1096, 0, 0, 0},  //TV = 6.69(251 lines)  AV=2.97  SV=4.36  BV=5.30
    {10016,1216,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.40  BV=5.21
    {10016,1328,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.50  BV=5.12
    {10016,1424,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.60  BV=5.01
    {10016,1536,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.70  BV=4.92
    {10016,1632,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.81  BV=4.81
    {10016,1728,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.91  BV=4.70
    {10016,1840,1064, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.01  BV=4.60
    {10016,1936,1080, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.11  BV=4.51
    {10016,2144,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.20  BV=4.41
    {10016,2240,1064, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.30  BV=4.32
    {19992,1216,1064, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.41  BV=4.20
    {19992,1328,1040, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.51  BV=4.11
    {19992,1424,1040, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.61  BV=4.01
    {19992,1536,1032, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.71  BV=3.91
    {19992,1632,1040, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.81  BV=3.81
    {19992,1728,1056, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.91  BV=3.70
    {30007,1216,1064, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.41  BV=3.62
    {30007,1328,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.52  BV=3.51
    {30007,1424,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.62  BV=3.41
    {30007,1536,1040, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.72  BV=3.31
    {39983,1216,1056, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.40  BV=3.21
    {39983,1328,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.51  BV=3.11
    {39983,1424,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.61  BV=3.01
    {39983,1536,1032, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.71  BV=2.91
    {39983,1632,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.81  BV=2.81
    {39983,1728,1048, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.90  BV=2.72
    {39983,1840,1056, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.00  BV=2.61
    {39983,1936,1072, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.10  BV=2.52
    {39983,2144,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.20  BV=2.42
    {39983,2240,1064, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.30  BV=2.32
    {39983,2448,1048, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.40  BV=2.21
    {39983,2656,1032, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.50  BV=2.12
    {39983,2864,1032, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.61  BV=2.01
    {39983,3072,1032, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.71  BV=1.91
    {39983,3200,1064, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.81  BV=1.81
    {39983,3456,1048, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.90  BV=1.72
    {39983,3712,1048, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=6.00  BV=1.61
    {39983,3968,1056, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=6.11  BV=1.51
    {39983,4352,1024, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=6.20  BV=1.42
    {39983,4608,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=6.30  BV=1.31
    {39983,4992,1024, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=6.40  BV=1.22
    {39983,5376,1024, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=6.50  BV=1.11
    {39983,5760,1024, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=6.60  BV=1.01
    {39983,6144,1032, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=6.71  BV=0.91
    {39983,6544,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=6.81  BV=0.81
    {39983,7072,1024, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=6.90  BV=0.72
    {39983,7472,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=7.00  BV=0.61
    {39983,7936,1048, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=7.10  BV=0.52
    {39983,8720,1024, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=7.20  BV=0.41
    {39983,9344,1032, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=7.31  BV=0.30
    {39983,10080,1024, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=7.41  BV=0.21
    {39983,10240,1080, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=7.51  BV=0.11
    {39983,10240,1168, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=7.62  BV=-0.01
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Video2AutoTable =
{
    AETABLE_VIDEO2_AUTO,    //eAETableID
    103,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    102,    //i4MaxBV
    0,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sVideo2PLineTable_60Hz,
    sVideo2PLineTable_50Hz,
    NULL,
};

static strEvPline sCustom1PLineTable_60Hz =
{
{
    {78,1424,1072, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.65  BV=11.96
    {78,1536,1056, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.74  BV=11.88
    {78,1632,1048, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.82  BV=11.80
    {117,1216,1024, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.36  BV=11.67
    {117,1216,1096, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.46  BV=11.58
    {117,1328,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.54  BV=11.49
    {117,1424,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.64  BV=11.39
    {155,1136,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.35  BV=11.28
    {155,1216,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.45  BV=11.18
    {155,1328,1072, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.55  BV=11.07
    {155,1424,1040, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.61  BV=11.02
    {194,1216,1048, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.39  BV=10.91
    {194,1328,1024, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.49  BV=10.82
    {233,1136,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.33  BV=10.71
    {233,1216,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.43  BV=10.61
    {271,1136,1056, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.31  BV=10.52
    {271,1216,1064, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.41  BV=10.41
    {310,1136,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.32  BV=10.31
    {310,1216,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.41  BV=10.21
    {349,1136,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.35  BV=10.11
    {387,1136,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.29  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {465,1136,1080, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.34  BV=9.70
    {503,1136,1064, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=4.32  BV=9.61
    {542,1136,1056, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=4.31  BV=9.52
    {581,1136,1056, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=4.31  BV=9.41
    {619,1136,1064, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=4.32  BV=9.31
    {658,1136,1080, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=4.34  BV=9.20
    {697,1136,1088, 0, 0, 0},  //TV = 10.49(18 lines)  AV=2.97  SV=4.35  BV=9.11
    {774,1136,1048, 0, 0, 0},  //TV = 10.34(20 lines)  AV=2.97  SV=4.29  BV=9.01
    {813,1136,1072, 0, 0, 0},  //TV = 10.26(21 lines)  AV=2.97  SV=4.33  BV=8.91
    {851,1216,1024, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=4.36  BV=8.81
    {929,1136,1080, 0, 0, 0},  //TV = 10.07(24 lines)  AV=2.97  SV=4.34  BV=8.71
    {1006,1136,1064, 0, 0, 0},  //TV = 9.96(26 lines)  AV=2.97  SV=4.32  BV=8.61
    {1083,1136,1064, 0, 0, 0},  //TV = 9.85(28 lines)  AV=2.97  SV=4.32  BV=8.51
    {1161,1136,1064, 0, 0, 0},  //TV = 9.75(30 lines)  AV=2.97  SV=4.32  BV=8.41
    {1238,1136,1064, 0, 0, 0},  //TV = 9.66(32 lines)  AV=2.97  SV=4.32  BV=8.31
    {1354,1136,1048, 0, 0, 0},  //TV = 9.53(35 lines)  AV=2.97  SV=4.29  BV=8.21
    {1431,1136,1056, 0, 0, 0},  //TV = 9.45(37 lines)  AV=2.97  SV=4.31  BV=8.11
    {1547,1136,1056, 0, 0, 0},  //TV = 9.34(40 lines)  AV=2.97  SV=4.31  BV=8.00
    {1625,1136,1072, 0, 0, 0},  //TV = 9.27(42 lines)  AV=2.97  SV=4.33  BV=7.91
    {1741,1136,1072, 0, 0, 0},  //TV = 9.17(45 lines)  AV=2.97  SV=4.33  BV=7.81
    {1895,1136,1056, 0, 0, 0},  //TV = 9.04(49 lines)  AV=2.97  SV=4.31  BV=7.71
    {2011,1136,1064, 0, 0, 0},  //TV = 8.96(52 lines)  AV=2.97  SV=4.32  BV=7.61
    {2166,1136,1064, 0, 0, 0},  //TV = 8.85(56 lines)  AV=2.97  SV=4.32  BV=7.51
    {2321,1136,1064, 0, 0, 0},  //TV = 8.75(60 lines)  AV=2.97  SV=4.32  BV=7.41
    {2514,1136,1048, 0, 0, 0},  //TV = 8.64(65 lines)  AV=2.97  SV=4.29  BV=7.31
    {2669,1136,1056, 0, 0, 0},  //TV = 8.55(69 lines)  AV=2.97  SV=4.31  BV=7.22
    {2862,1136,1056, 0, 0, 0},  //TV = 8.45(74 lines)  AV=2.97  SV=4.31  BV=7.11
    {3094,1136,1048, 0, 0, 0},  //TV = 8.34(80 lines)  AV=2.97  SV=4.29  BV=7.01
    {3287,1136,1056, 0, 0, 0},  //TV = 8.25(85 lines)  AV=2.97  SV=4.31  BV=6.91
    {3558,1136,1056, 0, 0, 0},  //TV = 8.13(92 lines)  AV=2.97  SV=4.31  BV=6.80
    {3790,1136,1056, 0, 0, 0},  //TV = 8.04(98 lines)  AV=2.97  SV=4.31  BV=6.71
    {4061,1136,1056, 0, 0, 0},  //TV = 7.94(105 lines)  AV=2.97  SV=4.31  BV=6.61
    {4370,1136,1056, 0, 0, 0},  //TV = 7.84(113 lines)  AV=2.97  SV=4.31  BV=6.50
    {4679,1136,1048, 0, 0, 0},  //TV = 7.74(121 lines)  AV=2.97  SV=4.29  BV=6.42
    {4989,1136,1056, 0, 0, 0},  //TV = 7.65(129 lines)  AV=2.97  SV=4.31  BV=6.31
    {5375,1136,1048, 0, 0, 0},  //TV = 7.54(139 lines)  AV=2.97  SV=4.29  BV=6.22
    {5723,1136,1056, 0, 0, 0},  //TV = 7.45(148 lines)  AV=2.97  SV=4.31  BV=6.11
    {6187,1136,1056, 0, 0, 0},  //TV = 7.34(160 lines)  AV=2.97  SV=4.31  BV=6.00
    {6574,1136,1056, 0, 0, 0},  //TV = 7.25(170 lines)  AV=2.97  SV=4.31  BV=5.91
    {7115,1136,1048, 0, 0, 0},  //TV = 7.13(184 lines)  AV=2.97  SV=4.29  BV=5.81
    {7618,1136,1048, 0, 0, 0},  //TV = 7.04(197 lines)  AV=2.97  SV=4.29  BV=5.71
    {8159,1136,1048, 0, 0, 0},  //TV = 6.94(211 lines)  AV=2.97  SV=4.29  BV=5.61
    {8314,1216,1032, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.37  BV=5.51
    {8314,1216,1104, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.47  BV=5.41
    {8314,1328,1096, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.58  BV=5.30
    {8314,1424,1080, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.66  BV=5.22
    {8314,1536,1088, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.78  BV=5.10
    {8314,1728,1024, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.87  BV=5.02
    {8314,1840,1040, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.98  BV=4.90
    {8314,1936,1056, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.07  BV=4.81
    {8314,2048,1064, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.17  BV=4.71
    {8314,2240,1048, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.27  BV=4.61
    {16666,1216,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.36  BV=4.52
    {16666,1216,1104, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.47  BV=4.41
    {16666,1328,1080, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.56  BV=4.31
    {16666,1424,1080, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.66  BV=4.21
    {16666,1536,1072, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.76  BV=4.12
    {16666,1728,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.87  BV=4.01
    {16666,1840,1032, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.97  BV=3.91
    {16666,1936,1048, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.06  BV=3.81
    {16666,2048,1064, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.17  BV=3.71
    {16666,2240,1048, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.27  BV=3.60
    {16666,2448,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.37  BV=3.51
    {16666,2560,1048, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.47  BV=3.41
    {16666,2752,1048, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.57  BV=3.31
    {16666,2960,1040, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.66  BV=3.21
    {16666,3200,1032, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.77  BV=3.11
    {16666,3456,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.87  BV=3.01
    {16666,3712,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.97  BV=2.91
    {16666,3968,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=6.07  BV=2.81
    {16666,4224,1032, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=6.17  BV=2.71
    {16666,4480,1040, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=6.26  BV=2.62
    {24980,3200,1048, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=5.79  BV=2.51
    {24980,3456,1040, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=5.89  BV=2.41
    {24980,3712,1032, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=5.98  BV=2.31
    {24980,3968,1040, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=6.09  BV=2.21
    {33332,3200,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=5.77  BV=2.11
    {33332,3456,1024, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=5.87  BV=2.01
    {33332,3584,1056, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=5.96  BV=1.92
    {33332,3968,1024, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.07  BV=1.81
    {33332,4224,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.17  BV=1.71
    {33332,4480,1048, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.27  BV=1.60
    {33332,4864,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.37  BV=1.51
    {33332,5248,1024, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.47  BV=1.41
    {33332,5504,1040, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.56  BV=1.32
    {33332,6016,1024, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.67  BV=1.21
    {33332,6384,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.76  BV=1.12
    {33332,6896,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.87  BV=1.00
    {33332,7280,1048, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.97  BV=0.90
    {33332,7936,1024, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=7.07  BV=0.81
    {33332,8448,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=7.17  BV=0.71
    {33332,9040,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=7.26  BV=0.61
    {33332,9696,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=7.37  BV=0.51
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCustom1PLineTable_50Hz =
{
{
    {78,1424,1072, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.65  BV=11.96
    {78,1536,1056, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.74  BV=11.88
    {78,1632,1048, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.82  BV=11.80
    {117,1216,1024, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.36  BV=11.67
    {117,1216,1096, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.46  BV=11.58
    {117,1328,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.54  BV=11.49
    {117,1424,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.64  BV=11.39
    {155,1136,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.35  BV=11.28
    {155,1216,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.45  BV=11.18
    {155,1328,1072, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.55  BV=11.07
    {155,1424,1040, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.61  BV=11.02
    {194,1216,1048, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.39  BV=10.91
    {194,1328,1024, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.49  BV=10.82
    {233,1136,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.33  BV=10.71
    {233,1216,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.43  BV=10.61
    {271,1136,1056, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.31  BV=10.52
    {271,1216,1064, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.41  BV=10.41
    {310,1136,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.32  BV=10.31
    {310,1216,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.41  BV=10.21
    {349,1136,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.35  BV=10.11
    {387,1136,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.29  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {465,1136,1080, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.34  BV=9.70
    {503,1136,1064, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=4.32  BV=9.61
    {542,1136,1056, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=4.31  BV=9.52
    {581,1136,1056, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=4.31  BV=9.41
    {619,1136,1064, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=4.32  BV=9.31
    {658,1136,1080, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=4.34  BV=9.20
    {697,1136,1088, 0, 0, 0},  //TV = 10.49(18 lines)  AV=2.97  SV=4.35  BV=9.11
    {774,1136,1048, 0, 0, 0},  //TV = 10.34(20 lines)  AV=2.97  SV=4.29  BV=9.01
    {813,1136,1072, 0, 0, 0},  //TV = 10.26(21 lines)  AV=2.97  SV=4.33  BV=8.91
    {851,1216,1024, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=4.36  BV=8.81
    {929,1136,1080, 0, 0, 0},  //TV = 10.07(24 lines)  AV=2.97  SV=4.34  BV=8.71
    {1006,1136,1064, 0, 0, 0},  //TV = 9.96(26 lines)  AV=2.97  SV=4.32  BV=8.61
    {1083,1136,1064, 0, 0, 0},  //TV = 9.85(28 lines)  AV=2.97  SV=4.32  BV=8.51
    {1161,1136,1064, 0, 0, 0},  //TV = 9.75(30 lines)  AV=2.97  SV=4.32  BV=8.41
    {1238,1136,1064, 0, 0, 0},  //TV = 9.66(32 lines)  AV=2.97  SV=4.32  BV=8.31
    {1354,1136,1048, 0, 0, 0},  //TV = 9.53(35 lines)  AV=2.97  SV=4.29  BV=8.21
    {1431,1136,1056, 0, 0, 0},  //TV = 9.45(37 lines)  AV=2.97  SV=4.31  BV=8.11
    {1547,1136,1056, 0, 0, 0},  //TV = 9.34(40 lines)  AV=2.97  SV=4.31  BV=8.00
    {1625,1136,1072, 0, 0, 0},  //TV = 9.27(42 lines)  AV=2.97  SV=4.33  BV=7.91
    {1741,1136,1072, 0, 0, 0},  //TV = 9.17(45 lines)  AV=2.97  SV=4.33  BV=7.81
    {1895,1136,1056, 0, 0, 0},  //TV = 9.04(49 lines)  AV=2.97  SV=4.31  BV=7.71
    {2011,1136,1064, 0, 0, 0},  //TV = 8.96(52 lines)  AV=2.97  SV=4.32  BV=7.61
    {2166,1136,1064, 0, 0, 0},  //TV = 8.85(56 lines)  AV=2.97  SV=4.32  BV=7.51
    {2321,1136,1064, 0, 0, 0},  //TV = 8.75(60 lines)  AV=2.97  SV=4.32  BV=7.41
    {2514,1136,1048, 0, 0, 0},  //TV = 8.64(65 lines)  AV=2.97  SV=4.29  BV=7.31
    {2669,1136,1056, 0, 0, 0},  //TV = 8.55(69 lines)  AV=2.97  SV=4.31  BV=7.22
    {2862,1136,1056, 0, 0, 0},  //TV = 8.45(74 lines)  AV=2.97  SV=4.31  BV=7.11
    {3094,1136,1048, 0, 0, 0},  //TV = 8.34(80 lines)  AV=2.97  SV=4.29  BV=7.01
    {3287,1136,1056, 0, 0, 0},  //TV = 8.25(85 lines)  AV=2.97  SV=4.31  BV=6.91
    {3558,1136,1056, 0, 0, 0},  //TV = 8.13(92 lines)  AV=2.97  SV=4.31  BV=6.80
    {3790,1136,1056, 0, 0, 0},  //TV = 8.04(98 lines)  AV=2.97  SV=4.31  BV=6.71
    {4061,1136,1056, 0, 0, 0},  //TV = 7.94(105 lines)  AV=2.97  SV=4.31  BV=6.61
    {4370,1136,1056, 0, 0, 0},  //TV = 7.84(113 lines)  AV=2.97  SV=4.31  BV=6.50
    {4679,1136,1048, 0, 0, 0},  //TV = 7.74(121 lines)  AV=2.97  SV=4.29  BV=6.42
    {4989,1136,1056, 0, 0, 0},  //TV = 7.65(129 lines)  AV=2.97  SV=4.31  BV=6.31
    {5375,1136,1048, 0, 0, 0},  //TV = 7.54(139 lines)  AV=2.97  SV=4.29  BV=6.22
    {5723,1136,1056, 0, 0, 0},  //TV = 7.45(148 lines)  AV=2.97  SV=4.31  BV=6.11
    {6187,1136,1056, 0, 0, 0},  //TV = 7.34(160 lines)  AV=2.97  SV=4.31  BV=6.00
    {6574,1136,1056, 0, 0, 0},  //TV = 7.25(170 lines)  AV=2.97  SV=4.31  BV=5.91
    {7115,1136,1048, 0, 0, 0},  //TV = 7.13(184 lines)  AV=2.97  SV=4.29  BV=5.81
    {7618,1136,1048, 0, 0, 0},  //TV = 7.04(197 lines)  AV=2.97  SV=4.29  BV=5.71
    {8159,1136,1048, 0, 0, 0},  //TV = 6.94(211 lines)  AV=2.97  SV=4.29  BV=5.61
    {8739,1136,1048, 0, 0, 0},  //TV = 6.84(226 lines)  AV=2.97  SV=4.29  BV=5.51
    {9358,1136,1048, 0, 0, 0},  //TV = 6.74(242 lines)  AV=2.97  SV=4.29  BV=5.42
    {10016,1136,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.31  BV=5.31
    {10016,1216,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.40  BV=5.21
    {10016,1328,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.50  BV=5.12
    {10016,1424,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.60  BV=5.01
    {10016,1536,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.70  BV=4.92
    {10016,1632,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.79  BV=4.82
    {10016,1728,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.91  BV=4.70
    {10016,1840,1064, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.01  BV=4.60
    {10016,1936,1072, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.10  BV=4.52
    {10016,2144,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.20  BV=4.41
    {10016,2240,1072, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.31  BV=4.31
    {10016,2448,1048, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.40  BV=4.21
    {10016,2656,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.51  BV=4.10
    {10016,2864,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.59  BV=4.02
    {10016,3072,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.71  BV=3.91
    {10016,3200,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.80  BV=3.81
    {10016,3456,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.91  BV=3.70
    {10016,3712,1048, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.00  BV=3.61
    {10016,3968,1048, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.10  BV=3.51
    {10016,4352,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.20  BV=3.41
    {10016,4608,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.30  BV=3.31
    {10016,4992,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.41  BV=3.20
    {10016,5376,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.50  BV=3.11
    {10016,5760,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.60  BV=3.01
    {19992,3072,1032, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=5.71  BV=2.91
    {19992,3200,1064, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=5.81  BV=2.81
    {19992,3456,1056, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=5.91  BV=2.70
    {19992,3712,1048, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=6.00  BV=2.61
    {19992,3968,1056, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=6.11  BV=2.51
    {19992,4352,1032, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=6.21  BV=2.41
    {30007,3072,1040, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=5.72  BV=2.31
    {30007,3328,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=5.82  BV=2.21
    {30007,3584,1024, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=5.92  BV=2.11
    {30007,3840,1024, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.02  BV=2.01
    {30007,4096,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.12  BV=1.91
    {30007,4352,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.21  BV=1.82
    {30007,4736,1024, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.32  BV=1.71
    {30007,4992,1040, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.42  BV=1.61
    {30007,5376,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.51  BV=1.51
    {30007,5760,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.61  BV=1.42
    {30007,6240,1024, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.72  BV=1.31
    {30007,6544,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.82  BV=1.21
    {30007,7072,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.91  BV=1.12
    {30007,7472,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.01  BV=1.02
    {30007,8192,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.12  BV=0.91
    {30007,8720,1040, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.22  BV=0.81
    {30007,9344,1040, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.32  BV=0.71
    {30007,10080,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.42  BV=0.61
    {30007,10240,1088, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.52  BV=0.51
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Custom1AutoTable =
{
    AETABLE_CUSTOM1_AUTO,    //eAETableID
    116,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    120,    //i4MaxBV
    5,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCustom1PLineTable_60Hz,
    sCustom1PLineTable_50Hz,
    NULL,
};

static strEvPline sCustom2PLineTable_60Hz =
{
{
    {78,1424,1072, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.65  BV=11.96
    {78,1536,1056, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.74  BV=11.88
    {78,1632,1048, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.82  BV=11.80
    {117,1216,1024, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.36  BV=11.67
    {117,1216,1096, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.46  BV=11.58
    {117,1328,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.54  BV=11.49
    {117,1424,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.64  BV=11.39
    {155,1136,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.35  BV=11.28
    {155,1216,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.45  BV=11.18
    {155,1328,1072, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.55  BV=11.07
    {155,1424,1040, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.61  BV=11.02
    {194,1216,1048, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.39  BV=10.91
    {194,1328,1024, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.49  BV=10.82
    {233,1136,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.33  BV=10.71
    {233,1216,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.43  BV=10.61
    {271,1136,1056, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.31  BV=10.52
    {271,1216,1064, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.41  BV=10.41
    {310,1136,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.32  BV=10.31
    {310,1216,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.41  BV=10.21
    {349,1136,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.35  BV=10.11
    {387,1136,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.29  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {465,1136,1080, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.34  BV=9.70
    {503,1136,1064, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=4.32  BV=9.61
    {542,1136,1056, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=4.31  BV=9.52
    {581,1136,1056, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=4.31  BV=9.41
    {619,1136,1064, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=4.32  BV=9.31
    {658,1136,1080, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=4.34  BV=9.20
    {697,1136,1088, 0, 0, 0},  //TV = 10.49(18 lines)  AV=2.97  SV=4.35  BV=9.11
    {774,1136,1048, 0, 0, 0},  //TV = 10.34(20 lines)  AV=2.97  SV=4.29  BV=9.01
    {813,1136,1072, 0, 0, 0},  //TV = 10.26(21 lines)  AV=2.97  SV=4.33  BV=8.91
    {851,1216,1024, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=4.36  BV=8.81
    {929,1136,1080, 0, 0, 0},  //TV = 10.07(24 lines)  AV=2.97  SV=4.34  BV=8.71
    {1006,1136,1064, 0, 0, 0},  //TV = 9.96(26 lines)  AV=2.97  SV=4.32  BV=8.61
    {1083,1136,1064, 0, 0, 0},  //TV = 9.85(28 lines)  AV=2.97  SV=4.32  BV=8.51
    {1161,1136,1064, 0, 0, 0},  //TV = 9.75(30 lines)  AV=2.97  SV=4.32  BV=8.41
    {1238,1136,1064, 0, 0, 0},  //TV = 9.66(32 lines)  AV=2.97  SV=4.32  BV=8.31
    {1354,1136,1048, 0, 0, 0},  //TV = 9.53(35 lines)  AV=2.97  SV=4.29  BV=8.21
    {1431,1136,1056, 0, 0, 0},  //TV = 9.45(37 lines)  AV=2.97  SV=4.31  BV=8.11
    {1547,1136,1056, 0, 0, 0},  //TV = 9.34(40 lines)  AV=2.97  SV=4.31  BV=8.00
    {1625,1136,1072, 0, 0, 0},  //TV = 9.27(42 lines)  AV=2.97  SV=4.33  BV=7.91
    {1741,1136,1072, 0, 0, 0},  //TV = 9.17(45 lines)  AV=2.97  SV=4.33  BV=7.81
    {1895,1136,1056, 0, 0, 0},  //TV = 9.04(49 lines)  AV=2.97  SV=4.31  BV=7.71
    {2011,1136,1064, 0, 0, 0},  //TV = 8.96(52 lines)  AV=2.97  SV=4.32  BV=7.61
    {2166,1136,1064, 0, 0, 0},  //TV = 8.85(56 lines)  AV=2.97  SV=4.32  BV=7.51
    {2321,1136,1064, 0, 0, 0},  //TV = 8.75(60 lines)  AV=2.97  SV=4.32  BV=7.41
    {2514,1136,1048, 0, 0, 0},  //TV = 8.64(65 lines)  AV=2.97  SV=4.29  BV=7.31
    {2669,1136,1056, 0, 0, 0},  //TV = 8.55(69 lines)  AV=2.97  SV=4.31  BV=7.22
    {2862,1136,1056, 0, 0, 0},  //TV = 8.45(74 lines)  AV=2.97  SV=4.31  BV=7.11
    {3094,1136,1048, 0, 0, 0},  //TV = 8.34(80 lines)  AV=2.97  SV=4.29  BV=7.01
    {3287,1136,1056, 0, 0, 0},  //TV = 8.25(85 lines)  AV=2.97  SV=4.31  BV=6.91
    {3558,1136,1056, 0, 0, 0},  //TV = 8.13(92 lines)  AV=2.97  SV=4.31  BV=6.80
    {3790,1136,1056, 0, 0, 0},  //TV = 8.04(98 lines)  AV=2.97  SV=4.31  BV=6.71
    {4061,1136,1056, 0, 0, 0},  //TV = 7.94(105 lines)  AV=2.97  SV=4.31  BV=6.61
    {4370,1136,1056, 0, 0, 0},  //TV = 7.84(113 lines)  AV=2.97  SV=4.31  BV=6.50
    {4679,1136,1048, 0, 0, 0},  //TV = 7.74(121 lines)  AV=2.97  SV=4.29  BV=6.42
    {4989,1136,1056, 0, 0, 0},  //TV = 7.65(129 lines)  AV=2.97  SV=4.31  BV=6.31
    {5375,1136,1048, 0, 0, 0},  //TV = 7.54(139 lines)  AV=2.97  SV=4.29  BV=6.22
    {5723,1136,1056, 0, 0, 0},  //TV = 7.45(148 lines)  AV=2.97  SV=4.31  BV=6.11
    {6187,1136,1056, 0, 0, 0},  //TV = 7.34(160 lines)  AV=2.97  SV=4.31  BV=6.00
    {6574,1136,1056, 0, 0, 0},  //TV = 7.25(170 lines)  AV=2.97  SV=4.31  BV=5.91
    {7115,1136,1048, 0, 0, 0},  //TV = 7.13(184 lines)  AV=2.97  SV=4.29  BV=5.81
    {7618,1136,1048, 0, 0, 0},  //TV = 7.04(197 lines)  AV=2.97  SV=4.29  BV=5.71
    {8159,1136,1048, 0, 0, 0},  //TV = 6.94(211 lines)  AV=2.97  SV=4.29  BV=5.61
    {8314,1216,1032, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.37  BV=5.51
    {8314,1216,1104, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.47  BV=5.41
    {8314,1328,1096, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.58  BV=5.30
    {8314,1424,1080, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.66  BV=5.22
    {8314,1536,1088, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.78  BV=5.10
    {8314,1728,1024, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.87  BV=5.02
    {8314,1840,1040, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.98  BV=4.90
    {8314,1936,1056, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.07  BV=4.81
    {8314,2048,1064, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.17  BV=4.71
    {8314,2240,1048, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.27  BV=4.61
    {16666,1216,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.36  BV=4.52
    {16666,1216,1104, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.47  BV=4.41
    {16666,1328,1080, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.56  BV=4.31
    {16666,1424,1080, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.66  BV=4.21
    {16666,1536,1072, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.76  BV=4.12
    {16666,1728,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.87  BV=4.01
    {16666,1840,1032, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.97  BV=3.91
    {16666,1936,1048, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.06  BV=3.81
    {16666,2048,1064, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.17  BV=3.71
    {16666,2240,1048, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.27  BV=3.60
    {16666,2448,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.37  BV=3.51
    {16666,2560,1048, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.47  BV=3.41
    {16666,2752,1048, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.57  BV=3.31
    {16666,2960,1040, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.66  BV=3.21
    {16666,3200,1032, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.77  BV=3.11
    {16666,3456,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.87  BV=3.01
    {16666,3712,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.97  BV=2.91
    {16666,3968,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=6.07  BV=2.81
    {16666,4224,1032, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=6.17  BV=2.71
    {16666,4480,1040, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=6.26  BV=2.62
    {24980,3200,1048, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=5.79  BV=2.51
    {24980,3456,1040, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=5.89  BV=2.41
    {24980,3712,1032, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=5.98  BV=2.31
    {24980,3968,1040, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=6.09  BV=2.21
    {33332,3200,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=5.77  BV=2.11
    {33332,3456,1024, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=5.87  BV=2.01
    {33332,3584,1056, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=5.96  BV=1.92
    {33332,3968,1024, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.07  BV=1.81
    {33332,4224,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.17  BV=1.71
    {33332,4480,1048, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.27  BV=1.60
    {33332,4864,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.37  BV=1.51
    {33332,5248,1024, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.47  BV=1.41
    {33332,5504,1040, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.56  BV=1.32
    {33332,6016,1024, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.67  BV=1.21
    {33332,6384,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.76  BV=1.12
    {33332,6896,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.87  BV=1.00
    {33332,7280,1048, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.97  BV=0.90
    {33332,7936,1024, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=7.07  BV=0.81
    {33332,8448,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=7.17  BV=0.71
    {33332,9040,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=7.26  BV=0.61
    {33332,9696,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=7.37  BV=0.51
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCustom2PLineTable_50Hz =
{
{
    {78,1424,1072, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.65  BV=11.96
    {78,1536,1056, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.74  BV=11.88
    {78,1632,1048, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.82  BV=11.80
    {117,1216,1024, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.36  BV=11.67
    {117,1216,1096, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.46  BV=11.58
    {117,1328,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.54  BV=11.49
    {117,1424,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.64  BV=11.39
    {155,1136,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.35  BV=11.28
    {155,1216,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.45  BV=11.18
    {155,1328,1072, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.55  BV=11.07
    {155,1424,1040, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.61  BV=11.02
    {194,1216,1048, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.39  BV=10.91
    {194,1328,1024, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.49  BV=10.82
    {233,1136,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.33  BV=10.71
    {233,1216,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.43  BV=10.61
    {271,1136,1056, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.31  BV=10.52
    {271,1216,1064, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.41  BV=10.41
    {310,1136,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.32  BV=10.31
    {310,1216,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.41  BV=10.21
    {349,1136,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.35  BV=10.11
    {387,1136,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.29  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {465,1136,1080, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.34  BV=9.70
    {503,1136,1064, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=4.32  BV=9.61
    {542,1136,1056, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=4.31  BV=9.52
    {581,1136,1056, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=4.31  BV=9.41
    {619,1136,1064, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=4.32  BV=9.31
    {658,1136,1080, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=4.34  BV=9.20
    {697,1136,1088, 0, 0, 0},  //TV = 10.49(18 lines)  AV=2.97  SV=4.35  BV=9.11
    {774,1136,1048, 0, 0, 0},  //TV = 10.34(20 lines)  AV=2.97  SV=4.29  BV=9.01
    {813,1136,1072, 0, 0, 0},  //TV = 10.26(21 lines)  AV=2.97  SV=4.33  BV=8.91
    {851,1216,1024, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=4.36  BV=8.81
    {929,1136,1080, 0, 0, 0},  //TV = 10.07(24 lines)  AV=2.97  SV=4.34  BV=8.71
    {1006,1136,1064, 0, 0, 0},  //TV = 9.96(26 lines)  AV=2.97  SV=4.32  BV=8.61
    {1083,1136,1064, 0, 0, 0},  //TV = 9.85(28 lines)  AV=2.97  SV=4.32  BV=8.51
    {1161,1136,1064, 0, 0, 0},  //TV = 9.75(30 lines)  AV=2.97  SV=4.32  BV=8.41
    {1238,1136,1064, 0, 0, 0},  //TV = 9.66(32 lines)  AV=2.97  SV=4.32  BV=8.31
    {1354,1136,1048, 0, 0, 0},  //TV = 9.53(35 lines)  AV=2.97  SV=4.29  BV=8.21
    {1431,1136,1056, 0, 0, 0},  //TV = 9.45(37 lines)  AV=2.97  SV=4.31  BV=8.11
    {1547,1136,1056, 0, 0, 0},  //TV = 9.34(40 lines)  AV=2.97  SV=4.31  BV=8.00
    {1625,1136,1072, 0, 0, 0},  //TV = 9.27(42 lines)  AV=2.97  SV=4.33  BV=7.91
    {1741,1136,1072, 0, 0, 0},  //TV = 9.17(45 lines)  AV=2.97  SV=4.33  BV=7.81
    {1895,1136,1056, 0, 0, 0},  //TV = 9.04(49 lines)  AV=2.97  SV=4.31  BV=7.71
    {2011,1136,1064, 0, 0, 0},  //TV = 8.96(52 lines)  AV=2.97  SV=4.32  BV=7.61
    {2166,1136,1064, 0, 0, 0},  //TV = 8.85(56 lines)  AV=2.97  SV=4.32  BV=7.51
    {2321,1136,1064, 0, 0, 0},  //TV = 8.75(60 lines)  AV=2.97  SV=4.32  BV=7.41
    {2514,1136,1048, 0, 0, 0},  //TV = 8.64(65 lines)  AV=2.97  SV=4.29  BV=7.31
    {2669,1136,1056, 0, 0, 0},  //TV = 8.55(69 lines)  AV=2.97  SV=4.31  BV=7.22
    {2862,1136,1056, 0, 0, 0},  //TV = 8.45(74 lines)  AV=2.97  SV=4.31  BV=7.11
    {3094,1136,1048, 0, 0, 0},  //TV = 8.34(80 lines)  AV=2.97  SV=4.29  BV=7.01
    {3287,1136,1056, 0, 0, 0},  //TV = 8.25(85 lines)  AV=2.97  SV=4.31  BV=6.91
    {3558,1136,1056, 0, 0, 0},  //TV = 8.13(92 lines)  AV=2.97  SV=4.31  BV=6.80
    {3790,1136,1056, 0, 0, 0},  //TV = 8.04(98 lines)  AV=2.97  SV=4.31  BV=6.71
    {4061,1136,1056, 0, 0, 0},  //TV = 7.94(105 lines)  AV=2.97  SV=4.31  BV=6.61
    {4370,1136,1056, 0, 0, 0},  //TV = 7.84(113 lines)  AV=2.97  SV=4.31  BV=6.50
    {4679,1136,1048, 0, 0, 0},  //TV = 7.74(121 lines)  AV=2.97  SV=4.29  BV=6.42
    {4989,1136,1056, 0, 0, 0},  //TV = 7.65(129 lines)  AV=2.97  SV=4.31  BV=6.31
    {5375,1136,1048, 0, 0, 0},  //TV = 7.54(139 lines)  AV=2.97  SV=4.29  BV=6.22
    {5723,1136,1056, 0, 0, 0},  //TV = 7.45(148 lines)  AV=2.97  SV=4.31  BV=6.11
    {6187,1136,1056, 0, 0, 0},  //TV = 7.34(160 lines)  AV=2.97  SV=4.31  BV=6.00
    {6574,1136,1056, 0, 0, 0},  //TV = 7.25(170 lines)  AV=2.97  SV=4.31  BV=5.91
    {7115,1136,1048, 0, 0, 0},  //TV = 7.13(184 lines)  AV=2.97  SV=4.29  BV=5.81
    {7618,1136,1048, 0, 0, 0},  //TV = 7.04(197 lines)  AV=2.97  SV=4.29  BV=5.71
    {8159,1136,1048, 0, 0, 0},  //TV = 6.94(211 lines)  AV=2.97  SV=4.29  BV=5.61
    {8739,1136,1048, 0, 0, 0},  //TV = 6.84(226 lines)  AV=2.97  SV=4.29  BV=5.51
    {9358,1136,1048, 0, 0, 0},  //TV = 6.74(242 lines)  AV=2.97  SV=4.29  BV=5.42
    {10016,1136,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.31  BV=5.31
    {10016,1216,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.40  BV=5.21
    {10016,1328,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.50  BV=5.12
    {10016,1424,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.60  BV=5.01
    {10016,1536,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.70  BV=4.92
    {10016,1632,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.79  BV=4.82
    {10016,1728,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.91  BV=4.70
    {10016,1840,1064, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.01  BV=4.60
    {10016,1936,1072, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.10  BV=4.52
    {10016,2144,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.20  BV=4.41
    {10016,2240,1072, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.31  BV=4.31
    {10016,2448,1048, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.40  BV=4.21
    {10016,2656,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.51  BV=4.10
    {10016,2864,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.59  BV=4.02
    {10016,3072,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.71  BV=3.91
    {10016,3200,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.80  BV=3.81
    {10016,3456,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.91  BV=3.70
    {10016,3712,1048, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.00  BV=3.61
    {10016,3968,1048, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.10  BV=3.51
    {10016,4352,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.20  BV=3.41
    {10016,4608,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.30  BV=3.31
    {10016,4992,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.41  BV=3.20
    {10016,5376,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.50  BV=3.11
    {10016,5760,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.60  BV=3.01
    {19992,3072,1032, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=5.71  BV=2.91
    {19992,3200,1064, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=5.81  BV=2.81
    {19992,3456,1056, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=5.91  BV=2.70
    {19992,3712,1048, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=6.00  BV=2.61
    {19992,3968,1056, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=6.11  BV=2.51
    {19992,4352,1032, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=6.21  BV=2.41
    {30007,3072,1040, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=5.72  BV=2.31
    {30007,3328,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=5.82  BV=2.21
    {30007,3584,1024, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=5.92  BV=2.11
    {30007,3840,1024, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.02  BV=2.01
    {30007,4096,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.12  BV=1.91
    {30007,4352,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.21  BV=1.82
    {30007,4736,1024, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.32  BV=1.71
    {30007,4992,1040, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.42  BV=1.61
    {30007,5376,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.51  BV=1.51
    {30007,5760,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.61  BV=1.42
    {30007,6240,1024, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.72  BV=1.31
    {30007,6544,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.82  BV=1.21
    {30007,7072,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.91  BV=1.12
    {30007,7472,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.01  BV=1.02
    {30007,8192,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.12  BV=0.91
    {30007,8720,1040, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.22  BV=0.81
    {30007,9344,1040, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.32  BV=0.71
    {30007,10080,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.42  BV=0.61
    {30007,10240,1088, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.52  BV=0.51
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Custom2AutoTable =
{
    AETABLE_CUSTOM2_AUTO,    //eAETableID
    116,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    120,    //i4MaxBV
    5,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCustom2PLineTable_60Hz,
    sCustom2PLineTable_50Hz,
    NULL,
};

static strEvPline sCustom3PLineTable_60Hz =
{
{
    {78,1424,1072, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.65  BV=11.96
    {78,1536,1056, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.74  BV=11.88
    {78,1632,1048, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.82  BV=11.80
    {117,1216,1024, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.36  BV=11.67
    {117,1216,1096, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.46  BV=11.58
    {117,1328,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.54  BV=11.49
    {117,1424,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.64  BV=11.39
    {155,1136,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.35  BV=11.28
    {155,1216,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.45  BV=11.18
    {155,1328,1072, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.55  BV=11.07
    {155,1424,1040, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.61  BV=11.02
    {194,1216,1048, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.39  BV=10.91
    {194,1328,1024, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.49  BV=10.82
    {233,1136,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.33  BV=10.71
    {233,1216,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.43  BV=10.61
    {271,1136,1056, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.31  BV=10.52
    {271,1216,1064, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.41  BV=10.41
    {310,1136,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.32  BV=10.31
    {310,1216,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.41  BV=10.21
    {349,1136,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.35  BV=10.11
    {387,1136,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.29  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {465,1136,1080, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.34  BV=9.70
    {503,1136,1064, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=4.32  BV=9.61
    {542,1136,1056, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=4.31  BV=9.52
    {581,1136,1056, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=4.31  BV=9.41
    {619,1136,1064, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=4.32  BV=9.31
    {658,1136,1080, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=4.34  BV=9.20
    {697,1136,1088, 0, 0, 0},  //TV = 10.49(18 lines)  AV=2.97  SV=4.35  BV=9.11
    {774,1136,1048, 0, 0, 0},  //TV = 10.34(20 lines)  AV=2.97  SV=4.29  BV=9.01
    {813,1136,1072, 0, 0, 0},  //TV = 10.26(21 lines)  AV=2.97  SV=4.33  BV=8.91
    {851,1216,1024, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=4.36  BV=8.81
    {929,1136,1080, 0, 0, 0},  //TV = 10.07(24 lines)  AV=2.97  SV=4.34  BV=8.71
    {1006,1136,1064, 0, 0, 0},  //TV = 9.96(26 lines)  AV=2.97  SV=4.32  BV=8.61
    {1083,1136,1064, 0, 0, 0},  //TV = 9.85(28 lines)  AV=2.97  SV=4.32  BV=8.51
    {1161,1136,1064, 0, 0, 0},  //TV = 9.75(30 lines)  AV=2.97  SV=4.32  BV=8.41
    {1238,1136,1064, 0, 0, 0},  //TV = 9.66(32 lines)  AV=2.97  SV=4.32  BV=8.31
    {1354,1136,1048, 0, 0, 0},  //TV = 9.53(35 lines)  AV=2.97  SV=4.29  BV=8.21
    {1431,1136,1056, 0, 0, 0},  //TV = 9.45(37 lines)  AV=2.97  SV=4.31  BV=8.11
    {1547,1136,1056, 0, 0, 0},  //TV = 9.34(40 lines)  AV=2.97  SV=4.31  BV=8.00
    {1625,1136,1072, 0, 0, 0},  //TV = 9.27(42 lines)  AV=2.97  SV=4.33  BV=7.91
    {1741,1136,1072, 0, 0, 0},  //TV = 9.17(45 lines)  AV=2.97  SV=4.33  BV=7.81
    {1895,1136,1056, 0, 0, 0},  //TV = 9.04(49 lines)  AV=2.97  SV=4.31  BV=7.71
    {2011,1136,1064, 0, 0, 0},  //TV = 8.96(52 lines)  AV=2.97  SV=4.32  BV=7.61
    {2166,1136,1064, 0, 0, 0},  //TV = 8.85(56 lines)  AV=2.97  SV=4.32  BV=7.51
    {2321,1136,1064, 0, 0, 0},  //TV = 8.75(60 lines)  AV=2.97  SV=4.32  BV=7.41
    {2514,1136,1048, 0, 0, 0},  //TV = 8.64(65 lines)  AV=2.97  SV=4.29  BV=7.31
    {2669,1136,1056, 0, 0, 0},  //TV = 8.55(69 lines)  AV=2.97  SV=4.31  BV=7.22
    {2862,1136,1056, 0, 0, 0},  //TV = 8.45(74 lines)  AV=2.97  SV=4.31  BV=7.11
    {3094,1136,1048, 0, 0, 0},  //TV = 8.34(80 lines)  AV=2.97  SV=4.29  BV=7.01
    {3287,1136,1056, 0, 0, 0},  //TV = 8.25(85 lines)  AV=2.97  SV=4.31  BV=6.91
    {3558,1136,1056, 0, 0, 0},  //TV = 8.13(92 lines)  AV=2.97  SV=4.31  BV=6.80
    {3790,1136,1056, 0, 0, 0},  //TV = 8.04(98 lines)  AV=2.97  SV=4.31  BV=6.71
    {4061,1136,1056, 0, 0, 0},  //TV = 7.94(105 lines)  AV=2.97  SV=4.31  BV=6.61
    {4370,1136,1056, 0, 0, 0},  //TV = 7.84(113 lines)  AV=2.97  SV=4.31  BV=6.50
    {4679,1136,1048, 0, 0, 0},  //TV = 7.74(121 lines)  AV=2.97  SV=4.29  BV=6.42
    {4989,1136,1056, 0, 0, 0},  //TV = 7.65(129 lines)  AV=2.97  SV=4.31  BV=6.31
    {5375,1136,1048, 0, 0, 0},  //TV = 7.54(139 lines)  AV=2.97  SV=4.29  BV=6.22
    {5723,1136,1056, 0, 0, 0},  //TV = 7.45(148 lines)  AV=2.97  SV=4.31  BV=6.11
    {6187,1136,1056, 0, 0, 0},  //TV = 7.34(160 lines)  AV=2.97  SV=4.31  BV=6.00
    {6574,1136,1056, 0, 0, 0},  //TV = 7.25(170 lines)  AV=2.97  SV=4.31  BV=5.91
    {7115,1136,1048, 0, 0, 0},  //TV = 7.13(184 lines)  AV=2.97  SV=4.29  BV=5.81
    {7618,1136,1048, 0, 0, 0},  //TV = 7.04(197 lines)  AV=2.97  SV=4.29  BV=5.71
    {8159,1136,1048, 0, 0, 0},  //TV = 6.94(211 lines)  AV=2.97  SV=4.29  BV=5.61
    {8314,1216,1032, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.37  BV=5.51
    {8314,1216,1104, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.47  BV=5.41
    {8314,1328,1096, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.58  BV=5.30
    {8314,1424,1080, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.66  BV=5.22
    {8314,1536,1088, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.78  BV=5.10
    {8314,1728,1024, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.87  BV=5.02
    {8314,1840,1040, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.98  BV=4.90
    {8314,1936,1056, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.07  BV=4.81
    {8314,2048,1064, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.17  BV=4.71
    {8314,2240,1048, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.27  BV=4.61
    {16666,1216,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.36  BV=4.52
    {16666,1216,1104, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.47  BV=4.41
    {16666,1328,1080, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.56  BV=4.31
    {16666,1424,1080, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.66  BV=4.21
    {16666,1536,1072, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.76  BV=4.12
    {16666,1728,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.87  BV=4.01
    {16666,1840,1032, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.97  BV=3.91
    {16666,1936,1048, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.06  BV=3.81
    {16666,2048,1064, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.17  BV=3.71
    {16666,2240,1048, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.27  BV=3.60
    {16666,2448,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.37  BV=3.51
    {16666,2560,1048, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.47  BV=3.41
    {16666,2752,1048, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.57  BV=3.31
    {16666,2960,1040, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.66  BV=3.21
    {16666,3200,1032, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.77  BV=3.11
    {16666,3456,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.87  BV=3.01
    {16666,3712,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.97  BV=2.91
    {16666,3968,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=6.07  BV=2.81
    {16666,4224,1032, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=6.17  BV=2.71
    {16666,4480,1040, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=6.26  BV=2.62
    {24980,3200,1048, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=5.79  BV=2.51
    {24980,3456,1040, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=5.89  BV=2.41
    {24980,3712,1032, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=5.98  BV=2.31
    {24980,3968,1040, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=6.09  BV=2.21
    {33332,3200,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=5.77  BV=2.11
    {33332,3456,1024, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=5.87  BV=2.01
    {33332,3584,1056, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=5.96  BV=1.92
    {33332,3968,1024, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.07  BV=1.81
    {33332,4224,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.17  BV=1.71
    {33332,4480,1048, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.27  BV=1.60
    {33332,4864,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.37  BV=1.51
    {33332,5248,1024, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.47  BV=1.41
    {33332,5504,1040, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.56  BV=1.32
    {33332,6016,1024, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.67  BV=1.21
    {33332,6384,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.76  BV=1.12
    {33332,6896,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.87  BV=1.00
    {33332,7280,1048, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.97  BV=0.90
    {33332,7936,1024, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=7.07  BV=0.81
    {33332,8448,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=7.17  BV=0.71
    {33332,9040,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=7.26  BV=0.61
    {33332,9696,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=7.37  BV=0.51
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCustom3PLineTable_50Hz =
{
{
    {78,1424,1072, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.65  BV=11.96
    {78,1536,1056, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.74  BV=11.88
    {78,1632,1048, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.82  BV=11.80
    {117,1216,1024, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.36  BV=11.67
    {117,1216,1096, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.46  BV=11.58
    {117,1328,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.54  BV=11.49
    {117,1424,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.64  BV=11.39
    {155,1136,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.35  BV=11.28
    {155,1216,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.45  BV=11.18
    {155,1328,1072, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.55  BV=11.07
    {155,1424,1040, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.61  BV=11.02
    {194,1216,1048, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.39  BV=10.91
    {194,1328,1024, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.49  BV=10.82
    {233,1136,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.33  BV=10.71
    {233,1216,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.43  BV=10.61
    {271,1136,1056, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.31  BV=10.52
    {271,1216,1064, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.41  BV=10.41
    {310,1136,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.32  BV=10.31
    {310,1216,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.41  BV=10.21
    {349,1136,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.35  BV=10.11
    {387,1136,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.29  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {465,1136,1080, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.34  BV=9.70
    {503,1136,1064, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=4.32  BV=9.61
    {542,1136,1056, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=4.31  BV=9.52
    {581,1136,1056, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=4.31  BV=9.41
    {619,1136,1064, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=4.32  BV=9.31
    {658,1136,1080, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=4.34  BV=9.20
    {697,1136,1088, 0, 0, 0},  //TV = 10.49(18 lines)  AV=2.97  SV=4.35  BV=9.11
    {774,1136,1048, 0, 0, 0},  //TV = 10.34(20 lines)  AV=2.97  SV=4.29  BV=9.01
    {813,1136,1072, 0, 0, 0},  //TV = 10.26(21 lines)  AV=2.97  SV=4.33  BV=8.91
    {851,1216,1024, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=4.36  BV=8.81
    {929,1136,1080, 0, 0, 0},  //TV = 10.07(24 lines)  AV=2.97  SV=4.34  BV=8.71
    {1006,1136,1064, 0, 0, 0},  //TV = 9.96(26 lines)  AV=2.97  SV=4.32  BV=8.61
    {1083,1136,1064, 0, 0, 0},  //TV = 9.85(28 lines)  AV=2.97  SV=4.32  BV=8.51
    {1161,1136,1064, 0, 0, 0},  //TV = 9.75(30 lines)  AV=2.97  SV=4.32  BV=8.41
    {1238,1136,1064, 0, 0, 0},  //TV = 9.66(32 lines)  AV=2.97  SV=4.32  BV=8.31
    {1354,1136,1048, 0, 0, 0},  //TV = 9.53(35 lines)  AV=2.97  SV=4.29  BV=8.21
    {1431,1136,1056, 0, 0, 0},  //TV = 9.45(37 lines)  AV=2.97  SV=4.31  BV=8.11
    {1547,1136,1056, 0, 0, 0},  //TV = 9.34(40 lines)  AV=2.97  SV=4.31  BV=8.00
    {1625,1136,1072, 0, 0, 0},  //TV = 9.27(42 lines)  AV=2.97  SV=4.33  BV=7.91
    {1741,1136,1072, 0, 0, 0},  //TV = 9.17(45 lines)  AV=2.97  SV=4.33  BV=7.81
    {1895,1136,1056, 0, 0, 0},  //TV = 9.04(49 lines)  AV=2.97  SV=4.31  BV=7.71
    {2011,1136,1064, 0, 0, 0},  //TV = 8.96(52 lines)  AV=2.97  SV=4.32  BV=7.61
    {2166,1136,1064, 0, 0, 0},  //TV = 8.85(56 lines)  AV=2.97  SV=4.32  BV=7.51
    {2321,1136,1064, 0, 0, 0},  //TV = 8.75(60 lines)  AV=2.97  SV=4.32  BV=7.41
    {2514,1136,1048, 0, 0, 0},  //TV = 8.64(65 lines)  AV=2.97  SV=4.29  BV=7.31
    {2669,1136,1056, 0, 0, 0},  //TV = 8.55(69 lines)  AV=2.97  SV=4.31  BV=7.22
    {2862,1136,1056, 0, 0, 0},  //TV = 8.45(74 lines)  AV=2.97  SV=4.31  BV=7.11
    {3094,1136,1048, 0, 0, 0},  //TV = 8.34(80 lines)  AV=2.97  SV=4.29  BV=7.01
    {3287,1136,1056, 0, 0, 0},  //TV = 8.25(85 lines)  AV=2.97  SV=4.31  BV=6.91
    {3558,1136,1056, 0, 0, 0},  //TV = 8.13(92 lines)  AV=2.97  SV=4.31  BV=6.80
    {3790,1136,1056, 0, 0, 0},  //TV = 8.04(98 lines)  AV=2.97  SV=4.31  BV=6.71
    {4061,1136,1056, 0, 0, 0},  //TV = 7.94(105 lines)  AV=2.97  SV=4.31  BV=6.61
    {4370,1136,1056, 0, 0, 0},  //TV = 7.84(113 lines)  AV=2.97  SV=4.31  BV=6.50
    {4679,1136,1048, 0, 0, 0},  //TV = 7.74(121 lines)  AV=2.97  SV=4.29  BV=6.42
    {4989,1136,1056, 0, 0, 0},  //TV = 7.65(129 lines)  AV=2.97  SV=4.31  BV=6.31
    {5375,1136,1048, 0, 0, 0},  //TV = 7.54(139 lines)  AV=2.97  SV=4.29  BV=6.22
    {5723,1136,1056, 0, 0, 0},  //TV = 7.45(148 lines)  AV=2.97  SV=4.31  BV=6.11
    {6187,1136,1056, 0, 0, 0},  //TV = 7.34(160 lines)  AV=2.97  SV=4.31  BV=6.00
    {6574,1136,1056, 0, 0, 0},  //TV = 7.25(170 lines)  AV=2.97  SV=4.31  BV=5.91
    {7115,1136,1048, 0, 0, 0},  //TV = 7.13(184 lines)  AV=2.97  SV=4.29  BV=5.81
    {7618,1136,1048, 0, 0, 0},  //TV = 7.04(197 lines)  AV=2.97  SV=4.29  BV=5.71
    {8159,1136,1048, 0, 0, 0},  //TV = 6.94(211 lines)  AV=2.97  SV=4.29  BV=5.61
    {8739,1136,1048, 0, 0, 0},  //TV = 6.84(226 lines)  AV=2.97  SV=4.29  BV=5.51
    {9358,1136,1048, 0, 0, 0},  //TV = 6.74(242 lines)  AV=2.97  SV=4.29  BV=5.42
    {10016,1136,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.31  BV=5.31
    {10016,1216,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.40  BV=5.21
    {10016,1328,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.50  BV=5.12
    {10016,1424,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.60  BV=5.01
    {10016,1536,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.70  BV=4.92
    {10016,1632,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.79  BV=4.82
    {10016,1728,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.91  BV=4.70
    {10016,1840,1064, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.01  BV=4.60
    {10016,1936,1072, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.10  BV=4.52
    {10016,2144,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.20  BV=4.41
    {10016,2240,1072, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.31  BV=4.31
    {10016,2448,1048, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.40  BV=4.21
    {10016,2656,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.51  BV=4.10
    {10016,2864,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.59  BV=4.02
    {10016,3072,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.71  BV=3.91
    {10016,3200,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.80  BV=3.81
    {10016,3456,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.91  BV=3.70
    {10016,3712,1048, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.00  BV=3.61
    {10016,3968,1048, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.10  BV=3.51
    {10016,4352,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.20  BV=3.41
    {10016,4608,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.30  BV=3.31
    {10016,4992,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.41  BV=3.20
    {10016,5376,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.50  BV=3.11
    {10016,5760,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.60  BV=3.01
    {19992,3072,1032, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=5.71  BV=2.91
    {19992,3200,1064, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=5.81  BV=2.81
    {19992,3456,1056, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=5.91  BV=2.70
    {19992,3712,1048, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=6.00  BV=2.61
    {19992,3968,1056, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=6.11  BV=2.51
    {19992,4352,1032, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=6.21  BV=2.41
    {30007,3072,1040, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=5.72  BV=2.31
    {30007,3328,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=5.82  BV=2.21
    {30007,3584,1024, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=5.92  BV=2.11
    {30007,3840,1024, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.02  BV=2.01
    {30007,4096,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.12  BV=1.91
    {30007,4352,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.21  BV=1.82
    {30007,4736,1024, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.32  BV=1.71
    {30007,4992,1040, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.42  BV=1.61
    {30007,5376,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.51  BV=1.51
    {30007,5760,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.61  BV=1.42
    {30007,6240,1024, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.72  BV=1.31
    {30007,6544,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.82  BV=1.21
    {30007,7072,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.91  BV=1.12
    {30007,7472,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.01  BV=1.02
    {30007,8192,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.12  BV=0.91
    {30007,8720,1040, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.22  BV=0.81
    {30007,9344,1040, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.32  BV=0.71
    {30007,10080,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.42  BV=0.61
    {30007,10240,1088, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.52  BV=0.51
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Custom3AutoTable =
{
    AETABLE_CUSTOM3_AUTO,    //eAETableID
    116,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    120,    //i4MaxBV
    5,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCustom3PLineTable_60Hz,
    sCustom3PLineTable_50Hz,
    NULL,
};

static strEvPline sCustom4PLineTable_60Hz =
{
{
    {78,1424,1072, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.65  BV=11.96
    {78,1536,1056, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.74  BV=11.88
    {78,1632,1048, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.82  BV=11.80
    {117,1216,1024, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.36  BV=11.67
    {117,1216,1096, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.46  BV=11.58
    {117,1328,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.54  BV=11.49
    {117,1424,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.64  BV=11.39
    {155,1136,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.35  BV=11.28
    {155,1216,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.45  BV=11.18
    {155,1328,1072, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.55  BV=11.07
    {155,1424,1040, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.61  BV=11.02
    {194,1216,1048, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.39  BV=10.91
    {194,1328,1024, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.49  BV=10.82
    {233,1136,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.33  BV=10.71
    {233,1216,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.43  BV=10.61
    {271,1136,1056, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.31  BV=10.52
    {271,1216,1064, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.41  BV=10.41
    {310,1136,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.32  BV=10.31
    {310,1216,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.41  BV=10.21
    {349,1136,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.35  BV=10.11
    {387,1136,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.29  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {465,1136,1080, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.34  BV=9.70
    {503,1136,1064, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=4.32  BV=9.61
    {542,1136,1056, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=4.31  BV=9.52
    {581,1136,1056, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=4.31  BV=9.41
    {619,1136,1064, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=4.32  BV=9.31
    {658,1136,1080, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=4.34  BV=9.20
    {697,1136,1088, 0, 0, 0},  //TV = 10.49(18 lines)  AV=2.97  SV=4.35  BV=9.11
    {774,1136,1048, 0, 0, 0},  //TV = 10.34(20 lines)  AV=2.97  SV=4.29  BV=9.01
    {813,1136,1072, 0, 0, 0},  //TV = 10.26(21 lines)  AV=2.97  SV=4.33  BV=8.91
    {851,1216,1024, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=4.36  BV=8.81
    {929,1136,1080, 0, 0, 0},  //TV = 10.07(24 lines)  AV=2.97  SV=4.34  BV=8.71
    {1006,1136,1064, 0, 0, 0},  //TV = 9.96(26 lines)  AV=2.97  SV=4.32  BV=8.61
    {1083,1136,1064, 0, 0, 0},  //TV = 9.85(28 lines)  AV=2.97  SV=4.32  BV=8.51
    {1161,1136,1064, 0, 0, 0},  //TV = 9.75(30 lines)  AV=2.97  SV=4.32  BV=8.41
    {1238,1136,1064, 0, 0, 0},  //TV = 9.66(32 lines)  AV=2.97  SV=4.32  BV=8.31
    {1354,1136,1048, 0, 0, 0},  //TV = 9.53(35 lines)  AV=2.97  SV=4.29  BV=8.21
    {1431,1136,1056, 0, 0, 0},  //TV = 9.45(37 lines)  AV=2.97  SV=4.31  BV=8.11
    {1547,1136,1056, 0, 0, 0},  //TV = 9.34(40 lines)  AV=2.97  SV=4.31  BV=8.00
    {1625,1136,1072, 0, 0, 0},  //TV = 9.27(42 lines)  AV=2.97  SV=4.33  BV=7.91
    {1741,1136,1072, 0, 0, 0},  //TV = 9.17(45 lines)  AV=2.97  SV=4.33  BV=7.81
    {1895,1136,1056, 0, 0, 0},  //TV = 9.04(49 lines)  AV=2.97  SV=4.31  BV=7.71
    {2011,1136,1064, 0, 0, 0},  //TV = 8.96(52 lines)  AV=2.97  SV=4.32  BV=7.61
    {2166,1136,1064, 0, 0, 0},  //TV = 8.85(56 lines)  AV=2.97  SV=4.32  BV=7.51
    {2321,1136,1064, 0, 0, 0},  //TV = 8.75(60 lines)  AV=2.97  SV=4.32  BV=7.41
    {2514,1136,1048, 0, 0, 0},  //TV = 8.64(65 lines)  AV=2.97  SV=4.29  BV=7.31
    {2669,1136,1056, 0, 0, 0},  //TV = 8.55(69 lines)  AV=2.97  SV=4.31  BV=7.22
    {2862,1136,1056, 0, 0, 0},  //TV = 8.45(74 lines)  AV=2.97  SV=4.31  BV=7.11
    {3094,1136,1048, 0, 0, 0},  //TV = 8.34(80 lines)  AV=2.97  SV=4.29  BV=7.01
    {3287,1136,1056, 0, 0, 0},  //TV = 8.25(85 lines)  AV=2.97  SV=4.31  BV=6.91
    {3558,1136,1056, 0, 0, 0},  //TV = 8.13(92 lines)  AV=2.97  SV=4.31  BV=6.80
    {3790,1136,1056, 0, 0, 0},  //TV = 8.04(98 lines)  AV=2.97  SV=4.31  BV=6.71
    {4061,1136,1056, 0, 0, 0},  //TV = 7.94(105 lines)  AV=2.97  SV=4.31  BV=6.61
    {4370,1136,1056, 0, 0, 0},  //TV = 7.84(113 lines)  AV=2.97  SV=4.31  BV=6.50
    {4679,1136,1048, 0, 0, 0},  //TV = 7.74(121 lines)  AV=2.97  SV=4.29  BV=6.42
    {4989,1136,1056, 0, 0, 0},  //TV = 7.65(129 lines)  AV=2.97  SV=4.31  BV=6.31
    {5375,1136,1048, 0, 0, 0},  //TV = 7.54(139 lines)  AV=2.97  SV=4.29  BV=6.22
    {5723,1136,1056, 0, 0, 0},  //TV = 7.45(148 lines)  AV=2.97  SV=4.31  BV=6.11
    {6187,1136,1056, 0, 0, 0},  //TV = 7.34(160 lines)  AV=2.97  SV=4.31  BV=6.00
    {6574,1136,1056, 0, 0, 0},  //TV = 7.25(170 lines)  AV=2.97  SV=4.31  BV=5.91
    {7115,1136,1048, 0, 0, 0},  //TV = 7.13(184 lines)  AV=2.97  SV=4.29  BV=5.81
    {7618,1136,1048, 0, 0, 0},  //TV = 7.04(197 lines)  AV=2.97  SV=4.29  BV=5.71
    {8159,1136,1048, 0, 0, 0},  //TV = 6.94(211 lines)  AV=2.97  SV=4.29  BV=5.61
    {8314,1216,1032, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.37  BV=5.51
    {8314,1216,1104, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.47  BV=5.41
    {8314,1328,1096, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.58  BV=5.30
    {8314,1424,1080, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.66  BV=5.22
    {8314,1536,1088, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.78  BV=5.10
    {8314,1728,1024, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.87  BV=5.02
    {8314,1840,1040, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.98  BV=4.90
    {8314,1936,1056, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.07  BV=4.81
    {8314,2048,1064, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.17  BV=4.71
    {8314,2240,1048, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.27  BV=4.61
    {16666,1216,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.36  BV=4.52
    {16666,1216,1104, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.47  BV=4.41
    {16666,1328,1080, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.56  BV=4.31
    {16666,1424,1080, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.66  BV=4.21
    {16666,1536,1072, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.76  BV=4.12
    {16666,1728,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.87  BV=4.01
    {16666,1840,1032, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.97  BV=3.91
    {16666,1936,1048, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.06  BV=3.81
    {16666,2048,1064, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.17  BV=3.71
    {16666,2240,1048, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.27  BV=3.60
    {16666,2448,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.37  BV=3.51
    {16666,2560,1048, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.47  BV=3.41
    {16666,2752,1048, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.57  BV=3.31
    {16666,2960,1040, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.66  BV=3.21
    {16666,3200,1032, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.77  BV=3.11
    {16666,3456,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.87  BV=3.01
    {16666,3712,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.97  BV=2.91
    {16666,3968,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=6.07  BV=2.81
    {16666,4224,1032, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=6.17  BV=2.71
    {16666,4480,1040, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=6.26  BV=2.62
    {24980,3200,1048, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=5.79  BV=2.51
    {24980,3456,1040, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=5.89  BV=2.41
    {24980,3712,1032, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=5.98  BV=2.31
    {24980,3968,1040, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=6.09  BV=2.21
    {33332,3200,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=5.77  BV=2.11
    {33332,3456,1024, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=5.87  BV=2.01
    {33332,3584,1056, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=5.96  BV=1.92
    {33332,3968,1024, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.07  BV=1.81
    {33332,4224,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.17  BV=1.71
    {33332,4480,1048, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.27  BV=1.60
    {33332,4864,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.37  BV=1.51
    {33332,5248,1024, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.47  BV=1.41
    {33332,5504,1040, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.56  BV=1.32
    {33332,6016,1024, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.67  BV=1.21
    {33332,6384,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.76  BV=1.12
    {33332,6896,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.87  BV=1.00
    {33332,7280,1048, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.97  BV=0.90
    {33332,7936,1024, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=7.07  BV=0.81
    {33332,8448,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=7.17  BV=0.71
    {33332,9040,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=7.26  BV=0.61
    {33332,9696,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=7.37  BV=0.51
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCustom4PLineTable_50Hz =
{
{
    {78,1424,1072, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.65  BV=11.96
    {78,1536,1056, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.74  BV=11.88
    {78,1632,1048, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.82  BV=11.80
    {117,1216,1024, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.36  BV=11.67
    {117,1216,1096, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.46  BV=11.58
    {117,1328,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.54  BV=11.49
    {117,1424,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.64  BV=11.39
    {155,1136,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.35  BV=11.28
    {155,1216,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.45  BV=11.18
    {155,1328,1072, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.55  BV=11.07
    {155,1424,1040, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.61  BV=11.02
    {194,1216,1048, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.39  BV=10.91
    {194,1328,1024, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.49  BV=10.82
    {233,1136,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.33  BV=10.71
    {233,1216,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.43  BV=10.61
    {271,1136,1056, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.31  BV=10.52
    {271,1216,1064, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.41  BV=10.41
    {310,1136,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.32  BV=10.31
    {310,1216,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.41  BV=10.21
    {349,1136,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.35  BV=10.11
    {387,1136,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.29  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {465,1136,1080, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.34  BV=9.70
    {503,1136,1064, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=4.32  BV=9.61
    {542,1136,1056, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=4.31  BV=9.52
    {581,1136,1056, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=4.31  BV=9.41
    {619,1136,1064, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=4.32  BV=9.31
    {658,1136,1080, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=4.34  BV=9.20
    {697,1136,1088, 0, 0, 0},  //TV = 10.49(18 lines)  AV=2.97  SV=4.35  BV=9.11
    {774,1136,1048, 0, 0, 0},  //TV = 10.34(20 lines)  AV=2.97  SV=4.29  BV=9.01
    {813,1136,1072, 0, 0, 0},  //TV = 10.26(21 lines)  AV=2.97  SV=4.33  BV=8.91
    {851,1216,1024, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=4.36  BV=8.81
    {929,1136,1080, 0, 0, 0},  //TV = 10.07(24 lines)  AV=2.97  SV=4.34  BV=8.71
    {1006,1136,1064, 0, 0, 0},  //TV = 9.96(26 lines)  AV=2.97  SV=4.32  BV=8.61
    {1083,1136,1064, 0, 0, 0},  //TV = 9.85(28 lines)  AV=2.97  SV=4.32  BV=8.51
    {1161,1136,1064, 0, 0, 0},  //TV = 9.75(30 lines)  AV=2.97  SV=4.32  BV=8.41
    {1238,1136,1064, 0, 0, 0},  //TV = 9.66(32 lines)  AV=2.97  SV=4.32  BV=8.31
    {1354,1136,1048, 0, 0, 0},  //TV = 9.53(35 lines)  AV=2.97  SV=4.29  BV=8.21
    {1431,1136,1056, 0, 0, 0},  //TV = 9.45(37 lines)  AV=2.97  SV=4.31  BV=8.11
    {1547,1136,1056, 0, 0, 0},  //TV = 9.34(40 lines)  AV=2.97  SV=4.31  BV=8.00
    {1625,1136,1072, 0, 0, 0},  //TV = 9.27(42 lines)  AV=2.97  SV=4.33  BV=7.91
    {1741,1136,1072, 0, 0, 0},  //TV = 9.17(45 lines)  AV=2.97  SV=4.33  BV=7.81
    {1895,1136,1056, 0, 0, 0},  //TV = 9.04(49 lines)  AV=2.97  SV=4.31  BV=7.71
    {2011,1136,1064, 0, 0, 0},  //TV = 8.96(52 lines)  AV=2.97  SV=4.32  BV=7.61
    {2166,1136,1064, 0, 0, 0},  //TV = 8.85(56 lines)  AV=2.97  SV=4.32  BV=7.51
    {2321,1136,1064, 0, 0, 0},  //TV = 8.75(60 lines)  AV=2.97  SV=4.32  BV=7.41
    {2514,1136,1048, 0, 0, 0},  //TV = 8.64(65 lines)  AV=2.97  SV=4.29  BV=7.31
    {2669,1136,1056, 0, 0, 0},  //TV = 8.55(69 lines)  AV=2.97  SV=4.31  BV=7.22
    {2862,1136,1056, 0, 0, 0},  //TV = 8.45(74 lines)  AV=2.97  SV=4.31  BV=7.11
    {3094,1136,1048, 0, 0, 0},  //TV = 8.34(80 lines)  AV=2.97  SV=4.29  BV=7.01
    {3287,1136,1056, 0, 0, 0},  //TV = 8.25(85 lines)  AV=2.97  SV=4.31  BV=6.91
    {3558,1136,1056, 0, 0, 0},  //TV = 8.13(92 lines)  AV=2.97  SV=4.31  BV=6.80
    {3790,1136,1056, 0, 0, 0},  //TV = 8.04(98 lines)  AV=2.97  SV=4.31  BV=6.71
    {4061,1136,1056, 0, 0, 0},  //TV = 7.94(105 lines)  AV=2.97  SV=4.31  BV=6.61
    {4370,1136,1056, 0, 0, 0},  //TV = 7.84(113 lines)  AV=2.97  SV=4.31  BV=6.50
    {4679,1136,1048, 0, 0, 0},  //TV = 7.74(121 lines)  AV=2.97  SV=4.29  BV=6.42
    {4989,1136,1056, 0, 0, 0},  //TV = 7.65(129 lines)  AV=2.97  SV=4.31  BV=6.31
    {5375,1136,1048, 0, 0, 0},  //TV = 7.54(139 lines)  AV=2.97  SV=4.29  BV=6.22
    {5723,1136,1056, 0, 0, 0},  //TV = 7.45(148 lines)  AV=2.97  SV=4.31  BV=6.11
    {6187,1136,1056, 0, 0, 0},  //TV = 7.34(160 lines)  AV=2.97  SV=4.31  BV=6.00
    {6574,1136,1056, 0, 0, 0},  //TV = 7.25(170 lines)  AV=2.97  SV=4.31  BV=5.91
    {7115,1136,1048, 0, 0, 0},  //TV = 7.13(184 lines)  AV=2.97  SV=4.29  BV=5.81
    {7618,1136,1048, 0, 0, 0},  //TV = 7.04(197 lines)  AV=2.97  SV=4.29  BV=5.71
    {8159,1136,1048, 0, 0, 0},  //TV = 6.94(211 lines)  AV=2.97  SV=4.29  BV=5.61
    {8739,1136,1048, 0, 0, 0},  //TV = 6.84(226 lines)  AV=2.97  SV=4.29  BV=5.51
    {9358,1136,1048, 0, 0, 0},  //TV = 6.74(242 lines)  AV=2.97  SV=4.29  BV=5.42
    {10016,1136,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.31  BV=5.31
    {10016,1216,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.40  BV=5.21
    {10016,1328,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.50  BV=5.12
    {10016,1424,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.60  BV=5.01
    {10016,1536,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.70  BV=4.92
    {10016,1632,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.79  BV=4.82
    {10016,1728,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.91  BV=4.70
    {10016,1840,1064, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.01  BV=4.60
    {10016,1936,1072, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.10  BV=4.52
    {10016,2144,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.20  BV=4.41
    {10016,2240,1072, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.31  BV=4.31
    {10016,2448,1048, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.40  BV=4.21
    {10016,2656,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.51  BV=4.10
    {10016,2864,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.59  BV=4.02
    {10016,3072,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.71  BV=3.91
    {10016,3200,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.80  BV=3.81
    {10016,3456,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.91  BV=3.70
    {10016,3712,1048, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.00  BV=3.61
    {10016,3968,1048, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.10  BV=3.51
    {10016,4352,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.20  BV=3.41
    {10016,4608,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.30  BV=3.31
    {10016,4992,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.41  BV=3.20
    {10016,5376,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.50  BV=3.11
    {10016,5760,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.60  BV=3.01
    {19992,3072,1032, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=5.71  BV=2.91
    {19992,3200,1064, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=5.81  BV=2.81
    {19992,3456,1056, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=5.91  BV=2.70
    {19992,3712,1048, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=6.00  BV=2.61
    {19992,3968,1056, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=6.11  BV=2.51
    {19992,4352,1032, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=6.21  BV=2.41
    {30007,3072,1040, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=5.72  BV=2.31
    {30007,3328,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=5.82  BV=2.21
    {30007,3584,1024, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=5.92  BV=2.11
    {30007,3840,1024, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.02  BV=2.01
    {30007,4096,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.12  BV=1.91
    {30007,4352,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.21  BV=1.82
    {30007,4736,1024, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.32  BV=1.71
    {30007,4992,1040, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.42  BV=1.61
    {30007,5376,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.51  BV=1.51
    {30007,5760,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.61  BV=1.42
    {30007,6240,1024, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.72  BV=1.31
    {30007,6544,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.82  BV=1.21
    {30007,7072,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.91  BV=1.12
    {30007,7472,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.01  BV=1.02
    {30007,8192,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.12  BV=0.91
    {30007,8720,1040, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.22  BV=0.81
    {30007,9344,1040, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.32  BV=0.71
    {30007,10080,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.42  BV=0.61
    {30007,10240,1088, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.52  BV=0.51
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Custom4AutoTable =
{
    AETABLE_CUSTOM4_AUTO,    //eAETableID
    116,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    120,    //i4MaxBV
    5,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCustom4PLineTable_60Hz,
    sCustom4PLineTable_50Hz,
    NULL,
};

static strEvPline sCustom5PLineTable_60Hz =
{
{
    {78,1424,1072, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.65  BV=11.96
    {78,1536,1056, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.74  BV=11.88
    {78,1632,1048, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.82  BV=11.80
    {117,1216,1024, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.36  BV=11.67
    {117,1216,1096, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.46  BV=11.58
    {117,1328,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.54  BV=11.49
    {117,1424,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.64  BV=11.39
    {155,1136,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.35  BV=11.28
    {155,1216,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.45  BV=11.18
    {155,1328,1072, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.55  BV=11.07
    {155,1424,1040, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.61  BV=11.02
    {194,1216,1048, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.39  BV=10.91
    {194,1328,1024, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.49  BV=10.82
    {233,1136,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.33  BV=10.71
    {233,1216,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.43  BV=10.61
    {271,1136,1056, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.31  BV=10.52
    {271,1216,1064, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.41  BV=10.41
    {310,1136,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.32  BV=10.31
    {310,1216,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.41  BV=10.21
    {349,1136,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.35  BV=10.11
    {387,1136,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.29  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {465,1136,1080, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.34  BV=9.70
    {503,1136,1064, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=4.32  BV=9.61
    {542,1136,1056, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=4.31  BV=9.52
    {581,1136,1056, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=4.31  BV=9.41
    {619,1136,1064, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=4.32  BV=9.31
    {658,1136,1080, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=4.34  BV=9.20
    {697,1136,1088, 0, 0, 0},  //TV = 10.49(18 lines)  AV=2.97  SV=4.35  BV=9.11
    {774,1136,1048, 0, 0, 0},  //TV = 10.34(20 lines)  AV=2.97  SV=4.29  BV=9.01
    {813,1136,1072, 0, 0, 0},  //TV = 10.26(21 lines)  AV=2.97  SV=4.33  BV=8.91
    {851,1216,1024, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=4.36  BV=8.81
    {929,1136,1080, 0, 0, 0},  //TV = 10.07(24 lines)  AV=2.97  SV=4.34  BV=8.71
    {1006,1136,1064, 0, 0, 0},  //TV = 9.96(26 lines)  AV=2.97  SV=4.32  BV=8.61
    {1083,1136,1064, 0, 0, 0},  //TV = 9.85(28 lines)  AV=2.97  SV=4.32  BV=8.51
    {1161,1136,1064, 0, 0, 0},  //TV = 9.75(30 lines)  AV=2.97  SV=4.32  BV=8.41
    {1238,1136,1064, 0, 0, 0},  //TV = 9.66(32 lines)  AV=2.97  SV=4.32  BV=8.31
    {1354,1136,1048, 0, 0, 0},  //TV = 9.53(35 lines)  AV=2.97  SV=4.29  BV=8.21
    {1431,1136,1056, 0, 0, 0},  //TV = 9.45(37 lines)  AV=2.97  SV=4.31  BV=8.11
    {1547,1136,1056, 0, 0, 0},  //TV = 9.34(40 lines)  AV=2.97  SV=4.31  BV=8.00
    {1625,1136,1072, 0, 0, 0},  //TV = 9.27(42 lines)  AV=2.97  SV=4.33  BV=7.91
    {1741,1136,1072, 0, 0, 0},  //TV = 9.17(45 lines)  AV=2.97  SV=4.33  BV=7.81
    {1895,1136,1056, 0, 0, 0},  //TV = 9.04(49 lines)  AV=2.97  SV=4.31  BV=7.71
    {2011,1136,1064, 0, 0, 0},  //TV = 8.96(52 lines)  AV=2.97  SV=4.32  BV=7.61
    {2166,1136,1064, 0, 0, 0},  //TV = 8.85(56 lines)  AV=2.97  SV=4.32  BV=7.51
    {2321,1136,1064, 0, 0, 0},  //TV = 8.75(60 lines)  AV=2.97  SV=4.32  BV=7.41
    {2514,1136,1048, 0, 0, 0},  //TV = 8.64(65 lines)  AV=2.97  SV=4.29  BV=7.31
    {2669,1136,1056, 0, 0, 0},  //TV = 8.55(69 lines)  AV=2.97  SV=4.31  BV=7.22
    {2862,1136,1056, 0, 0, 0},  //TV = 8.45(74 lines)  AV=2.97  SV=4.31  BV=7.11
    {3094,1136,1048, 0, 0, 0},  //TV = 8.34(80 lines)  AV=2.97  SV=4.29  BV=7.01
    {3287,1136,1056, 0, 0, 0},  //TV = 8.25(85 lines)  AV=2.97  SV=4.31  BV=6.91
    {3558,1136,1056, 0, 0, 0},  //TV = 8.13(92 lines)  AV=2.97  SV=4.31  BV=6.80
    {3790,1136,1056, 0, 0, 0},  //TV = 8.04(98 lines)  AV=2.97  SV=4.31  BV=6.71
    {4061,1136,1056, 0, 0, 0},  //TV = 7.94(105 lines)  AV=2.97  SV=4.31  BV=6.61
    {4370,1136,1056, 0, 0, 0},  //TV = 7.84(113 lines)  AV=2.97  SV=4.31  BV=6.50
    {4679,1136,1048, 0, 0, 0},  //TV = 7.74(121 lines)  AV=2.97  SV=4.29  BV=6.42
    {4989,1136,1056, 0, 0, 0},  //TV = 7.65(129 lines)  AV=2.97  SV=4.31  BV=6.31
    {5375,1136,1048, 0, 0, 0},  //TV = 7.54(139 lines)  AV=2.97  SV=4.29  BV=6.22
    {5723,1136,1056, 0, 0, 0},  //TV = 7.45(148 lines)  AV=2.97  SV=4.31  BV=6.11
    {6187,1136,1056, 0, 0, 0},  //TV = 7.34(160 lines)  AV=2.97  SV=4.31  BV=6.00
    {6574,1136,1056, 0, 0, 0},  //TV = 7.25(170 lines)  AV=2.97  SV=4.31  BV=5.91
    {7115,1136,1048, 0, 0, 0},  //TV = 7.13(184 lines)  AV=2.97  SV=4.29  BV=5.81
    {7618,1136,1048, 0, 0, 0},  //TV = 7.04(197 lines)  AV=2.97  SV=4.29  BV=5.71
    {8159,1136,1048, 0, 0, 0},  //TV = 6.94(211 lines)  AV=2.97  SV=4.29  BV=5.61
    {8314,1216,1032, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.37  BV=5.51
    {8314,1216,1104, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.47  BV=5.41
    {8314,1328,1096, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.58  BV=5.30
    {8314,1424,1080, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.66  BV=5.22
    {8314,1536,1088, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.78  BV=5.10
    {8314,1728,1024, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.87  BV=5.02
    {8314,1840,1040, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.98  BV=4.90
    {8314,1936,1056, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.07  BV=4.81
    {8314,2048,1064, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.17  BV=4.71
    {8314,2240,1048, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.27  BV=4.61
    {16666,1216,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.36  BV=4.52
    {16666,1216,1104, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.47  BV=4.41
    {16666,1328,1080, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.56  BV=4.31
    {16666,1424,1080, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.66  BV=4.21
    {16666,1536,1072, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.76  BV=4.12
    {16666,1728,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.87  BV=4.01
    {16666,1840,1032, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.97  BV=3.91
    {16666,1936,1048, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.06  BV=3.81
    {16666,2048,1064, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.17  BV=3.71
    {16666,2240,1048, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.27  BV=3.60
    {16666,2448,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.37  BV=3.51
    {16666,2560,1048, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.47  BV=3.41
    {16666,2752,1048, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.57  BV=3.31
    {16666,2960,1040, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.66  BV=3.21
    {16666,3200,1032, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.77  BV=3.11
    {16666,3456,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.87  BV=3.01
    {16666,3712,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.97  BV=2.91
    {16666,3968,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=6.07  BV=2.81
    {16666,4224,1032, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=6.17  BV=2.71
    {16666,4480,1040, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=6.26  BV=2.62
    {24980,3200,1048, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=5.79  BV=2.51
    {24980,3456,1040, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=5.89  BV=2.41
    {24980,3712,1032, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=5.98  BV=2.31
    {24980,3968,1040, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=6.09  BV=2.21
    {33332,3200,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=5.77  BV=2.11
    {33332,3456,1024, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=5.87  BV=2.01
    {33332,3584,1056, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=5.96  BV=1.92
    {33332,3968,1024, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.07  BV=1.81
    {33332,4224,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.17  BV=1.71
    {33332,4480,1048, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.27  BV=1.60
    {33332,4864,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.37  BV=1.51
    {33332,5248,1024, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.47  BV=1.41
    {33332,5504,1040, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.56  BV=1.32
    {33332,6016,1024, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.67  BV=1.21
    {33332,6384,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.76  BV=1.12
    {33332,6896,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.87  BV=1.00
    {33332,7280,1048, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.97  BV=0.90
    {33332,7936,1024, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=7.07  BV=0.81
    {33332,8448,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=7.17  BV=0.71
    {33332,9040,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=7.26  BV=0.61
    {33332,9696,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=7.37  BV=0.51
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCustom5PLineTable_50Hz =
{
{
    {78,1424,1072, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.65  BV=11.96
    {78,1536,1056, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.74  BV=11.88
    {78,1632,1048, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.82  BV=11.80
    {117,1216,1024, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.36  BV=11.67
    {117,1216,1096, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.46  BV=11.58
    {117,1328,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.54  BV=11.49
    {117,1424,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.64  BV=11.39
    {155,1136,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.35  BV=11.28
    {155,1216,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.45  BV=11.18
    {155,1328,1072, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.55  BV=11.07
    {155,1424,1040, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.61  BV=11.02
    {194,1216,1048, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.39  BV=10.91
    {194,1328,1024, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.49  BV=10.82
    {233,1136,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.33  BV=10.71
    {233,1216,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.43  BV=10.61
    {271,1136,1056, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.31  BV=10.52
    {271,1216,1064, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.41  BV=10.41
    {310,1136,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.32  BV=10.31
    {310,1216,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.41  BV=10.21
    {349,1136,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.35  BV=10.11
    {387,1136,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.29  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {465,1136,1080, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.34  BV=9.70
    {503,1136,1064, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=4.32  BV=9.61
    {542,1136,1056, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=4.31  BV=9.52
    {581,1136,1056, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=4.31  BV=9.41
    {619,1136,1064, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=4.32  BV=9.31
    {658,1136,1080, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=4.34  BV=9.20
    {697,1136,1088, 0, 0, 0},  //TV = 10.49(18 lines)  AV=2.97  SV=4.35  BV=9.11
    {774,1136,1048, 0, 0, 0},  //TV = 10.34(20 lines)  AV=2.97  SV=4.29  BV=9.01
    {813,1136,1072, 0, 0, 0},  //TV = 10.26(21 lines)  AV=2.97  SV=4.33  BV=8.91
    {851,1216,1024, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=4.36  BV=8.81
    {929,1136,1080, 0, 0, 0},  //TV = 10.07(24 lines)  AV=2.97  SV=4.34  BV=8.71
    {1006,1136,1064, 0, 0, 0},  //TV = 9.96(26 lines)  AV=2.97  SV=4.32  BV=8.61
    {1083,1136,1064, 0, 0, 0},  //TV = 9.85(28 lines)  AV=2.97  SV=4.32  BV=8.51
    {1161,1136,1064, 0, 0, 0},  //TV = 9.75(30 lines)  AV=2.97  SV=4.32  BV=8.41
    {1238,1136,1064, 0, 0, 0},  //TV = 9.66(32 lines)  AV=2.97  SV=4.32  BV=8.31
    {1354,1136,1048, 0, 0, 0},  //TV = 9.53(35 lines)  AV=2.97  SV=4.29  BV=8.21
    {1431,1136,1056, 0, 0, 0},  //TV = 9.45(37 lines)  AV=2.97  SV=4.31  BV=8.11
    {1547,1136,1056, 0, 0, 0},  //TV = 9.34(40 lines)  AV=2.97  SV=4.31  BV=8.00
    {1625,1136,1072, 0, 0, 0},  //TV = 9.27(42 lines)  AV=2.97  SV=4.33  BV=7.91
    {1741,1136,1072, 0, 0, 0},  //TV = 9.17(45 lines)  AV=2.97  SV=4.33  BV=7.81
    {1895,1136,1056, 0, 0, 0},  //TV = 9.04(49 lines)  AV=2.97  SV=4.31  BV=7.71
    {2011,1136,1064, 0, 0, 0},  //TV = 8.96(52 lines)  AV=2.97  SV=4.32  BV=7.61
    {2166,1136,1064, 0, 0, 0},  //TV = 8.85(56 lines)  AV=2.97  SV=4.32  BV=7.51
    {2321,1136,1064, 0, 0, 0},  //TV = 8.75(60 lines)  AV=2.97  SV=4.32  BV=7.41
    {2514,1136,1048, 0, 0, 0},  //TV = 8.64(65 lines)  AV=2.97  SV=4.29  BV=7.31
    {2669,1136,1056, 0, 0, 0},  //TV = 8.55(69 lines)  AV=2.97  SV=4.31  BV=7.22
    {2862,1136,1056, 0, 0, 0},  //TV = 8.45(74 lines)  AV=2.97  SV=4.31  BV=7.11
    {3094,1136,1048, 0, 0, 0},  //TV = 8.34(80 lines)  AV=2.97  SV=4.29  BV=7.01
    {3287,1136,1056, 0, 0, 0},  //TV = 8.25(85 lines)  AV=2.97  SV=4.31  BV=6.91
    {3558,1136,1056, 0, 0, 0},  //TV = 8.13(92 lines)  AV=2.97  SV=4.31  BV=6.80
    {3790,1136,1056, 0, 0, 0},  //TV = 8.04(98 lines)  AV=2.97  SV=4.31  BV=6.71
    {4061,1136,1056, 0, 0, 0},  //TV = 7.94(105 lines)  AV=2.97  SV=4.31  BV=6.61
    {4370,1136,1056, 0, 0, 0},  //TV = 7.84(113 lines)  AV=2.97  SV=4.31  BV=6.50
    {4679,1136,1048, 0, 0, 0},  //TV = 7.74(121 lines)  AV=2.97  SV=4.29  BV=6.42
    {4989,1136,1056, 0, 0, 0},  //TV = 7.65(129 lines)  AV=2.97  SV=4.31  BV=6.31
    {5375,1136,1048, 0, 0, 0},  //TV = 7.54(139 lines)  AV=2.97  SV=4.29  BV=6.22
    {5723,1136,1056, 0, 0, 0},  //TV = 7.45(148 lines)  AV=2.97  SV=4.31  BV=6.11
    {6187,1136,1056, 0, 0, 0},  //TV = 7.34(160 lines)  AV=2.97  SV=4.31  BV=6.00
    {6574,1136,1056, 0, 0, 0},  //TV = 7.25(170 lines)  AV=2.97  SV=4.31  BV=5.91
    {7115,1136,1048, 0, 0, 0},  //TV = 7.13(184 lines)  AV=2.97  SV=4.29  BV=5.81
    {7618,1136,1048, 0, 0, 0},  //TV = 7.04(197 lines)  AV=2.97  SV=4.29  BV=5.71
    {8159,1136,1048, 0, 0, 0},  //TV = 6.94(211 lines)  AV=2.97  SV=4.29  BV=5.61
    {8739,1136,1048, 0, 0, 0},  //TV = 6.84(226 lines)  AV=2.97  SV=4.29  BV=5.51
    {9358,1136,1048, 0, 0, 0},  //TV = 6.74(242 lines)  AV=2.97  SV=4.29  BV=5.42
    {10016,1136,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.31  BV=5.31
    {10016,1216,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.40  BV=5.21
    {10016,1328,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.50  BV=5.12
    {10016,1424,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.60  BV=5.01
    {10016,1536,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.70  BV=4.92
    {10016,1632,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.79  BV=4.82
    {10016,1728,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.91  BV=4.70
    {10016,1840,1064, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.01  BV=4.60
    {10016,1936,1072, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.10  BV=4.52
    {10016,2144,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.20  BV=4.41
    {10016,2240,1072, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.31  BV=4.31
    {10016,2448,1048, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.40  BV=4.21
    {10016,2656,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.51  BV=4.10
    {10016,2864,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.59  BV=4.02
    {10016,3072,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.71  BV=3.91
    {10016,3200,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.80  BV=3.81
    {10016,3456,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.91  BV=3.70
    {10016,3712,1048, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.00  BV=3.61
    {10016,3968,1048, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.10  BV=3.51
    {10016,4352,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.20  BV=3.41
    {10016,4608,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.30  BV=3.31
    {10016,4992,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.41  BV=3.20
    {10016,5376,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.50  BV=3.11
    {10016,5760,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.60  BV=3.01
    {19992,3072,1032, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=5.71  BV=2.91
    {19992,3200,1064, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=5.81  BV=2.81
    {19992,3456,1056, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=5.91  BV=2.70
    {19992,3712,1048, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=6.00  BV=2.61
    {19992,3968,1056, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=6.11  BV=2.51
    {19992,4352,1032, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=6.21  BV=2.41
    {30007,3072,1040, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=5.72  BV=2.31
    {30007,3328,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=5.82  BV=2.21
    {30007,3584,1024, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=5.92  BV=2.11
    {30007,3840,1024, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.02  BV=2.01
    {30007,4096,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.12  BV=1.91
    {30007,4352,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.21  BV=1.82
    {30007,4736,1024, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.32  BV=1.71
    {30007,4992,1040, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.42  BV=1.61
    {30007,5376,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.51  BV=1.51
    {30007,5760,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.61  BV=1.42
    {30007,6240,1024, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.72  BV=1.31
    {30007,6544,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.82  BV=1.21
    {30007,7072,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.91  BV=1.12
    {30007,7472,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.01  BV=1.02
    {30007,8192,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.12  BV=0.91
    {30007,8720,1040, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.22  BV=0.81
    {30007,9344,1040, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.32  BV=0.71
    {30007,10080,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.42  BV=0.61
    {30007,10240,1088, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.52  BV=0.51
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Custom5AutoTable =
{
    AETABLE_CUSTOM5_AUTO,    //eAETableID
    116,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    120,    //i4MaxBV
    5,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCustom5PLineTable_60Hz,
    sCustom5PLineTable_50Hz,
    NULL,
};

static strEvPline sVideoNightPLineTable_60Hz =
{
{
    {310,1216,1096, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.46  BV=10.17
    {310,1328,1048, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.52  BV=10.11
    {349,1216,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.45  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {426,1216,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.46  BV=9.71
    {465,1216,1072, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.43  BV=9.62
    {503,1216,1064, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=4.41  BV=9.51
    {542,1216,1064, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=4.41  BV=9.41
    {581,1216,1064, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=4.41  BV=9.31
    {619,1216,1064, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=4.41  BV=9.21
    {658,1216,1072, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=4.43  BV=9.12
    {735,1216,1032, 0, 0, 0},  //TV = 10.41(19 lines)  AV=2.97  SV=4.37  BV=9.01
    {774,1216,1048, 0, 0, 0},  //TV = 10.34(20 lines)  AV=2.97  SV=4.39  BV=8.91
    {851,1216,1024, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=4.36  BV=8.81
    {890,1216,1048, 0, 0, 0},  //TV = 10.13(23 lines)  AV=2.97  SV=4.39  BV=8.71
    {967,1216,1032, 0, 0, 0},  //TV = 10.01(25 lines)  AV=2.97  SV=4.37  BV=8.61
    {1045,1216,1024, 0, 0, 0},  //TV = 9.90(27 lines)  AV=2.97  SV=4.36  BV=8.51
    {1122,1216,1024, 0, 0, 0},  //TV = 9.80(29 lines)  AV=2.97  SV=4.36  BV=8.41
    {1199,1216,1024, 0, 0, 0},  //TV = 9.70(31 lines)  AV=2.97  SV=4.36  BV=8.32
    {1277,1216,1032, 0, 0, 0},  //TV = 9.61(33 lines)  AV=2.97  SV=4.37  BV=8.21
    {1354,1216,1048, 0, 0, 0},  //TV = 9.53(35 lines)  AV=2.97  SV=4.39  BV=8.11
    {1470,1216,1032, 0, 0, 0},  //TV = 9.41(38 lines)  AV=2.97  SV=4.37  BV=8.01
    {1586,1216,1024, 0, 0, 0},  //TV = 9.30(41 lines)  AV=2.97  SV=4.36  BV=7.91
    {1702,1216,1024, 0, 0, 0},  //TV = 9.20(44 lines)  AV=2.97  SV=4.36  BV=7.81
    {1818,1216,1024, 0, 0, 0},  //TV = 9.10(47 lines)  AV=2.97  SV=4.36  BV=7.72
    {1934,1216,1032, 0, 0, 0},  //TV = 9.01(50 lines)  AV=2.97  SV=4.37  BV=7.61
    {2089,1216,1024, 0, 0, 0},  //TV = 8.90(54 lines)  AV=2.97  SV=4.36  BV=7.51
    {2243,1216,1024, 0, 0, 0},  //TV = 8.80(58 lines)  AV=2.97  SV=4.36  BV=7.41
    {2398,1216,1024, 0, 0, 0},  //TV = 8.70(62 lines)  AV=2.97  SV=4.36  BV=7.32
    {2553,1216,1032, 0, 0, 0},  //TV = 8.61(66 lines)  AV=2.97  SV=4.37  BV=7.21
    {2746,1216,1032, 0, 0, 0},  //TV = 8.51(71 lines)  AV=2.97  SV=4.37  BV=7.11
    {2978,1136,1096, 0, 0, 0},  //TV = 8.39(77 lines)  AV=2.97  SV=4.36  BV=7.00
    {3171,1216,1024, 0, 0, 0},  //TV = 8.30(82 lines)  AV=2.97  SV=4.36  BV=6.91
    {3403,1216,1024, 0, 0, 0},  //TV = 8.20(88 lines)  AV=2.97  SV=4.36  BV=6.81
    {3635,1216,1024, 0, 0, 0},  //TV = 8.10(94 lines)  AV=2.97  SV=4.36  BV=6.72
    {3906,1216,1024, 0, 0, 0},  //TV = 8.00(101 lines)  AV=2.97  SV=4.36  BV=6.61
    {4177,1216,1024, 0, 0, 0},  //TV = 7.90(108 lines)  AV=2.97  SV=4.36  BV=6.52
    {4486,1216,1024, 0, 0, 0},  //TV = 7.80(116 lines)  AV=2.97  SV=4.36  BV=6.41
    {4795,1216,1024, 0, 0, 0},  //TV = 7.70(124 lines)  AV=2.97  SV=4.36  BV=6.32
    {5143,1216,1024, 0, 0, 0},  //TV = 7.60(133 lines)  AV=2.97  SV=4.36  BV=6.22
    {5569,1136,1096, 0, 0, 0},  //TV = 7.49(144 lines)  AV=2.97  SV=4.36  BV=6.10
    {5955,1136,1096, 0, 0, 0},  //TV = 7.39(154 lines)  AV=2.97  SV=4.36  BV=6.00
    {6381,1136,1096, 0, 0, 0},  //TV = 7.29(165 lines)  AV=2.97  SV=4.36  BV=5.90
    {6767,1216,1024, 0, 0, 0},  //TV = 7.21(175 lines)  AV=2.97  SV=4.36  BV=5.82
    {7309,1136,1096, 0, 0, 0},  //TV = 7.10(189 lines)  AV=2.97  SV=4.36  BV=5.71
    {7811,1216,1024, 0, 0, 0},  //TV = 7.00(202 lines)  AV=2.97  SV=4.36  BV=5.61
    {8314,1216,1032, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.37  BV=5.51
    {8314,1216,1104, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.47  BV=5.41
    {8314,1328,1088, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.57  BV=5.31
    {8314,1424,1080, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.66  BV=5.22
    {8314,1536,1088, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.78  BV=5.10
    {8314,1728,1024, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.87  BV=5.02
    {8314,1840,1040, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.98  BV=4.90
    {8314,1936,1056, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.07  BV=4.81
    {8314,2048,1072, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.18  BV=4.70
    {8314,2240,1048, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.27  BV=4.61
    {16666,1216,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.36  BV=4.52
    {16666,1216,1104, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.47  BV=4.41
    {16666,1328,1080, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.56  BV=4.31
    {16666,1424,1080, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.66  BV=4.21
    {16666,1536,1080, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.77  BV=4.10
    {16666,1728,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.87  BV=4.01
    {24980,1216,1040, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.38  BV=3.91
    {24980,1216,1112, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.48  BV=3.82
    {24980,1328,1096, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.58  BV=3.71
    {24980,1424,1096, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.68  BV=3.61
    {33216,1216,1032, 0, 0, 0},  //TV = 4.91(859 lines)  AV=2.97  SV=4.37  BV=3.51
    {33216,1216,1104, 0, 0, 0},  //TV = 4.91(859 lines)  AV=2.97  SV=4.47  BV=3.42
    {33216,1328,1088, 0, 0, 0},  //TV = 4.91(859 lines)  AV=2.97  SV=4.57  BV=3.31
    {33216,1424,1080, 0, 0, 0},  //TV = 4.91(859 lines)  AV=2.97  SV=4.66  BV=3.22
    {41646,1216,1088, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.45  BV=3.11
    {41646,1328,1072, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.55  BV=3.00
    {41646,1424,1072, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.65  BV=2.90
    {41646,1536,1056, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.74  BV=2.82
    {41646,1632,1072, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.85  BV=2.71
    {41646,1728,1080, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.94  BV=2.61
    {41646,1936,1032, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.04  BV=2.52
    {41646,2048,1048, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.14  BV=2.41
    {41646,2240,1032, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.25  BV=2.30
    {41646,2352,1048, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.34  BV=2.21
    {49998,2144,1024, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=5.18  BV=2.12
    {49998,2240,1056, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=5.28  BV=2.01
    {58312,2048,1064, 0, 0, 0},  //TV = 4.10(1508 lines)  AV=2.97  SV=5.17  BV=1.90
    {58312,2240,1040, 0, 0, 0},  //TV = 4.10(1508 lines)  AV=2.97  SV=5.26  BV=1.81
    {66548,2048,1064, 0, 0, 0},  //TV = 3.91(1721 lines)  AV=2.97  SV=5.17  BV=1.71
    {66548,2240,1040, 0, 0, 0},  //TV = 3.91(1721 lines)  AV=2.97  SV=5.26  BV=1.62
    {66548,2448,1024, 0, 0, 0},  //TV = 3.91(1721 lines)  AV=2.97  SV=5.37  BV=1.51
    {66548,2560,1048, 0, 0, 0},  //TV = 3.91(1721 lines)  AV=2.97  SV=5.47  BV=1.41
    {66548,2752,1040, 0, 0, 0},  //TV = 3.91(1721 lines)  AV=2.97  SV=5.56  BV=1.32
    {66548,2960,1048, 0, 0, 0},  //TV = 3.91(1721 lines)  AV=2.97  SV=5.68  BV=1.20
    {66548,3200,1032, 0, 0, 0},  //TV = 3.91(1721 lines)  AV=2.97  SV=5.77  BV=1.11
    {66548,3456,1024, 0, 0, 0},  //TV = 3.91(1721 lines)  AV=2.97  SV=5.87  BV=1.01
    {66548,3712,1032, 0, 0, 0},  //TV = 3.91(1721 lines)  AV=2.97  SV=5.98  BV=0.90
    {66548,3968,1032, 0, 0, 0},  //TV = 3.91(1721 lines)  AV=2.97  SV=6.08  BV=0.80
    {66548,4224,1032, 0, 0, 0},  //TV = 3.91(1721 lines)  AV=2.97  SV=6.17  BV=0.71
    {66548,4480,1040, 0, 0, 0},  //TV = 3.91(1721 lines)  AV=2.97  SV=6.26  BV=0.62
    {74978,4352,1024, 0, 0, 0},  //TV = 3.74(1939 lines)  AV=2.97  SV=6.20  BV=0.51
    {83330,4096,1048, 0, 0, 0},  //TV = 3.59(2155 lines)  AV=2.97  SV=6.14  BV=0.41
    {91644,3968,1056, 0, 0, 0},  //TV = 3.45(2370 lines)  AV=2.97  SV=6.11  BV=0.31
    {91644,4352,1032, 0, 0, 0},  //TV = 3.45(2370 lines)  AV=2.97  SV=6.21  BV=0.21
    {99996,4224,1048, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.19  BV=0.10
    {99996,4608,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.29  BV=0.00
    {99996,4864,1048, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.39  BV=-0.10
    {99996,5248,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.49  BV=-0.20
    {99996,5632,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.59  BV=-0.30
    {99996,6144,1024, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.70  BV=-0.40
    {99996,6544,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.80  BV=-0.51
    {99996,7072,1024, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.90  BV=-0.61
    {99996,7472,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.99  BV=-0.70
    {99996,7936,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=7.09  BV=-0.79
    {99996,8448,1056, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=7.20  BV=-0.91
    {108310,8448,1040, 0, 0, 0},  //TV = 3.21(2801 lines)  AV=2.97  SV=7.18  BV=-1.00
    {116662,8448,1040, 0, 0, 0},  //TV = 3.10(3017 lines)  AV=2.97  SV=7.18  BV=-1.11
    {125014,8448,1040, 0, 0, 0},  //TV = 3.00(3233 lines)  AV=2.97  SV=7.18  BV=-1.21
    {125014,9040,1040, 0, 0, 0},  //TV = 3.00(3233 lines)  AV=2.97  SV=7.28  BV=-1.30
    {125014,9696,1040, 0, 0, 0},  //TV = 3.00(3233 lines)  AV=2.97  SV=7.38  BV=-1.41
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sVideoNightPLineTable_50Hz =
{
{
    {310,1216,1096, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.46  BV=10.17
    {310,1328,1048, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.52  BV=10.11
    {349,1216,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.45  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {426,1216,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.46  BV=9.71
    {465,1216,1072, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.43  BV=9.62
    {503,1216,1064, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=4.41  BV=9.51
    {542,1216,1064, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=4.41  BV=9.41
    {581,1216,1064, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=4.41  BV=9.31
    {619,1216,1064, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=4.41  BV=9.21
    {658,1216,1072, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=4.43  BV=9.12
    {735,1216,1032, 0, 0, 0},  //TV = 10.41(19 lines)  AV=2.97  SV=4.37  BV=9.01
    {774,1216,1048, 0, 0, 0},  //TV = 10.34(20 lines)  AV=2.97  SV=4.39  BV=8.91
    {851,1216,1024, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=4.36  BV=8.81
    {890,1216,1048, 0, 0, 0},  //TV = 10.13(23 lines)  AV=2.97  SV=4.39  BV=8.71
    {967,1216,1032, 0, 0, 0},  //TV = 10.01(25 lines)  AV=2.97  SV=4.37  BV=8.61
    {1045,1216,1024, 0, 0, 0},  //TV = 9.90(27 lines)  AV=2.97  SV=4.36  BV=8.51
    {1122,1216,1024, 0, 0, 0},  //TV = 9.80(29 lines)  AV=2.97  SV=4.36  BV=8.41
    {1199,1216,1024, 0, 0, 0},  //TV = 9.70(31 lines)  AV=2.97  SV=4.36  BV=8.32
    {1277,1216,1032, 0, 0, 0},  //TV = 9.61(33 lines)  AV=2.97  SV=4.37  BV=8.21
    {1354,1216,1048, 0, 0, 0},  //TV = 9.53(35 lines)  AV=2.97  SV=4.39  BV=8.11
    {1470,1216,1032, 0, 0, 0},  //TV = 9.41(38 lines)  AV=2.97  SV=4.37  BV=8.01
    {1586,1216,1024, 0, 0, 0},  //TV = 9.30(41 lines)  AV=2.97  SV=4.36  BV=7.91
    {1702,1216,1024, 0, 0, 0},  //TV = 9.20(44 lines)  AV=2.97  SV=4.36  BV=7.81
    {1818,1216,1024, 0, 0, 0},  //TV = 9.10(47 lines)  AV=2.97  SV=4.36  BV=7.72
    {1934,1216,1032, 0, 0, 0},  //TV = 9.01(50 lines)  AV=2.97  SV=4.37  BV=7.61
    {2089,1216,1024, 0, 0, 0},  //TV = 8.90(54 lines)  AV=2.97  SV=4.36  BV=7.51
    {2243,1216,1024, 0, 0, 0},  //TV = 8.80(58 lines)  AV=2.97  SV=4.36  BV=7.41
    {2398,1216,1024, 0, 0, 0},  //TV = 8.70(62 lines)  AV=2.97  SV=4.36  BV=7.32
    {2553,1216,1032, 0, 0, 0},  //TV = 8.61(66 lines)  AV=2.97  SV=4.37  BV=7.21
    {2746,1216,1032, 0, 0, 0},  //TV = 8.51(71 lines)  AV=2.97  SV=4.37  BV=7.11
    {2978,1136,1096, 0, 0, 0},  //TV = 8.39(77 lines)  AV=2.97  SV=4.36  BV=7.00
    {3171,1216,1024, 0, 0, 0},  //TV = 8.30(82 lines)  AV=2.97  SV=4.36  BV=6.91
    {3403,1216,1024, 0, 0, 0},  //TV = 8.20(88 lines)  AV=2.97  SV=4.36  BV=6.81
    {3635,1216,1024, 0, 0, 0},  //TV = 8.10(94 lines)  AV=2.97  SV=4.36  BV=6.72
    {3906,1216,1024, 0, 0, 0},  //TV = 8.00(101 lines)  AV=2.97  SV=4.36  BV=6.61
    {4177,1216,1024, 0, 0, 0},  //TV = 7.90(108 lines)  AV=2.97  SV=4.36  BV=6.52
    {4486,1216,1024, 0, 0, 0},  //TV = 7.80(116 lines)  AV=2.97  SV=4.36  BV=6.41
    {4795,1216,1024, 0, 0, 0},  //TV = 7.70(124 lines)  AV=2.97  SV=4.36  BV=6.32
    {5143,1216,1024, 0, 0, 0},  //TV = 7.60(133 lines)  AV=2.97  SV=4.36  BV=6.22
    {5569,1136,1096, 0, 0, 0},  //TV = 7.49(144 lines)  AV=2.97  SV=4.36  BV=6.10
    {5955,1136,1096, 0, 0, 0},  //TV = 7.39(154 lines)  AV=2.97  SV=4.36  BV=6.00
    {6381,1136,1096, 0, 0, 0},  //TV = 7.29(165 lines)  AV=2.97  SV=4.36  BV=5.90
    {6767,1216,1024, 0, 0, 0},  //TV = 7.21(175 lines)  AV=2.97  SV=4.36  BV=5.82
    {7309,1136,1096, 0, 0, 0},  //TV = 7.10(189 lines)  AV=2.97  SV=4.36  BV=5.71
    {7811,1216,1024, 0, 0, 0},  //TV = 7.00(202 lines)  AV=2.97  SV=4.36  BV=5.61
    {8391,1136,1096, 0, 0, 0},  //TV = 6.90(217 lines)  AV=2.97  SV=4.36  BV=5.51
    {9049,1136,1096, 0, 0, 0},  //TV = 6.79(234 lines)  AV=2.97  SV=4.36  BV=5.40
    {9706,1136,1096, 0, 0, 0},  //TV = 6.69(251 lines)  AV=2.97  SV=4.36  BV=5.30
    {10016,1216,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.40  BV=5.21
    {10016,1328,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.50  BV=5.12
    {10016,1424,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.60  BV=5.01
    {10016,1536,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.70  BV=4.92
    {10016,1632,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.81  BV=4.81
    {10016,1728,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.91  BV=4.70
    {10016,1840,1064, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.01  BV=4.60
    {10016,1936,1080, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.11  BV=4.51
    {10016,2144,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.20  BV=4.41
    {10016,2240,1064, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.30  BV=4.32
    {19992,1216,1064, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.41  BV=4.20
    {19992,1328,1040, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.51  BV=4.11
    {19992,1424,1040, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.61  BV=4.01
    {19992,1536,1032, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.71  BV=3.91
    {19992,1632,1040, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.81  BV=3.81
    {19992,1728,1056, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.91  BV=3.70
    {30007,1216,1064, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.41  BV=3.62
    {30007,1328,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.52  BV=3.51
    {30007,1424,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.62  BV=3.41
    {30007,1536,1040, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.72  BV=3.31
    {39983,1216,1056, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.40  BV=3.21
    {39983,1328,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.51  BV=3.11
    {39983,1424,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.61  BV=3.01
    {39983,1536,1032, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.71  BV=2.91
    {39983,1632,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.81  BV=2.81
    {39983,1728,1048, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.90  BV=2.72
    {39983,1840,1056, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.00  BV=2.61
    {39983,1936,1072, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.10  BV=2.52
    {39983,2144,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.20  BV=2.42
    {39983,2240,1064, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.30  BV=2.32
    {39983,2448,1056, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.41  BV=2.20
    {49998,2144,1024, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=5.18  BV=2.12
    {49998,2240,1056, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=5.28  BV=2.01
    {60014,2048,1032, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.12  BV=1.91
    {60014,2144,1056, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.22  BV=1.81
    {60014,2352,1024, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.31  BV=1.72
    {60014,2448,1064, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.42  BV=1.61
    {60014,2656,1048, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.52  BV=1.51
    {60014,2864,1040, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.62  BV=1.41
    {60014,3072,1048, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.73  BV=1.30
    {60014,3328,1032, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.82  BV=1.21
    {60014,3584,1024, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.92  BV=1.11
    {60014,3840,1024, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=6.02  BV=1.01
    {60014,4096,1024, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=6.11  BV=0.92
    {60014,4352,1040, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=6.22  BV=0.81
    {60014,4736,1024, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=6.32  BV=0.71
    {69990,4352,1024, 0, 0, 0},  //TV = 3.84(1810 lines)  AV=2.97  SV=6.20  BV=0.61
    {69990,4608,1032, 0, 0, 0},  //TV = 3.84(1810 lines)  AV=2.97  SV=6.29  BV=0.52
    {80005,4352,1024, 0, 0, 0},  //TV = 3.64(2069 lines)  AV=2.97  SV=6.20  BV=0.42
    {89981,4096,1040, 0, 0, 0},  //TV = 3.47(2327 lines)  AV=2.97  SV=6.13  BV=0.31
    {89981,4352,1048, 0, 0, 0},  //TV = 3.47(2327 lines)  AV=2.97  SV=6.23  BV=0.21
    {99996,4224,1048, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.19  BV=0.10
    {99996,4608,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.29  BV=0.00
    {99996,4864,1048, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.39  BV=-0.10
    {99996,5248,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.49  BV=-0.20
    {99996,5632,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.59  BV=-0.30
    {99996,6144,1024, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.70  BV=-0.40
    {99996,6544,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.80  BV=-0.51
    {99996,7072,1024, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.90  BV=-0.61
    {99996,7472,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.99  BV=-0.70
    {99996,7936,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=7.09  BV=-0.79
    {99996,8448,1056, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=7.20  BV=-0.91
    {110011,8448,1024, 0, 0, 0},  //TV = 3.18(2845 lines)  AV=2.97  SV=7.16  BV=-1.00
    {119987,8192,1040, 0, 0, 0},  //TV = 3.06(3103 lines)  AV=2.97  SV=7.13  BV=-1.10
    {119987,8720,1040, 0, 0, 0},  //TV = 3.06(3103 lines)  AV=2.97  SV=7.22  BV=-1.19
    {119987,9344,1048, 0, 0, 0},  //TV = 3.06(3103 lines)  AV=2.97  SV=7.33  BV=-1.30
    {119987,10080,1040, 0, 0, 0},  //TV = 3.06(3103 lines)  AV=2.97  SV=7.43  BV=-1.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_VideoNightTable =
{
    AETABLE_VIDEO_NIGHT,    //eAETableID
    117,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    102,    //i4MaxBV
    -14,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -10,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sVideoNightPLineTable_60Hz,
    sVideoNightPLineTable_50Hz,
    NULL,
};

static strEvPline sCaptureISO100PLineTable_60Hz =
{
{
    {78,1424,1072, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.65  BV=11.96
    {78,1536,1056, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.74  BV=11.88
    {78,1632,1048, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.82  BV=11.80
    {117,1216,1024, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.36  BV=11.67
    {117,1216,1096, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.46  BV=11.58
    {117,1328,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.54  BV=11.49
    {117,1424,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.64  BV=11.39
    {155,1136,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.35  BV=11.28
    {155,1216,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.45  BV=11.18
    {155,1328,1072, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.55  BV=11.07
    {155,1424,1040, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.61  BV=11.02
    {194,1216,1048, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.39  BV=10.91
    {194,1328,1024, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.49  BV=10.82
    {233,1136,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.33  BV=10.71
    {233,1216,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.43  BV=10.61
    {271,1136,1056, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.31  BV=10.52
    {271,1216,1064, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.41  BV=10.41
    {310,1136,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.32  BV=10.31
    {310,1216,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.41  BV=10.21
    {349,1136,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.35  BV=10.11
    {387,1136,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.29  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {465,1136,1080, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.34  BV=9.70
    {503,1136,1064, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=4.32  BV=9.61
    {542,1136,1056, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=4.31  BV=9.52
    {581,1136,1056, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=4.31  BV=9.41
    {619,1136,1064, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=4.32  BV=9.31
    {658,1136,1080, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=4.34  BV=9.20
    {697,1136,1088, 0, 0, 0},  //TV = 10.49(18 lines)  AV=2.97  SV=4.35  BV=9.11
    {774,1136,1048, 0, 0, 0},  //TV = 10.34(20 lines)  AV=2.97  SV=4.29  BV=9.01
    {813,1136,1072, 0, 0, 0},  //TV = 10.26(21 lines)  AV=2.97  SV=4.33  BV=8.91
    {851,1216,1024, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=4.36  BV=8.81
    {929,1136,1080, 0, 0, 0},  //TV = 10.07(24 lines)  AV=2.97  SV=4.34  BV=8.71
    {1006,1136,1064, 0, 0, 0},  //TV = 9.96(26 lines)  AV=2.97  SV=4.32  BV=8.61
    {1083,1136,1064, 0, 0, 0},  //TV = 9.85(28 lines)  AV=2.97  SV=4.32  BV=8.51
    {1161,1136,1064, 0, 0, 0},  //TV = 9.75(30 lines)  AV=2.97  SV=4.32  BV=8.41
    {1238,1136,1064, 0, 0, 0},  //TV = 9.66(32 lines)  AV=2.97  SV=4.32  BV=8.31
    {1354,1136,1048, 0, 0, 0},  //TV = 9.53(35 lines)  AV=2.97  SV=4.29  BV=8.21
    {1431,1136,1056, 0, 0, 0},  //TV = 9.45(37 lines)  AV=2.97  SV=4.31  BV=8.11
    {1547,1136,1056, 0, 0, 0},  //TV = 9.34(40 lines)  AV=2.97  SV=4.31  BV=8.00
    {1625,1136,1072, 0, 0, 0},  //TV = 9.27(42 lines)  AV=2.97  SV=4.33  BV=7.91
    {1741,1136,1072, 0, 0, 0},  //TV = 9.17(45 lines)  AV=2.97  SV=4.33  BV=7.81
    {1895,1136,1056, 0, 0, 0},  //TV = 9.04(49 lines)  AV=2.97  SV=4.31  BV=7.71
    {2011,1136,1064, 0, 0, 0},  //TV = 8.96(52 lines)  AV=2.97  SV=4.32  BV=7.61
    {2166,1136,1064, 0, 0, 0},  //TV = 8.85(56 lines)  AV=2.97  SV=4.32  BV=7.51
    {2321,1136,1064, 0, 0, 0},  //TV = 8.75(60 lines)  AV=2.97  SV=4.32  BV=7.41
    {2514,1136,1048, 0, 0, 0},  //TV = 8.64(65 lines)  AV=2.97  SV=4.29  BV=7.31
    {2669,1136,1056, 0, 0, 0},  //TV = 8.55(69 lines)  AV=2.97  SV=4.31  BV=7.22
    {2862,1136,1056, 0, 0, 0},  //TV = 8.45(74 lines)  AV=2.97  SV=4.31  BV=7.11
    {3094,1136,1048, 0, 0, 0},  //TV = 8.34(80 lines)  AV=2.97  SV=4.29  BV=7.01
    {3287,1136,1056, 0, 0, 0},  //TV = 8.25(85 lines)  AV=2.97  SV=4.31  BV=6.91
    {3558,1136,1056, 0, 0, 0},  //TV = 8.13(92 lines)  AV=2.97  SV=4.31  BV=6.80
    {3790,1136,1056, 0, 0, 0},  //TV = 8.04(98 lines)  AV=2.97  SV=4.31  BV=6.71
    {4061,1136,1056, 0, 0, 0},  //TV = 7.94(105 lines)  AV=2.97  SV=4.31  BV=6.61
    {4370,1136,1056, 0, 0, 0},  //TV = 7.84(113 lines)  AV=2.97  SV=4.31  BV=6.50
    {4679,1136,1048, 0, 0, 0},  //TV = 7.74(121 lines)  AV=2.97  SV=4.29  BV=6.42
    {4989,1136,1056, 0, 0, 0},  //TV = 7.65(129 lines)  AV=2.97  SV=4.31  BV=6.31
    {5375,1136,1048, 0, 0, 0},  //TV = 7.54(139 lines)  AV=2.97  SV=4.29  BV=6.22
    {5723,1136,1056, 0, 0, 0},  //TV = 7.45(148 lines)  AV=2.97  SV=4.31  BV=6.11
    {6187,1136,1056, 0, 0, 0},  //TV = 7.34(160 lines)  AV=2.97  SV=4.31  BV=6.00
    {6574,1136,1056, 0, 0, 0},  //TV = 7.25(170 lines)  AV=2.97  SV=4.31  BV=5.91
    {7115,1136,1048, 0, 0, 0},  //TV = 7.13(184 lines)  AV=2.97  SV=4.29  BV=5.81
    {7618,1136,1048, 0, 0, 0},  //TV = 7.04(197 lines)  AV=2.97  SV=4.29  BV=5.71
    {8159,1136,1048, 0, 0, 0},  //TV = 6.94(211 lines)  AV=2.97  SV=4.29  BV=5.61
    {8314,1216,1032, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.37  BV=5.51
    {8314,1216,1104, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.47  BV=5.41
    {8314,1328,1096, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.58  BV=5.30
    {8314,1424,1080, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.66  BV=5.22
    {8314,1536,1088, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.78  BV=5.10
    {8314,1728,1024, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.87  BV=5.02
    {8314,1840,1040, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.98  BV=4.90
    {8314,1936,1056, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.07  BV=4.81
    {8314,2048,1064, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.17  BV=4.71
    {8314,2240,1048, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.27  BV=4.61
    {16666,1216,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.36  BV=4.52
    {16666,1216,1104, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.47  BV=4.41
    {16666,1328,1088, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.57  BV=4.30
    {16666,1424,1080, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.66  BV=4.21
    {16666,1536,1080, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.77  BV=4.10
    {16666,1728,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.87  BV=4.01
    {24980,1216,1040, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.38  BV=3.91
    {24980,1216,1112, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.48  BV=3.82
    {24980,1328,1096, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.58  BV=3.71
    {24980,1424,1096, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.68  BV=3.61
    {33332,1216,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=4.37  BV=3.51
    {33332,1216,1104, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=4.47  BV=3.41
    {33332,1328,1080, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=4.56  BV=3.31
    {41646,1136,1088, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.35  BV=3.21
    {41646,1216,1088, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.45  BV=3.11
    {41646,1328,1072, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.55  BV=3.00
    {49998,1216,1040, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=4.38  BV=2.91
    {49998,1216,1112, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=4.48  BV=2.81
    {58312,1216,1024, 0, 0, 0},  //TV = 4.10(1508 lines)  AV=2.97  SV=4.36  BV=2.71
    {58312,1216,1104, 0, 0, 0},  //TV = 4.10(1508 lines)  AV=2.97  SV=4.47  BV=2.60
    {66664,1216,1024, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=4.36  BV=2.52
    {74978,1136,1048, 0, 0, 0},  //TV = 3.74(1939 lines)  AV=2.97  SV=4.29  BV=2.41
    {74978,1216,1056, 0, 0, 0},  //TV = 3.74(1939 lines)  AV=2.97  SV=4.40  BV=2.30
    {83330,1136,1088, 0, 0, 0},  //TV = 3.59(2155 lines)  AV=2.97  SV=4.35  BV=2.21
    {91644,1136,1056, 0, 0, 0},  //TV = 3.45(2370 lines)  AV=2.97  SV=4.31  BV=2.11
    {91644,1216,1064, 0, 0, 0},  //TV = 3.45(2370 lines)  AV=2.97  SV=4.41  BV=2.00
    {99996,1216,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=4.38  BV=1.91
    {108310,1216,1024, 0, 0, 0},  //TV = 3.21(2801 lines)  AV=2.97  SV=4.36  BV=1.82
    {116662,1216,1032, 0, 0, 0},  //TV = 3.10(3017 lines)  AV=2.97  SV=4.37  BV=1.70
    {125014,1216,1024, 0, 0, 0},  //TV = 3.00(3233 lines)  AV=2.97  SV=4.36  BV=1.61
    {133328,1216,1024, 0, 0, 0},  //TV = 2.91(3448 lines)  AV=2.97  SV=4.36  BV=1.52
    {149994,1136,1048, 0, 0, 0},  //TV = 2.74(3879 lines)  AV=2.97  SV=4.29  BV=1.41
    {158346,1136,1064, 0, 0, 0},  //TV = 2.66(4095 lines)  AV=2.97  SV=4.32  BV=1.31
    {166660,1136,1088, 0, 0, 0},  //TV = 2.59(4310 lines)  AV=2.97  SV=4.35  BV=1.21
    {183325,1136,1056, 0, 0, 0},  //TV = 2.45(4741 lines)  AV=2.97  SV=4.31  BV=1.11
    {191678,1136,1088, 0, 0, 0},  //TV = 2.38(4957 lines)  AV=2.97  SV=4.35  BV=1.01
    {208344,1136,1072, 0, 0, 0},  //TV = 2.26(5388 lines)  AV=2.97  SV=4.33  BV=0.91
    {225010,1136,1072, 0, 0, 0},  //TV = 2.15(5819 lines)  AV=2.97  SV=4.33  BV=0.80
    {241676,1136,1056, 0, 0, 0},  //TV = 2.05(6250 lines)  AV=2.97  SV=4.31  BV=0.71
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureISO100PLineTable_50Hz =
{
{
    {78,1424,1072, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.65  BV=11.96
    {78,1536,1056, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.74  BV=11.88
    {78,1632,1048, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.82  BV=11.80
    {117,1216,1024, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.36  BV=11.67
    {117,1216,1096, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.46  BV=11.58
    {117,1328,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.54  BV=11.49
    {117,1424,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.64  BV=11.39
    {155,1136,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.35  BV=11.28
    {155,1216,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.45  BV=11.18
    {155,1328,1072, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.55  BV=11.07
    {155,1424,1040, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.61  BV=11.02
    {194,1216,1048, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.39  BV=10.91
    {194,1328,1024, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.49  BV=10.82
    {233,1136,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.33  BV=10.71
    {233,1216,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.43  BV=10.61
    {271,1136,1056, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.31  BV=10.52
    {271,1216,1064, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.41  BV=10.41
    {310,1136,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.32  BV=10.31
    {310,1216,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.41  BV=10.21
    {349,1136,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.35  BV=10.11
    {387,1136,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.29  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {465,1136,1080, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.34  BV=9.70
    {503,1136,1064, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=4.32  BV=9.61
    {542,1136,1056, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=4.31  BV=9.52
    {581,1136,1056, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=4.31  BV=9.41
    {619,1136,1064, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=4.32  BV=9.31
    {658,1136,1080, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=4.34  BV=9.20
    {697,1136,1088, 0, 0, 0},  //TV = 10.49(18 lines)  AV=2.97  SV=4.35  BV=9.11
    {774,1136,1048, 0, 0, 0},  //TV = 10.34(20 lines)  AV=2.97  SV=4.29  BV=9.01
    {813,1136,1072, 0, 0, 0},  //TV = 10.26(21 lines)  AV=2.97  SV=4.33  BV=8.91
    {851,1216,1024, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=4.36  BV=8.81
    {929,1136,1080, 0, 0, 0},  //TV = 10.07(24 lines)  AV=2.97  SV=4.34  BV=8.71
    {1006,1136,1064, 0, 0, 0},  //TV = 9.96(26 lines)  AV=2.97  SV=4.32  BV=8.61
    {1083,1136,1064, 0, 0, 0},  //TV = 9.85(28 lines)  AV=2.97  SV=4.32  BV=8.51
    {1161,1136,1064, 0, 0, 0},  //TV = 9.75(30 lines)  AV=2.97  SV=4.32  BV=8.41
    {1238,1136,1064, 0, 0, 0},  //TV = 9.66(32 lines)  AV=2.97  SV=4.32  BV=8.31
    {1354,1136,1048, 0, 0, 0},  //TV = 9.53(35 lines)  AV=2.97  SV=4.29  BV=8.21
    {1431,1136,1056, 0, 0, 0},  //TV = 9.45(37 lines)  AV=2.97  SV=4.31  BV=8.11
    {1547,1136,1056, 0, 0, 0},  //TV = 9.34(40 lines)  AV=2.97  SV=4.31  BV=8.00
    {1625,1136,1072, 0, 0, 0},  //TV = 9.27(42 lines)  AV=2.97  SV=4.33  BV=7.91
    {1741,1136,1072, 0, 0, 0},  //TV = 9.17(45 lines)  AV=2.97  SV=4.33  BV=7.81
    {1895,1136,1056, 0, 0, 0},  //TV = 9.04(49 lines)  AV=2.97  SV=4.31  BV=7.71
    {2011,1136,1064, 0, 0, 0},  //TV = 8.96(52 lines)  AV=2.97  SV=4.32  BV=7.61
    {2166,1136,1064, 0, 0, 0},  //TV = 8.85(56 lines)  AV=2.97  SV=4.32  BV=7.51
    {2321,1136,1064, 0, 0, 0},  //TV = 8.75(60 lines)  AV=2.97  SV=4.32  BV=7.41
    {2514,1136,1048, 0, 0, 0},  //TV = 8.64(65 lines)  AV=2.97  SV=4.29  BV=7.31
    {2669,1136,1056, 0, 0, 0},  //TV = 8.55(69 lines)  AV=2.97  SV=4.31  BV=7.22
    {2862,1136,1056, 0, 0, 0},  //TV = 8.45(74 lines)  AV=2.97  SV=4.31  BV=7.11
    {3094,1136,1048, 0, 0, 0},  //TV = 8.34(80 lines)  AV=2.97  SV=4.29  BV=7.01
    {3287,1136,1056, 0, 0, 0},  //TV = 8.25(85 lines)  AV=2.97  SV=4.31  BV=6.91
    {3558,1136,1056, 0, 0, 0},  //TV = 8.13(92 lines)  AV=2.97  SV=4.31  BV=6.80
    {3790,1136,1056, 0, 0, 0},  //TV = 8.04(98 lines)  AV=2.97  SV=4.31  BV=6.71
    {4061,1136,1056, 0, 0, 0},  //TV = 7.94(105 lines)  AV=2.97  SV=4.31  BV=6.61
    {4370,1136,1056, 0, 0, 0},  //TV = 7.84(113 lines)  AV=2.97  SV=4.31  BV=6.50
    {4679,1136,1048, 0, 0, 0},  //TV = 7.74(121 lines)  AV=2.97  SV=4.29  BV=6.42
    {4989,1136,1056, 0, 0, 0},  //TV = 7.65(129 lines)  AV=2.97  SV=4.31  BV=6.31
    {5375,1136,1048, 0, 0, 0},  //TV = 7.54(139 lines)  AV=2.97  SV=4.29  BV=6.22
    {5723,1136,1056, 0, 0, 0},  //TV = 7.45(148 lines)  AV=2.97  SV=4.31  BV=6.11
    {6187,1136,1056, 0, 0, 0},  //TV = 7.34(160 lines)  AV=2.97  SV=4.31  BV=6.00
    {6574,1136,1056, 0, 0, 0},  //TV = 7.25(170 lines)  AV=2.97  SV=4.31  BV=5.91
    {7115,1136,1048, 0, 0, 0},  //TV = 7.13(184 lines)  AV=2.97  SV=4.29  BV=5.81
    {7618,1136,1048, 0, 0, 0},  //TV = 7.04(197 lines)  AV=2.97  SV=4.29  BV=5.71
    {8159,1136,1048, 0, 0, 0},  //TV = 6.94(211 lines)  AV=2.97  SV=4.29  BV=5.61
    {8739,1136,1048, 0, 0, 0},  //TV = 6.84(226 lines)  AV=2.97  SV=4.29  BV=5.51
    {9358,1136,1048, 0, 0, 0},  //TV = 6.74(242 lines)  AV=2.97  SV=4.29  BV=5.42
    {10016,1136,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.31  BV=5.31
    {10016,1216,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.40  BV=5.21
    {10016,1328,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.50  BV=5.12
    {10016,1424,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.60  BV=5.01
    {10016,1536,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.70  BV=4.92
    {10016,1632,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.79  BV=4.82
    {10016,1728,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.91  BV=4.70
    {10016,1840,1064, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.01  BV=4.60
    {10016,1936,1080, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.11  BV=4.51
    {10016,2144,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.20  BV=4.41
    {19992,1136,1056, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.31  BV=4.31
    {19992,1216,1056, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.40  BV=4.21
    {19992,1328,1040, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.51  BV=4.11
    {19992,1424,1040, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.61  BV=4.01
    {19992,1536,1032, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.71  BV=3.91
    {19992,1632,1040, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.81  BV=3.81
    {30007,1136,1064, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.32  BV=3.71
    {30007,1216,1064, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.41  BV=3.62
    {30007,1328,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.52  BV=3.51
    {30007,1424,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.62  BV=3.41
    {39983,1136,1056, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.31  BV=3.31
    {39983,1216,1056, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.40  BV=3.21
    {39983,1328,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.51  BV=3.11
    {39983,1424,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.61  BV=3.01
    {49998,1216,1040, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=4.38  BV=2.91
    {49998,1216,1112, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=4.48  BV=2.81
    {60014,1136,1064, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=4.32  BV=2.71
    {60014,1216,1064, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=4.41  BV=2.62
    {69990,1136,1048, 0, 0, 0},  //TV = 3.84(1810 lines)  AV=2.97  SV=4.29  BV=2.51
    {69990,1216,1056, 0, 0, 0},  //TV = 3.84(1810 lines)  AV=2.97  SV=4.40  BV=2.40
    {80005,1136,1056, 0, 0, 0},  //TV = 3.64(2069 lines)  AV=2.97  SV=4.31  BV=2.31
    {80005,1216,1056, 0, 0, 0},  //TV = 3.64(2069 lines)  AV=2.97  SV=4.40  BV=2.21
    {89981,1136,1080, 0, 0, 0},  //TV = 3.47(2327 lines)  AV=2.97  SV=4.34  BV=2.11
    {89981,1216,1080, 0, 0, 0},  //TV = 3.47(2327 lines)  AV=2.97  SV=4.44  BV=2.01
    {99996,1216,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=4.38  BV=1.91
    {110011,1136,1088, 0, 0, 0},  //TV = 3.18(2845 lines)  AV=2.97  SV=4.35  BV=1.81
    {119987,1136,1064, 0, 0, 0},  //TV = 3.06(3103 lines)  AV=2.97  SV=4.32  BV=1.71
    {130003,1136,1056, 0, 0, 0},  //TV = 2.94(3362 lines)  AV=2.97  SV=4.31  BV=1.61
    {130003,1216,1056, 0, 0, 0},  //TV = 2.94(3362 lines)  AV=2.97  SV=4.40  BV=1.51
    {149994,1136,1056, 0, 0, 0},  //TV = 2.74(3879 lines)  AV=2.97  SV=4.31  BV=1.40
    {160009,1136,1056, 0, 0, 0},  //TV = 2.64(4138 lines)  AV=2.97  SV=4.31  BV=1.31
    {169985,1136,1064, 0, 0, 0},  //TV = 2.56(4396 lines)  AV=2.97  SV=4.32  BV=1.21
    {180000,1136,1080, 0, 0, 0},  //TV = 2.47(4655 lines)  AV=2.97  SV=4.34  BV=1.11
    {190015,1136,1096, 0, 0, 0},  //TV = 2.40(4914 lines)  AV=2.97  SV=4.36  BV=1.01
    {210007,1136,1064, 0, 0, 0},  //TV = 2.25(5431 lines)  AV=2.97  SV=4.32  BV=0.91
    {219983,1136,1088, 0, 0, 0},  //TV = 2.18(5689 lines)  AV=2.97  SV=4.35  BV=0.81
    {240013,1136,1064, 0, 0, 0},  //TV = 2.06(6207 lines)  AV=2.97  SV=4.32  BV=0.71
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureISO100Table =
{
    AETABLE_CAPTURE_ISO100,    //eAETableID
    114,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    120,    //i4MaxBV
    7,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_100, //ISO SPEED
    sCaptureISO100PLineTable_60Hz,
    sCaptureISO100PLineTable_50Hz,
    NULL,
};

static strEvPline sCaptureISO200PLineTable_60Hz =
{
{
    {78,1424,1072, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.65  BV=11.96
    {78,1536,1056, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.74  BV=11.88
    {78,1632,1048, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.82  BV=11.80
    {117,1216,1024, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.36  BV=11.67
    {117,1216,1096, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.46  BV=11.58
    {117,1328,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.54  BV=11.49
    {117,1424,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.64  BV=11.39
    {155,1136,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.35  BV=11.28
    {155,1216,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.45  BV=11.18
    {155,1328,1072, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.55  BV=11.07
    {155,1424,1040, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.61  BV=11.02
    {194,1216,1048, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.39  BV=10.91
    {194,1328,1024, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.49  BV=10.82
    {233,1136,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.33  BV=10.71
    {233,1216,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.43  BV=10.61
    {271,1136,1056, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.31  BV=10.52
    {271,1216,1064, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.41  BV=10.41
    {310,1136,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.32  BV=10.31
    {310,1216,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.41  BV=10.21
    {349,1136,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.35  BV=10.11
    {387,1136,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.29  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {465,1136,1080, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.34  BV=9.70
    {464,1216,1080, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.44  BV=9.61
    {464,1328,1056, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.53  BV=9.51
    {464,1424,1056, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.63  BV=9.41
    {464,1536,1056, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.74  BV=9.30
    {464,1632,1064, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.84  BV=9.21
    {464,1728,1080, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.94  BV=9.10
    {464,1936,1024, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.03  BV=9.01
    {464,2048,1048, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.14  BV=8.90
    {503,2048,1032, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=5.12  BV=8.81
    {542,1936,1080, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=5.11  BV=8.71
    {581,1936,1080, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=5.11  BV=8.61
    {619,2048,1032, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=5.12  BV=8.51
    {658,2048,1040, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=5.13  BV=8.41
    {697,2048,1056, 0, 0, 0},  //TV = 10.49(18 lines)  AV=2.97  SV=5.16  BV=8.30
    {735,2048,1064, 0, 0, 0},  //TV = 10.41(19 lines)  AV=2.97  SV=5.17  BV=8.21
    {813,2048,1032, 0, 0, 0},  //TV = 10.26(21 lines)  AV=2.97  SV=5.12  BV=8.11
    {851,2048,1064, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=5.17  BV=8.00
    {929,2048,1040, 0, 0, 0},  //TV = 10.07(24 lines)  AV=2.97  SV=5.13  BV=7.91
    {1006,2048,1032, 0, 0, 0},  //TV = 9.96(26 lines)  AV=2.97  SV=5.12  BV=7.81
    {1083,2048,1024, 0, 0, 0},  //TV = 9.85(28 lines)  AV=2.97  SV=5.11  BV=7.71
    {1161,2048,1024, 0, 0, 0},  //TV = 9.75(30 lines)  AV=2.97  SV=5.11  BV=7.61
    {1238,2048,1032, 0, 0, 0},  //TV = 9.66(32 lines)  AV=2.97  SV=5.12  BV=7.51
    {1315,2048,1040, 0, 0, 0},  //TV = 9.57(34 lines)  AV=2.97  SV=5.13  BV=7.41
    {1393,2048,1048, 0, 0, 0},  //TV = 9.49(36 lines)  AV=2.97  SV=5.14  BV=7.31
    {1509,2048,1040, 0, 0, 0},  //TV = 9.37(39 lines)  AV=2.97  SV=5.13  BV=7.21
    {1625,2048,1032, 0, 0, 0},  //TV = 9.27(42 lines)  AV=2.97  SV=5.12  BV=7.11
    {1741,2048,1040, 0, 0, 0},  //TV = 9.17(45 lines)  AV=2.97  SV=5.13  BV=7.00
    {1895,2048,1024, 0, 0, 0},  //TV = 9.04(49 lines)  AV=2.97  SV=5.11  BV=6.90
    {2011,2048,1032, 0, 0, 0},  //TV = 8.96(52 lines)  AV=2.97  SV=5.12  BV=6.81
    {2166,2048,1024, 0, 0, 0},  //TV = 8.85(56 lines)  AV=2.97  SV=5.11  BV=6.71
    {2321,2048,1032, 0, 0, 0},  //TV = 8.75(60 lines)  AV=2.97  SV=5.12  BV=6.60
    {2475,2048,1032, 0, 0, 0},  //TV = 8.66(64 lines)  AV=2.97  SV=5.12  BV=6.51
    {2669,2048,1024, 0, 0, 0},  //TV = 8.55(69 lines)  AV=2.97  SV=5.11  BV=6.41
    {2862,1936,1080, 0, 0, 0},  //TV = 8.45(74 lines)  AV=2.97  SV=5.11  BV=6.31
    {3055,2048,1024, 0, 0, 0},  //TV = 8.35(79 lines)  AV=2.97  SV=5.11  BV=6.21
    {3249,2048,1032, 0, 0, 0},  //TV = 8.27(84 lines)  AV=2.97  SV=5.12  BV=6.11
    {3519,2048,1024, 0, 0, 0},  //TV = 8.15(91 lines)  AV=2.97  SV=5.11  BV=6.01
    {3751,2048,1032, 0, 0, 0},  //TV = 8.06(97 lines)  AV=2.97  SV=5.12  BV=5.91
    {4022,2048,1032, 0, 0, 0},  //TV = 7.96(104 lines)  AV=2.97  SV=5.12  BV=5.81
    {4331,2048,1032, 0, 0, 0},  //TV = 7.85(112 lines)  AV=2.97  SV=5.12  BV=5.70
    {4641,2048,1032, 0, 0, 0},  //TV = 7.75(120 lines)  AV=2.97  SV=5.12  BV=5.60
    {4989,2048,1024, 0, 0, 0},  //TV = 7.65(129 lines)  AV=2.97  SV=5.11  BV=5.51
    {5337,2048,1024, 0, 0, 0},  //TV = 7.55(138 lines)  AV=2.97  SV=5.11  BV=5.41
    {5723,2048,1024, 0, 0, 0},  //TV = 7.45(148 lines)  AV=2.97  SV=5.11  BV=5.31
    {6110,2048,1024, 0, 0, 0},  //TV = 7.35(158 lines)  AV=2.97  SV=5.11  BV=5.21
    {6574,1936,1080, 0, 0, 0},  //TV = 7.25(170 lines)  AV=2.97  SV=5.11  BV=5.11
    {7077,2048,1024, 0, 0, 0},  //TV = 7.14(183 lines)  AV=2.97  SV=5.11  BV=5.00
    {7579,2048,1024, 0, 0, 0},  //TV = 7.04(196 lines)  AV=2.97  SV=5.11  BV=4.90
    {8121,2048,1024, 0, 0, 0},  //TV = 6.94(210 lines)  AV=2.97  SV=5.11  BV=4.80
    {8314,2048,1064, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.17  BV=4.71
    {8314,2240,1048, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.27  BV=4.61
    {8314,2448,1024, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.37  BV=4.51
    {8314,2560,1056, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.48  BV=4.40
    {8314,2752,1048, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.57  BV=4.31
    {8314,2960,1048, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.68  BV=4.21
    {8314,3200,1032, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.77  BV=4.11
    {8314,3456,1024, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.87  BV=4.02
    {8314,3712,1024, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.97  BV=3.91
    {8314,3968,1024, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=6.07  BV=3.82
    {16666,2048,1064, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.17  BV=3.71
    {16666,2240,1040, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.26  BV=3.62
    {16666,2352,1064, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.37  BV=3.51
    {16666,2560,1048, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.47  BV=3.41
    {16666,2752,1040, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.56  BV=3.32
    {16666,2960,1040, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.66  BV=3.21
    {24980,2144,1024, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=5.18  BV=3.12
    {24980,2240,1056, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=5.28  BV=3.01
    {24980,2448,1032, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=5.38  BV=2.91
    {24980,2560,1056, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=5.48  BV=2.82
    {33332,2048,1072, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=5.18  BV=2.70
    {33332,2240,1048, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=5.27  BV=2.60
    {33332,2352,1064, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=5.37  BV=2.51
    {41646,2048,1056, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.16  BV=2.40
    {41646,2240,1032, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.25  BV=2.30
    {41646,2352,1048, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.34  BV=2.21
    {49998,2144,1032, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=5.19  BV=2.10
    {49998,2240,1056, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=5.28  BV=2.01
    {58312,2048,1064, 0, 0, 0},  //TV = 4.10(1508 lines)  AV=2.97  SV=5.17  BV=1.90
    {58312,2240,1040, 0, 0, 0},  //TV = 4.10(1508 lines)  AV=2.97  SV=5.26  BV=1.81
    {66664,2048,1072, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.18  BV=1.70
    {66664,2240,1048, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.27  BV=1.60
    {74978,2144,1032, 0, 0, 0},  //TV = 3.74(1939 lines)  AV=2.97  SV=5.19  BV=1.52
    {83330,2048,1056, 0, 0, 0},  //TV = 3.59(2155 lines)  AV=2.97  SV=5.16  BV=1.40
    {91644,2048,1024, 0, 0, 0},  //TV = 3.45(2370 lines)  AV=2.97  SV=5.11  BV=1.31
    {91644,2144,1040, 0, 0, 0},  //TV = 3.45(2370 lines)  AV=2.97  SV=5.20  BV=1.22
    {99996,2144,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=5.19  BV=1.10
    {108310,2048,1072, 0, 0, 0},  //TV = 3.21(2801 lines)  AV=2.97  SV=5.18  BV=1.00
    {116662,2048,1056, 0, 0, 0},  //TV = 3.10(3017 lines)  AV=2.97  SV=5.16  BV=0.92
    {125014,2048,1056, 0, 0, 0},  //TV = 3.00(3233 lines)  AV=2.97  SV=5.16  BV=0.82
    {133328,2048,1072, 0, 0, 0},  //TV = 2.91(3448 lines)  AV=2.97  SV=5.18  BV=0.70
    {141680,2144,1024, 0, 0, 0},  //TV = 2.82(3664 lines)  AV=2.97  SV=5.18  BV=0.61
    {158346,2048,1032, 0, 0, 0},  //TV = 2.66(4095 lines)  AV=2.97  SV=5.12  BV=0.51
    {166660,2048,1056, 0, 0, 0},  //TV = 2.59(4310 lines)  AV=2.97  SV=5.16  BV=0.40
    {183325,2048,1024, 0, 0, 0},  //TV = 2.45(4741 lines)  AV=2.97  SV=5.11  BV=0.31
    {191678,2048,1048, 0, 0, 0},  //TV = 2.38(4957 lines)  AV=2.97  SV=5.14  BV=0.21
    {208344,2048,1040, 0, 0, 0},  //TV = 2.26(5388 lines)  AV=2.97  SV=5.13  BV=0.10
    {225010,2048,1032, 0, 0, 0},  //TV = 2.15(5819 lines)  AV=2.97  SV=5.12  BV=0.00
    {241676,2048,1032, 0, 0, 0},  //TV = 2.05(6250 lines)  AV=2.97  SV=5.12  BV=-0.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureISO200PLineTable_50Hz =
{
{
    {78,1424,1072, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.65  BV=11.96
    {78,1536,1056, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.74  BV=11.88
    {78,1632,1048, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.82  BV=11.80
    {117,1216,1024, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.36  BV=11.67
    {117,1216,1096, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.46  BV=11.58
    {117,1328,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.54  BV=11.49
    {117,1424,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.64  BV=11.39
    {155,1136,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.35  BV=11.28
    {155,1216,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.45  BV=11.18
    {155,1328,1072, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.55  BV=11.07
    {155,1424,1040, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.61  BV=11.02
    {194,1216,1048, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.39  BV=10.91
    {194,1328,1024, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.49  BV=10.82
    {233,1136,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.33  BV=10.71
    {233,1216,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.43  BV=10.61
    {271,1136,1056, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.31  BV=10.52
    {271,1216,1064, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.41  BV=10.41
    {310,1136,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.32  BV=10.31
    {310,1216,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.41  BV=10.21
    {349,1136,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.35  BV=10.11
    {387,1136,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.29  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {465,1136,1080, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.34  BV=9.70
    {464,1216,1080, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.44  BV=9.61
    {464,1328,1056, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.53  BV=9.51
    {464,1424,1056, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.63  BV=9.41
    {464,1536,1056, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.74  BV=9.30
    {464,1632,1064, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.84  BV=9.21
    {464,1728,1080, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.94  BV=9.10
    {464,1936,1024, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.03  BV=9.01
    {464,2048,1048, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.14  BV=8.90
    {503,2048,1032, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=5.12  BV=8.81
    {542,1936,1080, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=5.11  BV=8.71
    {581,1936,1080, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=5.11  BV=8.61
    {619,2048,1032, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=5.12  BV=8.51
    {658,2048,1040, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=5.13  BV=8.41
    {697,2048,1056, 0, 0, 0},  //TV = 10.49(18 lines)  AV=2.97  SV=5.16  BV=8.30
    {735,2048,1064, 0, 0, 0},  //TV = 10.41(19 lines)  AV=2.97  SV=5.17  BV=8.21
    {813,2048,1032, 0, 0, 0},  //TV = 10.26(21 lines)  AV=2.97  SV=5.12  BV=8.11
    {851,2048,1064, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=5.17  BV=8.00
    {929,2048,1040, 0, 0, 0},  //TV = 10.07(24 lines)  AV=2.97  SV=5.13  BV=7.91
    {1006,2048,1032, 0, 0, 0},  //TV = 9.96(26 lines)  AV=2.97  SV=5.12  BV=7.81
    {1083,2048,1024, 0, 0, 0},  //TV = 9.85(28 lines)  AV=2.97  SV=5.11  BV=7.71
    {1161,2048,1024, 0, 0, 0},  //TV = 9.75(30 lines)  AV=2.97  SV=5.11  BV=7.61
    {1238,2048,1032, 0, 0, 0},  //TV = 9.66(32 lines)  AV=2.97  SV=5.12  BV=7.51
    {1315,2048,1040, 0, 0, 0},  //TV = 9.57(34 lines)  AV=2.97  SV=5.13  BV=7.41
    {1393,2048,1048, 0, 0, 0},  //TV = 9.49(36 lines)  AV=2.97  SV=5.14  BV=7.31
    {1509,2048,1040, 0, 0, 0},  //TV = 9.37(39 lines)  AV=2.97  SV=5.13  BV=7.21
    {1625,2048,1032, 0, 0, 0},  //TV = 9.27(42 lines)  AV=2.97  SV=5.12  BV=7.11
    {1741,2048,1040, 0, 0, 0},  //TV = 9.17(45 lines)  AV=2.97  SV=5.13  BV=7.00
    {1895,2048,1024, 0, 0, 0},  //TV = 9.04(49 lines)  AV=2.97  SV=5.11  BV=6.90
    {2011,2048,1032, 0, 0, 0},  //TV = 8.96(52 lines)  AV=2.97  SV=5.12  BV=6.81
    {2166,2048,1024, 0, 0, 0},  //TV = 8.85(56 lines)  AV=2.97  SV=5.11  BV=6.71
    {2321,2048,1032, 0, 0, 0},  //TV = 8.75(60 lines)  AV=2.97  SV=5.12  BV=6.60
    {2475,2048,1032, 0, 0, 0},  //TV = 8.66(64 lines)  AV=2.97  SV=5.12  BV=6.51
    {2669,2048,1024, 0, 0, 0},  //TV = 8.55(69 lines)  AV=2.97  SV=5.11  BV=6.41
    {2862,1936,1080, 0, 0, 0},  //TV = 8.45(74 lines)  AV=2.97  SV=5.11  BV=6.31
    {3055,2048,1024, 0, 0, 0},  //TV = 8.35(79 lines)  AV=2.97  SV=5.11  BV=6.21
    {3249,2048,1032, 0, 0, 0},  //TV = 8.27(84 lines)  AV=2.97  SV=5.12  BV=6.11
    {3519,2048,1024, 0, 0, 0},  //TV = 8.15(91 lines)  AV=2.97  SV=5.11  BV=6.01
    {3751,2048,1032, 0, 0, 0},  //TV = 8.06(97 lines)  AV=2.97  SV=5.12  BV=5.91
    {4022,2048,1032, 0, 0, 0},  //TV = 7.96(104 lines)  AV=2.97  SV=5.12  BV=5.81
    {4331,2048,1032, 0, 0, 0},  //TV = 7.85(112 lines)  AV=2.97  SV=5.12  BV=5.70
    {4641,2048,1032, 0, 0, 0},  //TV = 7.75(120 lines)  AV=2.97  SV=5.12  BV=5.60
    {4989,2048,1024, 0, 0, 0},  //TV = 7.65(129 lines)  AV=2.97  SV=5.11  BV=5.51
    {5337,2048,1024, 0, 0, 0},  //TV = 7.55(138 lines)  AV=2.97  SV=5.11  BV=5.41
    {5723,2048,1024, 0, 0, 0},  //TV = 7.45(148 lines)  AV=2.97  SV=5.11  BV=5.31
    {6110,2048,1024, 0, 0, 0},  //TV = 7.35(158 lines)  AV=2.97  SV=5.11  BV=5.21
    {6574,1936,1080, 0, 0, 0},  //TV = 7.25(170 lines)  AV=2.97  SV=5.11  BV=5.11
    {7077,2048,1024, 0, 0, 0},  //TV = 7.14(183 lines)  AV=2.97  SV=5.11  BV=5.00
    {7579,2048,1024, 0, 0, 0},  //TV = 7.04(196 lines)  AV=2.97  SV=5.11  BV=4.90
    {8121,2048,1024, 0, 0, 0},  //TV = 6.94(210 lines)  AV=2.97  SV=5.11  BV=4.80
    {8701,2048,1024, 0, 0, 0},  //TV = 6.84(225 lines)  AV=2.97  SV=5.11  BV=4.70
    {9319,2048,1024, 0, 0, 0},  //TV = 6.75(241 lines)  AV=2.97  SV=5.11  BV=4.61
    {10016,1936,1080, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.11  BV=4.51
    {10016,2144,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.20  BV=4.41
    {10016,2240,1072, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.31  BV=4.31
    {10016,2448,1048, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.40  BV=4.21
    {10016,2656,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.50  BV=4.12
    {10016,2864,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.61  BV=4.01
    {10016,3072,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.71  BV=3.91
    {10016,3200,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.80  BV=3.81
    {10016,3456,1048, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.90  BV=3.71
    {10016,3712,1048, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.00  BV=3.61
    {10016,3968,1048, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.10  BV=3.51
    {19992,2144,1040, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=5.20  BV=3.42
    {19992,2240,1064, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=5.30  BV=3.32
    {19992,2448,1048, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=5.40  BV=3.21
    {19992,2656,1032, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=5.50  BV=3.12
    {19992,2864,1032, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=5.61  BV=3.01
    {30007,2048,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=5.12  BV=2.91
    {30007,2144,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=5.21  BV=2.82
    {30007,2352,1024, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=5.31  BV=2.72
    {30007,2448,1064, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=5.42  BV=2.61
    {30007,2656,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=5.52  BV=2.51
    {39983,2144,1048, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.21  BV=2.40
    {39983,2240,1064, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.30  BV=2.32
    {39983,2448,1048, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.40  BV=2.21
    {49998,2144,1032, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=5.19  BV=2.10
    {49998,2240,1056, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=5.28  BV=2.01
    {60014,2048,1032, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.12  BV=1.91
    {60014,2144,1048, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.21  BV=1.82
    {60014,2352,1024, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.31  BV=1.72
    {69990,2144,1032, 0, 0, 0},  //TV = 3.84(1810 lines)  AV=2.97  SV=5.19  BV=1.62
    {80005,1936,1080, 0, 0, 0},  //TV = 3.64(2069 lines)  AV=2.97  SV=5.11  BV=1.51
    {80005,2144,1048, 0, 0, 0},  //TV = 3.64(2069 lines)  AV=2.97  SV=5.21  BV=1.40
    {89981,2048,1048, 0, 0, 0},  //TV = 3.47(2327 lines)  AV=2.97  SV=5.14  BV=1.30
    {89981,2144,1064, 0, 0, 0},  //TV = 3.47(2327 lines)  AV=2.97  SV=5.23  BV=1.21
    {99996,2144,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=5.19  BV=1.10
    {110011,2048,1056, 0, 0, 0},  //TV = 3.18(2845 lines)  AV=2.97  SV=5.16  BV=1.00
    {119987,2048,1032, 0, 0, 0},  //TV = 3.06(3103 lines)  AV=2.97  SV=5.12  BV=0.91
    {130003,1936,1080, 0, 0, 0},  //TV = 2.94(3362 lines)  AV=2.97  SV=5.11  BV=0.81
    {130003,2144,1048, 0, 0, 0},  //TV = 2.94(3362 lines)  AV=2.97  SV=5.21  BV=0.70
    {140018,2144,1040, 0, 0, 0},  //TV = 2.84(3621 lines)  AV=2.97  SV=5.20  BV=0.61
    {149994,2144,1032, 0, 0, 0},  //TV = 2.74(3879 lines)  AV=2.97  SV=5.19  BV=0.52
    {169985,2048,1032, 0, 0, 0},  //TV = 2.56(4396 lines)  AV=2.97  SV=5.12  BV=0.41
    {180000,2048,1048, 0, 0, 0},  //TV = 2.47(4655 lines)  AV=2.97  SV=5.14  BV=0.30
    {190015,2048,1064, 0, 0, 0},  //TV = 2.40(4914 lines)  AV=2.97  SV=5.17  BV=0.20
    {210007,2048,1032, 0, 0, 0},  //TV = 2.25(5431 lines)  AV=2.97  SV=5.12  BV=0.10
    {219983,2048,1056, 0, 0, 0},  //TV = 2.18(5689 lines)  AV=2.97  SV=5.16  BV=-0.00
    {240013,2048,1040, 0, 0, 0},  //TV = 2.06(6207 lines)  AV=2.97  SV=5.13  BV=-0.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureISO200Table =
{
    AETABLE_CAPTURE_ISO200,    //eAETableID
    122,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    120,    //i4MaxBV
    -1,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_200, //ISO SPEED
    sCaptureISO200PLineTable_60Hz,
    sCaptureISO200PLineTable_50Hz,
    NULL,
};

static strEvPline sCaptureISO400PLineTable_60Hz =
{
{
    {78,1424,1072, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.65  BV=11.96
    {78,1536,1056, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.74  BV=11.88
    {78,1632,1048, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.82  BV=11.80
    {117,1216,1024, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.36  BV=11.67
    {117,1216,1096, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.46  BV=11.58
    {117,1328,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.54  BV=11.49
    {117,1424,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.64  BV=11.39
    {155,1136,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.35  BV=11.28
    {155,1216,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.45  BV=11.18
    {155,1328,1072, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.55  BV=11.07
    {155,1424,1040, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.61  BV=11.02
    {194,1216,1048, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.39  BV=10.91
    {194,1328,1024, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.49  BV=10.82
    {233,1136,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.33  BV=10.71
    {233,1216,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.43  BV=10.61
    {271,1136,1056, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.31  BV=10.52
    {271,1216,1064, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.41  BV=10.41
    {310,1136,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.32  BV=10.31
    {310,1216,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.41  BV=10.21
    {349,1136,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.35  BV=10.11
    {387,1136,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.29  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {465,1136,1080, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.34  BV=9.70
    {464,1216,1080, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.44  BV=9.61
    {464,1328,1056, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.53  BV=9.51
    {464,1424,1056, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.63  BV=9.41
    {464,1536,1056, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.74  BV=9.30
    {464,1632,1064, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.84  BV=9.21
    {464,1728,1080, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.94  BV=9.10
    {464,1936,1024, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.03  BV=9.01
    {464,2048,1048, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.14  BV=8.90
    {464,2144,1064, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.23  BV=8.81
    {464,2352,1040, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.33  BV=8.71
    {464,2560,1024, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.43  BV=8.61
    {464,2656,1056, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.53  BV=8.51
    {464,2864,1048, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.63  BV=8.42
    {464,3072,1056, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.74  BV=8.30
    {464,3328,1040, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.83  BV=8.21
    {464,3584,1032, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.93  BV=8.11
    {464,3840,1032, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.03  BV=8.02
    {464,4096,1048, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.14  BV=7.90
    {503,4096,1024, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=6.11  BV=7.82
    {542,3968,1056, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=6.11  BV=7.71
    {581,4096,1024, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=6.11  BV=7.61
    {619,4096,1032, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=6.12  BV=7.51
    {658,4096,1040, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=6.13  BV=7.41
    {697,4096,1048, 0, 0, 0},  //TV = 10.49(18 lines)  AV=2.97  SV=6.14  BV=7.31
    {735,4224,1032, 0, 0, 0},  //TV = 10.41(19 lines)  AV=2.97  SV=6.17  BV=7.21
    {813,4096,1032, 0, 0, 0},  //TV = 10.26(21 lines)  AV=2.97  SV=6.12  BV=7.11
    {851,4224,1024, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=6.16  BV=7.01
    {929,4096,1040, 0, 0, 0},  //TV = 10.07(24 lines)  AV=2.97  SV=6.13  BV=6.91
    {1006,4096,1024, 0, 0, 0},  //TV = 9.96(26 lines)  AV=2.97  SV=6.11  BV=6.82
    {1083,4096,1024, 0, 0, 0},  //TV = 9.85(28 lines)  AV=2.97  SV=6.11  BV=6.71
    {1161,4096,1024, 0, 0, 0},  //TV = 9.75(30 lines)  AV=2.97  SV=6.11  BV=6.61
    {1238,4096,1032, 0, 0, 0},  //TV = 9.66(32 lines)  AV=2.97  SV=6.12  BV=6.51
    {1315,4096,1040, 0, 0, 0},  //TV = 9.57(34 lines)  AV=2.97  SV=6.13  BV=6.41
    {1393,4096,1048, 0, 0, 0},  //TV = 9.49(36 lines)  AV=2.97  SV=6.14  BV=6.31
    {1509,4096,1040, 0, 0, 0},  //TV = 9.37(39 lines)  AV=2.97  SV=6.13  BV=6.21
    {1625,4096,1032, 0, 0, 0},  //TV = 9.27(42 lines)  AV=2.97  SV=6.12  BV=6.11
    {1741,4096,1040, 0, 0, 0},  //TV = 9.17(45 lines)  AV=2.97  SV=6.13  BV=6.00
    {1857,4096,1040, 0, 0, 0},  //TV = 9.07(48 lines)  AV=2.97  SV=6.13  BV=5.91
    {2011,4096,1032, 0, 0, 0},  //TV = 8.96(52 lines)  AV=2.97  SV=6.12  BV=5.81
    {2166,4096,1024, 0, 0, 0},  //TV = 8.85(56 lines)  AV=2.97  SV=6.11  BV=5.71
    {2321,4096,1024, 0, 0, 0},  //TV = 8.75(60 lines)  AV=2.97  SV=6.11  BV=5.61
    {2475,4096,1032, 0, 0, 0},  //TV = 8.66(64 lines)  AV=2.97  SV=6.12  BV=5.51
    {2669,4096,1024, 0, 0, 0},  //TV = 8.55(69 lines)  AV=2.97  SV=6.11  BV=5.41
    {2862,4096,1024, 0, 0, 0},  //TV = 8.45(74 lines)  AV=2.97  SV=6.11  BV=5.31
    {3055,4096,1024, 0, 0, 0},  //TV = 8.35(79 lines)  AV=2.97  SV=6.11  BV=5.21
    {3287,4096,1024, 0, 0, 0},  //TV = 8.25(85 lines)  AV=2.97  SV=6.11  BV=5.11
    {3519,4096,1024, 0, 0, 0},  //TV = 8.15(91 lines)  AV=2.97  SV=6.11  BV=5.01
    {3751,4096,1032, 0, 0, 0},  //TV = 8.06(97 lines)  AV=2.97  SV=6.12  BV=4.91
    {4022,4096,1032, 0, 0, 0},  //TV = 7.96(104 lines)  AV=2.97  SV=6.12  BV=4.81
    {4331,4096,1032, 0, 0, 0},  //TV = 7.85(112 lines)  AV=2.97  SV=6.12  BV=4.70
    {4641,4096,1032, 0, 0, 0},  //TV = 7.75(120 lines)  AV=2.97  SV=6.12  BV=4.60
    {4989,4096,1024, 0, 0, 0},  //TV = 7.65(129 lines)  AV=2.97  SV=6.11  BV=4.51
    {5337,4096,1024, 0, 0, 0},  //TV = 7.55(138 lines)  AV=2.97  SV=6.11  BV=4.41
    {5723,4096,1024, 0, 0, 0},  //TV = 7.45(148 lines)  AV=2.97  SV=6.11  BV=4.31
    {6110,4096,1024, 0, 0, 0},  //TV = 7.35(158 lines)  AV=2.97  SV=6.11  BV=4.21
    {6574,4096,1024, 0, 0, 0},  //TV = 7.25(170 lines)  AV=2.97  SV=6.11  BV=4.11
    {7038,4096,1024, 0, 0, 0},  //TV = 7.15(182 lines)  AV=2.97  SV=6.11  BV=4.01
    {7541,4096,1024, 0, 0, 0},  //TV = 7.05(195 lines)  AV=2.97  SV=6.11  BV=3.91
    {8121,4096,1024, 0, 0, 0},  //TV = 6.94(210 lines)  AV=2.97  SV=6.11  BV=3.80
    {8314,4224,1040, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=6.18  BV=3.70
    {8314,4480,1048, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=6.27  BV=3.61
    {8314,4864,1032, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=6.37  BV=3.51
    {8314,5248,1024, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=6.47  BV=3.41
    {8314,5632,1024, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=6.57  BV=3.31
    {8314,6016,1032, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=6.68  BV=3.20
    {8314,6384,1040, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=6.77  BV=3.11
    {8314,6896,1032, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=6.87  BV=3.01
    {8314,7280,1048, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=6.97  BV=2.91
    {8314,7936,1024, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=7.07  BV=2.82
    {16666,4224,1032, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=6.17  BV=2.71
    {16666,4480,1040, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=6.26  BV=2.62
    {16666,4864,1032, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=6.37  BV=2.51
    {16666,5248,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=6.47  BV=2.41
    {16666,5504,1040, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=6.56  BV=2.32
    {16666,6016,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=6.67  BV=2.21
    {24980,4224,1040, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=6.18  BV=2.12
    {24980,4608,1024, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=6.28  BV=2.01
    {24980,4864,1040, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=6.38  BV=1.91
    {24980,5248,1040, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=6.49  BV=1.80
    {33332,4224,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.17  BV=1.71
    {33332,4480,1040, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.26  BV=1.62
    {33332,4864,1024, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.36  BV=1.52
    {41646,4096,1048, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=6.14  BV=1.41
    {41646,4480,1032, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=6.25  BV=1.30
    {41646,4736,1040, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=6.34  BV=1.21
    {49998,4224,1048, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=6.19  BV=1.10
    {49998,4608,1024, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=6.28  BV=1.01
    {58312,4224,1032, 0, 0, 0},  //TV = 4.10(1508 lines)  AV=2.97  SV=6.17  BV=0.90
    {58312,4480,1040, 0, 0, 0},  //TV = 4.10(1508 lines)  AV=2.97  SV=6.26  BV=0.81
    {66664,4224,1032, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=6.17  BV=0.71
    {66664,4480,1048, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=6.27  BV=0.60
    {74978,4352,1024, 0, 0, 0},  //TV = 3.74(1939 lines)  AV=2.97  SV=6.20  BV=0.51
    {83330,4096,1056, 0, 0, 0},  //TV = 3.59(2155 lines)  AV=2.97  SV=6.16  BV=0.40
    {91644,4096,1024, 0, 0, 0},  //TV = 3.45(2370 lines)  AV=2.97  SV=6.11  BV=0.31
    {91644,4352,1032, 0, 0, 0},  //TV = 3.45(2370 lines)  AV=2.97  SV=6.21  BV=0.21
    {99996,4224,1048, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.19  BV=0.10
    {108310,4224,1040, 0, 0, 0},  //TV = 3.21(2801 lines)  AV=2.97  SV=6.18  BV=-0.00
    {116662,4224,1040, 0, 0, 0},  //TV = 3.10(3017 lines)  AV=2.97  SV=6.18  BV=-0.11
    {125014,4224,1040, 0, 0, 0},  //TV = 3.00(3233 lines)  AV=2.97  SV=6.18  BV=-0.21
    {133328,4224,1040, 0, 0, 0},  //TV = 2.91(3448 lines)  AV=2.97  SV=6.18  BV=-0.30
    {149994,4096,1024, 0, 0, 0},  //TV = 2.74(3879 lines)  AV=2.97  SV=6.11  BV=-0.40
    {158346,4096,1040, 0, 0, 0},  //TV = 2.66(4095 lines)  AV=2.97  SV=6.13  BV=-0.50
    {166660,4224,1024, 0, 0, 0},  //TV = 2.59(4310 lines)  AV=2.97  SV=6.16  BV=-0.60
    {183325,4096,1032, 0, 0, 0},  //TV = 2.45(4741 lines)  AV=2.97  SV=6.12  BV=-0.70
    {191678,4224,1024, 0, 0, 0},  //TV = 2.38(4957 lines)  AV=2.97  SV=6.16  BV=-0.80
    {208344,4096,1040, 0, 0, 0},  //TV = 2.26(5388 lines)  AV=2.97  SV=6.13  BV=-0.90
    {225010,4096,1032, 0, 0, 0},  //TV = 2.15(5819 lines)  AV=2.97  SV=6.12  BV=-1.00
    {241676,4096,1032, 0, 0, 0},  //TV = 2.05(6250 lines)  AV=2.97  SV=6.12  BV=-1.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureISO400PLineTable_50Hz =
{
{
    {78,1424,1072, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.65  BV=11.96
    {78,1536,1056, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.74  BV=11.88
    {78,1632,1048, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.82  BV=11.80
    {117,1216,1024, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.36  BV=11.67
    {117,1216,1096, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.46  BV=11.58
    {117,1328,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.54  BV=11.49
    {117,1424,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.64  BV=11.39
    {155,1136,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.35  BV=11.28
    {155,1216,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.45  BV=11.18
    {155,1328,1072, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.55  BV=11.07
    {155,1424,1040, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.61  BV=11.02
    {194,1216,1048, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.39  BV=10.91
    {194,1328,1024, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.49  BV=10.82
    {233,1136,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.33  BV=10.71
    {233,1216,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.43  BV=10.61
    {271,1136,1056, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.31  BV=10.52
    {271,1216,1064, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.41  BV=10.41
    {310,1136,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.32  BV=10.31
    {310,1216,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.41  BV=10.21
    {349,1136,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.35  BV=10.11
    {387,1136,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.29  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {465,1136,1080, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.34  BV=9.70
    {464,1216,1080, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.44  BV=9.61
    {464,1328,1056, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.53  BV=9.51
    {464,1424,1056, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.63  BV=9.41
    {464,1536,1056, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.74  BV=9.30
    {464,1632,1064, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.84  BV=9.21
    {464,1728,1080, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.94  BV=9.10
    {464,1936,1024, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.03  BV=9.01
    {464,2048,1048, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.14  BV=8.90
    {464,2144,1064, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.23  BV=8.81
    {464,2352,1040, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.33  BV=8.71
    {464,2560,1024, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.43  BV=8.61
    {464,2656,1056, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.53  BV=8.51
    {464,2864,1048, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.63  BV=8.42
    {464,3072,1056, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.74  BV=8.30
    {464,3328,1040, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.83  BV=8.21
    {464,3584,1032, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.93  BV=8.11
    {464,3840,1032, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.03  BV=8.02
    {464,4096,1048, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.14  BV=7.90
    {503,4096,1024, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=6.11  BV=7.82
    {542,3968,1056, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=6.11  BV=7.71
    {581,4096,1024, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=6.11  BV=7.61
    {619,4096,1032, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=6.12  BV=7.51
    {658,4096,1040, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=6.13  BV=7.41
    {697,4096,1048, 0, 0, 0},  //TV = 10.49(18 lines)  AV=2.97  SV=6.14  BV=7.31
    {735,4224,1032, 0, 0, 0},  //TV = 10.41(19 lines)  AV=2.97  SV=6.17  BV=7.21
    {813,4096,1032, 0, 0, 0},  //TV = 10.26(21 lines)  AV=2.97  SV=6.12  BV=7.11
    {851,4224,1024, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=6.16  BV=7.01
    {929,4096,1040, 0, 0, 0},  //TV = 10.07(24 lines)  AV=2.97  SV=6.13  BV=6.91
    {1006,4096,1024, 0, 0, 0},  //TV = 9.96(26 lines)  AV=2.97  SV=6.11  BV=6.82
    {1083,4096,1024, 0, 0, 0},  //TV = 9.85(28 lines)  AV=2.97  SV=6.11  BV=6.71
    {1161,4096,1024, 0, 0, 0},  //TV = 9.75(30 lines)  AV=2.97  SV=6.11  BV=6.61
    {1238,4096,1032, 0, 0, 0},  //TV = 9.66(32 lines)  AV=2.97  SV=6.12  BV=6.51
    {1315,4096,1040, 0, 0, 0},  //TV = 9.57(34 lines)  AV=2.97  SV=6.13  BV=6.41
    {1393,4096,1048, 0, 0, 0},  //TV = 9.49(36 lines)  AV=2.97  SV=6.14  BV=6.31
    {1509,4096,1040, 0, 0, 0},  //TV = 9.37(39 lines)  AV=2.97  SV=6.13  BV=6.21
    {1625,4096,1032, 0, 0, 0},  //TV = 9.27(42 lines)  AV=2.97  SV=6.12  BV=6.11
    {1741,4096,1040, 0, 0, 0},  //TV = 9.17(45 lines)  AV=2.97  SV=6.13  BV=6.00
    {1857,4096,1040, 0, 0, 0},  //TV = 9.07(48 lines)  AV=2.97  SV=6.13  BV=5.91
    {2011,4096,1032, 0, 0, 0},  //TV = 8.96(52 lines)  AV=2.97  SV=6.12  BV=5.81
    {2166,4096,1024, 0, 0, 0},  //TV = 8.85(56 lines)  AV=2.97  SV=6.11  BV=5.71
    {2321,4096,1024, 0, 0, 0},  //TV = 8.75(60 lines)  AV=2.97  SV=6.11  BV=5.61
    {2475,4096,1032, 0, 0, 0},  //TV = 8.66(64 lines)  AV=2.97  SV=6.12  BV=5.51
    {2669,4096,1024, 0, 0, 0},  //TV = 8.55(69 lines)  AV=2.97  SV=6.11  BV=5.41
    {2862,4096,1024, 0, 0, 0},  //TV = 8.45(74 lines)  AV=2.97  SV=6.11  BV=5.31
    {3055,4096,1024, 0, 0, 0},  //TV = 8.35(79 lines)  AV=2.97  SV=6.11  BV=5.21
    {3287,4096,1024, 0, 0, 0},  //TV = 8.25(85 lines)  AV=2.97  SV=6.11  BV=5.11
    {3519,4096,1024, 0, 0, 0},  //TV = 8.15(91 lines)  AV=2.97  SV=6.11  BV=5.01
    {3751,4096,1032, 0, 0, 0},  //TV = 8.06(97 lines)  AV=2.97  SV=6.12  BV=4.91
    {4022,4096,1032, 0, 0, 0},  //TV = 7.96(104 lines)  AV=2.97  SV=6.12  BV=4.81
    {4331,4096,1032, 0, 0, 0},  //TV = 7.85(112 lines)  AV=2.97  SV=6.12  BV=4.70
    {4641,4096,1032, 0, 0, 0},  //TV = 7.75(120 lines)  AV=2.97  SV=6.12  BV=4.60
    {4989,4096,1024, 0, 0, 0},  //TV = 7.65(129 lines)  AV=2.97  SV=6.11  BV=4.51
    {5337,4096,1024, 0, 0, 0},  //TV = 7.55(138 lines)  AV=2.97  SV=6.11  BV=4.41
    {5723,4096,1024, 0, 0, 0},  //TV = 7.45(148 lines)  AV=2.97  SV=6.11  BV=4.31
    {6110,4096,1024, 0, 0, 0},  //TV = 7.35(158 lines)  AV=2.97  SV=6.11  BV=4.21
    {6574,4096,1024, 0, 0, 0},  //TV = 7.25(170 lines)  AV=2.97  SV=6.11  BV=4.11
    {7038,4096,1024, 0, 0, 0},  //TV = 7.15(182 lines)  AV=2.97  SV=6.11  BV=4.01
    {7541,4096,1024, 0, 0, 0},  //TV = 7.05(195 lines)  AV=2.97  SV=6.11  BV=3.91
    {8121,4096,1024, 0, 0, 0},  //TV = 6.94(210 lines)  AV=2.97  SV=6.11  BV=3.80
    {8701,4096,1024, 0, 0, 0},  //TV = 6.84(225 lines)  AV=2.97  SV=6.11  BV=3.70
    {9319,4096,1024, 0, 0, 0},  //TV = 6.75(241 lines)  AV=2.97  SV=6.11  BV=3.61
    {10016,3968,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.11  BV=3.50
    {10016,4352,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.20  BV=3.41
    {10016,4608,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.30  BV=3.31
    {10016,4992,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.41  BV=3.20
    {10016,5376,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.50  BV=3.11
    {10016,5760,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.60  BV=3.01
    {10016,6144,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.71  BV=2.91
    {10016,6544,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.80  BV=2.81
    {10016,7072,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.90  BV=2.71
    {10016,7472,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=7.00  BV=2.61
    {10016,7936,1048, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=7.10  BV=2.51
    {19992,4352,1024, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=6.20  BV=2.42
    {19992,4608,1040, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=6.30  BV=2.31
    {19992,4992,1032, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=6.41  BV=2.21
    {19992,5376,1024, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=6.50  BV=2.11
    {19992,5760,1024, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=6.60  BV=2.01
    {30007,4096,1024, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.11  BV=1.92
    {30007,4352,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.21  BV=1.82
    {30007,4608,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.31  BV=1.72
    {30007,4992,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.43  BV=1.60
    {30007,5376,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.51  BV=1.51
    {39983,4352,1024, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=6.20  BV=1.42
    {39983,4608,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=6.30  BV=1.31
    {39983,4992,1024, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=6.40  BV=1.22
    {49998,4224,1048, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=6.19  BV=1.10
    {49998,4608,1024, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=6.28  BV=1.01
    {60014,4096,1024, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=6.11  BV=0.92
    {60014,4352,1032, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=6.21  BV=0.82
    {60014,4736,1024, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=6.32  BV=0.71
    {69990,4352,1024, 0, 0, 0},  //TV = 3.84(1810 lines)  AV=2.97  SV=6.20  BV=0.61
    {80005,4096,1024, 0, 0, 0},  //TV = 3.64(2069 lines)  AV=2.97  SV=6.11  BV=0.50
    {80005,4352,1032, 0, 0, 0},  //TV = 3.64(2069 lines)  AV=2.97  SV=6.21  BV=0.40
    {89981,4096,1048, 0, 0, 0},  //TV = 3.47(2327 lines)  AV=2.97  SV=6.14  BV=0.30
    {89981,4480,1024, 0, 0, 0},  //TV = 3.47(2327 lines)  AV=2.97  SV=6.24  BV=0.20
    {99996,4224,1048, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.19  BV=0.10
    {110011,4224,1024, 0, 0, 0},  //TV = 3.18(2845 lines)  AV=2.97  SV=6.16  BV=-0.00
    {119987,4096,1040, 0, 0, 0},  //TV = 3.06(3103 lines)  AV=2.97  SV=6.13  BV=-0.10
    {130003,4096,1032, 0, 0, 0},  //TV = 2.94(3362 lines)  AV=2.97  SV=6.12  BV=-0.21
    {140018,4096,1024, 0, 0, 0},  //TV = 2.84(3621 lines)  AV=2.97  SV=6.11  BV=-0.30
    {149994,4096,1024, 0, 0, 0},  //TV = 2.74(3879 lines)  AV=2.97  SV=6.11  BV=-0.40
    {160009,4096,1032, 0, 0, 0},  //TV = 2.64(4138 lines)  AV=2.97  SV=6.12  BV=-0.51
    {169985,4096,1040, 0, 0, 0},  //TV = 2.56(4396 lines)  AV=2.97  SV=6.13  BV=-0.61
    {180000,4096,1048, 0, 0, 0},  //TV = 2.47(4655 lines)  AV=2.97  SV=6.14  BV=-0.70
    {190015,4224,1032, 0, 0, 0},  //TV = 2.40(4914 lines)  AV=2.97  SV=6.17  BV=-0.80
    {210007,4096,1032, 0, 0, 0},  //TV = 2.25(5431 lines)  AV=2.97  SV=6.12  BV=-0.90
    {219983,4224,1024, 0, 0, 0},  //TV = 2.18(5689 lines)  AV=2.97  SV=6.16  BV=-1.00
    {240013,4096,1040, 0, 0, 0},  //TV = 2.06(6207 lines)  AV=2.97  SV=6.13  BV=-1.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureISO400Table =
{
    AETABLE_CAPTURE_ISO400,    //eAETableID
    132,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    120,    //i4MaxBV
    -11,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_400, //ISO SPEED
    sCaptureISO400PLineTable_60Hz,
    sCaptureISO400PLineTable_50Hz,
    NULL,
};

static strEvPline sCaptureISO800PLineTable_60Hz =
{
{
    {78,1424,1072, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.65  BV=11.96
    {78,1536,1056, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.74  BV=11.88
    {78,1632,1048, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.82  BV=11.80
    {117,1216,1024, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.36  BV=11.67
    {117,1216,1096, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.46  BV=11.58
    {117,1328,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.54  BV=11.49
    {117,1424,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.64  BV=11.39
    {155,1136,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.35  BV=11.28
    {155,1216,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.45  BV=11.18
    {155,1328,1072, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.55  BV=11.07
    {155,1424,1040, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.61  BV=11.02
    {194,1216,1048, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.39  BV=10.91
    {194,1328,1024, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.49  BV=10.82
    {233,1136,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.33  BV=10.71
    {233,1216,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.43  BV=10.61
    {271,1136,1056, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.31  BV=10.52
    {271,1216,1064, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.41  BV=10.41
    {310,1136,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.32  BV=10.31
    {310,1216,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.41  BV=10.21
    {349,1136,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.35  BV=10.11
    {387,1136,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.29  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {465,1136,1080, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.34  BV=9.70
    {464,1216,1080, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.44  BV=9.61
    {464,1328,1056, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.53  BV=9.51
    {464,1424,1056, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.63  BV=9.41
    {464,1536,1056, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.74  BV=9.30
    {464,1632,1064, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.84  BV=9.21
    {464,1728,1080, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.94  BV=9.10
    {464,1936,1024, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.03  BV=9.01
    {464,2048,1048, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.14  BV=8.90
    {464,2144,1064, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.23  BV=8.81
    {464,2352,1040, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.33  BV=8.71
    {464,2560,1024, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.43  BV=8.61
    {464,2656,1056, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.53  BV=8.51
    {464,2864,1048, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.63  BV=8.42
    {464,3072,1056, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.74  BV=8.30
    {464,3328,1040, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.83  BV=8.21
    {464,3584,1032, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.93  BV=8.11
    {464,3840,1032, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.03  BV=8.02
    {464,4096,1048, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.14  BV=7.90
    {464,4480,1024, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.24  BV=7.80
    {464,4736,1032, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.33  BV=7.71
    {464,5120,1024, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.43  BV=7.61
    {464,5376,1048, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.54  BV=7.51
    {464,5888,1024, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.63  BV=7.41
    {464,6240,1032, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.73  BV=7.31
    {464,6704,1032, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.83  BV=7.21
    {464,7280,1024, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.94  BV=7.10
    {464,7696,1032, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=7.03  BV=7.01
    {464,8192,1040, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=7.13  BV=6.91
    {503,8192,1024, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=7.11  BV=6.82
    {542,7936,1056, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=7.11  BV=6.71
    {581,8192,1024, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=7.11  BV=6.61
    {619,8192,1032, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=7.12  BV=6.51
    {658,8192,1040, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=7.13  BV=6.41
    {697,8192,1048, 0, 0, 0},  //TV = 10.49(18 lines)  AV=2.97  SV=7.14  BV=6.31
    {735,8448,1032, 0, 0, 0},  //TV = 10.41(19 lines)  AV=2.97  SV=7.17  BV=6.21
    {813,8192,1032, 0, 0, 0},  //TV = 10.26(21 lines)  AV=2.97  SV=7.12  BV=6.11
    {851,8448,1032, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=7.17  BV=6.00
    {929,8192,1040, 0, 0, 0},  //TV = 10.07(24 lines)  AV=2.97  SV=7.13  BV=5.91
    {1006,8192,1024, 0, 0, 0},  //TV = 9.96(26 lines)  AV=2.97  SV=7.11  BV=5.82
    {1083,8192,1024, 0, 0, 0},  //TV = 9.85(28 lines)  AV=2.97  SV=7.11  BV=5.71
    {1161,8192,1024, 0, 0, 0},  //TV = 9.75(30 lines)  AV=2.97  SV=7.11  BV=5.61
    {1238,8192,1024, 0, 0, 0},  //TV = 9.66(32 lines)  AV=2.97  SV=7.11  BV=5.52
    {1315,8192,1040, 0, 0, 0},  //TV = 9.57(34 lines)  AV=2.97  SV=7.13  BV=5.41
    {1393,8192,1048, 0, 0, 0},  //TV = 9.49(36 lines)  AV=2.97  SV=7.14  BV=5.31
    {1509,8192,1040, 0, 0, 0},  //TV = 9.37(39 lines)  AV=2.97  SV=7.13  BV=5.21
    {1625,8192,1032, 0, 0, 0},  //TV = 9.27(42 lines)  AV=2.97  SV=7.12  BV=5.11
    {1741,8192,1040, 0, 0, 0},  //TV = 9.17(45 lines)  AV=2.97  SV=7.13  BV=5.00
    {1857,8192,1040, 0, 0, 0},  //TV = 9.07(48 lines)  AV=2.97  SV=7.13  BV=4.91
    {2011,8192,1032, 0, 0, 0},  //TV = 8.96(52 lines)  AV=2.97  SV=7.12  BV=4.81
    {2166,8192,1024, 0, 0, 0},  //TV = 8.85(56 lines)  AV=2.97  SV=7.11  BV=4.71
    {2321,8192,1024, 0, 0, 0},  //TV = 8.75(60 lines)  AV=2.97  SV=7.11  BV=4.61
    {2475,8192,1032, 0, 0, 0},  //TV = 8.66(64 lines)  AV=2.97  SV=7.12  BV=4.51
    {2669,8192,1024, 0, 0, 0},  //TV = 8.55(69 lines)  AV=2.97  SV=7.11  BV=4.41
    {2862,8192,1024, 0, 0, 0},  //TV = 8.45(74 lines)  AV=2.97  SV=7.11  BV=4.31
    {3055,8192,1024, 0, 0, 0},  //TV = 8.35(79 lines)  AV=2.97  SV=7.11  BV=4.21
    {3287,8192,1024, 0, 0, 0},  //TV = 8.25(85 lines)  AV=2.97  SV=7.11  BV=4.11
    {3519,8192,1024, 0, 0, 0},  //TV = 8.15(91 lines)  AV=2.97  SV=7.11  BV=4.01
    {3751,8192,1032, 0, 0, 0},  //TV = 8.06(97 lines)  AV=2.97  SV=7.12  BV=3.91
    {4022,8192,1024, 0, 0, 0},  //TV = 7.96(104 lines)  AV=2.97  SV=7.11  BV=3.82
    {4331,8192,1024, 0, 0, 0},  //TV = 7.85(112 lines)  AV=2.97  SV=7.11  BV=3.71
    {4641,8192,1024, 0, 0, 0},  //TV = 7.75(120 lines)  AV=2.97  SV=7.11  BV=3.61
    {4989,8192,1024, 0, 0, 0},  //TV = 7.65(129 lines)  AV=2.97  SV=7.11  BV=3.51
    {5337,8192,1024, 0, 0, 0},  //TV = 7.55(138 lines)  AV=2.97  SV=7.11  BV=3.41
    {5723,8192,1024, 0, 0, 0},  //TV = 7.45(148 lines)  AV=2.97  SV=7.11  BV=3.31
    {6110,8192,1024, 0, 0, 0},  //TV = 7.35(158 lines)  AV=2.97  SV=7.11  BV=3.21
    {6574,8192,1024, 0, 0, 0},  //TV = 7.25(170 lines)  AV=2.97  SV=7.11  BV=3.11
    {7038,8192,1024, 0, 0, 0},  //TV = 7.15(182 lines)  AV=2.97  SV=7.11  BV=3.01
    {7541,8192,1024, 0, 0, 0},  //TV = 7.05(195 lines)  AV=2.97  SV=7.11  BV=2.91
    {8082,8192,1024, 0, 0, 0},  //TV = 6.95(209 lines)  AV=2.97  SV=7.11  BV=2.81
    {8314,8448,1040, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=7.18  BV=2.70
    {8314,9040,1040, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=7.28  BV=2.61
    {8314,9696,1040, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=7.38  BV=2.50
    {8314,10240,1056, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=7.48  BV=2.40
    {8314,10240,1128, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=7.57  BV=2.31
    {8314,10240,1208, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=7.67  BV=2.21
    {8314,10240,1296, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=7.77  BV=2.11
    {8314,10240,1392, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=7.88  BV=2.01
    {8314,10240,1488, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=7.97  BV=1.91
    {8314,10240,1592, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=8.07  BV=1.81
    {16666,8448,1032, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=7.17  BV=1.71
    {16666,9040,1032, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=7.26  BV=1.61
    {16666,9696,1032, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=7.37  BV=1.51
    {16666,10240,1048, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=7.47  BV=1.41
    {16666,10240,1120, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=7.56  BV=1.32
    {16666,10240,1200, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=7.66  BV=1.22
    {24980,8448,1040, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=7.18  BV=1.12
    {24980,9040,1040, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=7.28  BV=1.02
    {24980,9696,1040, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=7.38  BV=0.92
    {24980,10240,1056, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=7.48  BV=0.82
    {33332,8448,1040, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=7.18  BV=0.70
    {33332,9040,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=7.26  BV=0.61
    {33332,9696,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=7.37  BV=0.51
    {41646,8448,1024, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=7.16  BV=0.40
    {41646,8720,1056, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=7.25  BV=0.31
    {41646,9696,1024, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=7.35  BV=0.20
    {49998,8448,1048, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=7.19  BV=0.10
    {49998,9344,1024, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=7.30  BV=-0.01
    {58312,8448,1040, 0, 0, 0},  //TV = 4.10(1508 lines)  AV=2.97  SV=7.18  BV=-0.11
    {58312,9040,1040, 0, 0, 0},  //TV = 4.10(1508 lines)  AV=2.97  SV=7.28  BV=-0.20
    {66664,8448,1040, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=7.18  BV=-0.30
    {74978,8192,1024, 0, 0, 0},  //TV = 3.74(1939 lines)  AV=2.97  SV=7.11  BV=-0.40
    {74978,8720,1032, 0, 0, 0},  //TV = 3.74(1939 lines)  AV=2.97  SV=7.21  BV=-0.50
    {83330,8448,1024, 0, 0, 0},  //TV = 3.59(2155 lines)  AV=2.97  SV=7.16  BV=-0.60
    {91644,8192,1032, 0, 0, 0},  //TV = 3.45(2370 lines)  AV=2.97  SV=7.12  BV=-0.70
    {91644,8720,1040, 0, 0, 0},  //TV = 3.45(2370 lines)  AV=2.97  SV=7.22  BV=-0.80
    {99996,8448,1056, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=7.20  BV=-0.91
    {108310,8448,1040, 0, 0, 0},  //TV = 3.21(2801 lines)  AV=2.97  SV=7.18  BV=-1.00
    {116662,8448,1040, 0, 0, 0},  //TV = 3.10(3017 lines)  AV=2.97  SV=7.18  BV=-1.11
    {125014,8448,1040, 0, 0, 0},  //TV = 3.00(3233 lines)  AV=2.97  SV=7.18  BV=-1.21
    {133328,8448,1040, 0, 0, 0},  //TV = 2.91(3448 lines)  AV=2.97  SV=7.18  BV=-1.30
    {149994,8192,1024, 0, 0, 0},  //TV = 2.74(3879 lines)  AV=2.97  SV=7.11  BV=-1.40
    {158346,8192,1040, 0, 0, 0},  //TV = 2.66(4095 lines)  AV=2.97  SV=7.13  BV=-1.50
    {166660,8448,1024, 0, 0, 0},  //TV = 2.59(4310 lines)  AV=2.97  SV=7.16  BV=-1.60
    {183325,8192,1032, 0, 0, 0},  //TV = 2.45(4741 lines)  AV=2.97  SV=7.12  BV=-1.70
    {191678,8448,1024, 0, 0, 0},  //TV = 2.38(4957 lines)  AV=2.97  SV=7.16  BV=-1.80
    {208344,8192,1040, 0, 0, 0},  //TV = 2.26(5388 lines)  AV=2.97  SV=7.13  BV=-1.90
    {225010,8192,1032, 0, 0, 0},  //TV = 2.15(5819 lines)  AV=2.97  SV=7.12  BV=-2.00
    {241676,8192,1032, 0, 0, 0},  //TV = 2.05(6250 lines)  AV=2.97  SV=7.12  BV=-2.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureISO800PLineTable_50Hz =
{
{
    {78,1424,1072, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.65  BV=11.96
    {78,1536,1056, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.74  BV=11.88
    {78,1632,1048, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.82  BV=11.80
    {117,1216,1024, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.36  BV=11.67
    {117,1216,1096, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.46  BV=11.58
    {117,1328,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.54  BV=11.49
    {117,1424,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.64  BV=11.39
    {155,1136,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.35  BV=11.28
    {155,1216,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.45  BV=11.18
    {155,1328,1072, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.55  BV=11.07
    {155,1424,1040, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.61  BV=11.02
    {194,1216,1048, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.39  BV=10.91
    {194,1328,1024, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.49  BV=10.82
    {233,1136,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.33  BV=10.71
    {233,1216,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.43  BV=10.61
    {271,1136,1056, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.31  BV=10.52
    {271,1216,1064, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.41  BV=10.41
    {310,1136,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.32  BV=10.31
    {310,1216,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.41  BV=10.21
    {349,1136,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.35  BV=10.11
    {387,1136,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.29  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {465,1136,1080, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.34  BV=9.70
    {464,1216,1080, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.44  BV=9.61
    {464,1328,1056, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.53  BV=9.51
    {464,1424,1056, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.63  BV=9.41
    {464,1536,1056, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.74  BV=9.30
    {464,1632,1064, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.84  BV=9.21
    {464,1728,1080, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.94  BV=9.10
    {464,1936,1024, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.03  BV=9.01
    {464,2048,1048, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.14  BV=8.90
    {464,2144,1064, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.23  BV=8.81
    {464,2352,1040, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.33  BV=8.71
    {464,2560,1024, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.43  BV=8.61
    {464,2656,1056, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.53  BV=8.51
    {464,2864,1048, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.63  BV=8.42
    {464,3072,1056, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.74  BV=8.30
    {464,3328,1040, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.83  BV=8.21
    {464,3584,1032, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.93  BV=8.11
    {464,3840,1032, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.03  BV=8.02
    {464,4096,1048, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.14  BV=7.90
    {464,4480,1024, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.24  BV=7.80
    {464,4736,1032, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.33  BV=7.71
    {464,5120,1024, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.43  BV=7.61
    {464,5376,1048, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.54  BV=7.51
    {464,5888,1024, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.63  BV=7.41
    {464,6240,1032, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.73  BV=7.31
    {464,6704,1032, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.83  BV=7.21
    {464,7280,1024, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.94  BV=7.10
    {464,7696,1032, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=7.03  BV=7.01
    {464,8192,1040, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=7.13  BV=6.91
    {503,8192,1024, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=7.11  BV=6.82
    {542,7936,1056, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=7.11  BV=6.71
    {581,8192,1024, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=7.11  BV=6.61
    {619,8192,1032, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=7.12  BV=6.51
    {658,8192,1040, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=7.13  BV=6.41
    {697,8192,1048, 0, 0, 0},  //TV = 10.49(18 lines)  AV=2.97  SV=7.14  BV=6.31
    {735,8448,1032, 0, 0, 0},  //TV = 10.41(19 lines)  AV=2.97  SV=7.17  BV=6.21
    {813,8192,1032, 0, 0, 0},  //TV = 10.26(21 lines)  AV=2.97  SV=7.12  BV=6.11
    {851,8448,1032, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=7.17  BV=6.00
    {929,8192,1040, 0, 0, 0},  //TV = 10.07(24 lines)  AV=2.97  SV=7.13  BV=5.91
    {1006,8192,1024, 0, 0, 0},  //TV = 9.96(26 lines)  AV=2.97  SV=7.11  BV=5.82
    {1083,8192,1024, 0, 0, 0},  //TV = 9.85(28 lines)  AV=2.97  SV=7.11  BV=5.71
    {1161,8192,1024, 0, 0, 0},  //TV = 9.75(30 lines)  AV=2.97  SV=7.11  BV=5.61
    {1238,8192,1024, 0, 0, 0},  //TV = 9.66(32 lines)  AV=2.97  SV=7.11  BV=5.52
    {1315,8192,1040, 0, 0, 0},  //TV = 9.57(34 lines)  AV=2.97  SV=7.13  BV=5.41
    {1393,8192,1048, 0, 0, 0},  //TV = 9.49(36 lines)  AV=2.97  SV=7.14  BV=5.31
    {1509,8192,1040, 0, 0, 0},  //TV = 9.37(39 lines)  AV=2.97  SV=7.13  BV=5.21
    {1625,8192,1032, 0, 0, 0},  //TV = 9.27(42 lines)  AV=2.97  SV=7.12  BV=5.11
    {1741,8192,1040, 0, 0, 0},  //TV = 9.17(45 lines)  AV=2.97  SV=7.13  BV=5.00
    {1857,8192,1040, 0, 0, 0},  //TV = 9.07(48 lines)  AV=2.97  SV=7.13  BV=4.91
    {2011,8192,1032, 0, 0, 0},  //TV = 8.96(52 lines)  AV=2.97  SV=7.12  BV=4.81
    {2166,8192,1024, 0, 0, 0},  //TV = 8.85(56 lines)  AV=2.97  SV=7.11  BV=4.71
    {2321,8192,1024, 0, 0, 0},  //TV = 8.75(60 lines)  AV=2.97  SV=7.11  BV=4.61
    {2475,8192,1032, 0, 0, 0},  //TV = 8.66(64 lines)  AV=2.97  SV=7.12  BV=4.51
    {2669,8192,1024, 0, 0, 0},  //TV = 8.55(69 lines)  AV=2.97  SV=7.11  BV=4.41
    {2862,8192,1024, 0, 0, 0},  //TV = 8.45(74 lines)  AV=2.97  SV=7.11  BV=4.31
    {3055,8192,1024, 0, 0, 0},  //TV = 8.35(79 lines)  AV=2.97  SV=7.11  BV=4.21
    {3287,8192,1024, 0, 0, 0},  //TV = 8.25(85 lines)  AV=2.97  SV=7.11  BV=4.11
    {3519,8192,1024, 0, 0, 0},  //TV = 8.15(91 lines)  AV=2.97  SV=7.11  BV=4.01
    {3751,8192,1032, 0, 0, 0},  //TV = 8.06(97 lines)  AV=2.97  SV=7.12  BV=3.91
    {4022,8192,1024, 0, 0, 0},  //TV = 7.96(104 lines)  AV=2.97  SV=7.11  BV=3.82
    {4331,8192,1024, 0, 0, 0},  //TV = 7.85(112 lines)  AV=2.97  SV=7.11  BV=3.71
    {4641,8192,1024, 0, 0, 0},  //TV = 7.75(120 lines)  AV=2.97  SV=7.11  BV=3.61
    {4989,8192,1024, 0, 0, 0},  //TV = 7.65(129 lines)  AV=2.97  SV=7.11  BV=3.51
    {5337,8192,1024, 0, 0, 0},  //TV = 7.55(138 lines)  AV=2.97  SV=7.11  BV=3.41
    {5723,8192,1024, 0, 0, 0},  //TV = 7.45(148 lines)  AV=2.97  SV=7.11  BV=3.31
    {6110,8192,1024, 0, 0, 0},  //TV = 7.35(158 lines)  AV=2.97  SV=7.11  BV=3.21
    {6574,8192,1024, 0, 0, 0},  //TV = 7.25(170 lines)  AV=2.97  SV=7.11  BV=3.11
    {7038,8192,1024, 0, 0, 0},  //TV = 7.15(182 lines)  AV=2.97  SV=7.11  BV=3.01
    {7541,8192,1024, 0, 0, 0},  //TV = 7.05(195 lines)  AV=2.97  SV=7.11  BV=2.91
    {8082,8192,1024, 0, 0, 0},  //TV = 6.95(209 lines)  AV=2.97  SV=7.11  BV=2.81
    {8701,8192,1024, 0, 0, 0},  //TV = 6.84(225 lines)  AV=2.97  SV=7.11  BV=2.70
    {9319,8192,1024, 0, 0, 0},  //TV = 6.75(241 lines)  AV=2.97  SV=7.11  BV=2.61
    {10016,7936,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=7.11  BV=2.50
    {10016,8720,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=7.20  BV=2.41
    {10016,9344,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=7.30  BV=2.31
    {10016,9696,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=7.40  BV=2.21
    {10016,10240,1072, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=7.50  BV=2.11
    {10016,10240,1152, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=7.60  BV=2.01
    {10016,10240,1232, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=7.70  BV=1.91
    {10016,10240,1320, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=7.80  BV=1.81
    {10016,10240,1416, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=7.90  BV=1.71
    {10016,10240,1520, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=8.00  BV=1.61
    {10016,10240,1632, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=8.11  BV=1.51
    {19992,8720,1024, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=7.20  BV=1.41
    {19992,9344,1024, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=7.30  BV=1.31
    {19992,9696,1056, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=7.40  BV=1.22
    {19992,10240,1072, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=7.50  BV=1.12
    {19992,10240,1152, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=7.60  BV=1.01
    {30007,8192,1024, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.11  BV=0.92
    {30007,8720,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.21  BV=0.82
    {30007,9344,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.31  BV=0.72
    {30007,10080,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.42  BV=0.61
    {39983,8192,1024, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=7.11  BV=0.50
    {39983,8720,1032, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=7.21  BV=0.40
    {39983,9344,1032, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=7.31  BV=0.30
    {39983,10080,1024, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=7.41  BV=0.21
    {49998,8448,1048, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=7.19  BV=0.10
    {49998,9344,1024, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=7.30  BV=-0.01
    {60014,8192,1040, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=7.13  BV=-0.10
    {60014,8720,1048, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=7.23  BV=-0.21
    {69990,8192,1024, 0, 0, 0},  //TV = 3.84(1810 lines)  AV=2.97  SV=7.11  BV=-0.30
    {69990,8720,1032, 0, 0, 0},  //TV = 3.84(1810 lines)  AV=2.97  SV=7.21  BV=-0.40
    {80005,8192,1032, 0, 0, 0},  //TV = 3.64(2069 lines)  AV=2.97  SV=7.12  BV=-0.51
    {80005,8720,1032, 0, 0, 0},  //TV = 3.64(2069 lines)  AV=2.97  SV=7.21  BV=-0.60
    {89981,8192,1048, 0, 0, 0},  //TV = 3.47(2327 lines)  AV=2.97  SV=7.14  BV=-0.70
    {89981,8720,1056, 0, 0, 0},  //TV = 3.47(2327 lines)  AV=2.97  SV=7.25  BV=-0.80
    {99996,8448,1056, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=7.20  BV=-0.91
    {110011,8448,1024, 0, 0, 0},  //TV = 3.18(2845 lines)  AV=2.97  SV=7.16  BV=-1.00
    {119987,8192,1040, 0, 0, 0},  //TV = 3.06(3103 lines)  AV=2.97  SV=7.13  BV=-1.10
    {130003,8192,1032, 0, 0, 0},  //TV = 2.94(3362 lines)  AV=2.97  SV=7.12  BV=-1.21
    {140018,8192,1024, 0, 0, 0},  //TV = 2.84(3621 lines)  AV=2.97  SV=7.11  BV=-1.30
    {149994,8192,1024, 0, 0, 0},  //TV = 2.74(3879 lines)  AV=2.97  SV=7.11  BV=-1.40
    {160009,8192,1032, 0, 0, 0},  //TV = 2.64(4138 lines)  AV=2.97  SV=7.12  BV=-1.51
    {169985,8192,1040, 0, 0, 0},  //TV = 2.56(4396 lines)  AV=2.97  SV=7.13  BV=-1.61
    {180000,8192,1048, 0, 0, 0},  //TV = 2.47(4655 lines)  AV=2.97  SV=7.14  BV=-1.70
    {190015,8448,1032, 0, 0, 0},  //TV = 2.40(4914 lines)  AV=2.97  SV=7.17  BV=-1.80
    {210007,8192,1032, 0, 0, 0},  //TV = 2.25(5431 lines)  AV=2.97  SV=7.12  BV=-1.90
    {219983,8448,1024, 0, 0, 0},  //TV = 2.18(5689 lines)  AV=2.97  SV=7.16  BV=-2.00
    {240013,8192,1040, 0, 0, 0},  //TV = 2.06(6207 lines)  AV=2.97  SV=7.13  BV=-2.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureISO800Table =
{
    AETABLE_CAPTURE_ISO800,    //eAETableID
    142,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    120,    //i4MaxBV
    -21,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_800, //ISO SPEED
    sCaptureISO800PLineTable_60Hz,
    sCaptureISO800PLineTable_50Hz,
    NULL,
};

static strEvPline sCaptureISO1600PLineTable_60Hz =
{
{
    {78,1424,1072, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.65  BV=11.96
    {78,1536,1056, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.74  BV=11.88
    {78,1632,1048, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.82  BV=11.80
    {117,1216,1024, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.36  BV=11.67
    {117,1216,1096, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.46  BV=11.58
    {117,1328,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.54  BV=11.49
    {117,1424,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.64  BV=11.39
    {155,1136,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.35  BV=11.28
    {155,1216,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.45  BV=11.18
    {155,1328,1072, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.55  BV=11.07
    {155,1424,1040, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.61  BV=11.02
    {194,1216,1048, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.39  BV=10.91
    {194,1328,1024, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.49  BV=10.82
    {233,1136,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.33  BV=10.71
    {233,1216,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.43  BV=10.61
    {271,1136,1056, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.31  BV=10.52
    {271,1216,1064, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.41  BV=10.41
    {310,1136,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.32  BV=10.31
    {310,1216,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.41  BV=10.21
    {349,1136,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.35  BV=10.11
    {387,1136,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.29  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {465,1136,1080, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.34  BV=9.70
    {464,1216,1080, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.44  BV=9.61
    {464,1328,1056, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.53  BV=9.51
    {464,1424,1056, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.63  BV=9.41
    {464,1536,1056, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.74  BV=9.30
    {464,1632,1064, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.84  BV=9.21
    {464,1728,1080, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.94  BV=9.10
    {464,1936,1024, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.03  BV=9.01
    {464,2048,1048, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.14  BV=8.90
    {464,2144,1064, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.23  BV=8.81
    {464,2352,1040, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.33  BV=8.71
    {464,2560,1024, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.43  BV=8.61
    {464,2656,1056, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.53  BV=8.51
    {464,2864,1048, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.63  BV=8.42
    {464,3072,1056, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.74  BV=8.30
    {464,3328,1040, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.83  BV=8.21
    {464,3584,1032, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.93  BV=8.11
    {464,3840,1032, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.03  BV=8.02
    {464,4096,1048, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.14  BV=7.90
    {464,4480,1024, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.24  BV=7.80
    {464,4736,1032, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.33  BV=7.71
    {464,5120,1024, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.43  BV=7.61
    {464,5376,1048, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.54  BV=7.51
    {464,5888,1024, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.63  BV=7.41
    {464,6240,1032, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.73  BV=7.31
    {464,6704,1032, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.83  BV=7.21
    {464,7280,1024, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.94  BV=7.10
    {464,7696,1032, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=7.03  BV=7.01
    {464,8192,1040, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=7.13  BV=6.91
    {464,8720,1048, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=7.23  BV=6.81
    {464,9344,1048, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=7.33  BV=6.71
    {464,10080,1040, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=7.43  BV=6.61
    {464,10240,1096, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=7.53  BV=6.51
    {464,10240,1176, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=7.63  BV=6.41
    {464,10240,1264, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=7.74  BV=6.31
    {464,10240,1352, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=7.83  BV=6.21
    {464,10240,1448, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=7.93  BV=6.11
    {464,10240,1552, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=8.03  BV=6.01
    {464,10240,1664, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=8.13  BV=5.91
    {503,10240,1648, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=8.12  BV=5.81
    {542,10240,1632, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=8.11  BV=5.71
    {581,10240,1640, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=8.11  BV=5.61
    {619,10240,1656, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=8.13  BV=5.50
    {658,10240,1664, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=8.13  BV=5.41
    {697,10240,1688, 0, 0, 0},  //TV = 10.49(18 lines)  AV=2.97  SV=8.15  BV=5.30
    {735,10240,1704, 0, 0, 0},  //TV = 10.41(19 lines)  AV=2.97  SV=8.17  BV=5.21
    {813,10240,1656, 0, 0, 0},  //TV = 10.26(21 lines)  AV=2.97  SV=8.13  BV=5.11
    {851,10240,1704, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=8.17  BV=5.00
    {929,10240,1664, 0, 0, 0},  //TV = 10.07(24 lines)  AV=2.97  SV=8.13  BV=4.91
    {1006,10240,1640, 0, 0, 0},  //TV = 9.96(26 lines)  AV=2.97  SV=8.11  BV=4.82
    {1083,10240,1640, 0, 0, 0},  //TV = 9.85(28 lines)  AV=2.97  SV=8.11  BV=4.71
    {1161,10240,1640, 0, 0, 0},  //TV = 9.75(30 lines)  AV=2.97  SV=8.11  BV=4.61
    {1238,10240,1648, 0, 0, 0},  //TV = 9.66(32 lines)  AV=2.97  SV=8.12  BV=4.51
    {1315,10240,1664, 0, 0, 0},  //TV = 9.57(34 lines)  AV=2.97  SV=8.13  BV=4.41
    {1393,10240,1680, 0, 0, 0},  //TV = 9.49(36 lines)  AV=2.97  SV=8.15  BV=4.31
    {1509,10240,1664, 0, 0, 0},  //TV = 9.37(39 lines)  AV=2.97  SV=8.13  BV=4.21
    {1625,10240,1656, 0, 0, 0},  //TV = 9.27(42 lines)  AV=2.97  SV=8.13  BV=4.11
    {1741,10240,1664, 0, 0, 0},  //TV = 9.17(45 lines)  AV=2.97  SV=8.13  BV=4.00
    {1857,10240,1664, 0, 0, 0},  //TV = 9.07(48 lines)  AV=2.97  SV=8.13  BV=3.91
    {2011,10240,1656, 0, 0, 0},  //TV = 8.96(52 lines)  AV=2.97  SV=8.13  BV=3.80
    {2166,10240,1640, 0, 0, 0},  //TV = 8.85(56 lines)  AV=2.97  SV=8.11  BV=3.71
    {2321,10240,1640, 0, 0, 0},  //TV = 8.75(60 lines)  AV=2.97  SV=8.11  BV=3.61
    {2475,10240,1656, 0, 0, 0},  //TV = 8.66(64 lines)  AV=2.97  SV=8.13  BV=3.50
    {2669,10240,1640, 0, 0, 0},  //TV = 8.55(69 lines)  AV=2.97  SV=8.11  BV=3.41
    {2862,10240,1640, 0, 0, 0},  //TV = 8.45(74 lines)  AV=2.97  SV=8.11  BV=3.31
    {3055,10240,1640, 0, 0, 0},  //TV = 8.35(79 lines)  AV=2.97  SV=8.11  BV=3.21
    {3287,10240,1640, 0, 0, 0},  //TV = 8.25(85 lines)  AV=2.97  SV=8.11  BV=3.11
    {3519,10240,1640, 0, 0, 0},  //TV = 8.15(91 lines)  AV=2.97  SV=8.11  BV=3.01
    {3751,10240,1648, 0, 0, 0},  //TV = 8.06(97 lines)  AV=2.97  SV=8.12  BV=2.91
    {4022,10240,1648, 0, 0, 0},  //TV = 7.96(104 lines)  AV=2.97  SV=8.12  BV=2.81
    {4331,10240,1640, 0, 0, 0},  //TV = 7.85(112 lines)  AV=2.97  SV=8.11  BV=2.71
    {4641,10240,1648, 0, 0, 0},  //TV = 7.75(120 lines)  AV=2.97  SV=8.12  BV=2.60
    {4989,10240,1640, 0, 0, 0},  //TV = 7.65(129 lines)  AV=2.97  SV=8.11  BV=2.51
    {5337,10240,1640, 0, 0, 0},  //TV = 7.55(138 lines)  AV=2.97  SV=8.11  BV=2.41
    {5723,10240,1640, 0, 0, 0},  //TV = 7.45(148 lines)  AV=2.97  SV=8.11  BV=2.31
    {6110,10240,1648, 0, 0, 0},  //TV = 7.35(158 lines)  AV=2.97  SV=8.12  BV=2.21
    {6574,10240,1640, 0, 0, 0},  //TV = 7.25(170 lines)  AV=2.97  SV=8.11  BV=2.11
    {7038,10240,1640, 0, 0, 0},  //TV = 7.15(182 lines)  AV=2.97  SV=8.11  BV=2.01
    {7541,10240,1640, 0, 0, 0},  //TV = 7.05(195 lines)  AV=2.97  SV=8.11  BV=1.91
    {8121,10240,1640, 0, 0, 0},  //TV = 6.94(210 lines)  AV=2.97  SV=8.11  BV=1.80
    {8314,10240,1712, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=8.17  BV=1.71
    {8314,10240,1840, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=8.28  BV=1.60
    {8314,10240,1968, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=8.38  BV=1.51
    {8314,10240,2112, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=8.48  BV=1.40
    {8314,10240,2264, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=8.58  BV=1.30
    {8314,10240,2424, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=8.68  BV=1.20
    {8314,10240,2592, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=8.77  BV=1.11
    {8314,10240,2784, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=8.88  BV=1.01
    {8314,10240,2976, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=8.97  BV=0.91
    {8314,10240,3192, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=9.07  BV=0.81
    {16666,10240,1704, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=8.17  BV=0.71
    {16666,10240,1824, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=8.27  BV=0.61
    {16666,10240,1960, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=8.37  BV=0.51
    {16666,10240,2096, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=8.47  BV=0.41
    {16666,10240,2248, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=8.57  BV=0.31
    {16666,10240,2408, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=8.67  BV=0.21
    {24980,10240,1720, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=8.18  BV=0.11
    {24980,10240,1856, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=8.29  BV=0.00
    {24980,10240,1992, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=8.39  BV=-0.10
    {24980,10240,2136, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=8.49  BV=-0.20
    {33332,10240,1712, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=8.17  BV=-0.30
    {33332,10240,1832, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=8.27  BV=-0.39
    {33332,10240,1968, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=8.38  BV=-0.50
    {41646,10240,1696, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=8.16  BV=-0.60
    {41646,10240,1824, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=8.27  BV=-0.71
    {41646,10240,1952, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=8.36  BV=-0.81
    {49998,10240,1744, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=8.20  BV=-0.91
    {49998,10240,1864, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=8.30  BV=-1.00
    {58312,10240,1712, 0, 0, 0},  //TV = 4.10(1508 lines)  AV=2.97  SV=8.17  BV=-1.10
    {58312,10240,1840, 0, 0, 0},  //TV = 4.10(1508 lines)  AV=2.97  SV=8.28  BV=-1.21
    {66664,10240,1720, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=8.18  BV=-1.30
    {74978,10240,1640, 0, 0, 0},  //TV = 3.74(1939 lines)  AV=2.97  SV=8.11  BV=-1.40
    {74978,10240,1760, 0, 0, 0},  //TV = 3.74(1939 lines)  AV=2.97  SV=8.21  BV=-1.51
    {83330,10240,1696, 0, 0, 0},  //TV = 3.59(2155 lines)  AV=2.97  SV=8.16  BV=-1.61
    {91644,10240,1656, 0, 0, 0},  //TV = 3.45(2370 lines)  AV=2.97  SV=8.13  BV=-1.71
    {91644,10240,1776, 0, 0, 0},  //TV = 3.45(2370 lines)  AV=2.97  SV=8.23  BV=-1.81
    {99996,10240,1744, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=8.20  BV=-1.91
    {108310,10240,1720, 0, 0, 0},  //TV = 3.21(2801 lines)  AV=2.97  SV=8.18  BV=-2.00
    {116662,10240,1712, 0, 0, 0},  //TV = 3.10(3017 lines)  AV=2.97  SV=8.17  BV=-2.10
    {125014,10240,1712, 0, 0, 0},  //TV = 3.00(3233 lines)  AV=2.97  SV=8.17  BV=-2.20
    {133328,10240,1720, 0, 0, 0},  //TV = 2.91(3448 lines)  AV=2.97  SV=8.18  BV=-2.30
    {149994,10240,1640, 0, 0, 0},  //TV = 2.74(3879 lines)  AV=2.97  SV=8.11  BV=-2.40
    {158346,10240,1664, 0, 0, 0},  //TV = 2.66(4095 lines)  AV=2.97  SV=8.13  BV=-2.50
    {166660,10240,1696, 0, 0, 0},  //TV = 2.59(4310 lines)  AV=2.97  SV=8.16  BV=-2.61
    {183325,10240,1656, 0, 0, 0},  //TV = 2.45(4741 lines)  AV=2.97  SV=8.13  BV=-2.71
    {191678,10240,1696, 0, 0, 0},  //TV = 2.38(4957 lines)  AV=2.97  SV=8.16  BV=-2.81
    {208344,10240,1672, 0, 0, 0},  //TV = 2.26(5388 lines)  AV=2.97  SV=8.14  BV=-2.91
    {225010,10240,1656, 0, 0, 0},  //TV = 2.15(5819 lines)  AV=2.97  SV=8.13  BV=-3.00
    {241676,10240,1656, 0, 0, 0},  //TV = 2.05(6250 lines)  AV=2.97  SV=8.13  BV=-3.11
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureISO1600PLineTable_50Hz =
{
{
    {78,1424,1072, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.65  BV=11.96
    {78,1536,1056, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.74  BV=11.88
    {78,1632,1048, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.82  BV=11.80
    {117,1216,1024, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.36  BV=11.67
    {117,1216,1096, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.46  BV=11.58
    {117,1328,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.54  BV=11.49
    {117,1424,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.64  BV=11.39
    {155,1136,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.35  BV=11.28
    {155,1216,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.45  BV=11.18
    {155,1328,1072, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.55  BV=11.07
    {155,1424,1040, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.61  BV=11.02
    {194,1216,1048, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.39  BV=10.91
    {194,1328,1024, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.49  BV=10.82
    {233,1136,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.33  BV=10.71
    {233,1216,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.43  BV=10.61
    {271,1136,1056, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.31  BV=10.52
    {271,1216,1064, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.41  BV=10.41
    {310,1136,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.32  BV=10.31
    {310,1216,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.41  BV=10.21
    {349,1136,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.35  BV=10.11
    {387,1136,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.29  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {465,1136,1080, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.34  BV=9.70
    {464,1216,1080, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.44  BV=9.61
    {464,1328,1056, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.53  BV=9.51
    {464,1424,1056, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.63  BV=9.41
    {464,1536,1056, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.74  BV=9.30
    {464,1632,1064, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.84  BV=9.21
    {464,1728,1080, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=4.94  BV=9.10
    {464,1936,1024, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.03  BV=9.01
    {464,2048,1048, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.14  BV=8.90
    {464,2144,1064, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.23  BV=8.81
    {464,2352,1040, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.33  BV=8.71
    {464,2560,1024, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.43  BV=8.61
    {464,2656,1056, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.53  BV=8.51
    {464,2864,1048, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.63  BV=8.42
    {464,3072,1056, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.74  BV=8.30
    {464,3328,1040, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.83  BV=8.21
    {464,3584,1032, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=5.93  BV=8.11
    {464,3840,1032, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.03  BV=8.02
    {464,4096,1048, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.14  BV=7.90
    {464,4480,1024, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.24  BV=7.80
    {464,4736,1032, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.33  BV=7.71
    {464,5120,1024, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.43  BV=7.61
    {464,5376,1048, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.54  BV=7.51
    {464,5888,1024, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.63  BV=7.41
    {464,6240,1032, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.73  BV=7.31
    {464,6704,1032, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.83  BV=7.21
    {464,7280,1024, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=6.94  BV=7.10
    {464,7696,1032, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=7.03  BV=7.01
    {464,8192,1040, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=7.13  BV=6.91
    {464,8720,1048, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=7.23  BV=6.81
    {464,9344,1048, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=7.33  BV=6.71
    {464,10080,1040, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=7.43  BV=6.61
    {464,10240,1096, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=7.53  BV=6.51
    {464,10240,1176, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=7.63  BV=6.41
    {464,10240,1264, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=7.74  BV=6.31
    {464,10240,1352, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=7.83  BV=6.21
    {464,10240,1448, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=7.93  BV=6.11
    {464,10240,1552, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=8.03  BV=6.01
    {464,10240,1664, 0, 0, 0},  //TV = 11.07(11 lines)  AV=2.97  SV=8.13  BV=5.91
    {503,10240,1648, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=8.12  BV=5.81
    {542,10240,1632, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=8.11  BV=5.71
    {581,10240,1640, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=8.11  BV=5.61
    {619,10240,1656, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=8.13  BV=5.50
    {658,10240,1664, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=8.13  BV=5.41
    {697,10240,1688, 0, 0, 0},  //TV = 10.49(18 lines)  AV=2.97  SV=8.15  BV=5.30
    {735,10240,1704, 0, 0, 0},  //TV = 10.41(19 lines)  AV=2.97  SV=8.17  BV=5.21
    {813,10240,1656, 0, 0, 0},  //TV = 10.26(21 lines)  AV=2.97  SV=8.13  BV=5.11
    {851,10240,1704, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=8.17  BV=5.00
    {929,10240,1664, 0, 0, 0},  //TV = 10.07(24 lines)  AV=2.97  SV=8.13  BV=4.91
    {1006,10240,1640, 0, 0, 0},  //TV = 9.96(26 lines)  AV=2.97  SV=8.11  BV=4.82
    {1083,10240,1640, 0, 0, 0},  //TV = 9.85(28 lines)  AV=2.97  SV=8.11  BV=4.71
    {1161,10240,1640, 0, 0, 0},  //TV = 9.75(30 lines)  AV=2.97  SV=8.11  BV=4.61
    {1238,10240,1648, 0, 0, 0},  //TV = 9.66(32 lines)  AV=2.97  SV=8.12  BV=4.51
    {1315,10240,1664, 0, 0, 0},  //TV = 9.57(34 lines)  AV=2.97  SV=8.13  BV=4.41
    {1393,10240,1680, 0, 0, 0},  //TV = 9.49(36 lines)  AV=2.97  SV=8.15  BV=4.31
    {1509,10240,1664, 0, 0, 0},  //TV = 9.37(39 lines)  AV=2.97  SV=8.13  BV=4.21
    {1625,10240,1656, 0, 0, 0},  //TV = 9.27(42 lines)  AV=2.97  SV=8.13  BV=4.11
    {1741,10240,1664, 0, 0, 0},  //TV = 9.17(45 lines)  AV=2.97  SV=8.13  BV=4.00
    {1857,10240,1664, 0, 0, 0},  //TV = 9.07(48 lines)  AV=2.97  SV=8.13  BV=3.91
    {2011,10240,1656, 0, 0, 0},  //TV = 8.96(52 lines)  AV=2.97  SV=8.13  BV=3.80
    {2166,10240,1640, 0, 0, 0},  //TV = 8.85(56 lines)  AV=2.97  SV=8.11  BV=3.71
    {2321,10240,1640, 0, 0, 0},  //TV = 8.75(60 lines)  AV=2.97  SV=8.11  BV=3.61
    {2475,10240,1656, 0, 0, 0},  //TV = 8.66(64 lines)  AV=2.97  SV=8.13  BV=3.50
    {2669,10240,1640, 0, 0, 0},  //TV = 8.55(69 lines)  AV=2.97  SV=8.11  BV=3.41
    {2862,10240,1640, 0, 0, 0},  //TV = 8.45(74 lines)  AV=2.97  SV=8.11  BV=3.31
    {3055,10240,1640, 0, 0, 0},  //TV = 8.35(79 lines)  AV=2.97  SV=8.11  BV=3.21
    {3287,10240,1640, 0, 0, 0},  //TV = 8.25(85 lines)  AV=2.97  SV=8.11  BV=3.11
    {3519,10240,1640, 0, 0, 0},  //TV = 8.15(91 lines)  AV=2.97  SV=8.11  BV=3.01
    {3751,10240,1648, 0, 0, 0},  //TV = 8.06(97 lines)  AV=2.97  SV=8.12  BV=2.91
    {4022,10240,1648, 0, 0, 0},  //TV = 7.96(104 lines)  AV=2.97  SV=8.12  BV=2.81
    {4331,10240,1640, 0, 0, 0},  //TV = 7.85(112 lines)  AV=2.97  SV=8.11  BV=2.71
    {4641,10240,1648, 0, 0, 0},  //TV = 7.75(120 lines)  AV=2.97  SV=8.12  BV=2.60
    {4989,10240,1640, 0, 0, 0},  //TV = 7.65(129 lines)  AV=2.97  SV=8.11  BV=2.51
    {5337,10240,1640, 0, 0, 0},  //TV = 7.55(138 lines)  AV=2.97  SV=8.11  BV=2.41
    {5723,10240,1640, 0, 0, 0},  //TV = 7.45(148 lines)  AV=2.97  SV=8.11  BV=2.31
    {6110,10240,1648, 0, 0, 0},  //TV = 7.35(158 lines)  AV=2.97  SV=8.12  BV=2.21
    {6574,10240,1640, 0, 0, 0},  //TV = 7.25(170 lines)  AV=2.97  SV=8.11  BV=2.11
    {7038,10240,1640, 0, 0, 0},  //TV = 7.15(182 lines)  AV=2.97  SV=8.11  BV=2.01
    {7541,10240,1640, 0, 0, 0},  //TV = 7.05(195 lines)  AV=2.97  SV=8.11  BV=1.91
    {8121,10240,1640, 0, 0, 0},  //TV = 6.94(210 lines)  AV=2.97  SV=8.11  BV=1.80
    {8701,10240,1640, 0, 0, 0},  //TV = 6.84(225 lines)  AV=2.97  SV=8.11  BV=1.70
    {9319,10240,1640, 0, 0, 0},  //TV = 6.75(241 lines)  AV=2.97  SV=8.11  BV=1.60
    {10016,10240,1632, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=8.11  BV=1.51
    {10016,10240,1752, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=8.21  BV=1.40
    {10016,10240,1872, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=8.30  BV=1.31
    {10016,10240,2008, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=8.40  BV=1.21
    {10016,10240,2152, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=8.50  BV=1.11
    {10016,10240,2304, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=8.60  BV=1.01
    {10016,10240,2472, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=8.70  BV=0.91
    {10016,10240,2648, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=8.80  BV=0.81
    {10016,10240,2840, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=8.90  BV=0.71
    {10016,10240,3040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=9.00  BV=0.61
    {10016,10240,3264, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=9.11  BV=0.51
    {19992,10240,1752, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=8.21  BV=0.41
    {19992,10240,1872, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=8.30  BV=0.31
    {19992,10240,2008, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=8.40  BV=0.21
    {19992,10240,2152, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=8.50  BV=0.11
    {19992,10240,2320, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=8.61  BV=0.00
    {30007,10240,1656, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=8.13  BV=-0.10
    {30007,10240,1776, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=8.23  BV=-0.20
    {30007,10240,1904, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=8.33  BV=-0.30
    {30007,10240,2040, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=8.43  BV=-0.40
    {39983,10240,1648, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=8.12  BV=-0.50
    {39983,10240,1768, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=8.22  BV=-0.61
    {39983,10240,1896, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=8.32  BV=-0.71
    {39983,10240,2032, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=8.42  BV=-0.81
    {49998,10240,1744, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=8.20  BV=-0.91
    {49998,10240,1864, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=8.30  BV=-1.00
    {60014,10240,1664, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=8.13  BV=-1.10
    {60014,10240,1784, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=8.23  BV=-1.20
    {69990,10240,1640, 0, 0, 0},  //TV = 3.84(1810 lines)  AV=2.97  SV=8.11  BV=-1.30
    {69990,10240,1760, 0, 0, 0},  //TV = 3.84(1810 lines)  AV=2.97  SV=8.21  BV=-1.41
    {80005,10240,1648, 0, 0, 0},  //TV = 3.64(2069 lines)  AV=2.97  SV=8.12  BV=-1.50
    {80005,10240,1768, 0, 0, 0},  //TV = 3.64(2069 lines)  AV=2.97  SV=8.22  BV=-1.61
    {89981,10240,1680, 0, 0, 0},  //TV = 3.47(2327 lines)  AV=2.97  SV=8.15  BV=-1.70
    {89981,10240,1808, 0, 0, 0},  //TV = 3.47(2327 lines)  AV=2.97  SV=8.25  BV=-1.81
    {99996,10240,1744, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=8.20  BV=-1.91
    {110011,10240,1696, 0, 0, 0},  //TV = 3.18(2845 lines)  AV=2.97  SV=8.16  BV=-2.01
    {119987,10240,1664, 0, 0, 0},  //TV = 3.06(3103 lines)  AV=2.97  SV=8.13  BV=-2.10
    {130003,10240,1648, 0, 0, 0},  //TV = 2.94(3362 lines)  AV=2.97  SV=8.12  BV=-2.21
    {140018,10240,1640, 0, 0, 0},  //TV = 2.84(3621 lines)  AV=2.97  SV=8.11  BV=-2.31
    {149994,10240,1640, 0, 0, 0},  //TV = 2.74(3879 lines)  AV=2.97  SV=8.11  BV=-2.40
    {160009,10240,1648, 0, 0, 0},  //TV = 2.64(4138 lines)  AV=2.97  SV=8.12  BV=-2.50
    {169985,10240,1664, 0, 0, 0},  //TV = 2.56(4396 lines)  AV=2.97  SV=8.13  BV=-2.61
    {180000,10240,1680, 0, 0, 0},  //TV = 2.47(4655 lines)  AV=2.97  SV=8.15  BV=-2.70
    {190015,10240,1712, 0, 0, 0},  //TV = 2.40(4914 lines)  AV=2.97  SV=8.17  BV=-2.81
    {210007,10240,1656, 0, 0, 0},  //TV = 2.25(5431 lines)  AV=2.97  SV=8.13  BV=-2.90
    {219983,10240,1696, 0, 0, 0},  //TV = 2.18(5689 lines)  AV=2.97  SV=8.16  BV=-3.01
    {240013,10240,1664, 0, 0, 0},  //TV = 2.06(6207 lines)  AV=2.97  SV=8.13  BV=-3.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureISO1600Table =
{
    AETABLE_CAPTURE_ISO1600,    //eAETableID
    152,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    120,    //i4MaxBV
    -31,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_1600, //ISO SPEED
    sCaptureISO1600PLineTable_60Hz,
    sCaptureISO1600PLineTable_50Hz,
    NULL,
};

static strEvPline sCaptureStrobePLineTable_60Hz =
{
{
    {78,1424,1072, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.65  BV=11.96
    {78,1536,1056, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.74  BV=11.88
    {78,1632,1048, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.82  BV=11.80
    {117,1216,1024, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.36  BV=11.67
    {117,1216,1096, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.46  BV=11.58
    {117,1328,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.54  BV=11.49
    {117,1424,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.64  BV=11.39
    {155,1136,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.35  BV=11.28
    {155,1216,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.45  BV=11.18
    {155,1328,1072, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.55  BV=11.07
    {155,1424,1040, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.61  BV=11.02
    {194,1216,1048, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.39  BV=10.91
    {194,1328,1024, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.49  BV=10.82
    {233,1136,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.33  BV=10.71
    {233,1216,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.43  BV=10.61
    {271,1136,1056, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.31  BV=10.52
    {271,1216,1064, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.41  BV=10.41
    {310,1136,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.32  BV=10.31
    {310,1216,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.41  BV=10.21
    {349,1136,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.35  BV=10.11
    {387,1136,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.29  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {465,1136,1080, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.34  BV=9.70
    {503,1136,1064, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=4.32  BV=9.61
    {542,1136,1056, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=4.31  BV=9.52
    {581,1136,1056, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=4.31  BV=9.41
    {619,1136,1064, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=4.32  BV=9.31
    {658,1136,1080, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=4.34  BV=9.20
    {697,1136,1088, 0, 0, 0},  //TV = 10.49(18 lines)  AV=2.97  SV=4.35  BV=9.11
    {774,1136,1048, 0, 0, 0},  //TV = 10.34(20 lines)  AV=2.97  SV=4.29  BV=9.01
    {813,1136,1072, 0, 0, 0},  //TV = 10.26(21 lines)  AV=2.97  SV=4.33  BV=8.91
    {851,1216,1024, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=4.36  BV=8.81
    {929,1136,1080, 0, 0, 0},  //TV = 10.07(24 lines)  AV=2.97  SV=4.34  BV=8.71
    {1006,1136,1064, 0, 0, 0},  //TV = 9.96(26 lines)  AV=2.97  SV=4.32  BV=8.61
    {1083,1136,1064, 0, 0, 0},  //TV = 9.85(28 lines)  AV=2.97  SV=4.32  BV=8.51
    {1161,1136,1064, 0, 0, 0},  //TV = 9.75(30 lines)  AV=2.97  SV=4.32  BV=8.41
    {1238,1136,1064, 0, 0, 0},  //TV = 9.66(32 lines)  AV=2.97  SV=4.32  BV=8.31
    {1354,1136,1048, 0, 0, 0},  //TV = 9.53(35 lines)  AV=2.97  SV=4.29  BV=8.21
    {1431,1136,1056, 0, 0, 0},  //TV = 9.45(37 lines)  AV=2.97  SV=4.31  BV=8.11
    {1547,1136,1056, 0, 0, 0},  //TV = 9.34(40 lines)  AV=2.97  SV=4.31  BV=8.00
    {1625,1136,1072, 0, 0, 0},  //TV = 9.27(42 lines)  AV=2.97  SV=4.33  BV=7.91
    {1741,1136,1072, 0, 0, 0},  //TV = 9.17(45 lines)  AV=2.97  SV=4.33  BV=7.81
    {1895,1136,1056, 0, 0, 0},  //TV = 9.04(49 lines)  AV=2.97  SV=4.31  BV=7.71
    {2011,1136,1064, 0, 0, 0},  //TV = 8.96(52 lines)  AV=2.97  SV=4.32  BV=7.61
    {2166,1136,1064, 0, 0, 0},  //TV = 8.85(56 lines)  AV=2.97  SV=4.32  BV=7.51
    {2321,1136,1064, 0, 0, 0},  //TV = 8.75(60 lines)  AV=2.97  SV=4.32  BV=7.41
    {2514,1136,1048, 0, 0, 0},  //TV = 8.64(65 lines)  AV=2.97  SV=4.29  BV=7.31
    {2669,1136,1056, 0, 0, 0},  //TV = 8.55(69 lines)  AV=2.97  SV=4.31  BV=7.22
    {2862,1136,1056, 0, 0, 0},  //TV = 8.45(74 lines)  AV=2.97  SV=4.31  BV=7.11
    {3094,1136,1048, 0, 0, 0},  //TV = 8.34(80 lines)  AV=2.97  SV=4.29  BV=7.01
    {3287,1136,1056, 0, 0, 0},  //TV = 8.25(85 lines)  AV=2.97  SV=4.31  BV=6.91
    {3558,1136,1056, 0, 0, 0},  //TV = 8.13(92 lines)  AV=2.97  SV=4.31  BV=6.80
    {3790,1136,1056, 0, 0, 0},  //TV = 8.04(98 lines)  AV=2.97  SV=4.31  BV=6.71
    {4061,1136,1056, 0, 0, 0},  //TV = 7.94(105 lines)  AV=2.97  SV=4.31  BV=6.61
    {4370,1136,1056, 0, 0, 0},  //TV = 7.84(113 lines)  AV=2.97  SV=4.31  BV=6.50
    {4679,1136,1048, 0, 0, 0},  //TV = 7.74(121 lines)  AV=2.97  SV=4.29  BV=6.42
    {4989,1136,1056, 0, 0, 0},  //TV = 7.65(129 lines)  AV=2.97  SV=4.31  BV=6.31
    {5375,1136,1048, 0, 0, 0},  //TV = 7.54(139 lines)  AV=2.97  SV=4.29  BV=6.22
    {5723,1136,1056, 0, 0, 0},  //TV = 7.45(148 lines)  AV=2.97  SV=4.31  BV=6.11
    {6187,1136,1056, 0, 0, 0},  //TV = 7.34(160 lines)  AV=2.97  SV=4.31  BV=6.00
    {6574,1136,1056, 0, 0, 0},  //TV = 7.25(170 lines)  AV=2.97  SV=4.31  BV=5.91
    {7115,1136,1048, 0, 0, 0},  //TV = 7.13(184 lines)  AV=2.97  SV=4.29  BV=5.81
    {7618,1136,1048, 0, 0, 0},  //TV = 7.04(197 lines)  AV=2.97  SV=4.29  BV=5.71
    {8159,1136,1048, 0, 0, 0},  //TV = 6.94(211 lines)  AV=2.97  SV=4.29  BV=5.61
    {8314,1216,1032, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.37  BV=5.51
    {8314,1216,1104, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.47  BV=5.41
    {8314,1328,1096, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.58  BV=5.30
    {8314,1424,1080, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.66  BV=5.22
    {8314,1536,1088, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.78  BV=5.10
    {8314,1728,1024, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.87  BV=5.02
    {8314,1840,1040, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.98  BV=4.90
    {8314,1936,1056, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.07  BV=4.81
    {8314,2048,1064, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.17  BV=4.71
    {8314,2240,1048, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.27  BV=4.61
    {16666,1216,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.36  BV=4.52
    {16666,1216,1104, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.47  BV=4.41
    {16666,1328,1088, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.57  BV=4.30
    {16666,1424,1080, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.66  BV=4.21
    {16666,1536,1080, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.77  BV=4.10
    {16666,1728,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.87  BV=4.01
    {24980,1216,1040, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.38  BV=3.91
    {24980,1216,1112, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.48  BV=3.82
    {24980,1328,1096, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.58  BV=3.71
    {24980,1424,1096, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.68  BV=3.61
    {33332,1216,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=4.37  BV=3.51
    {33332,1216,1104, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=4.47  BV=3.41
    {33332,1328,1080, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=4.56  BV=3.31
    {41646,1136,1088, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.35  BV=3.21
    {41646,1216,1088, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.45  BV=3.11
    {41646,1328,1072, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.55  BV=3.00
    {49998,1216,1040, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=4.38  BV=2.91
    {49998,1216,1112, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=4.48  BV=2.81
    {58312,1216,1024, 0, 0, 0},  //TV = 4.10(1508 lines)  AV=2.97  SV=4.36  BV=2.71
    {58312,1216,1104, 0, 0, 0},  //TV = 4.10(1508 lines)  AV=2.97  SV=4.47  BV=2.60
    {66664,1216,1024, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=4.36  BV=2.52
    {66664,1216,1104, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=4.47  BV=2.41
    {66664,1328,1080, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=4.56  BV=2.31
    {66664,1424,1080, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=4.66  BV=2.21
    {66664,1536,1072, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=4.76  BV=2.12
    {66664,1728,1024, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=4.87  BV=2.01
    {66664,1840,1032, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=4.97  BV=1.91
    {66664,1936,1048, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.06  BV=1.81
    {66664,2048,1064, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.17  BV=1.71
    {66664,2240,1048, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.27  BV=1.60
    {66664,2448,1024, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.37  BV=1.51
    {66664,2560,1048, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.47  BV=1.41
    {66664,2752,1048, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.57  BV=1.31
    {66664,2960,1040, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.66  BV=1.21
    {66664,3200,1032, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.77  BV=1.11
    {66664,3456,1024, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.87  BV=1.01
    {66664,3584,1056, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.96  BV=0.92
    {66664,3968,1032, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=6.08  BV=0.80
    {66664,4224,1032, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=6.17  BV=0.71
    {66664,4480,1040, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=6.26  BV=0.62
    {74978,4352,1024, 0, 0, 0},  //TV = 3.74(1939 lines)  AV=2.97  SV=6.20  BV=0.51
    {83330,4096,1048, 0, 0, 0},  //TV = 3.59(2155 lines)  AV=2.97  SV=6.14  BV=0.41
    {91644,3968,1056, 0, 0, 0},  //TV = 3.45(2370 lines)  AV=2.97  SV=6.11  BV=0.31
    {91644,4352,1032, 0, 0, 0},  //TV = 3.45(2370 lines)  AV=2.97  SV=6.21  BV=0.21
    {99996,4224,1048, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.19  BV=0.10
    {99996,4608,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.29  BV=0.00
    {99996,4864,1048, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.39  BV=-0.10
    {99996,5248,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.49  BV=-0.20
    {99996,5632,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.59  BV=-0.30
    {99996,6144,1024, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.70  BV=-0.40
    {99996,6544,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.80  BV=-0.51
    {99996,7072,1024, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.90  BV=-0.61
    {99996,7472,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.99  BV=-0.70
    {99996,7936,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=7.09  BV=-0.79
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureStrobePLineTable_50Hz =
{
{
    {78,1424,1072, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.65  BV=11.96
    {78,1536,1056, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.74  BV=11.88
    {78,1632,1048, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.82  BV=11.80
    {117,1216,1024, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.36  BV=11.67
    {117,1216,1096, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.46  BV=11.58
    {117,1328,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.54  BV=11.49
    {117,1424,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.64  BV=11.39
    {155,1136,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.35  BV=11.28
    {155,1216,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.45  BV=11.18
    {155,1328,1072, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.55  BV=11.07
    {155,1424,1040, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.61  BV=11.02
    {194,1216,1048, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.39  BV=10.91
    {194,1328,1024, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.49  BV=10.82
    {233,1136,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.33  BV=10.71
    {233,1216,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.43  BV=10.61
    {271,1136,1056, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.31  BV=10.52
    {271,1216,1064, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.41  BV=10.41
    {310,1136,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.32  BV=10.31
    {310,1216,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.41  BV=10.21
    {349,1136,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.35  BV=10.11
    {387,1136,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.29  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {465,1136,1080, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.34  BV=9.70
    {503,1136,1064, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=4.32  BV=9.61
    {542,1136,1056, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=4.31  BV=9.52
    {581,1136,1056, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=4.31  BV=9.41
    {619,1136,1064, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=4.32  BV=9.31
    {658,1136,1080, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=4.34  BV=9.20
    {697,1136,1088, 0, 0, 0},  //TV = 10.49(18 lines)  AV=2.97  SV=4.35  BV=9.11
    {774,1136,1048, 0, 0, 0},  //TV = 10.34(20 lines)  AV=2.97  SV=4.29  BV=9.01
    {813,1136,1072, 0, 0, 0},  //TV = 10.26(21 lines)  AV=2.97  SV=4.33  BV=8.91
    {851,1216,1024, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=4.36  BV=8.81
    {929,1136,1080, 0, 0, 0},  //TV = 10.07(24 lines)  AV=2.97  SV=4.34  BV=8.71
    {1006,1136,1064, 0, 0, 0},  //TV = 9.96(26 lines)  AV=2.97  SV=4.32  BV=8.61
    {1083,1136,1064, 0, 0, 0},  //TV = 9.85(28 lines)  AV=2.97  SV=4.32  BV=8.51
    {1161,1136,1064, 0, 0, 0},  //TV = 9.75(30 lines)  AV=2.97  SV=4.32  BV=8.41
    {1238,1136,1064, 0, 0, 0},  //TV = 9.66(32 lines)  AV=2.97  SV=4.32  BV=8.31
    {1354,1136,1048, 0, 0, 0},  //TV = 9.53(35 lines)  AV=2.97  SV=4.29  BV=8.21
    {1431,1136,1056, 0, 0, 0},  //TV = 9.45(37 lines)  AV=2.97  SV=4.31  BV=8.11
    {1547,1136,1056, 0, 0, 0},  //TV = 9.34(40 lines)  AV=2.97  SV=4.31  BV=8.00
    {1625,1136,1072, 0, 0, 0},  //TV = 9.27(42 lines)  AV=2.97  SV=4.33  BV=7.91
    {1741,1136,1072, 0, 0, 0},  //TV = 9.17(45 lines)  AV=2.97  SV=4.33  BV=7.81
    {1895,1136,1056, 0, 0, 0},  //TV = 9.04(49 lines)  AV=2.97  SV=4.31  BV=7.71
    {2011,1136,1064, 0, 0, 0},  //TV = 8.96(52 lines)  AV=2.97  SV=4.32  BV=7.61
    {2166,1136,1064, 0, 0, 0},  //TV = 8.85(56 lines)  AV=2.97  SV=4.32  BV=7.51
    {2321,1136,1064, 0, 0, 0},  //TV = 8.75(60 lines)  AV=2.97  SV=4.32  BV=7.41
    {2514,1136,1048, 0, 0, 0},  //TV = 8.64(65 lines)  AV=2.97  SV=4.29  BV=7.31
    {2669,1136,1056, 0, 0, 0},  //TV = 8.55(69 lines)  AV=2.97  SV=4.31  BV=7.22
    {2862,1136,1056, 0, 0, 0},  //TV = 8.45(74 lines)  AV=2.97  SV=4.31  BV=7.11
    {3094,1136,1048, 0, 0, 0},  //TV = 8.34(80 lines)  AV=2.97  SV=4.29  BV=7.01
    {3287,1136,1056, 0, 0, 0},  //TV = 8.25(85 lines)  AV=2.97  SV=4.31  BV=6.91
    {3558,1136,1056, 0, 0, 0},  //TV = 8.13(92 lines)  AV=2.97  SV=4.31  BV=6.80
    {3790,1136,1056, 0, 0, 0},  //TV = 8.04(98 lines)  AV=2.97  SV=4.31  BV=6.71
    {4061,1136,1056, 0, 0, 0},  //TV = 7.94(105 lines)  AV=2.97  SV=4.31  BV=6.61
    {4370,1136,1056, 0, 0, 0},  //TV = 7.84(113 lines)  AV=2.97  SV=4.31  BV=6.50
    {4679,1136,1048, 0, 0, 0},  //TV = 7.74(121 lines)  AV=2.97  SV=4.29  BV=6.42
    {4989,1136,1056, 0, 0, 0},  //TV = 7.65(129 lines)  AV=2.97  SV=4.31  BV=6.31
    {5375,1136,1048, 0, 0, 0},  //TV = 7.54(139 lines)  AV=2.97  SV=4.29  BV=6.22
    {5723,1136,1056, 0, 0, 0},  //TV = 7.45(148 lines)  AV=2.97  SV=4.31  BV=6.11
    {6187,1136,1056, 0, 0, 0},  //TV = 7.34(160 lines)  AV=2.97  SV=4.31  BV=6.00
    {6574,1136,1056, 0, 0, 0},  //TV = 7.25(170 lines)  AV=2.97  SV=4.31  BV=5.91
    {7115,1136,1048, 0, 0, 0},  //TV = 7.13(184 lines)  AV=2.97  SV=4.29  BV=5.81
    {7618,1136,1048, 0, 0, 0},  //TV = 7.04(197 lines)  AV=2.97  SV=4.29  BV=5.71
    {8159,1136,1048, 0, 0, 0},  //TV = 6.94(211 lines)  AV=2.97  SV=4.29  BV=5.61
    {8739,1136,1048, 0, 0, 0},  //TV = 6.84(226 lines)  AV=2.97  SV=4.29  BV=5.51
    {9358,1136,1048, 0, 0, 0},  //TV = 6.74(242 lines)  AV=2.97  SV=4.29  BV=5.42
    {10016,1136,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.31  BV=5.31
    {10016,1216,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.40  BV=5.21
    {10016,1328,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.50  BV=5.12
    {10016,1424,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.60  BV=5.01
    {10016,1536,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.70  BV=4.92
    {10016,1632,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.79  BV=4.82
    {10016,1728,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.91  BV=4.70
    {10016,1840,1064, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.01  BV=4.60
    {10016,1936,1080, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.11  BV=4.51
    {10016,2144,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.20  BV=4.41
    {19992,1136,1056, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.31  BV=4.31
    {19992,1216,1056, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.40  BV=4.21
    {19992,1328,1040, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.51  BV=4.11
    {19992,1424,1040, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.61  BV=4.01
    {19992,1536,1032, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.71  BV=3.91
    {19992,1632,1040, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.81  BV=3.81
    {30007,1136,1064, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.32  BV=3.71
    {30007,1216,1064, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.41  BV=3.62
    {30007,1328,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.52  BV=3.51
    {30007,1424,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.62  BV=3.41
    {39983,1136,1056, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.31  BV=3.31
    {39983,1216,1056, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.40  BV=3.21
    {39983,1328,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.51  BV=3.11
    {39983,1424,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.61  BV=3.01
    {49998,1216,1040, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=4.38  BV=2.91
    {49998,1216,1112, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=4.48  BV=2.81
    {60014,1136,1064, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=4.32  BV=2.71
    {60014,1216,1064, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=4.41  BV=2.62
    {60014,1328,1048, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=4.52  BV=2.51
    {60014,1424,1056, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=4.63  BV=2.40
    {60014,1536,1040, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=4.72  BV=2.31
    {60014,1632,1048, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=4.82  BV=2.21
    {60014,1728,1064, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=4.92  BV=2.11
    {60014,1840,1072, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.02  BV=2.01
    {60014,2048,1032, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.12  BV=1.91
    {60014,2144,1056, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.22  BV=1.81
    {60014,2352,1024, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.31  BV=1.72
    {60014,2448,1064, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.42  BV=1.61
    {60014,2656,1048, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.52  BV=1.51
    {60014,2864,1040, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.62  BV=1.41
    {60014,3072,1048, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.73  BV=1.30
    {60014,3328,1032, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.82  BV=1.21
    {60014,3584,1024, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.92  BV=1.11
    {60014,3840,1024, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=6.02  BV=1.01
    {60014,4096,1024, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=6.11  BV=0.92
    {60014,4352,1040, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=6.22  BV=0.81
    {60014,4736,1024, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=6.32  BV=0.71
    {69990,4352,1024, 0, 0, 0},  //TV = 3.84(1810 lines)  AV=2.97  SV=6.20  BV=0.61
    {69990,4608,1032, 0, 0, 0},  //TV = 3.84(1810 lines)  AV=2.97  SV=6.29  BV=0.52
    {80005,4352,1024, 0, 0, 0},  //TV = 3.64(2069 lines)  AV=2.97  SV=6.20  BV=0.42
    {89981,4096,1040, 0, 0, 0},  //TV = 3.47(2327 lines)  AV=2.97  SV=6.13  BV=0.31
    {89981,4352,1048, 0, 0, 0},  //TV = 3.47(2327 lines)  AV=2.97  SV=6.23  BV=0.21
    {99996,4224,1048, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.19  BV=0.10
    {99996,4608,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.29  BV=0.00
    {99996,4864,1048, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.39  BV=-0.10
    {99996,5248,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.49  BV=-0.20
    {99996,5632,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.59  BV=-0.30
    {99996,6144,1024, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.70  BV=-0.40
    {99996,6544,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.80  BV=-0.51
    {99996,7072,1024, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.90  BV=-0.61
    {99996,7472,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.99  BV=-0.70
    {99996,7936,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=7.09  BV=-0.79
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_StrobeTable =
{
    AETABLE_STROBE,    //eAETableID
    129,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    120,    //i4MaxBV
    -8,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCaptureStrobePLineTable_60Hz,
    sCaptureStrobePLineTable_50Hz,
    NULL,
};

static strEvPline sAEScene1PLineTable_60Hz =
{
{
    {78,1424,1072, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.65  BV=11.96
    {78,1536,1056, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.74  BV=11.88
    {78,1632,1048, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.82  BV=11.80
    {117,1216,1024, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.36  BV=11.67
    {117,1216,1096, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.46  BV=11.58
    {117,1328,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.54  BV=11.49
    {117,1424,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.64  BV=11.39
    {155,1136,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.35  BV=11.28
    {155,1216,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.45  BV=11.18
    {155,1328,1072, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.55  BV=11.07
    {155,1424,1040, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.61  BV=11.02
    {194,1216,1048, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.39  BV=10.91
    {194,1328,1024, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.49  BV=10.82
    {233,1136,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.33  BV=10.71
    {233,1216,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.43  BV=10.61
    {271,1136,1056, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.31  BV=10.52
    {271,1216,1064, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.41  BV=10.41
    {310,1136,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.32  BV=10.31
    {310,1216,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.41  BV=10.21
    {349,1136,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.35  BV=10.11
    {387,1136,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.29  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {465,1136,1080, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.34  BV=9.70
    {503,1136,1064, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=4.32  BV=9.61
    {542,1136,1056, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=4.31  BV=9.52
    {581,1136,1056, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=4.31  BV=9.41
    {619,1136,1064, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=4.32  BV=9.31
    {658,1136,1080, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=4.34  BV=9.20
    {697,1136,1088, 0, 0, 0},  //TV = 10.49(18 lines)  AV=2.97  SV=4.35  BV=9.11
    {774,1136,1048, 0, 0, 0},  //TV = 10.34(20 lines)  AV=2.97  SV=4.29  BV=9.01
    {813,1136,1072, 0, 0, 0},  //TV = 10.26(21 lines)  AV=2.97  SV=4.33  BV=8.91
    {851,1216,1024, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=4.36  BV=8.81
    {929,1136,1080, 0, 0, 0},  //TV = 10.07(24 lines)  AV=2.97  SV=4.34  BV=8.71
    {1006,1136,1064, 0, 0, 0},  //TV = 9.96(26 lines)  AV=2.97  SV=4.32  BV=8.61
    {1083,1136,1064, 0, 0, 0},  //TV = 9.85(28 lines)  AV=2.97  SV=4.32  BV=8.51
    {1161,1136,1064, 0, 0, 0},  //TV = 9.75(30 lines)  AV=2.97  SV=4.32  BV=8.41
    {1238,1136,1064, 0, 0, 0},  //TV = 9.66(32 lines)  AV=2.97  SV=4.32  BV=8.31
    {1354,1136,1048, 0, 0, 0},  //TV = 9.53(35 lines)  AV=2.97  SV=4.29  BV=8.21
    {1431,1136,1056, 0, 0, 0},  //TV = 9.45(37 lines)  AV=2.97  SV=4.31  BV=8.11
    {1547,1136,1056, 0, 0, 0},  //TV = 9.34(40 lines)  AV=2.97  SV=4.31  BV=8.00
    {1625,1136,1072, 0, 0, 0},  //TV = 9.27(42 lines)  AV=2.97  SV=4.33  BV=7.91
    {1741,1136,1072, 0, 0, 0},  //TV = 9.17(45 lines)  AV=2.97  SV=4.33  BV=7.81
    {1895,1136,1056, 0, 0, 0},  //TV = 9.04(49 lines)  AV=2.97  SV=4.31  BV=7.71
    {2011,1136,1064, 0, 0, 0},  //TV = 8.96(52 lines)  AV=2.97  SV=4.32  BV=7.61
    {2166,1136,1064, 0, 0, 0},  //TV = 8.85(56 lines)  AV=2.97  SV=4.32  BV=7.51
    {2321,1136,1064, 0, 0, 0},  //TV = 8.75(60 lines)  AV=2.97  SV=4.32  BV=7.41
    {2514,1136,1048, 0, 0, 0},  //TV = 8.64(65 lines)  AV=2.97  SV=4.29  BV=7.31
    {2669,1136,1056, 0, 0, 0},  //TV = 8.55(69 lines)  AV=2.97  SV=4.31  BV=7.22
    {2862,1136,1056, 0, 0, 0},  //TV = 8.45(74 lines)  AV=2.97  SV=4.31  BV=7.11
    {3094,1136,1048, 0, 0, 0},  //TV = 8.34(80 lines)  AV=2.97  SV=4.29  BV=7.01
    {3287,1136,1056, 0, 0, 0},  //TV = 8.25(85 lines)  AV=2.97  SV=4.31  BV=6.91
    {3558,1136,1056, 0, 0, 0},  //TV = 8.13(92 lines)  AV=2.97  SV=4.31  BV=6.80
    {3790,1136,1056, 0, 0, 0},  //TV = 8.04(98 lines)  AV=2.97  SV=4.31  BV=6.71
    {4061,1136,1056, 0, 0, 0},  //TV = 7.94(105 lines)  AV=2.97  SV=4.31  BV=6.61
    {4370,1136,1056, 0, 0, 0},  //TV = 7.84(113 lines)  AV=2.97  SV=4.31  BV=6.50
    {4679,1136,1048, 0, 0, 0},  //TV = 7.74(121 lines)  AV=2.97  SV=4.29  BV=6.42
    {4989,1136,1056, 0, 0, 0},  //TV = 7.65(129 lines)  AV=2.97  SV=4.31  BV=6.31
    {5375,1136,1048, 0, 0, 0},  //TV = 7.54(139 lines)  AV=2.97  SV=4.29  BV=6.22
    {5723,1136,1056, 0, 0, 0},  //TV = 7.45(148 lines)  AV=2.97  SV=4.31  BV=6.11
    {6187,1136,1056, 0, 0, 0},  //TV = 7.34(160 lines)  AV=2.97  SV=4.31  BV=6.00
    {6574,1136,1056, 0, 0, 0},  //TV = 7.25(170 lines)  AV=2.97  SV=4.31  BV=5.91
    {7115,1136,1048, 0, 0, 0},  //TV = 7.13(184 lines)  AV=2.97  SV=4.29  BV=5.81
    {7618,1136,1048, 0, 0, 0},  //TV = 7.04(197 lines)  AV=2.97  SV=4.29  BV=5.71
    {8159,1136,1048, 0, 0, 0},  //TV = 6.94(211 lines)  AV=2.97  SV=4.29  BV=5.61
    {8314,1216,1032, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.37  BV=5.51
    {8314,1216,1104, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.47  BV=5.41
    {8314,1328,1088, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.57  BV=5.31
    {8314,1424,1080, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.66  BV=5.22
    {8314,1536,1080, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.77  BV=5.11
    {8314,1728,1024, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.87  BV=5.02
    {8314,1840,1040, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.98  BV=4.90
    {8314,1936,1056, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.07  BV=4.81
    {8314,2048,1064, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.17  BV=4.71
    {8314,2240,1048, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.27  BV=4.61
    {8314,2448,1024, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.37  BV=4.51
    {8314,2560,1048, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.47  BV=4.41
    {8314,2752,1048, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.57  BV=4.31
    {8314,2960,1048, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.68  BV=4.21
    {8314,3200,1040, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.78  BV=4.10
    {8314,3456,1032, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.88  BV=4.00
    {8314,3712,1024, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.97  BV=3.91
    {8314,3968,1032, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=6.08  BV=3.80
    {16666,2048,1064, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.17  BV=3.71
    {16666,2240,1048, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.27  BV=3.60
    {16666,2448,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.37  BV=3.51
    {16666,2560,1048, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.47  BV=3.41
    {16666,2752,1048, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.57  BV=3.31
    {16666,2960,1040, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=5.66  BV=3.21
    {24980,2144,1024, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=5.18  BV=3.12
    {24980,2240,1056, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=5.28  BV=3.01
    {24980,2448,1032, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=5.38  BV=2.91
    {24980,2560,1056, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=5.48  BV=2.82
    {33332,2048,1064, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=5.17  BV=2.71
    {33332,2240,1048, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=5.27  BV=2.60
    {33332,2448,1024, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=5.37  BV=2.51
    {33332,2560,1048, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=5.47  BV=2.41
    {33332,2752,1048, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=5.57  BV=2.31
    {33332,2960,1040, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=5.66  BV=2.21
    {33332,3200,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=5.77  BV=2.11
    {33332,3456,1024, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=5.87  BV=2.01
    {33332,3584,1056, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=5.96  BV=1.92
    {33332,3968,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.08  BV=1.80
    {33332,4224,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.17  BV=1.71
    {33332,4480,1040, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.26  BV=1.62
    {33332,4864,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.37  BV=1.51
    {41646,4096,1048, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=6.14  BV=1.41
    {41646,4480,1024, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=6.24  BV=1.32
    {41646,4736,1040, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=6.34  BV=1.21
    {49998,4224,1040, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=6.18  BV=1.12
    {49998,4608,1024, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=6.28  BV=1.01
    {58312,4224,1024, 0, 0, 0},  //TV = 4.10(1508 lines)  AV=2.97  SV=6.16  BV=0.92
    {58312,4480,1040, 0, 0, 0},  //TV = 4.10(1508 lines)  AV=2.97  SV=6.26  BV=0.81
    {66664,4224,1032, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=6.17  BV=0.71
    {66664,4480,1040, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=6.26  BV=0.62
    {74978,4224,1048, 0, 0, 0},  //TV = 3.74(1939 lines)  AV=2.97  SV=6.19  BV=0.52
    {83330,4096,1048, 0, 0, 0},  //TV = 3.59(2155 lines)  AV=2.97  SV=6.14  BV=0.41
    {83330,4480,1024, 0, 0, 0},  //TV = 3.59(2155 lines)  AV=2.97  SV=6.24  BV=0.32
    {91644,4352,1024, 0, 0, 0},  //TV = 3.45(2370 lines)  AV=2.97  SV=6.20  BV=0.22
    {99996,4224,1048, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.19  BV=0.10
    {99996,4608,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.29  BV=0.00
    {99996,4864,1048, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.39  BV=-0.10
    {99996,5248,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.49  BV=-0.20
    {99996,5632,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.59  BV=-0.30
    {99996,6144,1024, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.70  BV=-0.40
    {99996,6544,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.80  BV=-0.51
    {99996,7072,1024, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.90  BV=-0.61
    {99996,7472,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.99  BV=-0.70
    {99996,7936,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=7.09  BV=-0.79
    {99996,8448,1056, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=7.20  BV=-0.91
    {108310,8448,1040, 0, 0, 0},  //TV = 3.21(2801 lines)  AV=2.97  SV=7.18  BV=-1.00
    {116662,8448,1040, 0, 0, 0},  //TV = 3.10(3017 lines)  AV=2.97  SV=7.18  BV=-1.11
    {125014,8448,1040, 0, 0, 0},  //TV = 3.00(3233 lines)  AV=2.97  SV=7.18  BV=-1.21
    {133328,8448,1040, 0, 0, 0},  //TV = 2.91(3448 lines)  AV=2.97  SV=7.18  BV=-1.30
    {149994,8192,1024, 0, 0, 0},  //TV = 2.74(3879 lines)  AV=2.97  SV=7.11  BV=-1.40
    {158346,8192,1040, 0, 0, 0},  //TV = 2.66(4095 lines)  AV=2.97  SV=7.13  BV=-1.50
    {166660,8448,1024, 0, 0, 0},  //TV = 2.59(4310 lines)  AV=2.97  SV=7.16  BV=-1.60
    {183325,8192,1032, 0, 0, 0},  //TV = 2.45(4741 lines)  AV=2.97  SV=7.12  BV=-1.70
    {191678,8448,1024, 0, 0, 0},  //TV = 2.38(4957 lines)  AV=2.97  SV=7.16  BV=-1.80
    {199991,8448,1056, 0, 0, 0},  //TV = 2.32(5172 lines)  AV=2.97  SV=7.20  BV=-1.91
    {199991,9040,1056, 0, 0, 0},  //TV = 2.32(5172 lines)  AV=2.97  SV=7.30  BV=-2.00
    {199991,9696,1056, 0, 0, 0},  //TV = 2.32(5172 lines)  AV=2.97  SV=7.40  BV=-2.11
    {199991,10240,1064, 0, 0, 0},  //TV = 2.32(5172 lines)  AV=2.97  SV=7.49  BV=-2.20
    {199991,10240,1144, 0, 0, 0},  //TV = 2.32(5172 lines)  AV=2.97  SV=7.59  BV=-2.30
    {199991,10240,1224, 0, 0, 0},  //TV = 2.32(5172 lines)  AV=2.97  SV=7.69  BV=-2.40
    {199991,10240,1312, 0, 0, 0},  //TV = 2.32(5172 lines)  AV=2.97  SV=7.79  BV=-2.50
    {199991,10240,1408, 0, 0, 0},  //TV = 2.32(5172 lines)  AV=2.97  SV=7.89  BV=-2.60
    {199991,10240,1512, 0, 0, 0},  //TV = 2.32(5172 lines)  AV=2.97  SV=8.00  BV=-2.70
    {199991,10240,1616, 0, 0, 0},  //TV = 2.32(5172 lines)  AV=2.97  SV=8.09  BV=-2.80
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene1PLineTable_50Hz =
{
{
    {78,1424,1072, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.65  BV=11.96
    {78,1536,1056, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.74  BV=11.88
    {78,1632,1048, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.82  BV=11.80
    {117,1216,1024, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.36  BV=11.67
    {117,1216,1096, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.46  BV=11.58
    {117,1328,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.54  BV=11.49
    {117,1424,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.64  BV=11.39
    {155,1136,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.35  BV=11.28
    {155,1216,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.45  BV=11.18
    {155,1328,1072, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.55  BV=11.07
    {155,1424,1040, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.61  BV=11.02
    {194,1216,1048, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.39  BV=10.91
    {194,1328,1024, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.49  BV=10.82
    {233,1136,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.33  BV=10.71
    {233,1216,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.43  BV=10.61
    {271,1136,1056, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.31  BV=10.52
    {271,1216,1064, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.41  BV=10.41
    {310,1136,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.32  BV=10.31
    {310,1216,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.41  BV=10.21
    {349,1136,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.35  BV=10.11
    {387,1136,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.29  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {465,1136,1080, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.34  BV=9.70
    {503,1136,1064, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=4.32  BV=9.61
    {542,1136,1056, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=4.31  BV=9.52
    {581,1136,1056, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=4.31  BV=9.41
    {619,1136,1064, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=4.32  BV=9.31
    {658,1136,1080, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=4.34  BV=9.20
    {697,1136,1088, 0, 0, 0},  //TV = 10.49(18 lines)  AV=2.97  SV=4.35  BV=9.11
    {774,1136,1048, 0, 0, 0},  //TV = 10.34(20 lines)  AV=2.97  SV=4.29  BV=9.01
    {813,1136,1072, 0, 0, 0},  //TV = 10.26(21 lines)  AV=2.97  SV=4.33  BV=8.91
    {851,1216,1024, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=4.36  BV=8.81
    {929,1136,1080, 0, 0, 0},  //TV = 10.07(24 lines)  AV=2.97  SV=4.34  BV=8.71
    {1006,1136,1064, 0, 0, 0},  //TV = 9.96(26 lines)  AV=2.97  SV=4.32  BV=8.61
    {1083,1136,1064, 0, 0, 0},  //TV = 9.85(28 lines)  AV=2.97  SV=4.32  BV=8.51
    {1161,1136,1064, 0, 0, 0},  //TV = 9.75(30 lines)  AV=2.97  SV=4.32  BV=8.41
    {1238,1136,1064, 0, 0, 0},  //TV = 9.66(32 lines)  AV=2.97  SV=4.32  BV=8.31
    {1354,1136,1048, 0, 0, 0},  //TV = 9.53(35 lines)  AV=2.97  SV=4.29  BV=8.21
    {1431,1136,1056, 0, 0, 0},  //TV = 9.45(37 lines)  AV=2.97  SV=4.31  BV=8.11
    {1547,1136,1056, 0, 0, 0},  //TV = 9.34(40 lines)  AV=2.97  SV=4.31  BV=8.00
    {1625,1136,1072, 0, 0, 0},  //TV = 9.27(42 lines)  AV=2.97  SV=4.33  BV=7.91
    {1741,1136,1072, 0, 0, 0},  //TV = 9.17(45 lines)  AV=2.97  SV=4.33  BV=7.81
    {1895,1136,1056, 0, 0, 0},  //TV = 9.04(49 lines)  AV=2.97  SV=4.31  BV=7.71
    {2011,1136,1064, 0, 0, 0},  //TV = 8.96(52 lines)  AV=2.97  SV=4.32  BV=7.61
    {2166,1136,1064, 0, 0, 0},  //TV = 8.85(56 lines)  AV=2.97  SV=4.32  BV=7.51
    {2321,1136,1064, 0, 0, 0},  //TV = 8.75(60 lines)  AV=2.97  SV=4.32  BV=7.41
    {2514,1136,1048, 0, 0, 0},  //TV = 8.64(65 lines)  AV=2.97  SV=4.29  BV=7.31
    {2669,1136,1056, 0, 0, 0},  //TV = 8.55(69 lines)  AV=2.97  SV=4.31  BV=7.22
    {2862,1136,1056, 0, 0, 0},  //TV = 8.45(74 lines)  AV=2.97  SV=4.31  BV=7.11
    {3094,1136,1048, 0, 0, 0},  //TV = 8.34(80 lines)  AV=2.97  SV=4.29  BV=7.01
    {3287,1136,1056, 0, 0, 0},  //TV = 8.25(85 lines)  AV=2.97  SV=4.31  BV=6.91
    {3558,1136,1056, 0, 0, 0},  //TV = 8.13(92 lines)  AV=2.97  SV=4.31  BV=6.80
    {3790,1136,1056, 0, 0, 0},  //TV = 8.04(98 lines)  AV=2.97  SV=4.31  BV=6.71
    {4061,1136,1056, 0, 0, 0},  //TV = 7.94(105 lines)  AV=2.97  SV=4.31  BV=6.61
    {4370,1136,1056, 0, 0, 0},  //TV = 7.84(113 lines)  AV=2.97  SV=4.31  BV=6.50
    {4679,1136,1048, 0, 0, 0},  //TV = 7.74(121 lines)  AV=2.97  SV=4.29  BV=6.42
    {4989,1136,1056, 0, 0, 0},  //TV = 7.65(129 lines)  AV=2.97  SV=4.31  BV=6.31
    {5375,1136,1048, 0, 0, 0},  //TV = 7.54(139 lines)  AV=2.97  SV=4.29  BV=6.22
    {5723,1136,1056, 0, 0, 0},  //TV = 7.45(148 lines)  AV=2.97  SV=4.31  BV=6.11
    {6187,1136,1056, 0, 0, 0},  //TV = 7.34(160 lines)  AV=2.97  SV=4.31  BV=6.00
    {6574,1136,1056, 0, 0, 0},  //TV = 7.25(170 lines)  AV=2.97  SV=4.31  BV=5.91
    {7115,1136,1048, 0, 0, 0},  //TV = 7.13(184 lines)  AV=2.97  SV=4.29  BV=5.81
    {7618,1136,1048, 0, 0, 0},  //TV = 7.04(197 lines)  AV=2.97  SV=4.29  BV=5.71
    {8159,1136,1048, 0, 0, 0},  //TV = 6.94(211 lines)  AV=2.97  SV=4.29  BV=5.61
    {8313,1216,1032, 0, 0, 0},  //TV = 6.91(214 lines)  AV=2.97  SV=4.37  BV=5.51
    {8313,1216,1104, 0, 0, 0},  //TV = 6.91(214 lines)  AV=2.97  SV=4.47  BV=5.41
    {8313,1328,1088, 0, 0, 0},  //TV = 6.91(214 lines)  AV=2.97  SV=4.57  BV=5.31
    {8313,1424,1080, 0, 0, 0},  //TV = 6.91(214 lines)  AV=2.97  SV=4.66  BV=5.22
    {8313,1536,1080, 0, 0, 0},  //TV = 6.91(214 lines)  AV=2.97  SV=4.77  BV=5.11
    {8313,1728,1024, 0, 0, 0},  //TV = 6.91(214 lines)  AV=2.97  SV=4.87  BV=5.02
    {8313,1840,1040, 0, 0, 0},  //TV = 6.91(214 lines)  AV=2.97  SV=4.98  BV=4.90
    {8313,1936,1056, 0, 0, 0},  //TV = 6.91(214 lines)  AV=2.97  SV=5.07  BV=4.81
    {8662,2048,1024, 0, 0, 0},  //TV = 6.85(224 lines)  AV=2.97  SV=5.11  BV=4.71
    {9281,2048,1024, 0, 0, 0},  //TV = 6.75(240 lines)  AV=2.97  SV=5.11  BV=4.61
    {9938,2048,1024, 0, 0, 0},  //TV = 6.65(257 lines)  AV=2.97  SV=5.11  BV=4.51
    {10016,2144,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.20  BV=4.41
    {10016,2240,1072, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.31  BV=4.31
    {10016,2448,1048, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.40  BV=4.21
    {10016,2656,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.51  BV=4.10
    {10016,2864,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.61  BV=4.01
    {10016,3072,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.71  BV=3.91
    {10016,3200,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.80  BV=3.81
    {10016,3456,1048, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.90  BV=3.71
    {10016,3712,1048, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.00  BV=3.61
    {10016,3968,1048, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.10  BV=3.51
    {19992,2144,1040, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=5.20  BV=3.42
    {19992,2240,1072, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=5.31  BV=3.31
    {19992,2448,1048, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=5.40  BV=3.21
    {19992,2656,1032, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=5.50  BV=3.12
    {19992,2864,1032, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=5.61  BV=3.01
    {30007,2048,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=5.12  BV=2.91
    {30007,2144,1056, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=5.22  BV=2.81
    {30007,2352,1024, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=5.31  BV=2.72
    {30007,2448,1064, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=5.42  BV=2.61
    {30007,2656,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=5.52  BV=2.51
    {30007,2864,1040, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=5.62  BV=2.41
    {30007,3072,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=5.73  BV=2.30
    {30007,3328,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=5.82  BV=2.21
    {30007,3584,1024, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=5.92  BV=2.11
    {30007,3840,1024, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.02  BV=2.01
    {30007,4096,1024, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.11  BV=1.92
    {30007,4352,1040, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.22  BV=1.81
    {30007,4736,1024, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.32  BV=1.71
    {30007,4992,1040, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.42  BV=1.61
    {30007,5376,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.51  BV=1.51
    {39983,4352,1024, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=6.20  BV=1.42
    {39983,4608,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=6.30  BV=1.31
    {39983,4992,1032, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=6.41  BV=1.21
    {49998,4224,1040, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=6.18  BV=1.12
    {49998,4608,1024, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=6.28  BV=1.01
    {60014,4096,1032, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=6.12  BV=0.91
    {60014,4352,1040, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=6.22  BV=0.81
    {60014,4608,1048, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=6.31  BV=0.72
    {69990,4224,1048, 0, 0, 0},  //TV = 3.84(1810 lines)  AV=2.97  SV=6.19  BV=0.62
    {69990,4608,1032, 0, 0, 0},  //TV = 3.84(1810 lines)  AV=2.97  SV=6.29  BV=0.52
    {80005,4352,1024, 0, 0, 0},  //TV = 3.64(2069 lines)  AV=2.97  SV=6.20  BV=0.42
    {89981,4096,1040, 0, 0, 0},  //TV = 3.47(2327 lines)  AV=2.97  SV=6.13  BV=0.31
    {89981,4352,1048, 0, 0, 0},  //TV = 3.47(2327 lines)  AV=2.97  SV=6.23  BV=0.21
    {99996,4224,1048, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.19  BV=0.10
    {99996,4608,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.29  BV=0.00
    {99996,4864,1048, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.39  BV=-0.10
    {99996,5248,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.49  BV=-0.20
    {99996,5632,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.59  BV=-0.30
    {99996,6144,1024, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.70  BV=-0.40
    {99996,6544,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.80  BV=-0.51
    {99996,7072,1024, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.90  BV=-0.61
    {99996,7472,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.99  BV=-0.70
    {99996,7936,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=7.09  BV=-0.79
    {99996,8448,1056, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=7.20  BV=-0.91
    {110011,8448,1024, 0, 0, 0},  //TV = 3.18(2845 lines)  AV=2.97  SV=7.16  BV=-1.00
    {119987,8192,1040, 0, 0, 0},  //TV = 3.06(3103 lines)  AV=2.97  SV=7.13  BV=-1.10
    {130003,8192,1032, 0, 0, 0},  //TV = 2.94(3362 lines)  AV=2.97  SV=7.12  BV=-1.21
    {140018,8192,1024, 0, 0, 0},  //TV = 2.84(3621 lines)  AV=2.97  SV=7.11  BV=-1.30
    {149994,8192,1024, 0, 0, 0},  //TV = 2.74(3879 lines)  AV=2.97  SV=7.11  BV=-1.40
    {160009,8192,1032, 0, 0, 0},  //TV = 2.64(4138 lines)  AV=2.97  SV=7.12  BV=-1.51
    {169985,8192,1040, 0, 0, 0},  //TV = 2.56(4396 lines)  AV=2.97  SV=7.13  BV=-1.61
    {180000,8192,1048, 0, 0, 0},  //TV = 2.47(4655 lines)  AV=2.97  SV=7.14  BV=-1.70
    {190015,8448,1032, 0, 0, 0},  //TV = 2.40(4914 lines)  AV=2.97  SV=7.17  BV=-1.80
    {199991,8448,1056, 0, 0, 0},  //TV = 2.32(5172 lines)  AV=2.97  SV=7.20  BV=-1.91
    {199991,9040,1056, 0, 0, 0},  //TV = 2.32(5172 lines)  AV=2.97  SV=7.30  BV=-2.00
    {199991,9696,1056, 0, 0, 0},  //TV = 2.32(5172 lines)  AV=2.97  SV=7.40  BV=-2.11
    {199991,10240,1064, 0, 0, 0},  //TV = 2.32(5172 lines)  AV=2.97  SV=7.49  BV=-2.20
    {199991,10240,1144, 0, 0, 0},  //TV = 2.32(5172 lines)  AV=2.97  SV=7.59  BV=-2.30
    {199991,10240,1224, 0, 0, 0},  //TV = 2.32(5172 lines)  AV=2.97  SV=7.69  BV=-2.40
    {199991,10240,1312, 0, 0, 0},  //TV = 2.32(5172 lines)  AV=2.97  SV=7.79  BV=-2.50
    {199991,10240,1408, 0, 0, 0},  //TV = 2.32(5172 lines)  AV=2.97  SV=7.89  BV=-2.60
    {199991,10240,1512, 0, 0, 0},  //TV = 2.32(5172 lines)  AV=2.97  SV=8.00  BV=-2.70
    {199991,10240,1616, 0, 0, 0},  //TV = 2.32(5172 lines)  AV=2.97  SV=8.09  BV=-2.80
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable1 =
{
    AETABLE_SCENE_INDEX1,    //eAETableID
    149,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    120,    //i4MaxBV
    -28,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -10,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sAEScene1PLineTable_60Hz,
    sAEScene1PLineTable_50Hz,
    NULL,
};

static strEvPline sAEScene2PLineTable_60Hz =
{
{
    {78,1424,1072, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.65  BV=11.96
    {78,1536,1056, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.74  BV=11.88
    {78,1632,1048, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.82  BV=11.80
    {117,1216,1024, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.36  BV=11.67
    {117,1216,1096, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.46  BV=11.58
    {117,1328,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.54  BV=11.49
    {117,1424,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.64  BV=11.39
    {155,1136,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.35  BV=11.28
    {155,1216,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.45  BV=11.18
    {155,1328,1072, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.55  BV=11.07
    {155,1424,1040, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.61  BV=11.02
    {194,1216,1048, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.39  BV=10.91
    {194,1328,1024, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.49  BV=10.82
    {233,1136,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.33  BV=10.71
    {233,1216,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.43  BV=10.61
    {271,1136,1056, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.31  BV=10.52
    {271,1216,1064, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.41  BV=10.41
    {310,1136,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.32  BV=10.31
    {310,1216,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.41  BV=10.21
    {349,1136,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.35  BV=10.11
    {387,1136,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.29  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {465,1136,1080, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.34  BV=9.70
    {503,1136,1064, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=4.32  BV=9.61
    {542,1136,1056, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=4.31  BV=9.52
    {581,1136,1056, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=4.31  BV=9.41
    {619,1136,1064, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=4.32  BV=9.31
    {658,1136,1080, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=4.34  BV=9.20
    {697,1136,1088, 0, 0, 0},  //TV = 10.49(18 lines)  AV=2.97  SV=4.35  BV=9.11
    {774,1136,1048, 0, 0, 0},  //TV = 10.34(20 lines)  AV=2.97  SV=4.29  BV=9.01
    {813,1136,1072, 0, 0, 0},  //TV = 10.26(21 lines)  AV=2.97  SV=4.33  BV=8.91
    {851,1216,1024, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=4.36  BV=8.81
    {929,1136,1080, 0, 0, 0},  //TV = 10.07(24 lines)  AV=2.97  SV=4.34  BV=8.71
    {1006,1136,1064, 0, 0, 0},  //TV = 9.96(26 lines)  AV=2.97  SV=4.32  BV=8.61
    {1083,1136,1064, 0, 0, 0},  //TV = 9.85(28 lines)  AV=2.97  SV=4.32  BV=8.51
    {1161,1136,1064, 0, 0, 0},  //TV = 9.75(30 lines)  AV=2.97  SV=4.32  BV=8.41
    {1238,1136,1064, 0, 0, 0},  //TV = 9.66(32 lines)  AV=2.97  SV=4.32  BV=8.31
    {1354,1136,1048, 0, 0, 0},  //TV = 9.53(35 lines)  AV=2.97  SV=4.29  BV=8.21
    {1431,1136,1056, 0, 0, 0},  //TV = 9.45(37 lines)  AV=2.97  SV=4.31  BV=8.11
    {1547,1136,1056, 0, 0, 0},  //TV = 9.34(40 lines)  AV=2.97  SV=4.31  BV=8.00
    {1625,1136,1072, 0, 0, 0},  //TV = 9.27(42 lines)  AV=2.97  SV=4.33  BV=7.91
    {1741,1136,1072, 0, 0, 0},  //TV = 9.17(45 lines)  AV=2.97  SV=4.33  BV=7.81
    {1895,1136,1056, 0, 0, 0},  //TV = 9.04(49 lines)  AV=2.97  SV=4.31  BV=7.71
    {2011,1136,1064, 0, 0, 0},  //TV = 8.96(52 lines)  AV=2.97  SV=4.32  BV=7.61
    {2166,1136,1064, 0, 0, 0},  //TV = 8.85(56 lines)  AV=2.97  SV=4.32  BV=7.51
    {2321,1136,1064, 0, 0, 0},  //TV = 8.75(60 lines)  AV=2.97  SV=4.32  BV=7.41
    {2514,1136,1048, 0, 0, 0},  //TV = 8.64(65 lines)  AV=2.97  SV=4.29  BV=7.31
    {2669,1136,1056, 0, 0, 0},  //TV = 8.55(69 lines)  AV=2.97  SV=4.31  BV=7.22
    {2862,1136,1056, 0, 0, 0},  //TV = 8.45(74 lines)  AV=2.97  SV=4.31  BV=7.11
    {3094,1136,1048, 0, 0, 0},  //TV = 8.34(80 lines)  AV=2.97  SV=4.29  BV=7.01
    {3287,1136,1056, 0, 0, 0},  //TV = 8.25(85 lines)  AV=2.97  SV=4.31  BV=6.91
    {3558,1136,1056, 0, 0, 0},  //TV = 8.13(92 lines)  AV=2.97  SV=4.31  BV=6.80
    {3790,1136,1056, 0, 0, 0},  //TV = 8.04(98 lines)  AV=2.97  SV=4.31  BV=6.71
    {4061,1136,1056, 0, 0, 0},  //TV = 7.94(105 lines)  AV=2.97  SV=4.31  BV=6.61
    {4370,1136,1056, 0, 0, 0},  //TV = 7.84(113 lines)  AV=2.97  SV=4.31  BV=6.50
    {4679,1136,1048, 0, 0, 0},  //TV = 7.74(121 lines)  AV=2.97  SV=4.29  BV=6.42
    {4989,1136,1056, 0, 0, 0},  //TV = 7.65(129 lines)  AV=2.97  SV=4.31  BV=6.31
    {5375,1136,1048, 0, 0, 0},  //TV = 7.54(139 lines)  AV=2.97  SV=4.29  BV=6.22
    {5723,1136,1056, 0, 0, 0},  //TV = 7.45(148 lines)  AV=2.97  SV=4.31  BV=6.11
    {6187,1136,1056, 0, 0, 0},  //TV = 7.34(160 lines)  AV=2.97  SV=4.31  BV=6.00
    {6574,1136,1056, 0, 0, 0},  //TV = 7.25(170 lines)  AV=2.97  SV=4.31  BV=5.91
    {7115,1136,1048, 0, 0, 0},  //TV = 7.13(184 lines)  AV=2.97  SV=4.29  BV=5.81
    {7618,1136,1048, 0, 0, 0},  //TV = 7.04(197 lines)  AV=2.97  SV=4.29  BV=5.71
    {8159,1136,1048, 0, 0, 0},  //TV = 6.94(211 lines)  AV=2.97  SV=4.29  BV=5.61
    {8314,1216,1032, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.37  BV=5.51
    {8314,1216,1104, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.47  BV=5.41
    {8314,1328,1088, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.57  BV=5.31
    {8314,1424,1080, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.66  BV=5.22
    {8314,1536,1080, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.77  BV=5.11
    {8314,1728,1024, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.87  BV=5.02
    {8314,1840,1032, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.97  BV=4.91
    {8314,1936,1056, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.07  BV=4.81
    {8314,2048,1072, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.18  BV=4.70
    {8314,2240,1048, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.27  BV=4.61
    {8314,2448,1024, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.37  BV=4.51
    {8314,2560,1048, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.47  BV=4.41
    {8314,2752,1056, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.58  BV=4.30
    {8314,2960,1048, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.68  BV=4.21
    {8314,3200,1032, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.77  BV=4.11
    {8314,3456,1024, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.87  BV=4.02
    {8314,3712,1032, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.98  BV=3.90
    {8314,3968,1032, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=6.08  BV=3.80
    {8314,4224,1032, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=6.17  BV=3.71
    {8314,4480,1040, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=6.26  BV=3.62
    {8314,4864,1032, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=6.37  BV=3.51
    {8314,5248,1024, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=6.47  BV=3.41
    {8314,5632,1024, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=6.57  BV=3.31
    {8314,6016,1024, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=6.67  BV=3.22
    {8314,6384,1040, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=6.77  BV=3.11
    {8314,6896,1032, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=6.87  BV=3.01
    {8314,7280,1040, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=6.96  BV=2.92
    {8314,7936,1024, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=7.07  BV=2.82
    {16666,4224,1032, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=6.17  BV=2.71
    {16666,4480,1040, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=6.26  BV=2.62
    {16666,4864,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=6.36  BV=2.52
    {16666,5120,1048, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=6.47  BV=2.41
    {16666,5504,1040, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=6.56  BV=2.32
    {16666,6016,1032, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=6.68  BV=2.20
    {24980,4224,1048, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=6.19  BV=2.11
    {24980,4608,1032, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=6.29  BV=2.00
    {24980,4864,1048, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=6.39  BV=1.90
    {24980,5248,1040, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=6.49  BV=1.80
    {33332,4224,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.17  BV=1.71
    {33332,4480,1040, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.26  BV=1.62
    {33332,4864,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.37  BV=1.51
    {33332,5248,1024, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.47  BV=1.41
    {33332,5632,1024, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.57  BV=1.31
    {33332,6016,1024, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.67  BV=1.21
    {33332,6384,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.76  BV=1.12
    {33332,6896,1024, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.86  BV=1.02
    {33332,7280,1040, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=6.96  BV=0.91
    {33332,7936,1024, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=7.07  BV=0.81
    {33332,8448,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=7.17  BV=0.71
    {33332,9040,1040, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=7.28  BV=0.60
    {33332,9696,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=7.37  BV=0.51
    {33332,10240,1048, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=7.47  BV=0.41
    {33332,10240,1128, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=7.57  BV=0.31
    {33332,10240,1208, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=7.67  BV=0.21
    {33332,10240,1296, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=7.77  BV=0.10
    {33332,10240,1392, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=7.88  BV=0.00
    {33332,10240,1496, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=7.98  BV=-0.10
    {33332,10240,1600, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=8.08  BV=-0.20
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene2PLineTable_50Hz =
{
{
    {78,1424,1072, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.65  BV=11.96
    {78,1536,1056, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.74  BV=11.88
    {78,1632,1048, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.82  BV=11.80
    {117,1216,1024, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.36  BV=11.67
    {117,1216,1096, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.46  BV=11.58
    {117,1328,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.54  BV=11.49
    {117,1424,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.64  BV=11.39
    {155,1136,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.35  BV=11.28
    {155,1216,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.45  BV=11.18
    {155,1328,1072, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.55  BV=11.07
    {155,1424,1040, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.61  BV=11.02
    {194,1216,1048, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.39  BV=10.91
    {194,1328,1024, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.49  BV=10.82
    {233,1136,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.33  BV=10.71
    {233,1216,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.43  BV=10.61
    {271,1136,1056, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.31  BV=10.52
    {271,1216,1064, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.41  BV=10.41
    {310,1136,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.32  BV=10.31
    {310,1216,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.41  BV=10.21
    {349,1136,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.35  BV=10.11
    {387,1136,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.29  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {465,1136,1080, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.34  BV=9.70
    {503,1136,1064, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=4.32  BV=9.61
    {542,1136,1056, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=4.31  BV=9.52
    {581,1136,1056, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=4.31  BV=9.41
    {619,1136,1064, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=4.32  BV=9.31
    {658,1136,1080, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=4.34  BV=9.20
    {697,1136,1088, 0, 0, 0},  //TV = 10.49(18 lines)  AV=2.97  SV=4.35  BV=9.11
    {774,1136,1048, 0, 0, 0},  //TV = 10.34(20 lines)  AV=2.97  SV=4.29  BV=9.01
    {813,1136,1072, 0, 0, 0},  //TV = 10.26(21 lines)  AV=2.97  SV=4.33  BV=8.91
    {851,1216,1024, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=4.36  BV=8.81
    {929,1136,1080, 0, 0, 0},  //TV = 10.07(24 lines)  AV=2.97  SV=4.34  BV=8.71
    {1006,1136,1064, 0, 0, 0},  //TV = 9.96(26 lines)  AV=2.97  SV=4.32  BV=8.61
    {1083,1136,1064, 0, 0, 0},  //TV = 9.85(28 lines)  AV=2.97  SV=4.32  BV=8.51
    {1161,1136,1064, 0, 0, 0},  //TV = 9.75(30 lines)  AV=2.97  SV=4.32  BV=8.41
    {1238,1136,1064, 0, 0, 0},  //TV = 9.66(32 lines)  AV=2.97  SV=4.32  BV=8.31
    {1354,1136,1048, 0, 0, 0},  //TV = 9.53(35 lines)  AV=2.97  SV=4.29  BV=8.21
    {1431,1136,1056, 0, 0, 0},  //TV = 9.45(37 lines)  AV=2.97  SV=4.31  BV=8.11
    {1547,1136,1056, 0, 0, 0},  //TV = 9.34(40 lines)  AV=2.97  SV=4.31  BV=8.00
    {1625,1136,1072, 0, 0, 0},  //TV = 9.27(42 lines)  AV=2.97  SV=4.33  BV=7.91
    {1741,1136,1072, 0, 0, 0},  //TV = 9.17(45 lines)  AV=2.97  SV=4.33  BV=7.81
    {1895,1136,1056, 0, 0, 0},  //TV = 9.04(49 lines)  AV=2.97  SV=4.31  BV=7.71
    {2011,1136,1064, 0, 0, 0},  //TV = 8.96(52 lines)  AV=2.97  SV=4.32  BV=7.61
    {2166,1136,1064, 0, 0, 0},  //TV = 8.85(56 lines)  AV=2.97  SV=4.32  BV=7.51
    {2321,1136,1064, 0, 0, 0},  //TV = 8.75(60 lines)  AV=2.97  SV=4.32  BV=7.41
    {2514,1136,1048, 0, 0, 0},  //TV = 8.64(65 lines)  AV=2.97  SV=4.29  BV=7.31
    {2669,1136,1056, 0, 0, 0},  //TV = 8.55(69 lines)  AV=2.97  SV=4.31  BV=7.22
    {2862,1136,1056, 0, 0, 0},  //TV = 8.45(74 lines)  AV=2.97  SV=4.31  BV=7.11
    {3094,1136,1048, 0, 0, 0},  //TV = 8.34(80 lines)  AV=2.97  SV=4.29  BV=7.01
    {3287,1136,1056, 0, 0, 0},  //TV = 8.25(85 lines)  AV=2.97  SV=4.31  BV=6.91
    {3558,1136,1056, 0, 0, 0},  //TV = 8.13(92 lines)  AV=2.97  SV=4.31  BV=6.80
    {3790,1136,1056, 0, 0, 0},  //TV = 8.04(98 lines)  AV=2.97  SV=4.31  BV=6.71
    {4061,1136,1056, 0, 0, 0},  //TV = 7.94(105 lines)  AV=2.97  SV=4.31  BV=6.61
    {4370,1136,1056, 0, 0, 0},  //TV = 7.84(113 lines)  AV=2.97  SV=4.31  BV=6.50
    {4679,1136,1048, 0, 0, 0},  //TV = 7.74(121 lines)  AV=2.97  SV=4.29  BV=6.42
    {4989,1136,1056, 0, 0, 0},  //TV = 7.65(129 lines)  AV=2.97  SV=4.31  BV=6.31
    {5375,1136,1048, 0, 0, 0},  //TV = 7.54(139 lines)  AV=2.97  SV=4.29  BV=6.22
    {5723,1136,1056, 0, 0, 0},  //TV = 7.45(148 lines)  AV=2.97  SV=4.31  BV=6.11
    {6187,1136,1056, 0, 0, 0},  //TV = 7.34(160 lines)  AV=2.97  SV=4.31  BV=6.00
    {6574,1136,1056, 0, 0, 0},  //TV = 7.25(170 lines)  AV=2.97  SV=4.31  BV=5.91
    {7115,1136,1048, 0, 0, 0},  //TV = 7.13(184 lines)  AV=2.97  SV=4.29  BV=5.81
    {7618,1136,1048, 0, 0, 0},  //TV = 7.04(197 lines)  AV=2.97  SV=4.29  BV=5.71
    {8159,1136,1048, 0, 0, 0},  //TV = 6.94(211 lines)  AV=2.97  SV=4.29  BV=5.61
    {8739,1136,1048, 0, 0, 0},  //TV = 6.84(226 lines)  AV=2.97  SV=4.29  BV=5.51
    {9358,1136,1048, 0, 0, 0},  //TV = 6.74(242 lines)  AV=2.97  SV=4.29  BV=5.42
    {10016,1136,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.31  BV=5.31
    {10016,1216,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.40  BV=5.21
    {10016,1328,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.50  BV=5.12
    {10016,1424,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.60  BV=5.01
    {10016,1536,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.70  BV=4.92
    {10016,1632,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.79  BV=4.82
    {10016,1728,1048, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.90  BV=4.71
    {10016,1840,1064, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.01  BV=4.60
    {10016,1936,1080, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.11  BV=4.51
    {10016,2144,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.20  BV=4.41
    {10016,2240,1072, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.31  BV=4.31
    {10016,2448,1048, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.40  BV=4.21
    {10016,2656,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.50  BV=4.12
    {10016,2864,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.59  BV=4.02
    {10016,3072,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.70  BV=3.92
    {10016,3200,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.80  BV=3.81
    {10016,3456,1048, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.90  BV=3.71
    {10016,3712,1048, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.00  BV=3.61
    {10016,3968,1048, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.10  BV=3.51
    {10016,4352,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.20  BV=3.41
    {10016,4608,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.30  BV=3.31
    {10016,4992,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.41  BV=3.20
    {10016,5376,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.50  BV=3.11
    {10016,5760,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.60  BV=3.01
    {10016,6144,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.70  BV=2.92
    {10016,6544,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.80  BV=2.81
    {10016,7072,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=6.90  BV=2.71
    {10016,7472,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=7.00  BV=2.61
    {10016,7936,1048, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=7.10  BV=2.51
    {19992,4352,1024, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=6.20  BV=2.42
    {19992,4608,1040, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=6.30  BV=2.31
    {19992,4992,1024, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=6.40  BV=2.22
    {19992,5376,1024, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=6.50  BV=2.11
    {19992,5760,1032, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=6.61  BV=2.00
    {30007,4096,1024, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.11  BV=1.92
    {30007,4352,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.21  BV=1.82
    {30007,4608,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.31  BV=1.72
    {30007,4992,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.43  BV=1.60
    {30007,5376,1040, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.53  BV=1.50
    {30007,5760,1040, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.63  BV=1.40
    {30007,6240,1024, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.72  BV=1.31
    {30007,6704,1024, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.82  BV=1.21
    {30007,7072,1040, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=6.92  BV=1.11
    {30007,7696,1024, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.02  BV=1.01
    {30007,8192,1024, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.11  BV=0.92
    {30007,8720,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.21  BV=0.82
    {30007,9344,1040, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.32  BV=0.71
    {30007,10080,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.42  BV=0.61
    {30007,10240,1088, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.52  BV=0.51
    {30007,10240,1168, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.62  BV=0.41
    {30007,10240,1248, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.72  BV=0.31
    {30007,10240,1344, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.83  BV=0.20
    {30007,10240,1432, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=7.92  BV=0.11
    {30007,10240,1552, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=8.03  BV=-0.00
    {30007,10240,1664, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=8.13  BV=-0.10
    {30007,10240,1776, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=8.23  BV=-0.20
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable2 =
{
    AETABLE_SCENE_INDEX2,    //eAETableID
    123,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    120,    //i4MaxBV
    -2,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sAEScene2PLineTable_60Hz,
    sAEScene2PLineTable_50Hz,
    NULL,
};

static strEvPline sAEScene3PLineTable_60Hz =
{
{
    {78,1424,1072, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.65  BV=11.96
    {78,1536,1056, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.74  BV=11.88
    {78,1632,1048, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.82  BV=11.80
    {117,1216,1024, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.36  BV=11.67
    {117,1216,1096, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.46  BV=11.58
    {117,1328,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.54  BV=11.49
    {117,1424,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.64  BV=11.39
    {155,1136,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.35  BV=11.28
    {155,1216,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.45  BV=11.18
    {155,1328,1072, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.55  BV=11.07
    {155,1424,1040, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.61  BV=11.02
    {194,1216,1048, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.39  BV=10.91
    {194,1328,1024, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.49  BV=10.82
    {233,1136,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.33  BV=10.71
    {233,1216,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.43  BV=10.61
    {271,1136,1056, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.31  BV=10.52
    {271,1216,1064, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.41  BV=10.41
    {310,1136,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.32  BV=10.31
    {310,1216,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.41  BV=10.21
    {349,1136,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.35  BV=10.11
    {387,1136,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.29  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {465,1136,1080, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.34  BV=9.70
    {503,1136,1064, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=4.32  BV=9.61
    {542,1136,1056, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=4.31  BV=9.52
    {581,1136,1056, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=4.31  BV=9.41
    {619,1136,1064, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=4.32  BV=9.31
    {658,1136,1080, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=4.34  BV=9.20
    {697,1136,1088, 0, 0, 0},  //TV = 10.49(18 lines)  AV=2.97  SV=4.35  BV=9.11
    {774,1136,1048, 0, 0, 0},  //TV = 10.34(20 lines)  AV=2.97  SV=4.29  BV=9.01
    {813,1136,1072, 0, 0, 0},  //TV = 10.26(21 lines)  AV=2.97  SV=4.33  BV=8.91
    {851,1216,1024, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=4.36  BV=8.81
    {929,1136,1080, 0, 0, 0},  //TV = 10.07(24 lines)  AV=2.97  SV=4.34  BV=8.71
    {1006,1136,1064, 0, 0, 0},  //TV = 9.96(26 lines)  AV=2.97  SV=4.32  BV=8.61
    {1083,1136,1064, 0, 0, 0},  //TV = 9.85(28 lines)  AV=2.97  SV=4.32  BV=8.51
    {1161,1136,1064, 0, 0, 0},  //TV = 9.75(30 lines)  AV=2.97  SV=4.32  BV=8.41
    {1238,1136,1064, 0, 0, 0},  //TV = 9.66(32 lines)  AV=2.97  SV=4.32  BV=8.31
    {1354,1136,1048, 0, 0, 0},  //TV = 9.53(35 lines)  AV=2.97  SV=4.29  BV=8.21
    {1431,1136,1056, 0, 0, 0},  //TV = 9.45(37 lines)  AV=2.97  SV=4.31  BV=8.11
    {1547,1136,1056, 0, 0, 0},  //TV = 9.34(40 lines)  AV=2.97  SV=4.31  BV=8.00
    {1625,1136,1072, 0, 0, 0},  //TV = 9.27(42 lines)  AV=2.97  SV=4.33  BV=7.91
    {1741,1136,1072, 0, 0, 0},  //TV = 9.17(45 lines)  AV=2.97  SV=4.33  BV=7.81
    {1895,1136,1056, 0, 0, 0},  //TV = 9.04(49 lines)  AV=2.97  SV=4.31  BV=7.71
    {2011,1136,1064, 0, 0, 0},  //TV = 8.96(52 lines)  AV=2.97  SV=4.32  BV=7.61
    {2166,1136,1064, 0, 0, 0},  //TV = 8.85(56 lines)  AV=2.97  SV=4.32  BV=7.51
    {2321,1136,1064, 0, 0, 0},  //TV = 8.75(60 lines)  AV=2.97  SV=4.32  BV=7.41
    {2514,1136,1048, 0, 0, 0},  //TV = 8.64(65 lines)  AV=2.97  SV=4.29  BV=7.31
    {2669,1136,1056, 0, 0, 0},  //TV = 8.55(69 lines)  AV=2.97  SV=4.31  BV=7.22
    {2862,1136,1056, 0, 0, 0},  //TV = 8.45(74 lines)  AV=2.97  SV=4.31  BV=7.11
    {3094,1136,1048, 0, 0, 0},  //TV = 8.34(80 lines)  AV=2.97  SV=4.29  BV=7.01
    {3287,1136,1056, 0, 0, 0},  //TV = 8.25(85 lines)  AV=2.97  SV=4.31  BV=6.91
    {3558,1136,1056, 0, 0, 0},  //TV = 8.13(92 lines)  AV=2.97  SV=4.31  BV=6.80
    {3790,1136,1056, 0, 0, 0},  //TV = 8.04(98 lines)  AV=2.97  SV=4.31  BV=6.71
    {4061,1136,1056, 0, 0, 0},  //TV = 7.94(105 lines)  AV=2.97  SV=4.31  BV=6.61
    {4370,1136,1056, 0, 0, 0},  //TV = 7.84(113 lines)  AV=2.97  SV=4.31  BV=6.50
    {4679,1136,1048, 0, 0, 0},  //TV = 7.74(121 lines)  AV=2.97  SV=4.29  BV=6.42
    {4989,1136,1056, 0, 0, 0},  //TV = 7.65(129 lines)  AV=2.97  SV=4.31  BV=6.31
    {5375,1136,1048, 0, 0, 0},  //TV = 7.54(139 lines)  AV=2.97  SV=4.29  BV=6.22
    {5723,1136,1056, 0, 0, 0},  //TV = 7.45(148 lines)  AV=2.97  SV=4.31  BV=6.11
    {6187,1136,1056, 0, 0, 0},  //TV = 7.34(160 lines)  AV=2.97  SV=4.31  BV=6.00
    {6574,1136,1056, 0, 0, 0},  //TV = 7.25(170 lines)  AV=2.97  SV=4.31  BV=5.91
    {7115,1136,1048, 0, 0, 0},  //TV = 7.13(184 lines)  AV=2.97  SV=4.29  BV=5.81
    {7618,1136,1048, 0, 0, 0},  //TV = 7.04(197 lines)  AV=2.97  SV=4.29  BV=5.71
    {8159,1136,1048, 0, 0, 0},  //TV = 6.94(211 lines)  AV=2.97  SV=4.29  BV=5.61
    {8314,1216,1032, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.37  BV=5.51
    {8314,1216,1104, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.47  BV=5.41
    {8314,1328,1096, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.58  BV=5.30
    {8314,1424,1080, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.66  BV=5.22
    {8314,1536,1088, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.78  BV=5.10
    {8314,1728,1024, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.87  BV=5.02
    {8314,1840,1040, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.98  BV=4.90
    {8314,1936,1056, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.07  BV=4.81
    {8314,2048,1064, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.17  BV=4.71
    {8314,2240,1048, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.27  BV=4.61
    {16666,1216,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.36  BV=4.52
    {16666,1216,1104, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.47  BV=4.41
    {16666,1328,1088, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.57  BV=4.30
    {16666,1424,1080, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.66  BV=4.21
    {16666,1536,1080, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.77  BV=4.10
    {16666,1728,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.87  BV=4.01
    {24980,1216,1040, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.38  BV=3.91
    {24980,1216,1112, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.48  BV=3.82
    {24980,1328,1096, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.58  BV=3.71
    {24980,1424,1096, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.68  BV=3.61
    {33332,1216,1024, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=4.36  BV=3.52
    {33332,1216,1104, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=4.47  BV=3.41
    {33332,1328,1080, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=4.56  BV=3.31
    {33332,1424,1080, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=4.66  BV=3.21
    {33332,1536,1072, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=4.76  BV=3.12
    {33332,1728,1024, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=4.87  BV=3.01
    {33332,1840,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=4.97  BV=2.91
    {33332,1936,1048, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=5.06  BV=2.81
    {33332,2048,1064, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=5.17  BV=2.71
    {33332,2240,1040, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=5.26  BV=2.62
    {33332,2352,1064, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=5.37  BV=2.51
    {41646,2048,1048, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.14  BV=2.41
    {41646,2240,1024, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.24  BV=2.32
    {41646,2352,1048, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.34  BV=2.21
    {49998,2144,1032, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=5.19  BV=2.10
    {49998,2240,1056, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=5.28  BV=2.01
    {58312,2048,1064, 0, 0, 0},  //TV = 4.10(1508 lines)  AV=2.97  SV=5.17  BV=1.90
    {58312,2240,1040, 0, 0, 0},  //TV = 4.10(1508 lines)  AV=2.97  SV=5.26  BV=1.81
    {66664,2048,1064, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.17  BV=1.71
    {66664,2240,1048, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.27  BV=1.60
    {66664,2448,1024, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.37  BV=1.51
    {66664,2560,1048, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.47  BV=1.41
    {66664,2752,1048, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.57  BV=1.31
    {66664,2960,1040, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.66  BV=1.21
    {66664,3200,1032, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.77  BV=1.11
    {66664,3456,1024, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.87  BV=1.01
    {66664,3584,1056, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=5.96  BV=0.92
    {66664,3968,1032, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=6.08  BV=0.80
    {66664,4224,1032, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=6.17  BV=0.71
    {66664,4480,1040, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=6.26  BV=0.62
    {74978,4352,1024, 0, 0, 0},  //TV = 3.74(1939 lines)  AV=2.97  SV=6.20  BV=0.51
    {83330,4096,1048, 0, 0, 0},  //TV = 3.59(2155 lines)  AV=2.97  SV=6.14  BV=0.41
    {91644,3968,1056, 0, 0, 0},  //TV = 3.45(2370 lines)  AV=2.97  SV=6.11  BV=0.31
    {91644,4352,1032, 0, 0, 0},  //TV = 3.45(2370 lines)  AV=2.97  SV=6.21  BV=0.21
    {99996,4224,1048, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.19  BV=0.10
    {99996,4608,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.29  BV=0.00
    {99996,4864,1048, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.39  BV=-0.10
    {99996,5248,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.49  BV=-0.20
    {99996,5632,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.59  BV=-0.30
    {99996,6144,1024, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.70  BV=-0.40
    {99996,6544,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.80  BV=-0.51
    {99996,7072,1024, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.90  BV=-0.61
    {99996,7472,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.99  BV=-0.70
    {99996,7936,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=7.09  BV=-0.79
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene3PLineTable_50Hz =
{
{
    {78,1424,1072, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.65  BV=11.96
    {78,1536,1056, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.74  BV=11.88
    {78,1632,1048, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.82  BV=11.80
    {117,1216,1024, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.36  BV=11.67
    {117,1216,1096, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.46  BV=11.58
    {117,1328,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.54  BV=11.49
    {117,1424,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.64  BV=11.39
    {155,1136,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.35  BV=11.28
    {155,1216,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.45  BV=11.18
    {155,1328,1072, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.55  BV=11.07
    {155,1424,1040, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.61  BV=11.02
    {194,1216,1048, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.39  BV=10.91
    {194,1328,1024, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.49  BV=10.82
    {233,1136,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.33  BV=10.71
    {233,1216,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.43  BV=10.61
    {271,1136,1056, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.31  BV=10.52
    {271,1216,1064, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.41  BV=10.41
    {310,1136,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.32  BV=10.31
    {310,1216,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.41  BV=10.21
    {349,1136,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.35  BV=10.11
    {387,1136,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.29  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {465,1136,1080, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.34  BV=9.70
    {503,1136,1064, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=4.32  BV=9.61
    {542,1136,1056, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=4.31  BV=9.52
    {581,1136,1056, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=4.31  BV=9.41
    {619,1136,1064, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=4.32  BV=9.31
    {658,1136,1080, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=4.34  BV=9.20
    {697,1136,1088, 0, 0, 0},  //TV = 10.49(18 lines)  AV=2.97  SV=4.35  BV=9.11
    {774,1136,1048, 0, 0, 0},  //TV = 10.34(20 lines)  AV=2.97  SV=4.29  BV=9.01
    {813,1136,1072, 0, 0, 0},  //TV = 10.26(21 lines)  AV=2.97  SV=4.33  BV=8.91
    {851,1216,1024, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=4.36  BV=8.81
    {929,1136,1080, 0, 0, 0},  //TV = 10.07(24 lines)  AV=2.97  SV=4.34  BV=8.71
    {1006,1136,1064, 0, 0, 0},  //TV = 9.96(26 lines)  AV=2.97  SV=4.32  BV=8.61
    {1083,1136,1064, 0, 0, 0},  //TV = 9.85(28 lines)  AV=2.97  SV=4.32  BV=8.51
    {1161,1136,1064, 0, 0, 0},  //TV = 9.75(30 lines)  AV=2.97  SV=4.32  BV=8.41
    {1238,1136,1064, 0, 0, 0},  //TV = 9.66(32 lines)  AV=2.97  SV=4.32  BV=8.31
    {1354,1136,1048, 0, 0, 0},  //TV = 9.53(35 lines)  AV=2.97  SV=4.29  BV=8.21
    {1431,1136,1056, 0, 0, 0},  //TV = 9.45(37 lines)  AV=2.97  SV=4.31  BV=8.11
    {1547,1136,1056, 0, 0, 0},  //TV = 9.34(40 lines)  AV=2.97  SV=4.31  BV=8.00
    {1625,1136,1072, 0, 0, 0},  //TV = 9.27(42 lines)  AV=2.97  SV=4.33  BV=7.91
    {1741,1136,1072, 0, 0, 0},  //TV = 9.17(45 lines)  AV=2.97  SV=4.33  BV=7.81
    {1895,1136,1056, 0, 0, 0},  //TV = 9.04(49 lines)  AV=2.97  SV=4.31  BV=7.71
    {2011,1136,1064, 0, 0, 0},  //TV = 8.96(52 lines)  AV=2.97  SV=4.32  BV=7.61
    {2166,1136,1064, 0, 0, 0},  //TV = 8.85(56 lines)  AV=2.97  SV=4.32  BV=7.51
    {2321,1136,1064, 0, 0, 0},  //TV = 8.75(60 lines)  AV=2.97  SV=4.32  BV=7.41
    {2514,1136,1048, 0, 0, 0},  //TV = 8.64(65 lines)  AV=2.97  SV=4.29  BV=7.31
    {2669,1136,1056, 0, 0, 0},  //TV = 8.55(69 lines)  AV=2.97  SV=4.31  BV=7.22
    {2862,1136,1056, 0, 0, 0},  //TV = 8.45(74 lines)  AV=2.97  SV=4.31  BV=7.11
    {3094,1136,1048, 0, 0, 0},  //TV = 8.34(80 lines)  AV=2.97  SV=4.29  BV=7.01
    {3287,1136,1056, 0, 0, 0},  //TV = 8.25(85 lines)  AV=2.97  SV=4.31  BV=6.91
    {3558,1136,1056, 0, 0, 0},  //TV = 8.13(92 lines)  AV=2.97  SV=4.31  BV=6.80
    {3790,1136,1056, 0, 0, 0},  //TV = 8.04(98 lines)  AV=2.97  SV=4.31  BV=6.71
    {4061,1136,1056, 0, 0, 0},  //TV = 7.94(105 lines)  AV=2.97  SV=4.31  BV=6.61
    {4370,1136,1056, 0, 0, 0},  //TV = 7.84(113 lines)  AV=2.97  SV=4.31  BV=6.50
    {4679,1136,1048, 0, 0, 0},  //TV = 7.74(121 lines)  AV=2.97  SV=4.29  BV=6.42
    {4989,1136,1056, 0, 0, 0},  //TV = 7.65(129 lines)  AV=2.97  SV=4.31  BV=6.31
    {5375,1136,1048, 0, 0, 0},  //TV = 7.54(139 lines)  AV=2.97  SV=4.29  BV=6.22
    {5723,1136,1056, 0, 0, 0},  //TV = 7.45(148 lines)  AV=2.97  SV=4.31  BV=6.11
    {6187,1136,1056, 0, 0, 0},  //TV = 7.34(160 lines)  AV=2.97  SV=4.31  BV=6.00
    {6574,1136,1056, 0, 0, 0},  //TV = 7.25(170 lines)  AV=2.97  SV=4.31  BV=5.91
    {7115,1136,1048, 0, 0, 0},  //TV = 7.13(184 lines)  AV=2.97  SV=4.29  BV=5.81
    {7618,1136,1048, 0, 0, 0},  //TV = 7.04(197 lines)  AV=2.97  SV=4.29  BV=5.71
    {8159,1136,1048, 0, 0, 0},  //TV = 6.94(211 lines)  AV=2.97  SV=4.29  BV=5.61
    {8739,1136,1048, 0, 0, 0},  //TV = 6.84(226 lines)  AV=2.97  SV=4.29  BV=5.51
    {9358,1136,1048, 0, 0, 0},  //TV = 6.74(242 lines)  AV=2.97  SV=4.29  BV=5.42
    {10016,1136,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.31  BV=5.31
    {10016,1216,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.40  BV=5.21
    {10016,1328,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.50  BV=5.12
    {10016,1424,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.60  BV=5.01
    {10016,1536,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.70  BV=4.92
    {10016,1632,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.79  BV=4.82
    {10016,1728,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.91  BV=4.70
    {10016,1840,1064, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.01  BV=4.60
    {10016,1936,1080, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.11  BV=4.51
    {10016,2144,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.20  BV=4.41
    {19992,1136,1056, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.31  BV=4.31
    {19992,1216,1056, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.40  BV=4.21
    {19992,1328,1040, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.51  BV=4.11
    {19992,1424,1040, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.61  BV=4.01
    {19992,1536,1032, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.71  BV=3.91
    {19992,1632,1040, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.81  BV=3.81
    {30007,1136,1064, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.32  BV=3.71
    {30007,1216,1064, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.41  BV=3.62
    {30007,1328,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.52  BV=3.51
    {30007,1424,1056, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.63  BV=3.40
    {30007,1536,1040, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.72  BV=3.31
    {30007,1632,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.82  BV=3.21
    {30007,1728,1064, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.92  BV=3.11
    {30007,1840,1072, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=5.02  BV=3.01
    {30007,2048,1032, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=5.12  BV=2.91
    {30007,2144,1056, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=5.22  BV=2.81
    {30007,2352,1024, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=5.31  BV=2.72
    {30007,2448,1064, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=5.42  BV=2.61
    {30007,2656,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=5.52  BV=2.51
    {39983,2144,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.20  BV=2.42
    {39983,2240,1064, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.30  BV=2.32
    {39983,2448,1048, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.40  BV=2.21
    {49998,2144,1032, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=5.19  BV=2.10
    {49998,2240,1056, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=5.28  BV=2.01
    {60014,2048,1032, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.12  BV=1.91
    {60014,2144,1048, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.21  BV=1.82
    {60014,2352,1024, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.31  BV=1.72
    {60014,2448,1064, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.42  BV=1.61
    {60014,2656,1048, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.52  BV=1.51
    {60014,2864,1040, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.62  BV=1.41
    {60014,3072,1048, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.73  BV=1.30
    {60014,3328,1032, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.82  BV=1.21
    {60014,3584,1024, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=5.92  BV=1.11
    {60014,3840,1024, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=6.02  BV=1.01
    {60014,4096,1024, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=6.11  BV=0.92
    {60014,4352,1040, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=6.22  BV=0.81
    {60014,4736,1024, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=6.32  BV=0.71
    {69990,4352,1024, 0, 0, 0},  //TV = 3.84(1810 lines)  AV=2.97  SV=6.20  BV=0.61
    {69990,4608,1032, 0, 0, 0},  //TV = 3.84(1810 lines)  AV=2.97  SV=6.29  BV=0.52
    {80005,4352,1024, 0, 0, 0},  //TV = 3.64(2069 lines)  AV=2.97  SV=6.20  BV=0.42
    {89981,4096,1040, 0, 0, 0},  //TV = 3.47(2327 lines)  AV=2.97  SV=6.13  BV=0.31
    {89981,4352,1048, 0, 0, 0},  //TV = 3.47(2327 lines)  AV=2.97  SV=6.23  BV=0.21
    {99996,4224,1048, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.19  BV=0.10
    {99996,4608,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.29  BV=0.00
    {99996,4864,1048, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.39  BV=-0.10
    {99996,5248,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.49  BV=-0.20
    {99996,5632,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.59  BV=-0.30
    {99996,6144,1024, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.70  BV=-0.40
    {99996,6544,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.80  BV=-0.51
    {99996,7072,1024, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.90  BV=-0.61
    {99996,7472,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.99  BV=-0.70
    {99996,7936,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=7.09  BV=-0.79
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable3 =
{
    AETABLE_SCENE_INDEX3,    //eAETableID
    129,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    120,    //i4MaxBV
    -8,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sAEScene3PLineTable_60Hz,
    sAEScene3PLineTable_50Hz,
    NULL,
};

static strEvPline sAEScene4PLineTable_60Hz =
{
{
    {249989,1632,1072, 0, 0, 0},  //TV = 2.00(6465 lines)  AV=2.97  SV=4.85  BV=0.12
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene4PLineTable_50Hz =
{
{
    {249989,1632,1072, 0, 0, 0},  //TV = 2.00(6465 lines)  AV=2.97  SV=4.85  BV=0.12
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable4 =
{
    AETABLE_SCENE_INDEX4,    //eAETableID
    1,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    2,    //i4MaxBV
    2,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sAEScene4PLineTable_60Hz,
    sAEScene4PLineTable_50Hz,
    NULL,
};

static strEvPline sAEScene5PLineTable_60Hz =
{
{
    {78,1424,1072, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.65  BV=11.96
    {78,1536,1056, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.74  BV=11.88
    {78,1632,1048, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.82  BV=11.80
    {117,1216,1024, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.36  BV=11.67
    {117,1216,1096, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.46  BV=11.58
    {117,1328,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.54  BV=11.49
    {117,1424,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.64  BV=11.39
    {155,1136,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.35  BV=11.28
    {155,1216,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.45  BV=11.18
    {155,1328,1072, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.55  BV=11.07
    {155,1424,1040, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.61  BV=11.02
    {194,1216,1048, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.39  BV=10.91
    {194,1328,1024, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.49  BV=10.82
    {233,1136,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.33  BV=10.71
    {233,1216,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.43  BV=10.61
    {271,1136,1056, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.31  BV=10.52
    {271,1216,1064, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.41  BV=10.41
    {310,1136,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.32  BV=10.31
    {310,1216,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.41  BV=10.21
    {349,1136,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.35  BV=10.11
    {387,1136,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.29  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {465,1136,1080, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.34  BV=9.70
    {503,1136,1064, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=4.32  BV=9.61
    {542,1136,1056, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=4.31  BV=9.52
    {581,1136,1056, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=4.31  BV=9.41
    {619,1136,1064, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=4.32  BV=9.31
    {658,1136,1080, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=4.34  BV=9.20
    {697,1136,1088, 0, 0, 0},  //TV = 10.49(18 lines)  AV=2.97  SV=4.35  BV=9.11
    {774,1136,1048, 0, 0, 0},  //TV = 10.34(20 lines)  AV=2.97  SV=4.29  BV=9.01
    {813,1136,1072, 0, 0, 0},  //TV = 10.26(21 lines)  AV=2.97  SV=4.33  BV=8.91
    {851,1216,1024, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=4.36  BV=8.81
    {929,1136,1080, 0, 0, 0},  //TV = 10.07(24 lines)  AV=2.97  SV=4.34  BV=8.71
    {1006,1136,1064, 0, 0, 0},  //TV = 9.96(26 lines)  AV=2.97  SV=4.32  BV=8.61
    {1083,1136,1064, 0, 0, 0},  //TV = 9.85(28 lines)  AV=2.97  SV=4.32  BV=8.51
    {1161,1136,1064, 0, 0, 0},  //TV = 9.75(30 lines)  AV=2.97  SV=4.32  BV=8.41
    {1238,1136,1064, 0, 0, 0},  //TV = 9.66(32 lines)  AV=2.97  SV=4.32  BV=8.31
    {1354,1136,1048, 0, 0, 0},  //TV = 9.53(35 lines)  AV=2.97  SV=4.29  BV=8.21
    {1431,1136,1056, 0, 0, 0},  //TV = 9.45(37 lines)  AV=2.97  SV=4.31  BV=8.11
    {1547,1136,1056, 0, 0, 0},  //TV = 9.34(40 lines)  AV=2.97  SV=4.31  BV=8.00
    {1625,1136,1072, 0, 0, 0},  //TV = 9.27(42 lines)  AV=2.97  SV=4.33  BV=7.91
    {1741,1136,1072, 0, 0, 0},  //TV = 9.17(45 lines)  AV=2.97  SV=4.33  BV=7.81
    {1895,1136,1056, 0, 0, 0},  //TV = 9.04(49 lines)  AV=2.97  SV=4.31  BV=7.71
    {2011,1136,1064, 0, 0, 0},  //TV = 8.96(52 lines)  AV=2.97  SV=4.32  BV=7.61
    {2166,1136,1064, 0, 0, 0},  //TV = 8.85(56 lines)  AV=2.97  SV=4.32  BV=7.51
    {2321,1136,1064, 0, 0, 0},  //TV = 8.75(60 lines)  AV=2.97  SV=4.32  BV=7.41
    {2514,1136,1048, 0, 0, 0},  //TV = 8.64(65 lines)  AV=2.97  SV=4.29  BV=7.31
    {2669,1136,1056, 0, 0, 0},  //TV = 8.55(69 lines)  AV=2.97  SV=4.31  BV=7.22
    {2862,1136,1056, 0, 0, 0},  //TV = 8.45(74 lines)  AV=2.97  SV=4.31  BV=7.11
    {3094,1136,1048, 0, 0, 0},  //TV = 8.34(80 lines)  AV=2.97  SV=4.29  BV=7.01
    {3287,1136,1056, 0, 0, 0},  //TV = 8.25(85 lines)  AV=2.97  SV=4.31  BV=6.91
    {3558,1136,1056, 0, 0, 0},  //TV = 8.13(92 lines)  AV=2.97  SV=4.31  BV=6.80
    {3790,1136,1056, 0, 0, 0},  //TV = 8.04(98 lines)  AV=2.97  SV=4.31  BV=6.71
    {4061,1136,1056, 0, 0, 0},  //TV = 7.94(105 lines)  AV=2.97  SV=4.31  BV=6.61
    {4370,1136,1056, 0, 0, 0},  //TV = 7.84(113 lines)  AV=2.97  SV=4.31  BV=6.50
    {4679,1136,1048, 0, 0, 0},  //TV = 7.74(121 lines)  AV=2.97  SV=4.29  BV=6.42
    {4989,1136,1056, 0, 0, 0},  //TV = 7.65(129 lines)  AV=2.97  SV=4.31  BV=6.31
    {5375,1136,1048, 0, 0, 0},  //TV = 7.54(139 lines)  AV=2.97  SV=4.29  BV=6.22
    {5723,1136,1056, 0, 0, 0},  //TV = 7.45(148 lines)  AV=2.97  SV=4.31  BV=6.11
    {6187,1136,1056, 0, 0, 0},  //TV = 7.34(160 lines)  AV=2.97  SV=4.31  BV=6.00
    {6574,1136,1056, 0, 0, 0},  //TV = 7.25(170 lines)  AV=2.97  SV=4.31  BV=5.91
    {7115,1136,1048, 0, 0, 0},  //TV = 7.13(184 lines)  AV=2.97  SV=4.29  BV=5.81
    {7618,1136,1048, 0, 0, 0},  //TV = 7.04(197 lines)  AV=2.97  SV=4.29  BV=5.71
    {8159,1136,1048, 0, 0, 0},  //TV = 6.94(211 lines)  AV=2.97  SV=4.29  BV=5.61
    {8314,1216,1032, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.37  BV=5.51
    {8314,1216,1104, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.47  BV=5.41
    {8314,1328,1096, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.58  BV=5.30
    {8314,1424,1080, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.66  BV=5.22
    {8314,1536,1088, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.78  BV=5.10
    {8314,1728,1024, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.87  BV=5.02
    {8314,1840,1040, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=4.98  BV=4.90
    {8314,1936,1056, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.07  BV=4.81
    {8314,2048,1064, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.17  BV=4.71
    {8314,2240,1048, 0, 0, 0},  //TV = 6.91(215 lines)  AV=2.97  SV=5.27  BV=4.61
    {16666,1216,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.36  BV=4.52
    {16666,1216,1104, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.47  BV=4.41
    {16666,1328,1088, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.57  BV=4.30
    {16666,1424,1080, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.66  BV=4.21
    {16666,1536,1080, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.77  BV=4.10
    {16666,1728,1024, 0, 0, 0},  //TV = 5.91(431 lines)  AV=2.97  SV=4.87  BV=4.01
    {24980,1216,1040, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.38  BV=3.91
    {24980,1216,1112, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.48  BV=3.82
    {24980,1328,1096, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.58  BV=3.71
    {24980,1424,1096, 0, 0, 0},  //TV = 5.32(646 lines)  AV=2.97  SV=4.68  BV=3.61
    {33332,1216,1032, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=4.37  BV=3.51
    {33332,1216,1104, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=4.47  BV=3.41
    {33332,1328,1080, 0, 0, 0},  //TV = 4.91(862 lines)  AV=2.97  SV=4.56  BV=3.31
    {41646,1136,1088, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.35  BV=3.21
    {41646,1216,1088, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.45  BV=3.11
    {41646,1328,1072, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.55  BV=3.00
    {41646,1424,1064, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.64  BV=2.91
    {41646,1536,1056, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.74  BV=2.82
    {41646,1632,1072, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.85  BV=2.71
    {41646,1728,1080, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=4.94  BV=2.61
    {41646,1936,1040, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.05  BV=2.50
    {41646,2048,1048, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.14  BV=2.41
    {41646,2240,1032, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.25  BV=2.30
    {41646,2352,1048, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.34  BV=2.21
    {41646,2560,1032, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.44  BV=2.11
    {41646,2752,1032, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.55  BV=2.01
    {41646,2960,1032, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.65  BV=1.90
    {41646,3072,1064, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.75  BV=1.81
    {41646,3328,1048, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.84  BV=1.71
    {41646,3584,1040, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=5.94  BV=1.62
    {41646,3840,1040, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=6.04  BV=1.52
    {41646,4096,1048, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=6.14  BV=1.41
    {41646,4480,1024, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=6.24  BV=1.32
    {41646,4736,1040, 0, 0, 0},  //TV = 4.59(1077 lines)  AV=2.97  SV=6.34  BV=1.21
    {49998,4224,1040, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=6.18  BV=1.12
    {49998,4608,1024, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=6.28  BV=1.01
    {58312,4224,1024, 0, 0, 0},  //TV = 4.10(1508 lines)  AV=2.97  SV=6.16  BV=0.92
    {58312,4480,1040, 0, 0, 0},  //TV = 4.10(1508 lines)  AV=2.97  SV=6.26  BV=0.81
    {66664,4224,1032, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=6.17  BV=0.71
    {66664,4480,1040, 0, 0, 0},  //TV = 3.91(1724 lines)  AV=2.97  SV=6.26  BV=0.62
    {74978,4352,1024, 0, 0, 0},  //TV = 3.74(1939 lines)  AV=2.97  SV=6.20  BV=0.51
    {83330,4096,1048, 0, 0, 0},  //TV = 3.59(2155 lines)  AV=2.97  SV=6.14  BV=0.41
    {91644,4096,1024, 0, 0, 0},  //TV = 3.45(2370 lines)  AV=2.97  SV=6.11  BV=0.31
    {91644,4352,1032, 0, 0, 0},  //TV = 3.45(2370 lines)  AV=2.97  SV=6.21  BV=0.21
    {99996,4224,1048, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.19  BV=0.10
    {99996,4608,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.29  BV=0.00
    {99996,4864,1048, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.39  BV=-0.10
    {99996,5248,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.49  BV=-0.20
    {99996,5632,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.59  BV=-0.30
    {99996,6144,1024, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.70  BV=-0.40
    {99996,6544,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.80  BV=-0.51
    {99996,7072,1024, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.90  BV=-0.61
    {99996,7472,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.99  BV=-0.70
    {99996,7936,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=7.09  BV=-0.79
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene5PLineTable_50Hz =
{
{
    {78,1424,1072, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.65  BV=11.96
    {78,1536,1056, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.74  BV=11.88
    {78,1632,1048, 0, 0, 0},  //TV = 13.65(2 lines)  AV=2.97  SV=4.82  BV=11.80
    {117,1216,1024, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.36  BV=11.67
    {117,1216,1096, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.46  BV=11.58
    {117,1328,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.54  BV=11.49
    {117,1424,1064, 0, 0, 0},  //TV = 13.06(3 lines)  AV=2.97  SV=4.64  BV=11.39
    {155,1136,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.35  BV=11.28
    {155,1216,1088, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.45  BV=11.18
    {155,1328,1072, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.55  BV=11.07
    {155,1424,1040, 0, 0, 0},  //TV = 12.66(4 lines)  AV=2.97  SV=4.61  BV=11.02
    {194,1216,1048, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.39  BV=10.91
    {194,1328,1024, 0, 0, 0},  //TV = 12.33(5 lines)  AV=2.97  SV=4.49  BV=10.82
    {233,1136,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.33  BV=10.71
    {233,1216,1072, 0, 0, 0},  //TV = 12.07(6 lines)  AV=2.97  SV=4.43  BV=10.61
    {271,1136,1056, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.31  BV=10.52
    {271,1216,1064, 0, 0, 0},  //TV = 11.85(7 lines)  AV=2.97  SV=4.41  BV=10.41
    {310,1136,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.32  BV=10.31
    {310,1216,1064, 0, 0, 0},  //TV = 11.66(8 lines)  AV=2.97  SV=4.41  BV=10.21
    {349,1136,1088, 0, 0, 0},  //TV = 11.48(9 lines)  AV=2.97  SV=4.35  BV=10.11
    {387,1136,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.29  BV=10.01
    {387,1216,1048, 0, 0, 0},  //TV = 11.34(10 lines)  AV=2.97  SV=4.39  BV=9.91
    {426,1136,1096, 0, 0, 0},  //TV = 11.20(11 lines)  AV=2.97  SV=4.36  BV=9.81
    {465,1136,1080, 0, 0, 0},  //TV = 11.07(12 lines)  AV=2.97  SV=4.34  BV=9.70
    {503,1136,1064, 0, 0, 0},  //TV = 10.96(13 lines)  AV=2.97  SV=4.32  BV=9.61
    {542,1136,1056, 0, 0, 0},  //TV = 10.85(14 lines)  AV=2.97  SV=4.31  BV=9.52
    {581,1136,1056, 0, 0, 0},  //TV = 10.75(15 lines)  AV=2.97  SV=4.31  BV=9.41
    {619,1136,1064, 0, 0, 0},  //TV = 10.66(16 lines)  AV=2.97  SV=4.32  BV=9.31
    {658,1136,1080, 0, 0, 0},  //TV = 10.57(17 lines)  AV=2.97  SV=4.34  BV=9.20
    {697,1136,1088, 0, 0, 0},  //TV = 10.49(18 lines)  AV=2.97  SV=4.35  BV=9.11
    {774,1136,1048, 0, 0, 0},  //TV = 10.34(20 lines)  AV=2.97  SV=4.29  BV=9.01
    {813,1136,1072, 0, 0, 0},  //TV = 10.26(21 lines)  AV=2.97  SV=4.33  BV=8.91
    {851,1216,1024, 0, 0, 0},  //TV = 10.20(22 lines)  AV=2.97  SV=4.36  BV=8.81
    {929,1136,1080, 0, 0, 0},  //TV = 10.07(24 lines)  AV=2.97  SV=4.34  BV=8.71
    {1006,1136,1064, 0, 0, 0},  //TV = 9.96(26 lines)  AV=2.97  SV=4.32  BV=8.61
    {1083,1136,1064, 0, 0, 0},  //TV = 9.85(28 lines)  AV=2.97  SV=4.32  BV=8.51
    {1161,1136,1064, 0, 0, 0},  //TV = 9.75(30 lines)  AV=2.97  SV=4.32  BV=8.41
    {1238,1136,1064, 0, 0, 0},  //TV = 9.66(32 lines)  AV=2.97  SV=4.32  BV=8.31
    {1354,1136,1048, 0, 0, 0},  //TV = 9.53(35 lines)  AV=2.97  SV=4.29  BV=8.21
    {1431,1136,1056, 0, 0, 0},  //TV = 9.45(37 lines)  AV=2.97  SV=4.31  BV=8.11
    {1547,1136,1056, 0, 0, 0},  //TV = 9.34(40 lines)  AV=2.97  SV=4.31  BV=8.00
    {1625,1136,1072, 0, 0, 0},  //TV = 9.27(42 lines)  AV=2.97  SV=4.33  BV=7.91
    {1741,1136,1072, 0, 0, 0},  //TV = 9.17(45 lines)  AV=2.97  SV=4.33  BV=7.81
    {1895,1136,1056, 0, 0, 0},  //TV = 9.04(49 lines)  AV=2.97  SV=4.31  BV=7.71
    {2011,1136,1064, 0, 0, 0},  //TV = 8.96(52 lines)  AV=2.97  SV=4.32  BV=7.61
    {2166,1136,1064, 0, 0, 0},  //TV = 8.85(56 lines)  AV=2.97  SV=4.32  BV=7.51
    {2321,1136,1064, 0, 0, 0},  //TV = 8.75(60 lines)  AV=2.97  SV=4.32  BV=7.41
    {2514,1136,1048, 0, 0, 0},  //TV = 8.64(65 lines)  AV=2.97  SV=4.29  BV=7.31
    {2669,1136,1056, 0, 0, 0},  //TV = 8.55(69 lines)  AV=2.97  SV=4.31  BV=7.22
    {2862,1136,1056, 0, 0, 0},  //TV = 8.45(74 lines)  AV=2.97  SV=4.31  BV=7.11
    {3094,1136,1048, 0, 0, 0},  //TV = 8.34(80 lines)  AV=2.97  SV=4.29  BV=7.01
    {3287,1136,1056, 0, 0, 0},  //TV = 8.25(85 lines)  AV=2.97  SV=4.31  BV=6.91
    {3558,1136,1056, 0, 0, 0},  //TV = 8.13(92 lines)  AV=2.97  SV=4.31  BV=6.80
    {3790,1136,1056, 0, 0, 0},  //TV = 8.04(98 lines)  AV=2.97  SV=4.31  BV=6.71
    {4061,1136,1056, 0, 0, 0},  //TV = 7.94(105 lines)  AV=2.97  SV=4.31  BV=6.61
    {4370,1136,1056, 0, 0, 0},  //TV = 7.84(113 lines)  AV=2.97  SV=4.31  BV=6.50
    {4679,1136,1048, 0, 0, 0},  //TV = 7.74(121 lines)  AV=2.97  SV=4.29  BV=6.42
    {4989,1136,1056, 0, 0, 0},  //TV = 7.65(129 lines)  AV=2.97  SV=4.31  BV=6.31
    {5375,1136,1048, 0, 0, 0},  //TV = 7.54(139 lines)  AV=2.97  SV=4.29  BV=6.22
    {5723,1136,1056, 0, 0, 0},  //TV = 7.45(148 lines)  AV=2.97  SV=4.31  BV=6.11
    {6187,1136,1056, 0, 0, 0},  //TV = 7.34(160 lines)  AV=2.97  SV=4.31  BV=6.00
    {6574,1136,1056, 0, 0, 0},  //TV = 7.25(170 lines)  AV=2.97  SV=4.31  BV=5.91
    {7115,1136,1048, 0, 0, 0},  //TV = 7.13(184 lines)  AV=2.97  SV=4.29  BV=5.81
    {7618,1136,1048, 0, 0, 0},  //TV = 7.04(197 lines)  AV=2.97  SV=4.29  BV=5.71
    {8159,1136,1048, 0, 0, 0},  //TV = 6.94(211 lines)  AV=2.97  SV=4.29  BV=5.61
    {8739,1136,1048, 0, 0, 0},  //TV = 6.84(226 lines)  AV=2.97  SV=4.29  BV=5.51
    {9358,1136,1048, 0, 0, 0},  //TV = 6.74(242 lines)  AV=2.97  SV=4.29  BV=5.42
    {10016,1136,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.31  BV=5.31
    {10016,1216,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.40  BV=5.21
    {10016,1328,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.50  BV=5.12
    {10016,1424,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.60  BV=5.01
    {10016,1536,1024, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.70  BV=4.92
    {10016,1632,1032, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.79  BV=4.82
    {10016,1728,1056, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=4.91  BV=4.70
    {10016,1840,1064, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.01  BV=4.60
    {10016,1936,1080, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.11  BV=4.51
    {10016,2144,1040, 0, 0, 0},  //TV = 6.64(259 lines)  AV=2.97  SV=5.20  BV=4.41
    {19992,1136,1056, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.31  BV=4.31
    {19992,1216,1056, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.40  BV=4.21
    {19992,1328,1040, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.51  BV=4.11
    {19992,1424,1040, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.61  BV=4.01
    {19992,1536,1032, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.71  BV=3.91
    {19992,1632,1040, 0, 0, 0},  //TV = 5.64(517 lines)  AV=2.97  SV=4.81  BV=3.81
    {30007,1136,1064, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.32  BV=3.71
    {30007,1216,1064, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.41  BV=3.62
    {30007,1328,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.52  BV=3.51
    {30007,1424,1048, 0, 0, 0},  //TV = 5.06(776 lines)  AV=2.97  SV=4.62  BV=3.41
    {39983,1136,1056, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.31  BV=3.31
    {39983,1216,1056, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.40  BV=3.21
    {39983,1328,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.51  BV=3.11
    {39983,1424,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.61  BV=3.01
    {39983,1536,1032, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.71  BV=2.91
    {39983,1632,1048, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.82  BV=2.80
    {39983,1728,1056, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=4.91  BV=2.71
    {39983,1840,1056, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.00  BV=2.61
    {39983,1936,1072, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.10  BV=2.52
    {39983,2144,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.20  BV=2.42
    {39983,2240,1064, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.30  BV=2.32
    {39983,2448,1048, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.40  BV=2.21
    {39983,2656,1032, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.50  BV=2.12
    {39983,2864,1032, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.61  BV=2.01
    {39983,3072,1032, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.71  BV=1.91
    {39983,3200,1064, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.81  BV=1.81
    {39983,3456,1048, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=5.90  BV=1.72
    {39983,3712,1048, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=6.00  BV=1.61
    {39983,3968,1048, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=6.10  BV=1.52
    {39983,4352,1032, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=6.21  BV=1.41
    {39983,4608,1040, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=6.30  BV=1.31
    {39983,4992,1032, 0, 0, 0},  //TV = 4.64(1034 lines)  AV=2.97  SV=6.41  BV=1.21
    {49998,4224,1040, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=6.18  BV=1.12
    {49998,4608,1024, 0, 0, 0},  //TV = 4.32(1293 lines)  AV=2.97  SV=6.28  BV=1.01
    {60014,4096,1032, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=6.12  BV=0.91
    {60014,4352,1040, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=6.22  BV=0.81
    {60014,4736,1024, 0, 0, 0},  //TV = 4.06(1552 lines)  AV=2.97  SV=6.32  BV=0.71
    {69990,4352,1024, 0, 0, 0},  //TV = 3.84(1810 lines)  AV=2.97  SV=6.20  BV=0.61
    {69990,4608,1032, 0, 0, 0},  //TV = 3.84(1810 lines)  AV=2.97  SV=6.29  BV=0.52
    {80005,4352,1024, 0, 0, 0},  //TV = 3.64(2069 lines)  AV=2.97  SV=6.20  BV=0.42
    {89981,4096,1040, 0, 0, 0},  //TV = 3.47(2327 lines)  AV=2.97  SV=6.13  BV=0.31
    {89981,4352,1048, 0, 0, 0},  //TV = 3.47(2327 lines)  AV=2.97  SV=6.23  BV=0.21
    {99996,4224,1048, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.19  BV=0.10
    {99996,4608,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.29  BV=0.00
    {99996,4864,1048, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.39  BV=-0.10
    {99996,5248,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.49  BV=-0.20
    {99996,5632,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.59  BV=-0.30
    {99996,6144,1024, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.70  BV=-0.40
    {99996,6544,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.80  BV=-0.51
    {99996,7072,1024, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.90  BV=-0.61
    {99996,7472,1032, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=6.99  BV=-0.70
    {99996,7936,1040, 0, 0, 0},  //TV = 3.32(2586 lines)  AV=2.97  SV=7.09  BV=-0.79
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable5 =
{
    AETABLE_SCENE_INDEX5,    //eAETableID
    129,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    120,    //i4MaxBV
    -8,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sAEScene5PLineTable_60Hz,
    sAEScene5PLineTable_50Hz,
    NULL,
};

static strEvPline sAESceneReservePLineTable =
{
{
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};
static strAETable g_AE_ReserveSceneTable =
{
	AETABLE_SCENE_MAX,    //eAETableID
	0,    //u4TotalIndex
	20,    //u4StrobeTrigerBV
	0,    //i4MaxBV
	0,    //i4MinBV
	90,    //i4EffectiveMaxBV
	0,      //i4EffectiveMinBV
	LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
	sAESceneReservePLineTable,
	sAESceneReservePLineTable,
	NULL,
};
static strAESceneMapping g_AEScenePLineMapping = 
{
{
    {LIB3A_AE_SCENE_AUTO, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_AUTO, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX5}},
    {LIB3A_AE_SCENE_NIGHT, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_NIGHT, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_ACTION, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_BEACH, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX3, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3}},
    {LIB3A_AE_SCENE_CANDLELIGHT, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_FIREWORKS, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX4, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX4}},
    {LIB3A_AE_SCENE_LANDSCAPE, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX3, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3}},
    {LIB3A_AE_SCENE_PORTRAIT, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_NIGHT_PORTRAIT, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_NIGHT, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_PARTY, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_SNOW, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX3, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3}},
    {LIB3A_AE_SCENE_SPORTS, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_STEADYPHOTO, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_SUNSET, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX3, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3}},
    {LIB3A_AE_SCENE_THEATRE, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_ISO_ANTI_SHAKE, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_ISO100, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO100, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO100}},
    {LIB3A_AE_SCENE_ISO200, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO200, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO200}},
    {LIB3A_AE_SCENE_ISO400, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO400, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO400}},
    {LIB3A_AE_SCENE_ISO800, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO800, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO800}},
    {LIB3A_AE_SCENE_ISO1600 , {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO1600, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO1600}},
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
},
};

static strAEPLineTable g_strAEPlineTable =
{
{
// PLINE Table
g_AE_PreviewAutoTable,
g_AE_CaptureAutoTable,
g_AE_VideoAutoTable,
g_AE_Video1AutoTable,
g_AE_Video2AutoTable,
g_AE_Custom1AutoTable,
g_AE_Custom2AutoTable,
g_AE_Custom3AutoTable,
g_AE_Custom4AutoTable,
g_AE_Custom5AutoTable,
g_AE_VideoNightTable,
g_AE_CaptureISO100Table,
g_AE_CaptureISO200Table,
g_AE_CaptureISO400Table,
g_AE_CaptureISO800Table,
g_AE_CaptureISO1600Table,
g_AE_StrobeTable,
g_AE_SceneTable1,
g_AE_SceneTable2,
g_AE_SceneTable3,
g_AE_SceneTable4,
g_AE_SceneTable5,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
},
};

static strAEPLineNumInfo g_strAEPreviewAutoPLineInfo =
{
    AETABLE_RPEVIEW_AUTO,
    90,
    -10,
    {
        {1,3000,21,1216,1216},
        {2,21,21,1216,2048},
        {3,21,15,2048,2048},
        {4,15,15,2048,4096},
        {5,15,10,4096,4096},
        {6,10,10,4096,8192},
        {7,10,8,8192,8192},
        {8,8,8,8192,10240},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureAutoPLineInfo =
{
    AETABLE_CAPTURE_AUTO,
    90,
    0,
    {
        {1,3000,21,1216,1216},
        {2,21,21,1216,2048},
        {3,21,15,2048,2048},
        {4,15,15,2048,4096},
        {5,15,10,4096,4096},
        {6,10,10,4096,8192},
        {7,10,8,8192,8192},
        {8,8,8,8192,10240},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEVideoAutoPLineInfo =
{
    AETABLE_VIDEO_AUTO,
    90,
    0,
    {
        {1,3000,21,1216,1216},
        {2,21,21,1216,2048},
        {3,21,15,2048,2048},
        {4,15,15,2048,4096},
        {5,15,10,4096,4096},
        {6,10,10,4096,8192},
        {7,10,8,8192,8192},
        {8,8,8,8192,10240},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEVideo1AutoPLineInfo =
{
    AETABLE_VIDEO1_AUTO,
    90,
    0,
    {
        {1,3000,21,1216,1216},
        {2,21,21,1216,10240},
        {3,0,0,0,0},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEVideo2AutoPLineInfo =
{
    AETABLE_VIDEO2_AUTO,
    90,
    0,
    {
        {1,3000,21,1216,1216},
        {2,21,21,1216,10240},
        {3,0,0,0,0},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECustom1AutoPLineInfo =
{
    AETABLE_CUSTOM1_AUTO,
    90,
    0,
    {
        {1,10000,60,1168,1168},
        {2,60,60,1168,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,10240},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECustom2AutoPLineInfo =
{
    AETABLE_CUSTOM2_AUTO,
    90,
    0,
    {
        {1,10000,60,1168,1168},
        {2,60,60,1168,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,10240},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECustom3AutoPLineInfo =
{
    AETABLE_CUSTOM3_AUTO,
    90,
    0,
    {
        {1,10000,60,1168,1168},
        {2,60,60,1168,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,10240},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECustom4AutoPLineInfo =
{
    AETABLE_CUSTOM4_AUTO,
    90,
    0,
    {
        {1,10000,60,1168,1168},
        {2,60,60,1168,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,10240},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECustom5AutoPLineInfo =
{
    AETABLE_CUSTOM5_AUTO,
    90,
    0,
    {
        {1,10000,60,1168,1168},
        {2,60,60,1168,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,10240},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEVideoNightPLineInfo =
{
    AETABLE_VIDEO_NIGHT,
    90,
    -10,
    {
        {1,3000,21,1216,1216},
        {2,21,21,1216,2048},
        {3,21,15,2048,2048},
        {4,15,15,2048,4096},
        {5,15,10,4096,4096},
        {6,10,10,4096,8192},
        {7,10,8,8192,8192},
        {8,8,8,8192,10240},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};


static strAEPLineNumInfo g_strAECaptureISO100PLineInfo =
{
    AETABLE_CAPTURE_ISO100,
    90,
    0,
    {
        {1,10000,4,1168,1168},
        {2,0,0,0,0},
        {3,0,0,0,0},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureISO200PLineInfo =
{
    AETABLE_CAPTURE_ISO200,
    90,
    0,
    {
        {1,10000,2000,1168,1168},
        {2,2000,2000,1168,2048},
        {3,2000,4,2048,2048},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureISO400PLineInfo =
{
    AETABLE_CAPTURE_ISO400,
    90,
    0,
    {
        {1,10000,2000,1168,1168},
        {2,2000,2000,1168,4096},
        {3,2000,4,4096,4096},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureISO800PLineInfo =
{
    AETABLE_CAPTURE_ISO800,
    90,
    0,
    {
        {1,10000,2000,1168,1168},
        {2,2000,2000,1168,8192},
        {3,2000,4,8192,8192},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureISO1600PLineInfo =
{
    AETABLE_CAPTURE_ISO1600,
    90,
    0,
    {
        {1,10000,2000,1168,1168},
        {2,2000,2000,1168,16384},
        {3,2000,4,16384,16384},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};


static strAEPLineNumInfo g_strAEStrobePLineInfo =
{
    AETABLE_STROBE,
    90,
    0,
    {
        {1,10000,15,1168,1168},
        {2,15,15,1168,4096},
        {3,15,10,4096,4096},
        {4,10,10,4096,8192},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene1PLineInfo =
{
    AETABLE_SCENE_INDEX1,
    90,
    -10,
    {
        {1,10000,120,1168,1168},
        {2,120,120,1168,2048},
        {3,120,30,2048,2048},
        {4,30,30,2048,4096},
        {5,30,10,4096,4096},
        {6,10,10,4096,8192},
        {7,10,5,8192,8192},
        {8,5,5,8192,16384},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene2PLineInfo =
{
    AETABLE_SCENE_INDEX2,
    90,
    0,
    {
        {1,10000,100,1168,1168},
        {2,100,100,1168,4096},
        {3,100,30,4096,4096},
        {4,30,30,4096,16384},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene3PLineInfo =
{
    AETABLE_SCENE_INDEX3,
    90,
    0,
    {
        {1,10000,30,1168,1168},
        {2,30,30,1168,2048},
        {3,30,15,2048,2048},
        {4,15,15,2048,4096},
        {5,15,10,4096,4096},
        {6,10,10,4096,8192},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene4PLineInfo =
{
    AETABLE_SCENE_INDEX4,
    90,
    0,
    {
        {1,4,4,1706,1706},
        {2,0,0,0,0},
        {3,0,0,0,0},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene5PLineInfo =
{
    AETABLE_SCENE_INDEX5,
    90,
    0,
    {
        {1,10000,24,1168,1168},
        {2,24,24,1168,4096},
        {3,24,10,4096,4096},
        {4,10,10,4096,8192},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};



























static strAEPLineNumInfo g_strAENoScenePLineInfo =
{
    AETABLE_SCENE_MAX,
    90,
    0,
    {
        {1,0,0,0,0},
        {2,0,0,0,0},
        {3,0,0,0,0},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};
static strAEPLineInfomation g_strAEPlineInfo =
{
MTRUE,   // FALSE mean the sampling
{
// PLINE Info
g_strAEPreviewAutoPLineInfo,
g_strAECaptureAutoPLineInfo,
g_strAEVideoAutoPLineInfo,
g_strAEVideo1AutoPLineInfo,
g_strAEVideo2AutoPLineInfo,
g_strAECustom1AutoPLineInfo,
g_strAECustom2AutoPLineInfo,
g_strAECustom3AutoPLineInfo,
g_strAECustom4AutoPLineInfo,
g_strAECustom5AutoPLineInfo,
g_strAEVideoNightPLineInfo,
g_strAECaptureISO100PLineInfo,
g_strAECaptureISO200PLineInfo,
g_strAECaptureISO400PLineInfo,
g_strAECaptureISO800PLineInfo,
g_strAECaptureISO1600PLineInfo,
g_strAEStrobePLineInfo,
g_strAEScene1PLineInfo,
g_strAEScene2PLineInfo,
g_strAEScene3PLineInfo,
g_strAEScene4PLineInfo,
g_strAEScene5PLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
},
};

static strAEPLineGainList g_strAEGainList =
{
71,
{
{1136,100},
{1216,100},
{1328,100},
{1424,100},
{1536,100},
{1632,100},
{1728,100},
{1840,100},
{1936,100},
{2048,100},
{2144,100},
{2240,100},
{2352,100},
{2448,100},
{2560,100},
{2656,100},
{2752,100},
{2864,100},
{2960,100},
{3072,100},
{3200,100},
{3328,100},
{3456,100},
{3584,100},
{3712,100},
{3840,100},
{3968,100},
{4096,100},
{4224,100},
{4352,100},
{4480,100},
{4608,100},
{4736,100},
{4864,100},
{4992,100},
{5120,100},
{5248,100},
{5376,100},
{5504,100},
{5632,100},
{5760,100},
{5888,100},
{6016,100},
{6144,100},
{6240,100},
{6384,100},
{6544,100},
{6704,100},
{6896,100},
{7072,100},
{7280,100},
{7472,100},
{7696,100},
{7936,100},
{8192,100},
{8448,100},
{8720,100},
{9040,100},
{9344,100},
{9696,100},
{10080,100},
{10480,100},
{10912,100},
{11392,100},
{11904,100},
{12480,100},
{13104,100},
{13792,100},
{14560,100},
{15408,100},
{16384,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
}
};

static AE_PLINETABLE_T g_PlineTableMapping =
{
g_AEScenePLineMapping,
g_strAEPlineTable,
g_strAEPlineInfo,
g_strAEGainList
};
#endif


#if 0 //Save the P-line info to file for debug
MinGain,1216 
MaxGain,10240 
MiniISOGain,54 
GainStepUnitInTotalRange,128 
PreviewExposureLineUnit,38668 
PreviewMaxFrameRate,21 
VideoExposureLineUnit,38668 
VideoMaxFrameRate,21 
VideoToPreviewSensitivityRatio,1024 
CaptureExposureLineUnit,38668 
CaptureMaxFrameRate,21 
CaptureToPreviewSensitivityRatio,1024 
Video1ExposureLineUnit,38668 
Video1MaxFrameRate,21 
Video1ToPreviewSensitivityRatio,1024 
Video2ExposureLineUnit,38668 
Video2MaxFrameRate,21 
Video2ToPreviewSensitivityRatio,1024 
Custom1ExposureLineUnit,38668 
Custom1MaxFrameRate,21 
Custom1ToPreviewSensitivityRatio,1024 
Custom2ExposureLineUnit,38668 
Custom2MaxFrameRate,21 
Custom2ToPreviewSensitivityRatio,1024 
Custom3ExposureLineUnit,38668 
Custom3MaxFrameRate,21 
Custom3ToPreviewSensitivityRatio,1024 
Custom4ExposureLineUnit,38668 
Custom4MaxFrameRate,21 
Custom4ToPreviewSensitivityRatio,1024 
Custom5ExposureLineUnit,38668 
Custom5MaxFrameRate,21 
Custom5ToPreviewSensitivityRatio,1024 
FocusLength,350 
Fno,28 

// Preview table -- Use preview sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_RPEVIEW_AUTO
90,-10
1,3000,21,1216,1216
2,21,21,1216,2048
3,21,15,2048,2048
4,15,15,2048,4096
5,15,10,4096,4096
6,10,10,4096,8192
7,10,8,8192,8192
8,8,8,8192,10240
AETABLE_END

// Capture table -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_AUTO
90,0
1,3000,21,1216,1216
2,21,21,1216,2048
3,21,15,2048,2048
4,15,15,2048,4096
5,15,10,4096,4096
6,10,10,4096,8192
7,10,8,8192,8192
8,8,8,8192,10240
AETABLE_END

// Video table -- Use video sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO_AUTO
90,0
1,3000,21,1216,1216
2,21,21,1216,2048
3,21,15,2048,2048
4,15,15,2048,4096
5,15,10,4096,4096
6,10,10,4096,8192
7,10,8,8192,8192
8,8,8,8192,10240
AETABLE_END

// Video1 table -- Use Video1 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO1_AUTO
90,0
1,3000,21,1216,1216
2,21,21,1216,10240
AETABLE_END

// Video2 table -- Use Video2 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO2_AUTO
90,0
1,3000,21,1216,1216
2,21,21,1216,10240
AETABLE_END

// Custom1 table -- Use Custom1 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM1_AUTO
90,0
1,10000,60,1168,1168
2,60,60,1168,3072
3,60,30,3072,3072
4,30,30,3072,10240
AETABLE_END

// Custom2 table -- Use Custom2 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM2_AUTO
90,0
1,10000,60,1168,1168
2,60,60,1168,3072
3,60,30,3072,3072
4,30,30,3072,10240
AETABLE_END

// Custom3 table -- Use Custom3 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM3_AUTO
90,0
1,10000,60,1168,1168
2,60,60,1168,3072
3,60,30,3072,3072
4,30,30,3072,10240
AETABLE_END

// Custom4 table -- Use Custom4 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM4_AUTO
90,0
1,10000,60,1168,1168
2,60,60,1168,3072
3,60,30,3072,3072
4,30,30,3072,10240
AETABLE_END

// Custom5 table -- Use Custom5 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM5_AUTO
90,0
1,10000,60,1168,1168
2,60,60,1168,3072
3,60,30,3072,3072
4,30,30,3072,10240
AETABLE_END

// Video Night table -- Use video sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO_NIGHT
90,-10
1,3000,21,1216,1216
2,21,21,1216,2048
3,21,15,2048,2048
4,15,15,2048,4096
5,15,10,4096,4096
6,10,10,4096,8192
7,10,8,8192,8192
8,8,8,8192,10240
AETABLE_END



// Capture ISO100 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO100
90,0
1,10000,4,1168,1168
AETABLE_END

// Capture ISO200 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO200
90,0
1,10000,2000,1168,1168
2,2000,2000,1168,2048
3,2000,4,2048,2048
AETABLE_END

// Capture ISO400 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO400
90,0
1,10000,2000,1168,1168
2,2000,2000,1168,4096
3,2000,4,4096,4096
AETABLE_END

// Capture ISO800 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO800
90,0
1,10000,2000,1168,1168
2,2000,2000,1168,8192
3,2000,4,8192,8192
AETABLE_END

// Capture ISO1600 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO1600
90,0
1,10000,2000,1168,1168
2,2000,2000,1168,16384
3,2000,4,16384,16384
AETABLE_END



// Strobe table -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_STROBE
90,0
1,10000,15,1168,1168
2,15,15,1168,4096
3,15,10,4096,4096
4,10,10,4096,8192
AETABLE_END

// Table1 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX1
90,-10
1,10000,120,1168,1168
2,120,120,1168,2048
3,120,30,2048,2048
4,30,30,2048,4096
5,30,10,4096,4096
6,10,10,4096,8192
7,10,5,8192,8192
8,5,5,8192,16384
AETABLE_END

// Table2 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX2
90,0
1,10000,100,1168,1168
2,100,100,1168,4096
3,100,30,4096,4096
4,30,30,4096,16384
AETABLE_END

// Table3 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX3
90,0
1,10000,30,1168,1168
2,30,30,1168,2048
3,30,15,2048,2048
4,15,15,2048,4096
5,15,10,4096,4096
6,10,10,4096,8192
AETABLE_END

// Table4 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX4
90,0
1,4,4,1706,1706
AETABLE_END

// Table5 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX5
90,0
1,10000,24,1168,1168
2,24,24,1168,4096
3,24,10,4096,4096
4,10,10,4096,8192
AETABLE_END

// Table6 PLine -- Use capture sensor setting

// Table7 PLine -- Use capture sensor setting

// Table8 PLine -- Use capture sensor setting

// Table9 PLine -- Use capture sensor setting

// Table10 PLine -- Use capture sensor setting

// Table11 PLine -- Use capture sensor setting

// Table12 PLine -- Use capture sensor setting

// Table13 PLine -- Use capture sensor setting

// Table14 PLine -- Use capture sensor setting

// Table15 PLine -- Use capture sensor setting

// Table16 PLine -- Use capture sensor setting

// Table17 PLine -- Use capture sensor setting

// Table18 PLine -- Use capture sensor setting

// Table19 PLine -- Use capture sensor setting

// Table20 PLine -- Use capture sensor setting

// Table21 PLine -- Use capture sensor setting

// Table22 PLine -- Use capture sensor setting

// Table23 PLine -- Use capture sensor setting

// Table24 PLine -- Use capture sensor setting

// Table25 PLine -- Use capture sensor setting

// Table26 PLine -- Use capture sensor setting

// Table27 PLine -- Use capture sensor setting

// Table28 PLine -- Use capture sensor setting

// Table29 PLine -- Use capture sensor setting

// Table30 PLine -- Use capture sensor setting

// Table31 PLine -- Use capture sensor setting

AE_SCENE_AUTO,AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX5
AE_SCENE_NIGHT,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX1,AETABLE_VIDEO_NIGHT,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX1
AE_SCENE_ACTION,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX2,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX2
AE_SCENE_BEACH,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX3,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX3
AE_SCENE_CANDLELIGHT,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX1,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX1
AE_SCENE_FIREWORKS,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX4,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX4
AE_SCENE_LANDSCAPE,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX3,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX3
AE_SCENE_PORTRAIT,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX2,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX2
AE_SCENE_NIGHT_PORTRAIT,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX1,AETABLE_VIDEO_NIGHT,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX1
AE_SCENE_PARTY,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX1,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX1
AE_SCENE_SNOW,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX3,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX3
AE_SCENE_SPORTS,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX2,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX2
AE_SCENE_STEADYPHOTO,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX2,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX2
AE_SCENE_SUNSET,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX3,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX3
AE_SCENE_THEATRE,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX1,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX1
AE_SCENE_ISO_ANTI_SHAKE,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX2,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX2
AE_SCENE_ISO100,AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_ISO100,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_ISO100
AE_SCENE_ISO200,AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_ISO200,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_ISO200
AE_SCENE_ISO400,AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_ISO400,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_ISO400
AE_SCENE_ISO800,AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_ISO800,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_ISO800
AE_SCENE_ISO1600 ,AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_ISO1600,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_ISO1600
,,,,,,,,,,,
,,,,,,,,,,,
,,,,,,,,,,,
,,,,,,,,,,,
,,,,,,,,,,,
,,,,,,,,,,,
,,,,,,,,,,,
,,,,,,,,,,,
,,,,,,,,,,,
#endif
