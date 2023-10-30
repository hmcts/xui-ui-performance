//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Library_Common()
{
	truclient_step("1", "Function SignIn", "snapshot=Common_1.inf");
	{
		/* Signs a user in */
		lr_start_transaction("SignInPage");
		truclient_step("1.2", "Navigate to 'https://manage-case.per...form.hmcts.net/'", "snapshot=Common_1.2.inf");
		lr_end_transaction("SignInPage",0);
		truclient_step("1.3", "Verify Sign in 's Visible Text contains Sign in", "snapshot=Common_1.3.inf");
		truclient_step("1.4", "Verify Reject additional cookies 's Visible Text contains Reject additional cookies", "snapshot=Common_1.4.inf");
		truclient_step("1.5", "Click on Reject additional cookies button", "snapshot=Common_1.5.inf");
		truclient_step("1.6", "Verify Hide this cookie message 's Visible Text contains Hide this cookie message", "snapshot=Common_1.6.inf");
		truclient_step("1.7", "Click on Hide this cookie message button", "snapshot=Common_1.7.inf");
		truclient_step("1.8", "Click on Email address textbox", "snapshot=Common_1.8.inf");
		truclient_step("1.9", "Type TC.getParam('username') in Email address textbox", "snapshot=Common_1.9.inf");
		truclient_step("1.10", "Click on Password passwordbox", "snapshot=Common_1.10.inf");
		truclient_step("1.11", "Type ********** in Password passwordbox", "snapshot=Common_1.11.inf");
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
		lr_start_transaction("Cases");
		truclient_step("2.1", "Click on Case list link", "snapshot=Common_2.1.inf");
		lr_end_transaction("Cases",0);
		truclient_step("2.2", "Wait until Your cases exists", "snapshot=Common_2.2.inf");
		truclient_step("2.3", "Wait until Filters heading exists", "snapshot=Common_2.3.inf");
		truclient_step("2.4", "Select TC.getParam('state') from State listbox", "snapshot=Common_2.4.inf");
		lr_start_transaction("ApplyFilter");
		truclient_step("2.5", "Click on Apply filter button", "snapshot=Common_2.5.inf");
		lr_end_transaction("ApplyFilter",0);
		truclient_step("2.6", "Verify Your cases 's Visible Text contains Your cases", "snapshot=Common_2.6.inf");
	}
	truclient_step("3", "Function SelectRandomCase", "snapshot=Common_3.inf");
	{
		/* Select a randomCaseIndex based on available case links */
		truclient_step("3.2", "Evaluate JavaScript code //TC.log('Starting custo...andomCaseIndex);", "snapshot=Common_3.2.inf");
		/* Pick a random case link */
		lr_start_transaction("Select Case");
		truclient_step("3.4", "Click on random case in list link", "snapshot=Common_3.4.inf");
		lr_end_transaction("Select Case",0);
	}
	truclient_step("4", "Function ReturnAllTabs", "snapshot=Common_4.inf");
	{
		truclient_step("4.1", "Evaluate JavaScript code // Get ALL the divs that...vascript code');", "snapshot=Common_4.1.inf");
	}
	truclient_step("5", "Function CasesSelectAllTabs", "snapshot=Common_5.inf");
	{
		/* Grab the tab objects and use in a for loop */
		truclient_step("5.2", "Call Function Common.ReturnAllTabs", "snapshot=Common_5.2.inf");
		/* Loop through all the available tabs */
		truclient_step("5.4", "For ( var i = 0 ; i < selectedTabs.length ; i++ )", "snapshot=Common_5.4.inf");
		{
			/* Click the scroll button for every 5th tab selected */
			truclient_step("5.4.2", "If ( i > 0 &&amp; i % 5 == 0 )", "snapshot=Common_5.4.2.inf");
			{
				truclient_step("5.4.2.1", "Click on scroll right arrow", "snapshot=Common_5.4.2.1.inf");
			}
			/* This needs to be improved as the 'end event' is not accurately capturing the load time. Will look to see if all tabs/names can be captured and used as an object/text check */
			lr_start_transaction("SelectedTab");
			truclient_step("5.4.4", "Click on selectedTabs tab", "snapshot=Common_5.4.4.inf");
			lr_end_transaction("SelectedTab",0);
			truclient_step("5.4.5", "Wait 500 milliseconds", "snapshot=Common_5.4.5.inf");
		}
	}
	truclient_step("6", "Function ReturnVisibleTabs", "snapshot=Common_6.inf");
	{
		/* This function returns boolean variables for certain tabs that might require further action */
		truclient_step("6.2", "Evaluate JavaScript code // Get ALL the divs that...vascript code');", "snapshot=Common_6.2.inf");
	}
	truclient_step("7", "Function AddCaseNote", "snapshot=Common_7.inf");
	{
		truclient_step("7.1", "Evaluate JavaScript code // create a string conta...te.getMinutes();", "snapshot=Common_7.1.inf");
		truclient_step("7.2", "Select Add a case note from Next step listbox", "snapshot=Common_7.2.inf");
		lr_start_transaction("AddCaseNoteDialog");
		truclient_step("7.3", "Click on Go button", "snapshot=Common_7.3.inf");
		lr_end_transaction("AddCaseNoteDialog",0);
		truclient_step("7.4", "Click on Subject textbox", "snapshot=Common_7.4.inf");
		truclient_step("7.5", "Type performanceTestSubject in Subject textbox", "snapshot=Common_7.5.inf");
		truclient_step("7.6", "Type performanceTestNote in case noteAdd note detail,... textbox", "snapshot=Common_7.6.inf");
		truclient_step("7.7", "Click on Continue button", "snapshot=Common_7.7.inf");
		lr_start_transaction("AddCaseNote");
		truclient_step("7.8", "Click on Save and continue button", "snapshot=Common_7.8.inf");
		lr_end_transaction("AddCaseNote",0);
		lr_start_transaction("CaseNotes");
		truclient_step("7.9", "Click on Case Notes tab", "snapshot=Common_7.9.inf");
		lr_end_transaction("CaseNotes",0);
	}
	truclient_step("8", "Function AttachScannedDocsDialog", "snapshot=Common_8.inf");
	{
		truclient_step("8.1", "Select Attach scanned docs from Next step listbox", "snapshot=Common_8.1.inf");
		lr_start_transaction("AttachedScanDocsDialog");
		truclient_step("8.2", "Click on Go button", "snapshot=Common_8.2.inf");
		lr_end_transaction("AttachedScanDocsDialog",0);
	}
	truclient_step("9", "Function AttachScannedDocument", "snapshot=Common_9.inf");
	{
		truclient_step("9.1", "Call Function Common.AttachScannedDocsDialog", "snapshot=Common_9.1.inf");
		truclient_step("9.2", "Evaluate JavaScript code // create a string conta...te.getMinutes();", "snapshot=Common_9.2.inf");
		/* If a scanned document already exists, add a new attachment to the bottom */
		truclient_step("9.4", "If Scanned document url... label exists", "snapshot=Common_9.4.inf");
		{
			truclient_step("9.4.1", "Click on Add new button", "snapshot=Common_9.4.1.inf");
			truclient_step("9.4.2", "Evaluate JavaScript code // capture the number of...) || []).length;", "snapshot=Common_9.4.2.inf");
			lr_start_transaction("UploadDocument");
			truclient_step("9.4.3", "Set C:\Git\xui-ui-performanc...nce_Test_1MB.pdf on Scanned document url... filebox", "snapshot=Common_9.4.3.inf");
			lr_end_transaction("UploadDocument",0);
			truclient_step("9.4.4", "Wait 3 seconds", "snapshot=Common_9.4.4.inf");
			truclient_step("9.4.5", "Type datetime in File Name (Optional) textbox", "snapshot=Common_9.4.5.inf");
			truclient_step("9.4.6", "Click on Continue button", "snapshot=Common_9.4.6.inf");
			/* Else create a first attachment */
			truclient_step("9.4.2", "Click on Add new button", "snapshot=Common_9.4.2.inf");
			truclient_step("9.4.3", "Set C:\Git\xui-ui-performanc...nce_Test_1MB.pdf on Scanned document url... filebox", "snapshot=Common_9.4.3.inf");
			truclient_step("9.4.4", "Type datetime in File Name (Optional) textbox", "snapshot=Common_9.4.4.inf");
			truclient_step("9.4.5", "Click on Continue button", "snapshot=Common_9.4.5.inf");
		}
		/* Finish up the shared steps */
		truclient_step("9.6", "Click on Yes", "snapshot=Common_9.6.inf");
		lr_start_transaction("SubmitScannedDocument");
		truclient_step("9.7", "Click on Submit button", "snapshot=Common_9.7.inf");
		lr_end_transaction("SubmitScannedDocument",0);
		truclient_step("9.8", "Click on Case documents tab", "snapshot=Common_9.8.inf");
	}
	truclient_step("10", "Function SelectHearings", "snapshot=Common_10.inf");
	{
		truclient_step("10.1", "Call Function Common.ReturnVisibleTabs", "snapshot=Common_10.1.inf");
		truclient_step("10.2", "If ( isHearingsVisible == true )", "snapshot=Common_10.2.inf");
		{
			truclient_step("10.2.1", "Click on scroll right arrow", "snapshot=Common_10.2.1.inf");
			truclient_step("10.2.2", "Wait 500 milliseconds", "snapshot=Common_10.2.2.inf");
			lr_start_transaction("HearingsTab");
			truclient_step("10.2.3", "Click on Hearings tab", "snapshot=Common_10.2.3.inf");
			lr_end_transaction("HearingsTab",0);
		}
	}
	truclient_step("11", "Function SelectCaseDocumentsPDF", "snapshot=Common_11.inf");
	{
		truclient_step("11.1", "Call Function Common.ReturnVisibleTabs", "snapshot=Common_11.1.inf");
		truclient_step("11.2", "If ( isCaseDocumentsVisible == true )", "snapshot=Common_11.2.inf");
		{
			lr_start_transaction("CaseDocumentsTab");
			truclient_step("11.2.1", "Click on Case documents tab", "snapshot=Common_11.2.1.inf");
			lr_end_transaction("CaseDocumentsTab",0);
			truclient_step("11.2.2", "Wait 3 seconds", "snapshot=Common_11.2.2.inf");
			truclient_step("11.2.3", "Wait until any pdf JavaScript link exists", "snapshot=Common_11.2.3.inf");
			/* Pick the first "*pdf" link */
			lr_start_transaction("CaseDocumentsMediaViewer");
			truclient_step("11.2.5", "Click on Select first pdf JavaScript link", "snapshot=Common_11.2.5.inf");
			lr_end_transaction("CaseDocumentsMediaViewer",0);
			/* Close MediaViewer tab and select main tab */
			truclient_step("11.2.7", "Activate tab # 2", "snapshot=Common_11.2.7.inf");
			truclient_step("11.2.8", "Wait 1 seconds", "snapshot=Common_11.2.8.inf");
			truclient_step("11.2.9", "Close Tab active tab", "snapshot=Common_11.2.9.inf");
			truclient_step("11.2.10", "Wait 1 seconds", "snapshot=Common_11.2.10.inf");
			truclient_step("11.2.11", "Activate tab # 1", "snapshot=Common_11.2.11.inf");
		}
	}
	truclient_step("12", "Function SelectCaseFileViewPDF", "snapshot=Common_12.inf");
	{
		/* Currently this only works 'properly' if it follows an AttachScannedDocument step */
		truclient_step("12.2", "Call Function Common.ReturnVisibleTabs", "snapshot=Common_12.2.inf");
		truclient_step("12.3", "If ( isCaseFileViewVisible == true )", "snapshot=Common_12.3.inf");
		{
			/* Click on right arrow twice to bring tab into focus */
			truclient_step("12.3.2", "Wait 1 seconds", "snapshot=Common_12.3.2.inf");
			truclient_step("12.3.3", "Click on right arrow", "snapshot=Common_12.3.3.inf");
			/* Currently checks the tab exists and loads it. Need to build it out more to find a PDF and load it. */
			lr_start_transaction("CaseFileViewTab");
			truclient_step("12.3.5", "Click on Case File View tab", "snapshot=Common_12.3.5.inf");
			lr_end_transaction("CaseFileViewTab",0);
		}
		truclient_step("12.4", "Click on Other Documents columnheader", "snapshot=Common_12.4.inf");
		truclient_step("12.5", "Click on Any Other Documents columnheader", "snapshot=Common_12.5.inf");
		lr_start_transaction("CaseFileViewMediaViewer");
		truclient_step("12.6", "Click on Performance_Test_1MB.pdf columnheader", "snapshot=Common_12.6.inf");
		lr_end_transaction("CaseFileViewMediaViewer",0);
	}
	truclient_step("13", "Function SignOut", "snapshot=Common_13.inf");
	{
		/* Signs a user out */
		lr_start_transaction("SignOut");
		truclient_step("13.2", "Click on Sign out link", "snapshot=Common_13.2.inf");
		lr_end_transaction("SignOut",0);
	}

	return 0;
}
