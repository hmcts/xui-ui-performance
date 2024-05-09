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
	truclient_step("8", "Call Function Common.AttachDocument", "snapshot=Action_8.inf");
	/* TEMP STEP TO FORCE DEBUG */
	truclient_step("10", "Navigate to https://manage-case.perf...1711566754772190", "snapshot=Action_10.inf");
	truclient_step("11", "Call Function Common.SelectCaseDocumentsPDF", "snapshot=Action_11.inf");
	truclient_step("12", "Call Function Common.SelectCaseFileViewPDF", "snapshot=Action_12.inf");

	return 0;
}
