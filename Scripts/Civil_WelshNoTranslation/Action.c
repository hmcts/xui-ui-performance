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
	truclient_step("5", "Call Function Common.SelectCasesApplyFilter", "snapshot=Action_5.inf");
	truclient_step("6", "Call Function Common.SelectRandomCase", "snapshot=Action_6.inf");
	truclient_step("7", "SelectTabs", "snapshot=Action_7.inf");
	{
		lr_start_transaction("070_CaseFileTab");
		truclient_step("7.1", "Click on Case File tab", "snapshot=Action_7.1.inf");
		lr_end_transaction("070_CaseFileTab",0);
		lr_start_transaction("ClaimDetailsTab");
		truclient_step("7.2", "Click on Claim details tab", "snapshot=Action_7.2.inf");
		lr_end_transaction("ClaimDetailsTab",0);
		lr_start_transaction("HistoryTab");
		truclient_step("7.3", "Click on History tab", "snapshot=Action_7.3.inf");
		lr_end_transaction("HistoryTab",0);
		lr_start_transaction("ClaimDocumentsTab");
		truclient_step("7.4", "Click on Claim documents tab", "snapshot=Action_7.4.inf");
		lr_end_transaction("ClaimDocumentsTab",0);
		lr_start_transaction("PaymentHistoryTab");
		truclient_step("7.5", "Click on Payment History tab", "snapshot=Action_7.5.inf");
		lr_end_transaction("PaymentHistoryTab",0);
		lr_start_transaction("ServiceRequestTab");
		truclient_step("7.6", "Click on Case documents tab", "snapshot=Action_7.6.inf");
		lr_end_transaction("ServiceRequestTab",0);
		lr_start_transaction("BundlesTab");
		truclient_step("7.7", "Click on Bundles tab", "snapshot=Action_7.7.inf");
		lr_end_transaction("BundlesTab",0);
		lr_start_transaction("CaseFlagsTab");
		truclient_step("7.8", "Click on Case Flags tab", "snapshot=Action_7.8.inf");
		lr_end_transaction("CaseFlagsTab",0);
	}
	truclient_step("8", "Request Support", "snapshot=Action_8.inf");
	{
		truclient_step("8.1", "Select Request support from Next step listbox", "snapshot=Action_8.1.inf");
		lr_start_transaction("130_RequestSupport");
		truclient_step("8.2", "Click on Go button", "snapshot=Action_8.2.inf");
		lr_end_transaction("130_RequestSupport",0);
		truclient_step("8.3", "Click on top radio button radio", "snapshot=Action_8.3.inf");
		lr_start_transaction("140_SelectPerson");
		truclient_step("8.4", "Click on Next button", "snapshot=Action_8.4.inf");
		lr_end_transaction("140_SelectPerson",0);
		truclient_step("8.5", "Click on Cyfieithydd radiogroup", "snapshot=Action_8.5.inf");
		lr_start_transaction("150_SelectLanguageInterpreter");
		truclient_step("8.6", "Click on Next button", "snapshot=Action_8.6.inf");
		lr_end_transaction("150_SelectLanguageInterpreter",0);
		truclient_step("8.7", "Type French in Language search box textbox", "snapshot=Action_8.7.inf");
		truclient_step("8.8", "Select French from Language search box autocomplete", "snapshot=Action_8.8.inf");
		lr_start_transaction("160_SelectLanguage");
		truclient_step("8.9", "Click on Next button", "snapshot=Action_8.9.inf");
		lr_end_transaction("160_SelectLanguage",0);
		truclient_step("8.10", "Type performance test in Tell us more about the... textbox", "snapshot=Action_8.10.inf");
		lr_start_transaction("170_RequestDetails");
		truclient_step("8.11", "Click on Next button", "snapshot=Action_8.11.inf");
		lr_end_transaction("170_RequestDetails",0);
		lr_start_transaction("180_SubmitSupportRequest");
		truclient_step("8.12", "Click on Submit button", "snapshot=Action_8.12.inf");
		lr_end_transaction("180_SubmitSupportRequest",0);
	}
	truclient_step("9", "WelshTranslation", "snapshot=Action_9.inf");
	{
		truclient_step("9.1", "Click on Cymraeg JavaScript link", "snapshot=Action_9.1.inf");
		lr_start_transaction("190_TranslateToEnglish");
		truclient_step("9.2", "Click on English JavaScript link", "snapshot=Action_9.2.inf");
		lr_end_transaction("190_TranslateToEnglish",0);
	}
	truclient_step("10", "Call Function Common.SignOut", "snapshot=Action_10.inf");

	return 0;
}
