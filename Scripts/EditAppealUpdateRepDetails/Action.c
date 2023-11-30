//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Select Case", "snapshot=Action_1.inf");
	{
		lr_start_transaction("EditAppealCaseList");
		truclient_step("1.1", "Navigate to https://manage-case.perf....hmcts.net/cases", "snapshot=Action_1.1.inf");
		lr_end_transaction("EditAppealCaseList",0);
		truclient_step("1.2", "Click on Case list link", "snapshot=Action_1.2.inf");
		truclient_step("1.3", "Select Bail* master from Case type listbox", "snapshot=Action_1.3.inf");
		truclient_step("1.4", "Select Appeal* DIAC-132 from Case type listbox", "snapshot=Action_1.4.inf");
		truclient_step("1.5", "Select Awaiting respondent evidence from State listbox", "snapshot=Action_1.5.inf");
		truclient_step("1.6", "Click on Apply filter button", "snapshot=Action_1.6.inf");
		truclient_step("1.7", "Wait 3 seconds", "snapshot=Action_1.7.inf");
		truclient_step("1.8", "Click on RP/84564/2022 link", "snapshot=Action_1.8.inf");
	}
	truclient_step("2", "Evaluate JavaScript code // create a string conta...te.getMinutes();", "snapshot=Action_2.inf");
	truclient_step("3", "Update Representative Details", "snapshot=Action_3.inf");
	{
		truclient_step("3.1", "Select Update representative details from Next step listbox", "snapshot=Action_3.1.inf");
		lr_start_transaction("UpdateRepresentativeDetailsDialog");
		truclient_step("3.2", "Click on Go button", "snapshot=Action_3.2.inf");
		lr_end_transaction("UpdateRepresentativeDetailsDialog",0);
		truclient_step("3.3", "Click on Own reference textbox", "snapshot=Action_3.3.inf");
		truclient_step("3.4", "Type performanceTestNote in Own reference textbox", "snapshot=Action_3.4.inf");
		lr_start_transaction("UpdateRepresentativeDetailsCheckAnswers");
		truclient_step("3.5", "Click on Continue button", "snapshot=Action_3.5.inf");
		lr_end_transaction("UpdateRepresentativeDetailsCheckAnswers",0);
		lr_start_transaction("UpdateRepresentativeDetailsUpdate");
		truclient_step("3.6", "Click on Update button", "snapshot=Action_3.6.inf");
		lr_end_transaction("UpdateRepresentativeDetailsUpdate",0);
		lr_start_transaction("UpdateRepresentativeCloseReturnToCase");
		truclient_step("3.7", "Click on Close and Return to case... button", "snapshot=Action_3.7.inf");
		lr_end_transaction("UpdateRepresentativeCloseReturnToCase",0);
	}
	truclient_step("4", "Edit Appeal", "snapshot=Action_4.inf");
	{
		truclient_step("4.1", "Select Edit appeal from Next step listbox", "snapshot=Action_4.1.inf");
		lr_start_transaction("EditAppealDialog");
		truclient_step("4.2", "Click on Go button", "snapshot=Action_4.2.inf");
		lr_end_transaction("EditAppealDialog",0);
		lr_start_transaction("EditAppealReferenceCaseID");
		truclient_step("4.3", "Click on Continue button", "snapshot=Action_4.3.inf");
		lr_end_transaction("EditAppealReferenceCaseID",0);
		lr_start_transaction("EditAppealBasicDetails");
		truclient_step("4.4", "Click on Continue button", "snapshot=Action_4.4.inf");
		lr_end_transaction("EditAppealBasicDetails",0);
		lr_start_transaction("EditAppealNationality");
		truclient_step("4.5", "Click on Continue button", "snapshot=Action_4.5.inf");
		lr_end_transaction("EditAppealNationality",0);
		lr_start_transaction("EditAppealFixedAddress");
		truclient_step("4.6", "Click on Continue button", "snapshot=Action_4.6.inf");
		lr_end_transaction("EditAppealFixedAddress",0);
		lr_start_transaction("EditAppealCommunicationMethod");
		truclient_step("4.7", "Click on Continue button", "snapshot=Action_4.7.inf");
		lr_end_transaction("EditAppealCommunicationMethod",0);
		lr_start_transaction("EditAppealDeportation");
		truclient_step("4.8", "Click on Continue button", "snapshot=Action_4.8.inf");
		lr_end_transaction("EditAppealDeportation",0);
		truclient_step("4.9", "Wait until Cancel JavaScript link exists", "snapshot=Action_4.9.inf");
		truclient_step("4.10", "Wait 1 seconds", "snapshot=Action_4.10.inf");
		lr_start_transaction("EditAppealNewReasons");
		truclient_step("4.11", "Click on Continue button", "snapshot=Action_4.11.inf");
		lr_end_transaction("EditAppealNewReasons",0);
		truclient_step("4.12", "Wait until Cancel JavaScript link exists", "snapshot=Action_4.12.inf");
		truclient_step("4.13", "Wait 1 seconds", "snapshot=Action_4.13.inf");
		lr_start_transaction("EditAppealPreviousAppeals");
		truclient_step("4.14", "Click on Continue button", "snapshot=Action_4.14.inf");
		lr_end_transaction("EditAppealPreviousAppeals",0);
		truclient_step("4.15", "Wait until Cancel JavaScript link exists", "snapshot=Action_4.15.inf");
		truclient_step("4.16", "Wait 1 seconds", "snapshot=Action_4.16.inf");
		lr_start_transaction("EditAppealDetails");
		truclient_step("4.17", "Click on Continue button", "snapshot=Action_4.17.inf");
		lr_end_transaction("EditAppealDetails",0);
		truclient_step("4.18", "Wait until Cancel JavaScript link exists", "snapshot=Action_4.18.inf");
		truclient_step("4.19", "Wait 1 seconds", "snapshot=Action_4.19.inf");
		lr_start_transaction("EditAppealExplain");
		truclient_step("4.20", "Click on Continue button", "snapshot=Action_4.20.inf");
		lr_end_transaction("EditAppealExplain",0);
		lr_start_transaction("EditAppealCheckAnswers");
		truclient_step("4.21", "Click on Continue button", "snapshot=Action_4.21.inf");
		lr_end_transaction("EditAppealCheckAnswers",0);
		lr_start_transaction("EditAppealSave");
		truclient_step("4.22", "Click on Save and continue button", "snapshot=Action_4.22.inf");
		lr_end_transaction("EditAppealSave",0);
		lr_start_transaction("EditAppealCloseReturnToCase");
		truclient_step("4.23", "Click on Close and Return to case... button", "snapshot=Action_4.23.inf");
		lr_end_transaction("EditAppealCloseReturnToCase",0);
	}

	return 0;
}
