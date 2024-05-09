//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("XUI03_010_MyWork");
	truclient_step("1", "Navigate to https://manage-case.perf...ork/my-work/list", "snapshot=Action_1.inf");
	lr_end_transaction("XUI03_010_MyWork",0);
	truclient_step("2", "Click on Available tasks link", "snapshot=Action_2.inf");
	truclient_step("3", "If Reset sorting button exists", "snapshot=Action_3.inf");
	{
		truclient_step("3.1", "Click on Reset sorting button", "snapshot=Action_3.1.inf");
	}
	truclient_step("4", "Click on Show work filter button", "snapshot=Action_4.inf");
	truclient_step("5", "Click on Leave blank to return... textbox", "snapshot=Action_5.inf");
	truclient_step("6", "Type swansea civil in Leave blank to return... textbox", "snapshot=Action_6.inf");
	truclient_step("7", "Click on Swansea Civil Justice...", "snapshot=Action_7.inf");
	truclient_step("8", "Click on Add location JavaScript link", "snapshot=Action_8.inf");
	lr_start_transaction("XUI03_020_MyWorkApplyFilter");
	truclient_step("9", "Click on Apply button", "snapshot=Action_9.inf");
	lr_end_transaction("XUI03_020_MyWorkApplyFilter",0);
	truclient_step("10", "Click on Show work filter button", "snapshot=Action_10.inf");
	truclient_step("11", "Click on Swansea Civil Justice... JavaScript link", "snapshot=Action_11.inf");
	lr_start_transaction("XUI03_030_MyWorkApplyFilter");
	truclient_step("12", "Click on Apply button", "snapshot=Action_12.inf");
	lr_end_transaction("XUI03_030_MyWorkApplyFilter",0);
	lr_start_transaction("XUI03_040_SortByDueDate");
	truclient_step("13", "Click on Due date button", "snapshot=Action_13.inf");
	lr_end_transaction("XUI03_040_SortByDueDate",0);
	lr_start_transaction("XUI03_050_SortByDueDate");
	truclient_step("14", "Click on Due date button", "snapshot=Action_14.inf");
	lr_end_transaction("XUI03_050_SortByDueDate",0);
	truclient_step("15", "Click on / Manage button", "snapshot=Action_15.inf");
	lr_start_transaction("XUI03_060_AssignToMe");
	truclient_step("16", "Click on Assign to me", "snapshot=Action_16.inf");
	lr_end_transaction("XUI03_060_AssignToMe",0);
	lr_start_transaction("XUI03_070_MyTasks");
	truclient_step("17", "Click on My tasks link", "snapshot=Action_17.inf");
	lr_end_transaction("XUI03_070_MyTasks",0);
	truclient_step("18", "Click on / Manage button", "snapshot=Action_18.inf");
	lr_start_transaction("XUI03_080_UnassignDialog");
	truclient_step("19", "Click on Unassign task", "snapshot=Action_19.inf");
	lr_end_transaction("XUI03_080_UnassignDialog",0);
	lr_start_transaction("XUI03_090_Unassign");
	truclient_step("20", "Click on Unassign button", "snapshot=Action_20.inf");
	lr_end_transaction("XUI03_090_Unassign",0);

	return 0;
}
