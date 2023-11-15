//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Click on My work link", "snapshot=Action_1.inf");
	lr_start_transaction("MyWork");
	truclient_step("2", "Navigate to https://manage-case.perf...ork/my-work/list", "snapshot=Action_2.inf");
	lr_end_transaction("MyWork",0);
	truclient_step("3", "Click on Available tasks link", "snapshot=Action_3.inf");
	truclient_step("4", "If Reset sorting button exists", "snapshot=Action_4.inf");
	{
		truclient_step("4.1", "Click on Reset sorting button", "snapshot=Action_4.1.inf");
	}
	truclient_step("5", "Click on Show work filter button", "snapshot=Action_5.inf");
	truclient_step("6", "Click on Leave blank to return... textbox", "snapshot=Action_6.inf");
	truclient_step("7", "Type swansea civil in Leave blank to return... textbox", "snapshot=Action_7.inf");
	truclient_step("8", "Click on Swansea Civil Justice...", "snapshot=Action_8.inf");
	truclient_step("9", "Click on Add location JavaScript link", "snapshot=Action_9.inf");
	lr_start_transaction("MyWorkApplyFilter_01");
	truclient_step("10", "Click on Apply button", "snapshot=Action_10.inf");
	lr_end_transaction("MyWorkApplyFilter_01",0);
	truclient_step("11", "Click on Show work filter button", "snapshot=Action_11.inf");
	truclient_step("12", "Click on Swansea Civil Justice... JavaScript link", "snapshot=Action_12.inf");
	lr_start_transaction("MyWorkApplyFilter_02");
	truclient_step("13", "Click on Apply button", "snapshot=Action_13.inf");
	lr_end_transaction("MyWorkApplyFilter_02",0);
	lr_start_transaction("SortByDueDate_01");
	truclient_step("14", "Click on Due date button", "snapshot=Action_14.inf");
	lr_end_transaction("SortByDueDate_01",0);
	lr_start_transaction("SortByDueDate_02");
	truclient_step("15", "Click on Due date button", "snapshot=Action_15.inf");
	lr_end_transaction("SortByDueDate_02",0);
	truclient_step("16", "If Due date / 6 November... exists", "snapshot=Action_16.inf");
	{
		truclient_step("16.1", "Click on / Manage button", "snapshot=Action_16.1.inf");
		lr_start_transaction("AssignToMe");
		truclient_step("16.2", "Click on Assign to me", "snapshot=Action_16.2.inf");
		lr_end_transaction("AssignToMe",0);
		lr_start_transaction("MyTasks");
		truclient_step("16.3", "Click on My tasks link", "snapshot=Action_16.3.inf");
		lr_end_transaction("MyTasks",0);
		truclient_step("16.4", "Click on / Manage button", "snapshot=Action_16.4.inf");
		lr_start_transaction("UnassignDialog");
		truclient_step("16.5", "Click on Unassign task", "snapshot=Action_16.5.inf");
		lr_end_transaction("UnassignDialog",0);
		lr_start_transaction("Unassign");
		truclient_step("16.6", "Click on Unassign button", "snapshot=Action_16.6.inf");
		lr_end_transaction("Unassign",0);
	}

	return 0;
}
