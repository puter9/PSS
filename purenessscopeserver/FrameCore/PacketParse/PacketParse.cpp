#include "PacketParse.h"


CPacketParse::CPacketParse(void)
{
}

void CPacketParse::SetHashID(int nHashID)
{
    m_nHashID = nHashID;
}

int CPacketParse::GetHashID()
{
    return m_nHashID;
}

void CPacketParse::Init()
{
    m_nHashID = 0;
}

