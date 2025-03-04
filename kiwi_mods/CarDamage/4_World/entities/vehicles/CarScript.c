modded class CarScript
{

	override void OnUpdate( float dt )
    {
		if ( GetGame().IsServer() )
		{
			ItemBase battery = GetBattery();
			if ( battery )
			{
				if ( EngineIsOn() )
				{
					m_BatteryTimer += dt;
					if ( m_BatteryTimer >= BATTERY_UPDATE_DELAY )
					{
						battery.GetCompEM().ConsumeEnergy(GetBatteryRechargeRate() * m_BatteryTimer);
						m_BatteryTimer = 0;
					}
				}
				else if ( !EngineIsOn() && IsScriptedLightsOn() )
				{
					m_BatteryTimer += dt;
					if ( m_BatteryTimer >= BATTERY_UPDATE_DELAY )
					{
						battery.GetCompEM().ConsumeEnergy(GetBatteryRuntimeConsumption() * m_BatteryTimer);
						m_BatteryTimer = 0;
						
						if ( battery.GetCompEM().GetEnergy() <= 0 )
						{
							ToggleHeadlights();
						}
					}
				}
			}

			if ( GetGame().GetWaterDepth( GetEnginePosWS() ) > 0 )
			{
				if ( EngineIsOn() )
				{
					m_DrownTime += dt;
					if ( m_DrownTime > DROWN_ENGINE_THRESHOLD )
					{
						AddHealth( "Engine", "Health", -DROWN_ENGINE_DAMAGE * dt);
						SetEngineZoneReceivedHit(true);
					}
				}
				else
				{
					m_DrownTime = 0;
				}
			}
			else
			{
				m_DrownTime = 0;
			}
		}
		// For visualisation of brake lights for all players
		float brake_coef = GetBrake();
		if ( brake_coef > 0 )
		{
			if ( !m_BrakesArePressed )
			{
				m_BrakesArePressed = true;
				SetSynchDirty();
				OnBrakesPressed();
			}
		}
		else
		{
			if ( m_BrakesArePressed )
			{
				m_BrakesArePressed = false;
				SetSynchDirty();
				OnBrakesReleased();
			}
		}
		
		if ( (!GetGame().IsDedicatedServer()) && m_ForceUpdateLights )
		{
			UpdateLights();
			m_ForceUpdateLights = false;
		}
    }
}
