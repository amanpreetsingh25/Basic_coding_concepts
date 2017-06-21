#include<iostream.h>
#include<conio.h>

   inline void max(int a,int b)
   { (a,b)? cout<<"\nlargest: "<<a: cout<<"\nlargest: "<<b;
   }

	void main()
	{ clrscr();

	  int a,b;
	  cout<<"\nenter any two number\n";
	  cin>>a>>b;
	  max(a,b);

	  getch();
	}

