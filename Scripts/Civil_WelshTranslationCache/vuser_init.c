//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

vuser_init()
{
	/* Resize to improve object recognition */
	truclient_step("2", "Resize browser window to 1680 px / 1050 px", "snapshot=Init_2.inf");
	truclient_step("3", "Call Function Common.SignIn", "snapshot=Init_3.inf");
	truclient_step("4", "WelshTranslation", "snapshot=Init_4.inf");
	{
		truclient_step("4.1", "Click on Cymraeg JavaScript link", "snapshot=Init_4.1.inf");
	}
	truclient_step("5", "Call Function Common.SelectCasesApplyFilter", "snapshot=Init_5.inf");
	truclient_step("6", "Call Function Common.SelectRandomCase", "snapshot=Init_6.inf");
	truclient_step("7", "SelectTabs", "snapshot=Init_7.inf");
	{
		truclient_step("7.1", "Click on Case File tab", "snapshot=Init_7.1.inf");
		truclient_step("7.2", "Click on Claim details tab", "snapshot=Init_7.2.inf");
		truclient_step("7.3", "Click on History tab", "snapshot=Init_7.3.inf");
		truclient_step("7.4", "Click on Claim documents tab", "snapshot=Init_7.4.inf");
		truclient_step("7.5", "Click on Payment History tab", "snapshot=Init_7.5.inf");
		truclient_step("7.6", "Click on Service Request tab", "snapshot=Init_7.6.inf");
		truclient_step("7.7", "Click on Bundles tab", "snapshot=Init_7.7.inf");
		truclient_step("7.8", "Click on Case Flags tab", "snapshot=Init_7.8.inf");
	}

	return 0;
}
