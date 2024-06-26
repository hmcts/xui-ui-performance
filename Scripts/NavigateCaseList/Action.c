//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Call Function Common.SelectCasesApplyFilter", "snapshot=Action_1.inf");
	truclient_step("2", "Call Function Common.SelectRandomCase", "snapshot=Action_2.inf");
	truclient_step("3", "Call Function Common.AddCaseNote", "snapshot=Action_3.inf");
	truclient_step("4", "Call Function Common.AttachDocument", "snapshot=Action_4.inf");
	truclient_step("5", "Call Function Common.SelectCaseDocumentsPDF", "snapshot=Action_5.inf");
	truclient_step("6", "Call Function Common.SelectCaseFileViewPDF", "snapshot=Action_6.inf");
	truclient_step("7", "Call Function Common.SearchCaseReference", "snapshot=Action_7.inf");

	return 0;
}
