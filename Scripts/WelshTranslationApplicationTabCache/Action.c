//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "WelshTranslation", "snapshot=Action_1.inf");
	{
		lr_start_transaction("00_TranslateToWelsh");
		truclient_step("1.1", "Click on Cymraeg JavaScript link", "snapshot=Action_1.1.inf");
		lr_end_transaction("00_TranslateToWelsh",0);
		truclient_step("1.2", "Wait 15 seconds", "snapshot=Action_1.2.inf");
		lr_start_transaction("00_WaitForCyflwr");
		truclient_step("1.3", "Wait until Cyflwr label exists", "snapshot=Action_1.3.inf");
		lr_end_transaction("00_WaitForCyflwr",0);
	}
	truclient_step("2", "Call Function Common.SelectCasesApplyFilter", "snapshot=Action_2.inf");
	truclient_step("3", "Call Function Common.SelectRandomCase", "snapshot=Action_3.inf");
	truclient_step("4", "WelshTranslation", "snapshot=Action_4.inf");
	{
		lr_start_transaction("065_TranslateToWelsh");
		truclient_step("4.1", "Click on Cymraeg JavaScript link", "snapshot=Action_4.1.inf");
		lr_end_transaction("065_TranslateToWelsh",0);
	}
	truclient_step("5", "Wait 6 seconds", "snapshot=Action_5.inf");
	lr_start_transaction("070_WelshTranslationApplicationTabCache");
	truclient_step("6", "Click on Application tab", "snapshot=Action_6.inf");
	lr_end_transaction("070_WelshTranslationApplicationTabCache",0);
	truclient_step("7", "WelshTranslation", "snapshot=Action_7.inf");
	{
		lr_start_transaction("190_TranslateToEnglish");
		truclient_step("7.1", "Click on English JavaScript link", "snapshot=Action_7.1.inf");
		lr_end_transaction("190_TranslateToEnglish",0);
	}
	truclient_step("8", "Call Function Common.SignOut", "snapshot=Action_8.inf");

	return 0;
}
