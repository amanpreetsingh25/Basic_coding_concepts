#include<iostream.h>
#include<conio.h>

	void main()
	{ clrscr();

	  int a,b,ch;

	  cout<<"1.addition\n"<<"2.subtraction\n"<<"3.multiplication\n"<<"4.division\n";
	  cout<<"\nenter your choice :";
	  cin>>ch;
	  cout<<"\nenter any two number\n";
	  cin>>a>>b;

	  switch(ch)
	  { case 1: cout<<"\nanswer: "<<a+b;
	    break;

	    case 2: cout<<"\nanswer: "<<a-b;
	    break;

	    case 3: cout<<"\nanswer: "<<a*b;
	    break;

	    case 4: cout<<"\nanwer: "<<a/b;
	    break;

	    default: cout<<"\ninvalid choice";
	  }

	  getch();
	}

