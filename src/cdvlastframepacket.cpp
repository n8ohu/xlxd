//
//  cdvlastframepacket.cpp
//  xlxd
//
//  Created by Jean-Luc Deltombe (LX3JL) on 03/11/2015.
//  Copyright © 2015 Jean-Luc Deltombe (LX3JL). All rights reserved.
//
// ----------------------------------------------------------------------------
//    This file is part of xlxd.
//
//    xlxd is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    xlxd is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with Foobar.  If not, see <http://www.gnu.org/licenses/>. 
// ----------------------------------------------------------------------------

#include "main.h"
#include "cdvlastframepacket.h"


////////////////////////////////////////////////////////////////////////////////////////
// constructor

CDvLastFramePacket::CDvLastFramePacket()
{
}

CDvLastFramePacket::CDvLastFramePacket(const struct dstar_dvframe *DvFrame, uint16 sid, uint8 pid)
    : CDvFramePacket(DvFrame, sid, pid)
{
}

CDvLastFramePacket::CDvLastFramePacket(const CDvLastFramePacket &DvFrame)
    : CDvFramePacket(DvFrame)
{
}

////////////////////////////////////////////////////////////////////////////////////////
// virtual duplication

CPacket *CDvLastFramePacket::Duplicate(void) const
{
    return new CDvLastFramePacket(*this);
}

