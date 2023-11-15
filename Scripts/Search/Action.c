//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Call Function Common.CasesSelectAllTabs", "snapshot=Action_1.inf");
	truclient_step("2", "Call Function Common.NavigateMyWork", "snapshot=Action_2.inf");
	truclient_step("3", "Call Function Common.SearchCaseReference", "snapshot=Action_3.inf");
	truclient_step("4", "Call Function Common.SelectCasesApplyFilter", "snapshot=Action_4.inf");
	truclient_step("5", "Call Function Common.SelectRandomCase", "snapshot=Action_5.inf");
	truclient_step("6", "Call Function Common.SelectHearings", "snapshot=Action_6.inf");
	truclient_step("7", "Call Function Common.AddCaseNote", "snapshot=Action_7.inf");
	truclient_step("8", "Call Function Common.AttachScannedDocument", "snapshot=Action_8.inf");
	truclient_step("9", "Call Function Common.SelectCaseDocumentsPDF", "snapshot=Action_9.inf");
	truclient_step("10", "Call Function Common.SelectCaseFileViewPDF", "snapshot=Action_10.inf");

	return 0;
}
