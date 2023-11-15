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
	truclient_step("2", "Function AttachScannedDocsDialog", "snapshot=Common_2.inf");
	{
		truclient_step("2.1", "Select Attach scanned docs from Next step listbox", "snapshot=Common_2.1.inf");
		lr_start_transaction("AttachedScanDocsDialog");
		truclient_step("2.2", "Click on Go button", "snapshot=Common_2.2.inf");
		lr_end_transaction("AttachedScanDocsDialog",0);
	}
	truclient_step("3", "Function AttachScannedDocument", "snapshot=Common_3.inf");
	{
		truclient_step("3.1", "Call Function Common.AttachScannedDocsDialog", "snapshot=Common_3.1.inf");
		truclient_step("3.2", "Evaluate JavaScript code // create a string conta...te.getMinutes();", "snapshot=Common_3.2.inf");
		truclient_step("3.3", "Click on Add new button", "snapshot=Common_3.3.inf");
		truclient_step("3.4", "Evaluate JavaScript code // capture the number of...edRecordsCount);", "snapshot=Common_3.4.inf");
		truclient_step("3.5", "Select Other from Document Type listbox", "snapshot=Common_3.5.inf");
		truclient_step("3.6", "Set C:\Git\xui-ui-performanc...nce_Test_1MB.pdf on Original document URL filebox", "snapshot=Common_3.6.inf");
		truclient_step("3.7", "Type 1 in Document Control Number textbox", "snapshot=Common_3.7.inf");
		truclient_step("3.8", "Type 1 in File Name textbox", "snapshot=Common_3.8.inf");
		truclient_step("3.9", "Type 01 in Day textbox", "snapshot=Common_3.9.inf");
		truclient_step("3.10", "Type 01 in Month textbox", "snapshot=Common_3.10.inf");
		truclient_step("3.11", "Type 2021 in Year textbox", "snapshot=Common_3.11.inf");
		truclient_step("3.12", "Type 1 in Exception Record Referenc... textbox", "snapshot=Common_3.12.inf");
		truclient_step("3.13", "Type 1 in Document Subtype textbox", "snapshot=Common_3.13.inf");
		truclient_step("3.14", "Click on Continue button", "snapshot=Common_3.14.inf");
		truclient_step("3.15", "Click on Submit button", "snapshot=Common_3.15.inf");
		truclient_step("3.16", "Click on Submit button", "snapshot=Common_3.16.inf");
		/* Previous code below */
		lr_start_transaction("UploadDocument");
		truclient_step("3.18", "Set C:\Git\xui-ui-performanc...nce_Test_1MB.pdf on Scanned document url... filebox", "snapshot=Common_3.18.inf");
		lr_end_transaction("UploadDocument",0);
		truclient_step("3.19", "Wait 3 seconds", "snapshot=Common_3.19.inf");
		truclient_step("3.20", "Type datetime in File Name (Optional) textbox", "snapshot=Common_3.20.inf");
		truclient_step("3.21", "Click on Continue button", "snapshot=Common_3.21.inf");
		truclient_step("3.22", "Click on Yes", "snapshot=Common_3.22.inf");
		lr_start_transaction("SubmitScannedDocument");
		truclient_step("3.23", "Click on Submit button", "snapshot=Common_3.23.inf");
		lr_end_transaction("SubmitScannedDocument",0);
		truclient_step("3.24", "Click on Case documents tab", "snapshot=Common_3.24.inf");
	}
	truclient_step("4", "Function SignOut", "snapshot=Common_4.inf");
	{
		/* Signs a user out */
		lr_start_transaction("SignOut");
		truclient_step("4.2", "Click on Sign out link", "snapshot=Common_4.2.inf");
		lr_end_transaction("SignOut",0);
	}

	return 0;
}
