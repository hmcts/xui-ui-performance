//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

vuser_init()
{
	/* Resize to improve object recognition */
	truclient_step("2", "Resize browser window to 1680 px / 2000 px", "snapshot=Init_2.inf");
	truclient_step("3", "Call Function Common.SignIn", "snapshot=Init_3.inf");
	truclient_step("4", "Call Function Common.SelectCasesApplyFilter", "snapshot=Init_4.inf");
	truclient_step("5", "Call Function Common.SelectRandomCase", "snapshot=Init_5.inf");
	truclient_step("6", "WelshTranslation", "snapshot=Init_6.inf");
	{
		lr_start_transaction("030_TranslateToWelsh");
		truclient_step("6.1", "Click on Cymraeg JavaScript link", "snapshot=Init_6.1.inf");
		lr_end_transaction("030_TranslateToWelsh",0);
	}
	truclient_step("7", "Wait 6 seconds", "snapshot=Init_7.inf");
	lr_start_transaction("070_WelshTranslationApplicationTabNoCache");
	truclient_step("8", "Click on Application tab", "snapshot=Init_8.inf");
	lr_end_transaction("070_WelshTranslationApplicationTabNoCache",0);

	return 0;
}
