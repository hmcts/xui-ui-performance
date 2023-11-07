//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

vuser_init()
{
	/* Resize to improve object recognition */
	truclient_step("2", "Resize browser window to 1500 px / 1050 px", "snapshot=Init_2.inf");
	truclient_step("3", "Call Function Common.SignIn", "snapshot=Init_3.inf");
	truclient_step("4", "Navigate to https://xui-webapp-pr-33...20Correspondence", "snapshot=Init_4.inf");

	return 0;
}
