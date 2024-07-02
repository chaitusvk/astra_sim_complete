/*****************************************************************************

  Licensed to Accellera Systems Initiative Inc. (Accellera) under one or
  more contributor license agreements.  See the NOTICE file distributed
  with this work for additional information regarding copyright ownership.
  Accellera licenses this file to you under the Apache License, Version 2.0
  (the "License"); you may not use this file except in compliance with the
  License.  You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
  implied.  See the License for the specific language governing
  permissions and limitations under the License.

 *****************************************************************************/

/*****************************************************************************

  sc_int32_mask.cpp -- Fills the mask_int lookup table to enable efficient
                       part-selection on 32-bit sc_ints and sc_uints.

  Original Author: Amit Rao, Synopsys, Inc.

 *****************************************************************************/

/*****************************************************************************

  MODIFICATION LOG - modifiers, enter your name, affiliation, date and
  changes you are making here.

      Name, Affiliation, Date: Ali Dasdan, Synopsys, Inc.
  Description of Modification: - Resolved ambiguity with sc_(un)signed.
                               - Merged the code for 64- and 32-bit versions
                                 via the constants in sc_nbdefs.h.
                               - Eliminated redundant file inclusions.

      Name, Affiliation, Date:
  Description of Modification:

 *****************************************************************************/


// $Log: sc_int32_mask.cpp,v $
// Revision 1.2  2011/02/18 20:19:14  acg
//  Andy Goodrich: updating Copyright notice.
//
// Revision 1.1.1.1  2006/12/15 20:20:05  acg
// SystemC 2.3
//
// Revision 1.3  2006/01/13 18:49:31  acg
// Added $Log command so that CVS check in comments are reproduced in the
// source.
//

#ifdef _32BIT_

#include "sysc/datatypes/int/sc_int_base.h"
#include "sysc/datatypes/int/sc_uint_base.h"


