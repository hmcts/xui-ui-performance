//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Call Function Common.SelectCasesApplyFilter", "snapshot=Action_1.inf");
	truclient_step("2", "Call Function Common.SelectRandomCase", "snapshot=Action_2.inf");
	truclient_step("3", "SelectTabs", "snapshot=Action_3.inf");
	{
		lr_start_transaction("070_CaseFileTab");
		truclient_step("3.1", "Click on Case File tab", "snapshot=Action_3.1.inf");
		lr_end_transaction("070_CaseFileTab",0);
		lr_start_transaction("080_ClaimDetailsTab");
		truclient_step("3.2", "Click on Claim details tab", "snapshot=Action_3.2.inf");
		lr_end_transaction("080_ClaimDetailsTab",0);
		lr_start_transaction("090_HistoryTab");
		truclient_step("3.3", "Click on History tab", "snapshot=Action_3.3.inf");
		lr_end_transaction("090_HistoryTab",0);
		lr_start_transaction("100_ClaimDocumentsTab");
		truclient_step("3.4", "Click on Claim documents tab", "snapshot=Action_3.4.inf");
		lr_end_transaction("100_ClaimDocumentsTab",0);
		lr_start_transaction("110_PaymentHistoryTab");
		truclient_step("3.5", "Click on Payment History tab", "snapshot=Action_3.5.inf");
		lr_end_transaction("110_PaymentHistoryTab",0);
		lr_start_transaction("120_ServiceRequestTab");
		truclient_step("3.6", "Click on Service Request tab", "snapshot=Action_3.6.inf");
		lr_end_transaction("120_ServiceRequestTab",0);
		lr_start_transaction("130_BundlesTab");
		truclient_step("3.7", "Click on Bundles tab", "snapshot=Action_3.7.inf");
		lr_end_transaction("130_BundlesTab",0);
		lr_start_transaction("CaseFlagsTab");
		truclient_step("3.8", "Click on Case Flags tab", "snapshot=Action_3.8.inf");
		lr_end_transaction("CaseFlagsTab",0);
	}
	truclient_step("4", "Request Support", "snapshot=Action_4.inf");
	{
		truclient_step("4.1", "Select Request support from Next step listbox", "snapshot=Action_4.1.inf");
		lr_start_transaction("130_RequestSupport");
		truclient_step("4.2", "Click on Go button", "snapshot=Action_4.2.inf");
		lr_end_transaction("130_RequestSupport",0);
		truclient_step("4.3", "Click on top radio button radio", "snapshot=Action_4.3.inf");
		lr_start_transaction("140_SelectPerson");
		truclient_step("4.4", "Click on Next button", "snapshot=Action_4.4.inf");
		lr_end_transaction("140_SelectPerson",0);
		truclient_step("4.5", "Click on Cyfieithydd radiogroup", "snapshot=Action_4.5.inf");
		lr_start_transaction("150_SelectLanguageInterpreter");
		truclient_step("4.6", "Click on Next button", "snapshot=Action_4.6.inf");
		lr_end_transaction("150_SelectLanguageInterpreter",0);
		truclient_step("4.7", "Type French in Language search box textbox", "snapshot=Action_4.7.inf");
		truclient_step("4.8", "Select French from Language search box autocomplete", "snapshot=Action_4.8.inf");
		lr_start_transaction("160_SelectLanguage");
		truclient_step("4.9", "Click on Next button", "snapshot=Action_4.9.inf");
		lr_end_transaction("160_SelectLanguage",0);
		truclient_step("4.10", "Type performance test in Tell us more about the... textbox", "snapshot=Action_4.10.inf");
		lr_start_transaction("170_RequestDetails");
		truclient_step("4.11", "Click on Next button", "snapshot=Action_4.11.inf");
		lr_end_transaction("170_RequestDetails",0);
		lr_start_transaction("180_SubmitSupportRequest");
		truclient_step("4.12", "Click on Submit button", "snapshot=Action_4.12.inf");
		lr_end_transaction("180_SubmitSupportRequest",0);
	}
	truclient_step("5", "WelshTranslation", "snapshot=Action_5.inf");
	{
		lr_start_transaction("190_TranslateToEnglish");
		truclient_step("5.1", "Click on English JavaScript link", "snapshot=Action_5.1.inf");
		lr_end_transaction("190_TranslateToEnglish",0);
	}
	truclient_step("6", "Call Function Common.SignOut", "snapshot=Action_6.inf");

	return 0;
}
