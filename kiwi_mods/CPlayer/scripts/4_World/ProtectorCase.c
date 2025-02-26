modded class SmallProtectorCase
{
    ref array<string> m_SpecialNotAllowedCargo = {"SmallProtectorCase"};
    override bool CanReceiveItemIntoCargo (EntityAI item)
    {
    foreach( string notAllowedCargo : m_SpecialNotAllowedCargo )
    {        
        if(item.IsKindOf(notAllowedCargo))
            return false;
    }

    return true;
    }
}