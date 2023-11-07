//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Call Function Common.AttachScannedDocument", "snapshot=Action_1.inf");
	truclient_step("2", "Call Function Common.SelectCaseDocumentsPDF", "snapshot=Action_2.inf");
	truclient_step("3", "Call Function Common.SelectCaseFileViewPDF", "snapshot=Action_3.inf");
	truclient_step("4", "Call Function Common.AttachScannedDocument", "snapshot=Action_4.inf");
	truclient_step("5", "Recording of 4th document", "snapshot=Action_5.inf");
	{
		truclient_step("5.1", "Click on Add new button", "snapshot=Action_5.1.inf");
		truclient_step("5.3", "Select Other from Document Type listbox", "snapshot=Action_5.3.inf");
		truclient_step("5.4", "Set C:\Git\xui-ui-performanc...nce_Test_1MB.pdf on Original document URL filebox", "snapshot=Action_5.4.inf");
		truclient_step("5.5", "Type 1 in Document Control Number textbox", "snapshot=Action_5.5.inf");
		truclient_step("5.6", "Type 1 in File Name textbox", "snapshot=Action_5.6.inf");
		truclient_step("5.7", "Type 01 in Day textbox", "snapshot=Action_5.7.inf");
		truclient_step("5.8", "Type 01 in Month textbox", "snapshot=Action_5.8.inf");
		truclient_step("5.9", "Type 2021 in Year textbox", "snapshot=Action_5.9.inf");
		truclient_step("5.10", "Type 1 in Exception Record Referenc... textbox", "snapshot=Action_5.10.inf");
		truclient_step("5.11", "Type 1 in Document Subtype textbox", "snapshot=Action_5.11.inf");
		truclient_step("5.12", "Click on Continue button", "snapshot=Action_5.12.inf");
	}

	return 0;
}
