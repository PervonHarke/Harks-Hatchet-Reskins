#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class HHR_h60_skins
	{
		units[]=
		{
			"HHR_uh60m_bundesheer",
			"HHR_uh60m_bundesheer_slick",
//			"HHR_uh60m_luftwaffe",
//			"HHR_uh60m_luftwaffe_slick",
//			"HHR_uh60m_slick",
//			"HHR_uh60m_medevac_slick",
      "HHR_mh60m_JSOK",
      "HHR_uh60m_JSOK",
      "HHR_uh60m_JSOK_slick"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
		};
	};
};
class CfgVehicles
{
	class vtx_uh60M;
	class vtx_UH60M_SLICK;
	class vtx_MH60M;


// UH-60M Bundesheer NORMAL
	class HHR_uh60m_bundesheer:vtx_uh60M
	{
		scope=2;
		category="Air";
		side=1;
		faction="BLU_F";
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"Harks-Hatchet-Reskins\data\UH60M_Bundesheer\Hull_Main_UH60M_Bundesheer_Gruen.paa",
			"Harks-Hatchet-Reskins\data\UH60M_Bundesheer\Misc_UH60M_Bundesheer_Gruen.paa",
			"Harks-Hatchet-Reskins\data\UH60M_Bundesheer\Hull_Tail_UH60M_Bundesheer_Gruen.paa",
			""
		};
		displayName="UH-60M Bundesheer";
		icon="\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_CA.paa";
		picture="\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_CA.paa";
  };


// UH-60M Bundesheer SLICK
	class HHR_uh60m_bundesheer_slick:vtx_UH60M_SLICK
	{
		scope=2;
		category="Air";
		side=1;
		faction="BLU_F";
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"Harks-Hatchet-Reskins\data\UH60M_Bundesheer\Hull_Main_UH60M_Bundesheer_Gruen.paa",
			"Harks-Hatchet-Reskins\data\UH60M_Bundesheer\Misc_UH60M_Bundesheer_Gruen.paa",
			"Harks-Hatchet-Reskins\data\UH60M_Bundesheer\Hull_Tail_UH60M_Bundesheer_Gruen.paa",
			""
		};
		displayName="UH-60M Bundesheer Slick";
		icon="\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_CA.paa";
		picture="\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_CA.paa";
	};

// UH-60M JSOK
  class HHR_uh60m_JSOK:vtx_uh60M
  {
    scope=2;
    category="Air";
    side=1;
    faction="BLU_F";
    hiddenSelectionsTextures[]=
    {
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"Harks-Hatchet-Reskins\data\UH60M_JSOK\Markings_UH-60M_JSOK.paa",
			"Harks-Hatchet-Reskins\data\UH60M_JSOK\Hull_Main_UH-60M_JSOK.paa",
			"Harks-Hatchet-Reskins\data\UH60M_JSOK\Misc_UH-60M_JSOK.paa",
			"Harks-Hatchet-Reskins\data\UH60M_JSOK\Hull_Tail_UH-60M_JSOK.paa",
			""
    };
    displayName="UH-60M JSOK";
    icon="\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_CA.paa";
    picture="\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_CA.paa";
  };


// UH-60M JSOK
    class HHR_uh60m_JSOK_slick:vtx_uh60M_SLICK
    {
      scope=2;
      category="Air";
      side=1;
      faction="BLU_F";
      hiddenSelectionsTextures[]=
      {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "Harks-Hatchet-Reskins\data\UH60M_JSOK\Markings_UH-60M_JSOK.paa",
  			"Harks-Hatchet-Reskins\data\UH60M_JSOK\Hull_Main_UH-60M_JSOK.paa",
  			"Harks-Hatchet-Reskins\data\UH60M_JSOK\Misc_UH-60M_JSOK.paa",
  			"Harks-Hatchet-Reskins\data\UH60M_JSOK\Hull_Tail_UH-60M_JSOK.paa",
        ""
      };
      displayName="UH-60M Slick JSOK";
      icon="\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_CA.paa";
      picture="\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_CA.paa";
    };

// MH-60M JSOK
		class HHR_mh60m_JSOK:vtx_MH60M
		{
		  scope=2;
		  category="Air";
		  side=1;
		  faction="BLU_F";
		  hiddenSelectionsTextures[]=
		  {
		    "",
		    "",
		    "",
		    "",
		    "",
		    "",
		    "",
		    "",
		    "",
		    "",
		    "",
		    "",
		    "",
		    "",
		    "",
		    "Harks-Hatchet-Reskins\data\MH60M_JSOK\Markings_MH-60M_JSOK.paa",
		  	"Harks-Hatchet-Reskins\data\MH60M_JSOK\Hull_Main_MH-60M_JSOK.paa",
		  	"Harks-Hatchet-Reskins\data\MH60M_JSOK\Misc_MH-60M_JSOK.paa",
		  	"Harks-Hatchet-Reskins\data\MH60M_JSOK\Hull_Tail_MH-60M_JSOK.paa",
				"",
				"",
				"",
				"",
	      "z\vtx\addons\UH60\data\FuelProbe\Fuel_probe_co.paa"
		  };
		  displayName="MH-60M JSOK";
  		editorPreview = "z\vtx\addons\MH60M\Data\Preview\vtx_MH60M.jpg";
		  icon="\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_CA.paa";
		  picture="\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_CA.paa";
		};



				class textureSources
				{
					class JSOK
					{
						// Display name of the texture
						displayName = "JSOK";
						// Author
						author = "Per_von_Harke";
						// Textures (custom ones)
						textures[] =
						{
							"",
							"",
							"",
							"",
							"",
							"",
							"",
							"",
							"",
							"",
							"",
							"",
							"",
							"",
							"",
							"Harks-Hatchet-Reskins\data\MH60M_JSOK\Markings_MH-60M_JSOK.paa",
							"Harks-Hatchet-Reskins\data\MH60M_JSOK\Hull_Main_MH-60M_JSOK.paa",
							"Harks-Hatchet-Reskins\data\MH60M_JSOK\Misc_MH-60M_JSOK.paa",
							"Harks-Hatchet-Reskins\data\MH60M_JSOK\Hull_Tail_MH-60M_JSOK.paa",
							"",
							"",
							"",
							"",
							"z\vtx\addons\UH60\data\FuelProbe\Fuel_probe_co.paa"
						};
						factions[] =
						{
							"BLU_F", "BLU_G_F",	// Side Blufor
						};
					};//class HHR_JSOK
				};//Texture Sources
		};// CfgVehicleTemplates




};//class CfgVehicles
