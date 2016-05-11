#define IDC_LIFE_BAR_FOOD 2200
#define IDC_LIFE_BAR_WATER 2201
#define IDC_LIFE_BAR_HEALTH 2202

	class RSC_ID_BG
	{
		idd = -1;
		fadein=1;
	  	fadeout=1;
		duration = 8;
		class controls
		{
			class CTRL_ID_BG
			{
				idc = 20;
				type = 0;
				style = 512;
				x = 0.024 * safezoneW + safezoneX;
				y = 0.418 * safezoneH + safezoneY;
				w = 0.4 * safezoneW;
				h = 0.310 * safezoneH;
				font="PuristaLight";
				sizeEx = 0.1;
				ColorBackground[] = {1, 1, 1, 0.4};
				colorText[] = {1,1,1,0};
				text = "";
			};
		};
	};

	class RSC_DOMSG7
	{
		idd = -1;
		fadein=1;
	  	fadeout=1;
		duration = 4;
		name="RSC_DOMSG7";
		onLoad="uiNamespace setVariable ['RSC_DOMSG7',_this select 0]";
		objects[]={};
		class controls
		{
			class cg_popup_text_basic7
			{
				type=13;
				style=0x0c+0x02;
				idc=13377;
				x = 0.01 * safezoneW + safezoneX;
				y = 0.200 * safezoneH + safezoneY;
				w = 0.55;
				h = 0.11;
				sizeEx=0.035;
				size=0.035;
				font="PuristaMedium";
				colorBackground[]={0,0,0,0.6};
				colorText[] = { 1 , 1 , 1 , 1 };
				shadow=false;
				text="";
			};
		};
	};

	class RSC_DOMSG6
	{
		idd = -1;
		fadein=1;
	  	fadeout=1;
		duration = 7;
		name="RSC_DOMSG6";
		onLoad="uiNamespace setVariable ['RSC_DOMSG6',_this select 0]";
		objects[]={};
		class controls
		{
			class cg_popup_text_basic6
			{
				type=CT_STRUCTURED_TEXT;
				idc=13376;
				style=ST_LEFT;
				x = 0.01 * safezoneW + safezoneX;
				y = 0.350 * safezoneH + safezoneY;
				w = 0.55;
				h = 0.11;
				valign = "left";
				sizeEx=0.035;
				size=0.035;
				font="PuristaMedium";
				colorBackground[]={0,0,0,0.6};
				colorText[] = { 1 , 1 , 1 , 1 };
				shadow=false;
				text="";
			};

		};
	};

	class RSC_DOMSG5
	{
		idd = -1;
		fadein=1;
	  	fadeout=1;
		duration = 7;
		name="RSC_DOMSG5";
		onLoad="uiNamespace setVariable ['RSC_DOMSG5',_this select 0]";
		objects[]={};
		class controls
		{
			class cg_popup_text_basic5
			{
				type=CT_STRUCTURED_TEXT;
				idc=13375;
				style=ST_LEFT;
				x = 0.01 * safezoneW + safezoneX;
				y = 0.420 * safezoneH + safezoneY;
				w = 0.55;
				h = 0.11;
				valign = "left";
				sizeEx=0.035;
				size=0.035;
				font="PuristaMedium";
				colorBackground[]={0,0,0,0.6};
				colorText[] = { 1 , 1 , 1 , 1 };
				shadow=false;
				text="";
			};

		};
	};


	class RSC_DOMSG4
	{
		idd = -1;
		fadein=1;
	  	fadeout=1;
		duration = 7;
		name="RSC_DOMSG4";
		onLoad="uiNamespace setVariable ['RSC_DOMSG4',_this select 0]";
		objects[]={};
		class controls
		{
			class cg_popup_text_basic4
			{
				type=CT_STRUCTURED_TEXT;
				idc=13374;
				style=ST_LEFT;
				x = 0.01 * safezoneW + safezoneX;
				y = 0.490 * safezoneH + safezoneY;
				w = 0.55;
				h = 0.11;
				valign = "left";
				sizeEx=0.035;
				size=0.035;
				font="PuristaMedium";
				colorBackground[]={0,0,0,0.6};
				colorText[] = { 1 , 1 , 1 , 1 };
				shadow=false;
				text="";
			};

		};
	};

	class RSC_DOMSG3
	{
		idd = -1;
		fadein=1;
	  	fadeout=1;
		duration = 7;
		name="RSC_DOMSG3";
		onLoad="uiNamespace setVariable ['RSC_DOMSG3',_this select 0]";
		objects[]={};
		class controls
		{

			class cg_popup_text_basic3
			{
				type=CT_STRUCTURED_TEXT;
				idc=13373;
				style=ST_LEFT;
				x = 0.01 * safezoneW + safezoneX;
				y = 0.560 * safezoneH + safezoneY;
				w = 0.55;
				h = 0.11;
				valign = "left";
				sizeEx=0.035;
				size=0.035;
				font="PuristaMedium";
				colorBackground[]={0,0,0,0.6};
				colorText[] = { 1 , 1 , 1 , 1 };
				shadow=false;
				text="";
			};

		};
	};

	class RSC_DOMSG2
	{
		idd = -1;
		fadein=1;
	  	fadeout=1;
		duration = 7;
		name="RSC_DOMSG2";
		onLoad="uiNamespace setVariable ['RSC_DOMSG2',_this select 0]";
		objects[]={};
		class controls
		{
			class cg_popup_text_basic2
			{
				type=CT_STRUCTURED_TEXT;
				idc=13372;
				style=ST_LEFT;
				x = 0.01 * safezoneW + safezoneX;
				y = 0.630 * safezoneH + safezoneY;
				w = 0.55;
				h = 0.11;
				valign = "left";
				sizeEx=0.035;
				size=0.035;
				font="PuristaMedium";
				colorBackground[]={0,0,0,0.6};
				colorText[] = { 1 , 1 , 1 , 1 };
				shadow=false;
				text="";
			};
		};
	};

	class RSC_DOMSG1
	{
		idd = -1;
		fadein=1;
	  	fadeout=1;
		duration = 7;
		name="RSC_DOMSG1";
		onLoad="uiNamespace setVariable ['RSC_DOMSG1',_this select 0]";
		objects[]={};
		class controls
		{
			class cg_popup_text_basic1
			{
				type=CT_STRUCTURED_TEXT;
				idc=13371;
				style=ST_LEFT;
				x = 0.01 * safezoneW + safezoneX;
				y = 0.700 * safezoneH + safezoneY;
				w = 0.55;
				h = 0.11;
				valign = "left";
				sizeEx=0.035;
				size=0.035;
				font="PuristaMedium";
				colorBackground[]={0,0,0,0.6};
				colorText[] = { 1 , 1 , 1 , 1 };
				shadow=false;
				text="";
			};
		};
	};

	class playerHUD
   	{
		idd=-1;
		movingEnable=0;
	  	fadein=0;
		duration = 99999999999999999999999999999999999999999999;
	  	fadeout=0;
		name="playerHUD";
		onLoad="uiNamespace setVariable ['playerHUD',_this select 0]";
		objects[]={};

		class controlsBackground
		{

            class EZLIFE : life_RscPicture
            {
                idc = -1;
                text = "";
                x = 0.85 * safezoneW + safezoneX;
                y = 0.85 * safezoneH + safezoneY;
                w = 0.12 * safezoneW;
                h = 0.128 * safezoneH;
            };

			/* Background */
			class LIFE_UI_BACK: Life_RscBackground
			{
				colorBackground[] = {0,0,0,0.55};
				x = 0.937656 * safezoneW + safezoneX;
				y = 0.419 * safezoneH + safezoneY;
				w = 0.0625 * safezoneW;
				h = 0.286 * safezoneH;
			};

			/* Progress Bars */

			class LIFE_BAR_HEALTH: Life_RscProgress
			{
				idc = 2202;
				x = 0.958281 * safezoneW + safezoneX;
				y = 0.43 * safezoneH + safezoneY;
				w = 0.041875 * safezoneW;
				h = 0.022 * safezoneH;
			};


			class LIFE_BAR_FOOD: Life_RscProgress
			{
				idc = 2200;
				x = 0.958281 * safezoneW + safezoneX;
				y = 0.457 * safezoneH + safezoneY;
				w = 0.041875 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class LIFE_BAR_WATER: Life_RscProgress
			{
				idc = 2201;
				x = 0.958281 * safezoneW + safezoneX;
				y = 0.484 * safezoneH + safezoneY;
				w = 0.041875 * safezoneW;
				h = 0.022 * safezoneH;
			};



			class LIFE_BAR_FPS: Life_RscProgress
			{
				idc = 2203;
				x = 0.958281 * safezoneW + safezoneX;
				y = 0.511 * safezoneH + safezoneY;
				w = 0.041875 * safezoneW;
				h = 0.022 * safezoneH;
			};


			class LIFE_BAR_STAMINA: Life_RscProgress
			{
				idc = 2204;
				x = 0.958281 * safezoneW + safezoneX;
				y = 0.538 * safezoneH + safezoneY;
				w = 0.041875 * safezoneW;
				h = 0.022 * safezoneH;
			};

			class LIFE_BAR_MAGS: Life_RscProgress
			{
				idc = 2205;
				x = 0.958281 * safezoneW + safezoneX;
				y = 0.565 * safezoneH + safezoneY;
				w = 0.041875 * safezoneW;
				h = 0.022 * safezoneH;
			};


			class LIFE_BAR_AMMO: Life_RscProgress
			{
				idc = 2206;
				x = 0.958281 * safezoneW + safezoneX;
				y = 0.592 * safezoneH + safezoneY;
				w = 0.041875 * safezoneW;
				h = 0.022 * safezoneH;
			};


			class LIFE_BAR_SELECT: Life_RscProgress
			{
				idc = 2207;
				x = 0.958281 * safezoneW + safezoneX;
				y = 0.619 * safezoneH + safezoneY;
				w = 0.041875 * safezoneW;
				h = 0.022 * safezoneH;
			};

			class LIFE_BAR_BATTERY: Life_RscProgress
			{
				idc = 2208;
				x = 0.958281 * safezoneW + safezoneX;
				y = 0.646 * safezoneH + safezoneY;
				w = 0.041875 * safezoneW;
				h = 0.022 * safezoneH;
			};

			/* Picture */

			class healthHIcon : life_RscPicture
			{

				idc = -1;
				text = "icons\health.paa";
				x = 0.942356 * safezoneW + safezoneX;
				y = 0.43 * safezoneH + safezoneY;
				w = 0.03; h = 0.04;
			};


			class foodHIcon : life_RscPicture
			{

				idc = -1;
				text = "icons\food.paa";
				x = 0.942356 * safezoneW + safezoneX;
				y = 0.457 * safezoneH + safezoneY;
				w = 0.03; h = 0.04;
			};

			class waterHIcon : life_RscPicture
			{

				idc = -1;
				text = "icons\water.paa";
				x = 0.942356 * safezoneW + safezoneX;
				y = 0.484 * safezoneH + safezoneY;
				w = 0.03; h = 0.04;
			};

			class fpsIcon : life_RscPicture
			{

				idc = -1;
				text = "icons\fps.paa";
				x = 0.942356 * safezoneW + safezoneX;
				y = 0.511 * safezoneH + safezoneY;
				w = 0.03; h = 0.04;
			};


			class moneyHIcon : life_RscPicture
			{

				idc = -1;
				text = "icons\stamina.paa";
				x = 0.942356 * safezoneW + safezoneX;
				y = 0.538 * safezoneH + safezoneY;
				w = 0.03; h = 0.04;
			};

			class ammoHIcon : life_RscPicture
			{

				idc = -1;
				text = "icons\ammo.paa";
				x = 0.942356 * safezoneW + safezoneX;
				y = 0.565 * safezoneH + safezoneY;
				w = 0.03; h = 0.04;
			};

			class bulletHIcon : life_RscPicture
			{

				idc = -1;
				text = "icons\bullets.paa";
				x = 0.942356 * safezoneW + safezoneX;
				y = 0.592 * safezoneH + safezoneY;
				w = 0.03; h = 0.04;
			};

			class selectHIcon : life_RscPicture
			{

				idc = -1;
				text = "icons\select.paa";
				x = 0.942356 * safezoneW + safezoneX;
				y = 0.619 * safezoneH + safezoneY;
				w = 0.03; h = 0.04;
			};

			class batteryHIcon : life_RscPicture
			{

				idc = -1;
				text = "icons\phone100.paa";
				x = 0.942356 * safezoneW + safezoneX;
				y = 0.646 * safezoneH + safezoneY;
				w = 0.03; h = 0.04;
			};

		};

		class controls
		{



			class healthtext
			{
				type=0;
				idc=23515;
				style=0;

				x = 0.970906 * safezoneW + safezoneX;
				y = 0.428 * safezoneH + safezoneY;
				w = 0.05;
				h = 0.04;

				sizeEx=0.03;
				size=1;
				font="PuristaLight";
				colorBackground[]={0.1,0.1,0.1,0};
				colorText[] = { 1 , 1 , 1 , 1 };
				shadow=true;
				text="";
			};





			class foodtext
			{
				type=0;
				idc=23500;
				style=0;

				x = 0.970906 * safezoneW + safezoneX;
				y = 0.455 * safezoneH + safezoneY;
				w = 0.05;
				h = 0.04;

				sizeEx=0.03;
				size=1;
				font="PuristaLight";
				colorBackground[]={0.1,0.1,0.1,0};
				colorText[] = { 1 , 1 , 1 , 1 };
				shadow=true;
				text="";
			};










			class watertext
			{
				type=0;
				idc=23510;
				style=0;
				x = 0.970906 * safezoneW + safezoneX;
				y = 0.482 * safezoneH + safezoneY;
				w = 0.05;
				h = 0.04;

				sizeEx=0.03;
				size=1;
				font="PuristaLight";
				colorBackground[]={0.1,0.1,0.1,0};
				colorText[] = { 1 , 1 , 1 , 1 };
				shadow=true;
				text="";
			};

			class fpstext
			{
				type=0;
				idc=23495;
				style=0;
				x = 0.970906 * safezoneW + safezoneX;
				y = 0.509 * safezoneH + safezoneY;
				w = 0.05;
				h = 0.04;

				sizeEx=0.03;
				size=1;
				font="PuristaLight";
				colorBackground[]={0.1,0.1,0.1,0};
				colorText[] = { 1 , 1 , 1 , 1 };
				shadow=true;
				text="";
			};


			class moneytext
			{
				type=0;
				idc=23520;
				style=0;
				x = 0.970906 * safezoneW + safezoneX;
				y = 0.536 * safezoneH + safezoneY;
				w = 0.05;
				h = 0.04;

				sizeEx=0.03;
				size=1;
				font="PuristaLight";
				colorBackground[]={0.1,0.1,0.1,0};
				colorText[] = { 1 , 1 , 1 , 1 };
				shadow=true;
				text="";
			};


			class ammotext
			{
				type=0;
				idc=23525;
				style=0;
				x = 0.970906 * safezoneW + safezoneX;
				y = 0.563 * safezoneH + safezoneY;
				w = 0.05;
				h = 0.04;

				sizeEx=0.03;
				size=1;
				font="PuristaLight";
				colorBackground[]={0.1,0.1,0.1,0};
				colorText[] = { 1 , 1 , 1 , 1 };
				shadow=true;
				text="";
			};


			class bullettext
			{
				type=0;
				idc=23530;
				style=0;
				x = 0.970906 * safezoneW + safezoneX;
				y = 0.590 * safezoneH + safezoneY;
				w = 0.05;
				h = 0.04;

				sizeEx=0.03;
				size=1;
				font="PuristaLight";
				colorBackground[]={0.1,0.1,0.1,0};
				colorText[] = { 1 , 1 , 1 , 1 };
				shadow=true;
				text="";
			};



						//Display Total Money
			class selecttext
			{
				type=0;
				idc=23535;
				style=0;
				x = 0.964 * safezoneW + safezoneX;
				y = 0.617 * safezoneH + safezoneY;
				w = 0.1;
				h = 0.04;

				sizeEx=0.03;
				size=1;
				font="PuristaLight";
				colorBackground[]={0.1,0.1,0.1,0};
				colorText[] = { 1 , 1 , 1 , 1 };
				shadow=true;
				text="";
			};


			class batterytext              //  Add this area <-----
			{
				type=0;
				idc=23600;
				style=0;
				x = 0.970906 * safezoneW + safezoneX;
				y = 0.644 * safezoneH + safezoneY;
				w = 0.05;
				h = 0.04;

				sizeEx=0.03;
				size=1;
				font="PuristaLight";
				colorBackground[]={0.1,0.1,0.1,0};
				colorText[] = { 1 , 1 , 1 , 1 };
				shadow=true;
				text="";
			};


			class karmatext              //  Add this area <-----
			{
				type=0;
				idc=23605;
				style=0;
				x = 0.964 * safezoneW + safezoneX;
				y = 0.671 * safezoneH + safezoneY;
				w = 0.1;
				h = 0.04;

				sizeEx=0.03;
				size=1;
				font="PuristaLight";
				colorBackground[]={0.1,0.1,0.1,0};
				colorText[] = { 1 , 1 , 1 , 1 };
				shadow=true;
				text="";
			};


			class bleedingtext
			{
				type=CT_STRUCTURED_TEXT;
				idc=23570;
				style=ST_LEFT;
				x = 0.834 * safezoneW + safezoneX;
				y = 0.463 * safezoneH + safezoneY;
				w = 0.8;
				h = 1;
				sizeEx=0.03;
				size=1;
				font="PuristaLight";
				colorBackground[]={0,0,0,0};
				colorText[] = { 1 , 1 , 1 , 1 };
				shadow=true;
				text="";
			};

			class woundedtext
			{
				type=CT_STRUCTURED_TEXT;
				idc=23575;
				style=ST_LEFT;
				x = 0.834 * safezoneW + safezoneX;
				y = 0.503 * safezoneH + safezoneY;
				w = 0.8;
				h = 1;
				sizeEx=0.03;
				size=1;
				font="PuristaLight";
				colorBackground[]={0,0,0,0};
				colorText[] = { 1 , 1 , 1 , 1 };
				shadow=true;
				text="";
			};
			class fracturetext
			{
				type=CT_STRUCTURED_TEXT;
				idc=23580;
				style=ST_LEFT;
				x = 0.834 * safezoneW + safezoneX;
				y = 0.543 * safezoneH + safezoneY;
				w = 0.8;
				h = 1;
				sizeEx=0.03;
				size=1;
				font="PuristaLight";
				colorBackground[]={0,0,0,0};
				colorText[] = { 1 , 1 , 1 , 1 };
				shadow=true;
				text="";
			};

			class unconcioustext
			{
				type=CT_STRUCTURED_TEXT;
				idc=23585;
				style=ST_LEFT;
				x = 0.834 * safezoneW + safezoneX;
				y = 0.583 * safezoneH + safezoneY;
				w = 0.8;
				h = 1;
				sizeEx=0.03;
				size=1;
				font="PuristaLight";
				colorBackground[]={0,0,0,0};
				colorText[] = { 1 , 1 , 1 , 1 };
				shadow=true;
				text="";
			};


			class diseasetext
			{
				type=CT_STRUCTURED_TEXT;
				idc=23590;
				style=ST_LEFT;
				x = 0.834 * safezoneW + safezoneX;
				y = 0.623 * safezoneH + safezoneY;
				w = 0.8;
				h = 1;
				sizeEx=0.03;
				size=1;
				font="PuristaLight";
				colorBackground[]={0,0,0,0};
				colorText[] = { 1 , 1 , 1 , 1 };
				shadow=true;
				text="";
			};
		};
 	};