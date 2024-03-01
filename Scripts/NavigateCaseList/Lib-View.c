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
		lr_start_transaction("XUI04_010_Cases");
		truclient_step("2.2", "Navigate to https://manage-case.perf....hmcts.net/cases", "snapshot=Common_2.2.inf");
		lr_end_transaction("XUI04_010_Cases",0);
		truclient_step("2.3", "Wait until Your cases exists", "snapshot=Common_2.3.inf");
		truclient_step("2.4", "Wait until Filters heading exists", "snapshot=Common_2.4.inf");
		truclient_step("2.5", "Select TC.getParam('state') from State listbox", "snapshot=Common_2.5.inf");
		lr_start_transaction("XUI04_020_ApplyFilter");
		truclient_step("2.6", "Click on Apply filter button", "snapshot=Common_2.6.inf");
		lr_end_transaction("XUI04_020_ApplyFilter",0);
		truclient_step("2.7", "Verify Your cases 's Visible Text contains Your cases", "snapshot=Common_2.7.inf");
	}
	truclient_step("3", "Function SelectRandomCase", "snapshot=Common_3.inf");
	{
		/* Select a randomCaseIndex based on available case links */
		truclient_step("3.2", "Evaluate JavaScript code // Get all elements with...' + randomLink);", "snapshot=Common_3.2.inf");
		/* Pick a random case link */
		lr_start_transaction("XUI04_030_SelectCase");
		truclient_step("3.4", "Navigate to randomLink", "snapshot=Common_3.4.inf");
		lr_end_transaction("XUI04_030_SelectCase",0);
	}
	truclient_step("4", "Function AddCaseNote", "snapshot=Common_4.inf");
	{
		truclient_step("4.1", "Evaluate JavaScript code // create a string conta...te.getMinutes();", "snapshot=Common_4.1.inf");
		truclient_step("4.2", "Select Add a case note from Next step listbox", "snapshot=Common_4.2.inf");
		lr_start_transaction("XUI04_040_AddCaseNoteDialog");
		truclient_step("4.3", "Click on Go button", "snapshot=Common_4.3.inf");
		lr_end_transaction("XUI04_040_AddCaseNoteDialog",0);
		truclient_step("4.4", "Click on Subject textbox", "snapshot=Common_4.4.inf");
		truclient_step("4.5", "Type performanceTestSubject in Subject textbox", "snapshot=Common_4.5.inf");
		truclient_step("4.6", "Type performanceTestNote in case noteAdd note detail,... textbox", "snapshot=Common_4.6.inf");
		truclient_step("4.7", "Click on Continue button", "snapshot=Common_4.7.inf");
		lr_start_transaction("XUI04_050_AddCaseNote");
		truclient_step("4.8", "Click on Save and continue button", "snapshot=Common_4.8.inf");
		lr_end_transaction("XUI04_050_AddCaseNote",0);
		truclient_step("4.9", "Click on right arrow", "snapshot=Common_4.9.inf");
		lr_start_transaction("XUI04_060_CaseNotes");
		truclient_step("4.10", "Click on Case Notes tab", "snapshot=Common_4.10.inf");
		lr_end_transaction("XUI04_060_CaseNotes",0);
	}
	truclient_step("5", "Function AttachScannedDocsDialog", "snapshot=Common_5.inf");
	{
		truclient_step("5.1", "Select Attach scanned docs from Next step listbox", "snapshot=Common_5.1.inf");
		lr_start_transaction("XUI04_070_AttachedScanDocsDialog");
		truclient_step("5.2", "Click on Go button", "snapshot=Common_5.2.inf");
		lr_end_transaction("XUI04_070_AttachedScanDocsDialog",0);
	}
	truclient_step("6", "Function AttachScannedDocument", "snapshot=Common_6.inf");
	{
		truclient_step("6.1", "Call Function Common.AttachScannedDocsDialog", "snapshot=Common_6.1.inf");
		truclient_step("6.2", "Evaluate JavaScript code // create a string conta...te.getMinutes();", "snapshot=Common_6.2.inf");
		/* If a scanned document already exists, add a new attachment to the bottom */
		truclient_step("6.4", "If Scanned document url... label exists", "snapshot=Common_6.4.inf");
		{
			truclient_step("6.4.1", "Click on Add new button", "snapshot=Common_6.4.1.inf");
			truclient_step("6.4.2", "Evaluate JavaScript code // capture the number of...) || []).length;", "snapshot=Common_6.4.2.inf");
			lr_start_transaction("XUI04_080_UploadDocument");
			truclient_step("6.4.3", "Set C:\Git\xui-ui-performanc...nce_Test_1MB.pdf on Scanned document url... filebox", "snapshot=Common_6.4.3.inf");
			lr_end_transaction("XUI04_080_UploadDocument",0);
			truclient_step("6.4.4", "Wait 3 seconds", "snapshot=Common_6.4.4.inf");
			truclient_step("6.4.5", "Type datetime in File Name (Optional) textbox", "snapshot=Common_6.4.5.inf");
			truclient_step("6.4.6", "Click on Continue button", "snapshot=Common_6.4.6.inf");
			/* Else create a first attachment */
			truclient_step("6.4.2", "Click on Add new button", "snapshot=Common_6.4.2.inf");
			truclient_step("6.4.3", "Set C:\Git\xui-ui-performanc...nce_Test_1MB.pdf on Scanned document url... filebox", "snapshot=Common_6.4.3.inf");
			truclient_step("6.4.4", "Type datetime in File Name (Optional) textbox", "snapshot=Common_6.4.4.inf");
			truclient_step("6.4.5", "Click on Continue button", "snapshot=Common_6.4.5.inf");
		}
		/* Finish up the shared steps */
		truclient_step("6.6", "Click on Yes", "snapshot=Common_6.6.inf");
		lr_start_transaction("XUI04_090_SubmitScannedDocument");
		truclient_step("6.7", "Click on Submit button", "snapshot=Common_6.7.inf");
		lr_end_transaction("XUI04_090_SubmitScannedDocument",0);
		truclient_step("6.8", "Click on Case documents tab", "snapshot=Common_6.8.inf");
		truclient_step("6.9", "Click on Documents to be reviewed tab", "snapshot=Common_6.9.inf");
	}
	truclient_step("7", "Function SelectCaseDocumentsPDF", "snapshot=Common_7.inf");
	{
		truclient_step("7.1", "Click on Case documents tab", "snapshot=Common_7.1.inf");
		lr_start_transaction("XUI04_100_DocumentsReviewTab");
		truclient_step("7.2", "Click on Documents to be reviewed tab", "snapshot=Common_7.2.inf");
		lr_end_transaction("XUI04_100_DocumentsReviewTab",0);
		truclient_step("7.3", "Wait 3 seconds", "snapshot=Common_7.3.inf");
		truclient_step("7.4", "Wait until any pdf JavaScript link exists", "snapshot=Common_7.4.inf");
		/* Pick the first "*pdf" link */
		lr_start_transaction("XUI04_110_CaseDocumentsMediaViewer");
		truclient_step("7.6", "Click on Select first pdf JavaScript link", "snapshot=Common_7.6.inf");
		lr_end_transaction("XUI04_110_CaseDocumentsMediaViewer",0);
		/* Close MediaViewer tab and select main tab */
		truclient_step("7.8", "Activate tab # 2", "snapshot=Common_7.8.inf");
		truclient_step("7.9", "Wait 1 seconds", "snapshot=Common_7.9.inf");
		truclient_step("7.10", "Close Tab active tab", "snapshot=Common_7.10.inf");
		truclient_step("7.11", "Wait 1 seconds", "snapshot=Common_7.11.inf");
		truclient_step("7.12", "Activate tab # 1", "snapshot=Common_7.12.inf");
	}
	truclient_step("8", "Function SelectCaseFileViewPDF", "snapshot=Common_8.inf");
	{
		/* Currently this only works 'properly' if it follows an AttachScannedDocument step */
		truclient_step("8.2", "Click on right arrow", "snapshot=Common_8.2.inf");
		truclient_step("8.3", "Click on right arrow", "snapshot=Common_8.3.inf");
		lr_start_transaction("XUI04_120_CaseFileViewTab");
		truclient_step("8.4", "Click on Case File View tab", "snapshot=Common_8.4.inf");
		lr_end_transaction("XUI04_120_CaseFileViewTab",0);
		truclient_step("8.5", "Click on Documents to be reviewed columnheader", "snapshot=Common_8.5.inf");
		truclient_step("8.6", "Click on Bulk scan uploaded columnheader", "snapshot=Common_8.6.inf");
		lr_start_transaction("XUI04_130_CaseFileViewMediaViewer");
		truclient_step("8.7", "Click on Performance_Test_1MB.pdf columnheader", "snapshot=Common_8.7.inf");
		lr_end_transaction("XUI04_130_CaseFileViewMediaViewer",0);
	}
	truclient_step("9", "Function SearchCaseReference", "snapshot=Common_9.inf");
	{
		lr_start_transaction("XUI04_140_SearchDialog");
		truclient_step("9.1", "Click on Search link", "snapshot=Common_9.1.inf");
		lr_end_transaction("XUI04_140_SearchDialog",0);
		truclient_step("9.2", "Type TC.getParam('caseReference') in 16 digit case reference textbox", "snapshot=Common_9.2.inf");
		lr_start_transaction("XUI04_150_SearchCaseReference");
		truclient_step("9.3", "Click on Search button", "snapshot=Common_9.3.inf");
		lr_end_transaction("XUI04_150_SearchCaseReference",0);
	}
	truclient_step("10", "Function SignOut", "snapshot=Common_10.inf");
	{
		/* Signs a user out */
		lr_start_transaction("SignOut");
		truclient_step("10.2", "Click on Sign out link", "snapshot=Common_10.2.inf");
		lr_end_transaction("SignOut",0);
	}

	return 0;
}