namespace sc_dt
{

const uint_type mask_int[SC_INTWIDTH][SC_INTWIDTH] = 
{
{
0xfffffffeU
},
{
0xfffffffcU,
0xfffffffdU
},
{
0xfffffff8U,
0xfffffff9U,
0xfffffffbU
},
{
0xfffffff0U,
0xfffffff1U,
0xfffffff3U,
0xfffffff7U
},
{
0xffffffe0U,
0xffffffe1U,
0xffffffe3U,
0xffffffe7U,
0xffffffefU
},
{
0xffffffc0U,
0xffffffc1U,
0xffffffc3U,
0xffffffc7U,
0xffffffcfU,
0xffffffdfU
},
{
0xffffff80U,
0xffffff81U,
0xffffff83U,
0xffffff87U,
0xffffff8fU,
0xffffff9fU,
0xffffffbfU
},
{
0xffffff00U,
0xffffff01U,
0xffffff03U,
0xffffff07U,
0xffffff0fU,
0xffffff1fU,
0xffffff3fU,
0xffffff7fU
},
{
0xfffffe00U,
0xfffffe01U,
0xfffffe03U,
0xfffffe07U,
0xfffffe0fU,
0xfffffe1fU,
0xfffffe3fU,
0xfffffe7fU,
0xfffffeffU
},
{
0xfffffc00U,
0xfffffc01U,
0xfffffc03U,
0xfffffc07U,
0xfffffc0fU,
0xfffffc1fU,
0xfffffc3fU,
0xfffffc7fU,
0xfffffcffU,
0xfffffdffU
},
{
0xfffff800U,
0xfffff801U,
0xfffff803U,
0xfffff807U,
0xfffff80fU,
0xfffff81fU,
0xfffff83fU,
0xfffff87fU,
0xfffff8ffU,
0xfffff9ffU,
0xfffffbffU
},
{
0xfffff000U,
0xfffff001U,
0xfffff003U,
0xfffff007U,
0xfffff00fU,
0xfffff01fU,
0xfffff03fU,
0xfffff07fU,
0xfffff0ffU,
0xfffff1ffU,
0xfffff3ffU,
0xfffff7ffU
},
{
0xffffe000U,
0xffffe001U,
0xffffe003U,
0xffffe007U,
0xffffe00fU,
0xffffe01fU,
0xffffe03fU,
0xffffe07fU,
0xffffe0ffU,
0xffffe1ffU,
0xffffe3ffU,
0xffffe7ffU,
0xffffefffU
},
{
0xffffc000U,
0xffffc001U,
0xffffc003U,
0xffffc007U,
0xffffc00fU,
0xffffc01fU,
0xffffc03fU,
0xffffc07fU,
0xffffc0ffU,
0xffffc1ffU,
0xffffc3ffU,
0xffffc7ffU,
0xffffcfffU,
0xffffdfffU
},
{
0xffff8000U,
0xffff8001U,
0xffff8003U,
0xffff8007U,
0xffff800fU,
0xffff801fU,
0xffff803fU,
0xffff807fU,
0xffff80ffU,
0xffff81ffU,
0xffff83ffU,
0xffff87ffU,
0xffff8fffU,
0xffff9fffU,
0xffffbfffU
},
{
0xffff0000U,
0xffff0001U,
0xffff0003U,
0xffff0007U,
0xffff000fU,
0xffff001fU,
0xffff003fU,
0xffff007fU,
0xffff00ffU,
0xffff01ffU,
0xffff03ffU,
0xffff07ffU,
0xffff0fffU,
0xffff1fffU,
0xffff3fffU,
0xffff7fffU
},
{
0xfffe0000U,
0xfffe0001U,
0xfffe0003U,
0xfffe0007U,
0xfffe000fU,
0xfffe001fU,
0xfffe003fU,
0xfffe007fU,
0xfffe00ffU,
0xfffe01ffU,
0xfffe03ffU,
0xfffe07ffU,
0xfffe0fffU,
0xfffe1fffU,
0xfffe3fffU,
0xfffe7fffU,
0xfffeffffU
},
{
0xfffc0000U,
0xfffc0001U,
0xfffc0003U,
0xfffc0007U,
0xfffc000fU,
0xfffc001fU,
0xfffc003fU,
0xfffc007fU,
0xfffc00ffU,
0xfffc01ffU,
0xfffc03ffU,
0xfffc07ffU,
0xfffc0fffU,
0xfffc1fffU,
0xfffc3fffU,
0xfffc7fffU,
0xfffcffffU,
0xfffdffffU
},
{
0xfff80000U,
0xfff80001U,
0xfff80003U,
0xfff80007U,
0xfff8000fU,
0xfff8001fU,
0xfff8003fU,
0xfff8007fU,
0xfff800ffU,
0xfff801ffU,
0xfff803ffU,
0xfff807ffU,
0xfff80fffU,
0xfff81fffU,
0xfff83fffU,
0xfff87fffU,
0xfff8ffffU,
0xfff9ffffU,
0xfffbffffU
},
{
0xfff00000U,
0xfff00001U,
0xfff00003U,
0xfff00007U,
0xfff0000fU,
0xfff0001fU,
0xfff0003fU,
0xfff0007fU,
0xfff000ffU,
0xfff001ffU,
0xfff003ffU,
0xfff007ffU,
0xfff00fffU,
0xfff01fffU,
0xfff03fffU,
0xfff07fffU,
0xfff0ffffU,
0xfff1ffffU,
0xfff3ffffU,
0xfff7ffffU
},
{
0xffe00000U,
0xffe00001U,
0xffe00003U,
0xffe00007U,
0xffe0000fU,
0xffe0001fU,
0xffe0003fU,
0xffe0007fU,
0xffe000ffU,
0xffe001ffU,
0xffe003ffU,
0xffe007ffU,
0xffe00fffU,
0xffe01fffU,
0xffe03fffU,
0xffe07fffU,
0xffe0ffffU,
0xffe1ffffU,
0xffe3ffffU,
0xffe7ffffU,
0xffefffffU
},
{
0xffc00000U,
0xffc00001U,
0xffc00003U,
0xffc00007U,
0xffc0000fU,
0xffc0001fU,
0xffc0003fU,
0xffc0007fU,
0xffc000ffU,
0xffc001ffU,
0xffc003ffU,
0xffc007ffU,
0xffc00fffU,
0xffc01fffU,
0xffc03fffU,
0xffc07fffU,
0xffc0ffffU,
0xffc1ffffU,
0xffc3ffffU,
0xffc7ffffU,
0xffcfffffU,
0xffdfffffU
},
{
0xff800000U,
0xff800001U,
0xff800003U,
0xff800007U,
0xff80000fU,
0xff80001fU,
0xff80003fU,
0xff80007fU,
0xff8000ffU,
0xff8001ffU,
0xff8003ffU,
0xff8007ffU,
0xff800fffU,
0xff801fffU,
0xff803fffU,
0xff807fffU,
0xff80ffffU,
0xff81ffffU,
0xff83ffffU,
0xff87ffffU,
0xff8fffffU,
0xff9fffffU,
0xffbfffffU
},
{
0xff000000U,
0xff000001U,
0xff000003U,
0xff000007U,
0xff00000fU,
0xff00001fU,
0xff00003fU,
0xff00007fU,
0xff0000ffU,
0xff0001ffU,
0xff0003ffU,
0xff0007ffU,
0xff000fffU,
0xff001fffU,
0xff003fffU,
0xff007fffU,
0xff00ffffU,
0xff01ffffU,
0xff03ffffU,
0xff07ffffU,
0xff0fffffU,
0xff1fffffU,
0xff3fffffU,
0xff7fffffU
},
{
0xfe000000U,
0xfe000001U,
0xfe000003U,
0xfe000007U,
0xfe00000fU,
0xfe00001fU,
0xfe00003fU,
0xfe00007fU,
0xfe0000ffU,
0xfe0001ffU,
0xfe0003ffU,
0xfe0007ffU,
0xfe000fffU,
0xfe001fffU,
0xfe003fffU,
0xfe007fffU,
0xfe00ffffU,
0xfe01ffffU,
0xfe03ffffU,
0xfe07ffffU,
0xfe0fffffU,
0xfe1fffffU,
0xfe3fffffU,
0xfe7fffffU,
0xfeffffffU
},
{
0xfc000000U,
0xfc000001U,
0xfc000003U,
0xfc000007U,
0xfc00000fU,
0xfc00001fU,
0xfc00003fU,
0xfc00007fU,
0xfc0000ffU,
0xfc0001ffU,
0xfc0003ffU,
0xfc0007ffU,
0xfc000fffU,
0xfc001fffU,
0xfc003fffU,
0xfc007fffU,
0xfc00ffffU,
0xfc01ffffU,
0xfc03ffffU,
0xfc07ffffU,
0xfc0fffffU,
0xfc1fffffU,
0xfc3fffffU,
0xfc7fffffU,
0xfcffffffU,
0xfdffffffU
},
{
0xf8000000U,
0xf8000001U,
0xf8000003U,
0xf8000007U,
0xf800000fU,
0xf800001fU,
0xf800003fU,
0xf800007fU,
0xf80000ffU,
0xf80001ffU,
0xf80003ffU,
0xf80007ffU,
0xf8000fffU,
0xf8001fffU,
0xf8003fffU,
0xf8007fffU,
0xf800ffffU,
0xf801ffffU,
0xf803ffffU,
0xf807ffffU,
0xf80fffffU,
0xf81fffffU,
0xf83fffffU,
0xf87fffffU,
0xf8ffffffU,
0xf9ffffffU,
0xfbffffffU
},
{
0xf0000000U,
0xf0000001U,
0xf0000003U,
0xf0000007U,
0xf000000fU,
0xf000001fU,
0xf000003fU,
0xf000007fU,
0xf00000ffU,
0xf00001ffU,
0xf00003ffU,
0xf00007ffU,
0xf0000fffU,
0xf0001fffU,
0xf0003fffU,
0xf0007fffU,
0xf000ffffU,
0xf001ffffU,
0xf003ffffU,
0xf007ffffU,
0xf00fffffU,
0xf01fffffU,
0xf03fffffU,
0xf07fffffU,
0xf0ffffffU,
0xf1ffffffU,
0xf3ffffffU,
0xf7ffffffU
},
{
0xe0000000U,
0xe0000001U,
0xe0000003U,
0xe0000007U,
0xe000000fU,
0xe000001fU,
0xe000003fU,
0xe000007fU,
0xe00000ffU,
0xe00001ffU,
0xe00003ffU,
0xe00007ffU,
0xe0000fffU,
0xe0001fffU,
0xe0003fffU,
0xe0007fffU,
0xe000ffffU,
0xe001ffffU,
0xe003ffffU,
0xe007ffffU,
0xe00fffffU,
0xe01fffffU,
0xe03fffffU,
0xe07fffffU,
0xe0ffffffU,
0xe1ffffffU,
0xe3ffffffU,
0xe7ffffffU,
0xefffffffU
},
{
0xc0000000U,
0xc0000001U,
0xc0000003U,
0xc0000007U,
0xc000000fU,
0xc000001fU,
0xc000003fU,
0xc000007fU,
0xc00000ffU,
0xc00001ffU,
0xc00003ffU,
0xc00007ffU,
0xc0000fffU,
0xc0001fffU,
0xc0003fffU,
0xc0007fffU,
0xc000ffffU,
0xc001ffffU,
0xc003ffffU,
0xc007ffffU,
0xc00fffffU,
0xc01fffffU,
0xc03fffffU,
0xc07fffffU,
0xc0ffffffU,
0xc1ffffffU,
0xc3ffffffU,
0xc7ffffffU,
0xcfffffffU,
0xdfffffffU
},
{
0x80000000U,
0x80000001U,
0x80000003U,
0x80000007U,
0x8000000fU,
0x8000001fU,
0x8000003fU,
0x8000007fU,
0x800000ffU,
0x800001ffU,
0x800003ffU,
0x800007ffU,
0x80000fffU,
0x80001fffU,
0x80003fffU,
0x80007fffU,
0x8000ffffU,
0x8001ffffU,
0x8003ffffU,
0x8007ffffU,
0x800fffffU,
0x801fffffU,
0x803fffffU,
0x807fffffU,
0x80ffffffU,
0x81ffffffU,
0x83ffffffU,
0x87ffffffU,
0x8fffffffU,
0x9fffffffU,
0xbfffffffU
},
{
0x0U,
0x1U,
0x3U,
0x7U,
0xfU,
0x1fU,
0x3fU,
0x7fU,
0xffU,
0x1ffU,
0x3ffU,
0x7ffU,
0xfffU,
0x1fffU,
0x3fffU,
0x7fffU,
0xffffU,
0x1ffffU,
0x3ffffU,
0x7ffffU,
0xfffffU,
0x1fffffU,
0x3fffffU,
0x7fffffU,
0xffffffU,
0x1ffffffU,
0x3ffffffU,
0x7ffffffU,
0xfffffffU,
0x1fffffffU,
0x3fffffffU,
0x7fffffffU
}
};

} // namespace sc_dt

#endif
