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
	truclient_step("6", "Call Function Common.NavigateMyWork", "snapshot=Action_6.inf");
	truclient_step("7", "Call Function Common.SearchCaseReference", "snapshot=Action_7.inf");
	truclient_step("8", "Call Function Common.SelectRandomCase", "snapshot=Action_8.inf");
	truclient_step("9", "Call Function Common.SelectHearings", "snapshot=Action_9.inf");
	truclient_step("10", "Call Function Common.AddCaseNote", "snapshot=Action_10.inf");
	truclient_step("11", "Call Function Common.AttachScannedDocument", "snapshot=Action_11.inf");
	truclient_step("12", "Call Function Common.SelectCaseDocumentsPDF", "snapshot=Action_12.inf");
	truclient_step("13", "Call Function Common.SelectCaseFileViewPDF", "snapshot=Action_13.inf");
	truclient_step("14", "Call Function Common.SignOut", "snapshot=Action_14.inf");

	return 0;
}
