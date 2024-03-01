//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Library_Common()
{
	truclient_step("1", "Function SignIn", "snapshot=Common_1.inf");
	{
		/* Signs a user in */
		lr_start_transaction("SignInPage");
		truclient_step("1.2", "Navigate to TC.getParam('hostname')", "snapshot=Common_1.2.inf");
		lr_end_transaction("SignInPage",0);
		truclient_step("1.3", "Verify Sign in 's Visible Text contains Sign in", "snapshot=Common_1.3.inf");
		truclient_step("1.4", "Verify Reject additional cookies 's Visible Text contains Reject additional cookies", "snapshot=Common_1.4.inf");
		truclient_step("1.5", "Click on Reject additional cookies button", "snapshot=Common_1.5.inf");
		truclient_step("1.6", "Verify Hide this cookie message 's Visible Text contains Hide this cookie message", "snapshot=Common_1.6.inf");
		truclient_step("1.7", "Click on Hide this cookie message button", "snapshot=Common_1.7.inf");
		truclient_step("1.8", "Click on Email address textbox", "snapshot=Common_1.8.inf");
		truclient_step("1.9", "Type TC.getParam('username') in Email address textbox", "snapshot=Common_1.9.inf");
		truclient_step("1.10", "Click on Password passwordbox", "snapshot=Common_1.10.inf");
		truclient_step("1.11", "Type ****************... in Password passwordbox", "snapshot=Common_1.11.inf");
		lr_start_transaction("SignIn");
		truclient_step("1.12", "Click on Sign in button", "snapshot=Common_1.12.inf");
		lr_end_transaction("SignIn",0);
		truclient_step("1.13", "Verify Reject analytics cookies 's Visible Text contains Reject analytics cookies", "snapshot=Common_1.13.inf");
		truclient_step("1.14", "Wait until Reject analytics cookies button exists", "snapshot=Common_1.14.inf");
		truclient_step("1.15", "Click on Reject analytics cookies button", "snapshot=Common_1.15.inf");
		truclient_step("1.16", "Verify Case list 's Visible Text contains Case list", "snapshot=Common_1.16.inf");
		/* Adding a temporary delay here to account for the time it takes to show the "Sorry, there is a problem with the service" message. */
		truclient_step("1.18", "Wait 6 seconds", "snapshot=Common_1.18.inf");
	}
	truclient_step("2", "Function SelectCasesApplyFilter", "snapshot=Common_2.inf");
	{
		truclient_step("2.1", "Click on Case list link", "snapshot=Common_2.1.inf");
		lr_start_transaction("XUI02_010_Cases");
		truclient_step("2.2", "Navigate to https://manage-case.perf....hmcts.net/cases", "snapshot=Common_2.2.inf");
		lr_end_transaction("XUI02_010_Cases",0);
		truclient_step("2.3", "Wait until Your cases exists", "snapshot=Common_2.3.inf");
		truclient_step("2.4", "Wait until Filters heading exists", "snapshot=Common_2.4.inf");
		truclient_step("2.5", "Select TC.getParam('state') from State listbox", "snapshot=Common_2.5.inf");
		truclient_step("2.6", "Click on FL401 Non Molestation... radiogroup", "snapshot=Common_2.6.inf");
		lr_start_transaction("XUI02_020_ApplyFilter");
		truclient_step("2.7", "Click on Apply filter button", "snapshot=Common_2.7.inf");
		lr_end_transaction("XUI02_020_ApplyFilter",0);
		truclient_step("2.8", "Verify Your cases 's Visible Text contains Your cases", "snapshot=Common_2.8.inf");
	}
	truclient_step("3", "Function SelectRandomCase", "snapshot=Common_3.inf");
	{
		/* Select a randomCaseIndex based on available case links */
		truclient_step("3.2", "Evaluate JavaScript code // Get all elements with...' + randomLink);", "snapshot=Common_3.2.inf");
		/* Pick a random case link */
		/* Temporarily hardcoding specific cases that can be used to create a hearing request */
		lr_start_transaction("XUI02_030_SelectCase");
		truclient_step("3.5", "Navigate to TC.getParam('case')", "snapshot=Common_3.5.inf");
		lr_end_transaction("XUI02_030_SelectCase",0);
		truclient_step("3.6", "Navigate to randomLink", "snapshot=Common_3.6.inf");
	}
	truclient_step("4", "Function SelectHearings", "snapshot=Common_4.inf");
	{
		truclient_step("4.1", "Click on scroll right arrow", "snapshot=Common_4.1.inf");
		truclient_step("4.2", "Click on scroll right arrow", "snapshot=Common_4.2.inf");
		truclient_step("4.3", "Wait 500 milliseconds", "snapshot=Common_4.3.inf");
		lr_start_transaction("XUI02_040_HearingsTab");
		truclient_step("4.4", "Click on Hearings tab", "snapshot=Common_4.4.inf");
		lr_end_transaction("XUI02_040_HearingsTab",0);
	}
	truclient_step("5", "Function SignOut", "snapshot=Common_5.inf");
	{
		/* Signs a user out */
		lr_start_transaction("SignOut");
		truclient_step("5.2", "Click on Sign out link", "snapshot=Common_5.2.inf");
		lr_end_transaction("SignOut",0);
	}

	return 0;
}
