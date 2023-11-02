//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Select Case", "snapshot=Action_1.inf");
	{
		truclient_step("1.1", "Click on Case list link", "snapshot=Action_1.1.inf");
		truclient_step("1.2", "Select Awaiting respondent evidence from State listbox", "snapshot=Action_1.2.inf");
		truclient_step("1.3", "Click on Apply filter button", "snapshot=Action_1.3.inf");
		truclient_step("1.4", "Wait 3 seconds", "snapshot=Action_1.4.inf");
		truclient_step("1.5", "Click on RP/84564/2022 link", "snapshot=Action_1.5.inf");
	}
	truclient_step("2", "Select All Tabs", "snapshot=Action_2.inf");
	{
		truclient_step("2.1", "Click on Appeal tab", "snapshot=Action_2.1.inf");
		truclient_step("2.2", "Click on Appellant tab", "snapshot=Action_2.2.inf");
		truclient_step("2.3", "Click on Documents tab", "snapshot=Action_2.3.inf");
		truclient_step("2.4", "Click on Directions tab", "snapshot=Action_2.4.inf");
		truclient_step("2.5", "Click on Case notes tab", "snapshot=Action_2.5.inf");
		truclient_step("2.6", "Click on Case flags tab", "snapshot=Action_2.6.inf");
		truclient_step("2.7", "Click on Applications tab", "snapshot=Action_2.7.inf");
		truclient_step("2.8", "Click on Linked Cases tab", "snapshot=Action_2.8.inf");
		truclient_step("2.9", "Click on Payment history tab", "snapshot=Action_2.9.inf");
		truclient_step("2.10", "Click on Case history tab", "snapshot=Action_2.10.inf");
		truclient_step("2.11", "Click on Hearings tab", "snapshot=Action_2.11.inf");
	}
	truclient_step("3", "Evaluate JavaScript code // create a string conta...te.getMinutes();", "snapshot=Action_3.inf");
	truclient_step("4", "Update Representative Details", "snapshot=Action_4.inf");
	{
		truclient_step("4.1", "Select Update representative details from Next step listbox", "snapshot=Action_4.1.inf");
		lr_start_transaction("UpdateRepresentativeDetailsDialog");
		truclient_step("4.2", "Click on Go button", "snapshot=Action_4.2.inf");
		lr_end_transaction("UpdateRepresentativeDetailsDialog",0);
		truclient_step("4.3", "Click on Own reference textbox", "snapshot=Action_4.3.inf");
		truclient_step("4.4", "Type performanceTestNote in Own reference textbox", "snapshot=Action_4.4.inf");
		lr_start_transaction("UpdateRepresentativeDetailsCheckAnswers");
		truclient_step("4.5", "Click on Continue button", "snapshot=Action_4.5.inf");
		lr_end_transaction("UpdateRepresentativeDetailsCheckAnswers",0);
		lr_start_transaction("UpdateRepresentativeDetailsUpdate");
		truclient_step("4.6", "Click on Update button", "snapshot=Action_4.6.inf");
		lr_end_transaction("UpdateRepresentativeDetailsUpdate",0);
		lr_start_transaction("UpdateRepresentativeCloseReturnToCase");
		truclient_step("4.7", "Click on Close and Return to case... button", "snapshot=Action_4.7.inf");
		lr_end_transaction("UpdateRepresentativeCloseReturnToCase",0);
	}
	truclient_step("5", "Edit Appeal", "snapshot=Action_5.inf");
	{
		truclient_step("5.1", "Select Edit appeal from Next step listbox", "snapshot=Action_5.1.inf");
		lr_start_transaction("EditAppealDialog");
		truclient_step("5.2", "Click on Go button", "snapshot=Action_5.2.inf");
		lr_end_transaction("EditAppealDialog",0);
		lr_start_transaction("EditAppealReferenceCaseID");
		truclient_step("5.3", "Click on Continue button", "snapshot=Action_5.3.inf");
		lr_end_transaction("EditAppealReferenceCaseID",0);
		lr_start_transaction("EditAppealBasicDetails");
		truclient_step("5.4", "Click on Continue button", "snapshot=Action_5.4.inf");
		lr_end_transaction("EditAppealBasicDetails",0);
		lr_start_transaction("EditAppealNationality");
		truclient_step("5.5", "Click on Continue button", "snapshot=Action_5.5.inf");
		lr_end_transaction("EditAppealNationality",0);
		lr_start_transaction("EditAppealFixedAddress");
		truclient_step("5.6", "Click on Continue button", "snapshot=Action_5.6.inf");
		lr_end_transaction("EditAppealFixedAddress",0);
		lr_start_transaction("EditAppealCommunicationMethod");
		truclient_step("5.7", "Click on Continue button", "snapshot=Action_5.7.inf");
		lr_end_transaction("EditAppealCommunicationMethod",0);
		lr_start_transaction("EditAppealDeportation");
		truclient_step("5.8", "Click on Continue button", "snapshot=Action_5.8.inf");
		lr_end_transaction("EditAppealDeportation",0);
		truclient_step("5.9", "Wait until Cancel JavaScript link exists", "snapshot=Action_5.9.inf");
		truclient_step("5.10", "Wait 1 seconds", "snapshot=Action_5.10.inf");
		lr_start_transaction("EditAppealNewReasons");
		truclient_step("5.11", "Click on Continue button", "snapshot=Action_5.11.inf");
		lr_end_transaction("EditAppealNewReasons",0);
		truclient_step("5.12", "Wait until Cancel JavaScript link exists", "snapshot=Action_5.12.inf");
		truclient_step("5.13", "Wait 1 seconds", "snapshot=Action_5.13.inf");
		lr_start_transaction("EditAppealPreviousAppeals");
		truclient_step("5.14", "Click on Continue button", "snapshot=Action_5.14.inf");
		lr_end_transaction("EditAppealPreviousAppeals",0);
		truclient_step("5.15", "Wait until Cancel JavaScript link exists", "snapshot=Action_5.15.inf");
		truclient_step("5.16", "Wait 1 seconds", "snapshot=Action_5.16.inf");
		lr_start_transaction("EditAppealDetails");
		truclient_step("5.17", "Click on Continue button", "snapshot=Action_5.17.inf");
		lr_end_transaction("EditAppealDetails",0);
		truclient_step("5.18", "Wait until Cancel JavaScript link exists", "snapshot=Action_5.18.inf");
		truclient_step("5.19", "Wait 1 seconds", "snapshot=Action_5.19.inf");
		lr_start_transaction("EditAppealExplain");
		truclient_step("5.20", "Click on Continue button", "snapshot=Action_5.20.inf");
		lr_end_transaction("EditAppealExplain",0);
		lr_start_transaction("EditAppealCheckAnswers");
		truclient_step("5.21", "Click on Continue button", "snapshot=Action_5.21.inf");
		lr_end_transaction("EditAppealCheckAnswers",0);
		lr_start_transaction("EditAppealSave");
		truclient_step("5.22", "Click on Save and continue button", "snapshot=Action_5.22.inf");
		lr_end_transaction("EditAppealSave",0);
		lr_start_transaction("EditAppealCloseReturnToCase");
		truclient_step("5.23", "Click on Close and Return to case... button", "snapshot=Action_5.23.inf");
		lr_end_transaction("EditAppealCloseReturnToCase",0);
	}

	return 0;
}
