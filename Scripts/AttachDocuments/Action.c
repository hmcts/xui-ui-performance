//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Navigate to https://xui-webapp-pr-33...0Correspondence", "snapshot=Action_1.inf");
	truclient_step("2", "Wait 1 seconds", "snapshot=Action_2.inf");
	truclient_step("3", "Call Function Common.AttachScannedDocument", "snapshot=Action_3.inf");

	return 0;
}
