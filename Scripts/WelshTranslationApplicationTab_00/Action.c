//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	/* Resize to improve object recognition */
	truclient_step("2", "Resize browser window to 1680 px / 1050 px", "snapshot=Action_2.inf");
	truclient_step("3", "Call Function Common.SignIn", "snapshot=Action_3.inf");
	truclient_step("4", "WelshTranslation", "snapshot=Action_4.inf");
	{
		lr_start_transaction("030_TranslateToWelsh");
		truclient_step("4.1", "Click on Cymraeg JavaScript link", "snapshot=Action_4.1.inf");
		lr_end_transaction("030_TranslateToWelsh",0);
	}
	truclient_step("5", "Navigate to https://manage-case.perf...6305958082#Tasks", "snapshot=Action_5.inf");
	truclient_step("6", "SelectTabs", "snapshot=Action_6.inf");
	{
		lr_start_transaction("070_ApplicationTab");
		truclient_step("6.1", "Click on Application tab", "snapshot=Action_6.1.inf");
		lr_end_transaction("070_ApplicationTab",0);
	}
	truclient_step("7", "WelshTranslation", "snapshot=Action_7.inf");
	{
		truclient_step("7.1", "Click on Cymraeg JavaScript link", "snapshot=Action_7.1.inf");
		lr_start_transaction("190_TranslateToEnglish");
		truclient_step("7.2", "Click on English JavaScript link", "snapshot=Action_7.2.inf");
		lr_end_transaction("190_TranslateToEnglish",0);
	}
	truclient_step("8", "Call Function Common.SignOut", "snapshot=Action_8.inf");

	return 0;
}
