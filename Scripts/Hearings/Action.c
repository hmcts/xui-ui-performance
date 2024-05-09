//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Call Function Common.SelectCasesApplyFilter", "snapshot=Action_1.inf");
	truclient_step("2", "Call Function Common.SelectRandomCase", "snapshot=Action_2.inf");
	truclient_step("3", "Call Function Common.SelectHearings", "snapshot=Action_3.inf");
	truclient_step("4", "RequestHearing", "snapshot=Action_4.inf");
	{
		lr_start_transaction("XUI02_050_RequestHearingStart");
		truclient_step("4.1", "Click on Request a hearing JavaScript link", "snapshot=Action_4.1.inf");
		lr_end_transaction("XUI02_050_RequestHearingStart",0);
		truclient_step("4.2", "Click on Continue button", "snapshot=Action_4.2.inf");
		truclient_step("4.3", "Click on Continue button", "snapshot=Action_4.3.inf");
		truclient_step("4.4", "Click on Finding of Fact listitem", "snapshot=Action_4.4.inf");
		truclient_step("4.5", "Click on Continue button", "snapshot=Action_4.5.inf");
		truclient_step("4.6", "Click on In Person", "snapshot=Action_4.6.inf");
		truclient_step("4.7", "Select In Person from 1st dropdown listbox", "snapshot=Action_4.7.inf");
		truclient_step("4.8", "Select In Person from 2nd dropdown listbox", "snapshot=Action_4.8.inf");
		truclient_step("4.9", "Select In Person from 3rd dropdown listbox", "snapshot=Action_4.9.inf");
		truclient_step("4.10", "Select In Person from 4th dropdown listbox", "snapshot=Action_4.10.inf");
		truclient_step("4.11", "Select In Person from 5th dropdown listbox", "snapshot=Action_4.11.inf");
		truclient_step("4.12", "Type 5 in How many people will... textbox", "snapshot=Action_4.12.inf");
		truclient_step("4.13", "Click on Continue button", "snapshot=Action_4.13.inf");
		truclient_step("4.14", "Click on Continue button", "snapshot=Action_4.14.inf");
		truclient_step("4.15", "Click on Continue button", "snapshot=Action_4.15.inf");
		truclient_step("4.16", "Click on No", "snapshot=Action_4.16.inf");
		truclient_step("4.17", "Click on District Judge listitem", "snapshot=Action_4.17.inf");
		truclient_step("4.18", "Click on Continue button", "snapshot=Action_4.18.inf");
		truclient_step("4.19", "Type 30 in Minutes textbox", "snapshot=Action_4.19.inf");
		truclient_step("4.20", "Click on No", "snapshot=Action_4.20.inf");
		truclient_step("4.21", "Click on Continue button", "snapshot=Action_4.21.inf");
		truclient_step("4.22", "Click on Continue button", "snapshot=Action_4.22.inf");
		truclient_step("4.23", "Type performance_test in Request a hearing for... textbox", "snapshot=Action_4.23.inf");
		truclient_step("4.24", "Click on Continue button", "snapshot=Action_4.24.inf");
		lr_start_transaction("XUI02_060_HearingRequestSubmitted");
		truclient_step("4.25", "Click on Submit request button", "snapshot=Action_4.25.inf");
		lr_end_transaction("XUI02_060_HearingRequestSubmitted",0);
		lr_start_transaction("XUI02_070_Hearings");
		truclient_step("4.26", "Click on view the status of this... link", "snapshot=Action_4.26.inf");
		lr_end_transaction("XUI02_070_Hearings",0);
		lr_start_transaction("XUI02_080_ViewHearing");
		truclient_step("4.27", "Click on View or edit JavaScript link", "snapshot=Action_4.27.inf");
		lr_end_transaction("XUI02_080_ViewHearing",0);
	}

	return 0;
}
