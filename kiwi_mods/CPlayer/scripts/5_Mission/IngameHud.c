modded class IngameHud
{
	override void InitBadgesAndNotifiers()
	{
		super.InitBadgesAndNotifiers();
		
		// For Thirsty, Hungry, Health, Blood, Temperature icons
		for ( int j = 0; j < m_StatesWidgetNames.Count(); j++ )
		{
			string wgt_name = m_StatesWidgetNames.GetElement(j);
			
			// This if statement is to add support for mods which add custom StatesWidgets
			if (wgt_name == "Thirsty" || wgt_name == "Hungry" || wgt_name == "Health" || wgt_name == "Blood")
			{
				ImageWidget wgt;
				Class.CastTo(wgt,  m_Notifiers.FindAnyWidget( String( "Icon" + wgt_name ) ) );
				wgt.Show( true );
				
				for ( int k = 0; k < 5; k++ )
				{
					wgt.LoadImageFile( k, "set:CustomGUI_1" + " image:icon" + wgt_name + k );
				}
			}
		}
		
		// For SICK, BLEEDISH, FRACTURE, STUFFED, WETNESS icons
		for ( int m = 0; m < m_BadgesWidgetNames.Count(); m++ )
		{
			string badge_name = m_BadgesWidgetNames.GetElement( m );
			int key = m_BadgesWidgetNames.GetKey( m );
			ImageWidget badge_widget;
			Class.CastTo(badge_widget,  m_Badges.FindAnyWidget( badge_name ) );
			
			// Set image
			if ( key == NTFKEY_SICK )
				badge_widget.LoadImageFile( 0, "set:CustomGUI_1" + " image:iconBacteria" );
			
			m_BadgesWidgets.Set( key, badge_widget );
			badge_widget.Show( false );
			m_BadgesWidgetDisplay.Set( key, false );
		}
	}
}