#include<iostream.h>
#include<conio.h>

	void main()
	{ clrscr();

	  int a,b,ch;

	  cout<<"1.addition\n"<<"2.subtraction\n"<<"3.multiplication\n"<<"4.division\n";
	  cout<<"\nenter your choide :";
	  cin>>ch;
	  cout<<"\nenter any two number\n";
	  cin>>a>>b;

	  if(ch==1) cout<<"\nanswer: "<<a+b;
	  else if(ch==2)  cout<<"\nanswer: "<<a-b;
	  else if(ch==3)  cout<<"\nanswer: "<<a*b;
	  else if(ch==4)  cout<<"\nanswer: "<<a/b;
	  else cout<<"\ninvalid choice\n";


	  getch();
	}

