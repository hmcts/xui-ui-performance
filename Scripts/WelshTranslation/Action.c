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
		lr_start_transaction("TranslateToWelsh");
		truclient_step("4.1", "Click on Cymraeg JavaScript link", "snapshot=Action_4.1.inf");
		lr_end_transaction("TranslateToWelsh",0);
		lr_start_transaction("TranslateToEnglish");
		truclient_step("4.2", "Click on English JavaScript link", "snapshot=Action_4.2.inf");
		lr_end_transaction("TranslateToEnglish",0);
	}
	truclient_step("5", "Call Function Common.SelectCasesApplyFilter", "snapshot=Action_5.inf");
	truclient_step("6", "Call Function Common.SelectRandomCase", "snapshot=Action_6.inf");
	truclient_step("7", "SelectTabs", "snapshot=Action_7.inf");
	{
		truclient_step("7.1", "Click on Application tab", "snapshot=Action_7.1.inf");
		truclient_step("7.2", "Click on Support tab", "snapshot=Action_7.2.inf");
		truclient_step("7.3", "Click on Dogfennau achos tab", "snapshot=Action_7.3.inf");
		truclient_step("7.4", "Click on Hanes tab", "snapshot=Action_7.4.inf");
		truclient_step("7.5", "Click on Service Request tab", "snapshot=Action_7.5.inf");
		truclient_step("7.6", "Click on Parties tab", "snapshot=Action_7.6.inf");
	}
	truclient_step("8", "Request Support", "snapshot=Action_8.inf");
	{
		truclient_step("8.1", "Select Request support from Next step listbox", "snapshot=Action_8.1.inf");
		truclient_step("8.2", "Click on Go button", "snapshot=Action_8.2.inf");
		truclient_step("8.3", "Click on top radio button radio", "snapshot=Action_8.3.inf");
		truclient_step("8.4", "Click on Next button", "snapshot=Action_8.4.inf");
		truclient_step("8.5", "Click on Cyfieithydd radiogroup", "snapshot=Action_8.5.inf");
		truclient_step("8.6", "Click on Next button", "snapshot=Action_8.6.inf");
		truclient_step("8.7", "Click on Language search box textbox", "snapshot=Action_8.7.inf");
		truclient_step("8.8", "Type French in Language search box textbox", "snapshot=Action_8.8.inf");
		truclient_step("8.9", "Select French from Language search box autocomplete", "snapshot=Action_8.9.inf");
		truclient_step("8.10", "Click on Next button", "snapshot=Action_8.10.inf");
		truclient_step("8.11", "Click on Tell us more about the... textbox", "snapshot=Action_8.11.inf");
		truclient_step("8.12", "Type performance test in Tell us more about the... textbox", "snapshot=Action_8.12.inf");
		truclient_step("8.13", "Click on Next button", "snapshot=Action_8.13.inf");
		truclient_step("8.14", "Click on Submit button", "snapshot=Action_8.14.inf");
	}
	truclient_step("9", "WelshTranslation", "snapshot=Action_9.inf");
	{
		truclient_step("9.1", "Click on Cymraeg JavaScript link", "snapshot=Action_9.1.inf");
		truclient_step("9.2", "Click on English JavaScript link", "snapshot=Action_9.2.inf");
	}
	truclient_step("10", "Call Function Common.SignOut", "snapshot=Action_10.inf");

	return 0;
}
