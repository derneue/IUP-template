#include <stdio.h>
#include <math.h>
#include <iup.h>

int main(int argc, char **argv)
{
	char x[10];
	Ihandle *dlg, *label;
	
	IupOpen(&argc, &argv);
	
	label = IupLabel("Hello World from IUP GUI Toolkit.");
	dlg = IupDialog(IupVbox(label, NULL));
	IupSetAttribute(dlg, "TITLE", "Hello World 2");
	
	IupShowXY(dlg, IUP_CENTER, IUP_CENTER);
	
	IupMainLoop();
	
	IupClose();
	
	//printf("Hello World!\n");
	//scanf("%s", x);
	
	return 0;
}